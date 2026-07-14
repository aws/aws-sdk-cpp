/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/dms/DatabaseMigrationServiceClient.h>
#include <aws/dms/model/DescribeConnectionsRequest.h>
#include <aws/dms/model/DescribeConnectionsResult.h>
#include <aws/dms/model/DescribeEndpointsRequest.h>
#include <aws/dms/model/DescribeEndpointsResult.h>
#include <aws/dms/model/DescribeExtensionPackAssociationsRequest.h>
#include <aws/dms/model/DescribeExtensionPackAssociationsResult.h>
#include <aws/dms/model/DescribeMetadataModelAssessmentsRequest.h>
#include <aws/dms/model/DescribeMetadataModelAssessmentsResult.h>
#include <aws/dms/model/DescribeMetadataModelConversionsRequest.h>
#include <aws/dms/model/DescribeMetadataModelConversionsResult.h>
#include <aws/dms/model/DescribeMetadataModelCreationsRequest.h>
#include <aws/dms/model/DescribeMetadataModelCreationsResult.h>
#include <aws/dms/model/DescribeMetadataModelExportsAsScriptRequest.h>
#include <aws/dms/model/DescribeMetadataModelExportsAsScriptResult.h>
#include <aws/dms/model/DescribeMetadataModelExportsToTargetRequest.h>
#include <aws/dms/model/DescribeMetadataModelExportsToTargetResult.h>
#include <aws/dms/model/DescribeMetadataModelImportsRequest.h>
#include <aws/dms/model/DescribeMetadataModelImportsResult.h>
#include <aws/dms/model/DescribeReplicationInstancesRequest.h>
#include <aws/dms/model/DescribeReplicationInstancesResult.h>
#include <aws/dms/model/DescribeReplicationTasksRequest.h>
#include <aws/dms/model/DescribeReplicationTasksResult.h>

#include <algorithm>

namespace Aws {
namespace DatabaseMigrationService {

template <typename DerivedClient = DatabaseMigrationServiceClient>
class DatabaseMigrationServiceWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeConnectionsOutcome> WaitUntilTestConnectionSucceeds(
      const Model::DescribeConnectionsRequest& request) {
    using OutcomeT = Model::DescribeConnectionsOutcome;
    using RequestT = Model::DescribeConnectionsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TestConnectionSucceedsWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("successful"),
        [](const Model::DescribeConnectionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetConnections().begin(), result.GetConnections().end(),
                             [&](const Model::Connection& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TestConnectionSucceedsWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeConnectionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetConnections().begin(), result.GetConnections().end(),
                             [&](const Model::Connection& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeConnections(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilTestConnectionSucceeds");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeEndpointsOutcome> WaitUntilEndpointDeleted(const Model::DescribeEndpointsRequest& request) {
    using OutcomeT = Model::DescribeEndpointsOutcome;
    using RequestT = Model::DescribeEndpointsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("EndpointDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundFault")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EndpointDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("active"),
        [](const Model::DescribeEndpointsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetEndpoints().begin(), result.GetEndpoints().end(),
                             [&](const Model::Endpoint& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EndpointDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("creating"),
        [](const Model::DescribeEndpointsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetEndpoints().begin(), result.GetEndpoints().end(),
                             [&](const Model::Endpoint& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeEndpoints(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilEndpointDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeExtensionPackAssociationsOutcome> WaitUntilExtensionPackAssociated(
      const Model::DescribeExtensionPackAssociationsRequest& request) {
    using OutcomeT = Model::DescribeExtensionPackAssociationsOutcome;
    using RequestT = Model::DescribeExtensionPackAssociationsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ExtensionPackAssociatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCESS"),
        [](const Model::DescribeExtensionPackAssociationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetRequests().begin(), result.GetRequests().end(),
                             [&](const Model::SchemaConversionRequest& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ExtensionPackAssociatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeExtensionPackAssociationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetRequests().begin(), result.GetRequests().end(),
                             [&](const Model::SchemaConversionRequest& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeExtensionPackAssociations(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilExtensionPackAssociated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeMetadataModelAssessmentsOutcome> WaitUntilMetadataModelAssessed(
      const Model::DescribeMetadataModelAssessmentsRequest& request) {
    using OutcomeT = Model::DescribeMetadataModelAssessmentsOutcome;
    using RequestT = Model::DescribeMetadataModelAssessmentsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MetadataModelAssessedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCESS"),
        [](const Model::DescribeMetadataModelAssessmentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetRequests().begin(), result.GetRequests().end(),
                             [&](const Model::SchemaConversionRequest& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MetadataModelAssessedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeMetadataModelAssessmentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetRequests().begin(), result.GetRequests().end(),
                             [&](const Model::SchemaConversionRequest& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeMetadataModelAssessments(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilMetadataModelAssessed");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeMetadataModelConversionsOutcome> WaitUntilMetadataModelConversionCancelled(
      const Model::DescribeMetadataModelConversionsRequest& request) {
    using OutcomeT = Model::DescribeMetadataModelConversionsOutcome;
    using RequestT = Model::DescribeMetadataModelConversionsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MetadataModelConversionCancelledWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CANCELED"),
        [](const Model::DescribeMetadataModelConversionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetRequests().begin(), result.GetRequests().end(),
                             [&](const Model::SchemaConversionRequest& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MetadataModelConversionCancelledWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeMetadataModelConversionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetRequests().begin(), result.GetRequests().end(),
                             [&](const Model::SchemaConversionRequest& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeMetadataModelConversions(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilMetadataModelConversionCancelled");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeMetadataModelConversionsOutcome> WaitUntilMetadataModelConverted(
      const Model::DescribeMetadataModelConversionsRequest& request) {
    using OutcomeT = Model::DescribeMetadataModelConversionsOutcome;
    using RequestT = Model::DescribeMetadataModelConversionsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MetadataModelConvertedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCESS"),
        [](const Model::DescribeMetadataModelConversionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetRequests().begin(), result.GetRequests().end(),
                             [&](const Model::SchemaConversionRequest& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MetadataModelConvertedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeMetadataModelConversionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetRequests().begin(), result.GetRequests().end(),
                             [&](const Model::SchemaConversionRequest& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeMetadataModelConversions(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilMetadataModelConverted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeMetadataModelCreationsOutcome> WaitUntilMetadataModelCreated(
      const Model::DescribeMetadataModelCreationsRequest& request) {
    using OutcomeT = Model::DescribeMetadataModelCreationsOutcome;
    using RequestT = Model::DescribeMetadataModelCreationsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MetadataModelCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCESS"),
        [](const Model::DescribeMetadataModelCreationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetRequests().begin(), result.GetRequests().end(),
                             [&](const Model::SchemaConversionRequest& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MetadataModelCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeMetadataModelCreationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetRequests().begin(), result.GetRequests().end(),
                             [&](const Model::SchemaConversionRequest& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeMetadataModelCreations(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilMetadataModelCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeMetadataModelCreationsOutcome> WaitUntilMetadataModelCreationCancelled(
      const Model::DescribeMetadataModelCreationsRequest& request) {
    using OutcomeT = Model::DescribeMetadataModelCreationsOutcome;
    using RequestT = Model::DescribeMetadataModelCreationsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MetadataModelCreationCancelledWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CANCELED"),
        [](const Model::DescribeMetadataModelCreationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetRequests().begin(), result.GetRequests().end(),
                             [&](const Model::SchemaConversionRequest& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MetadataModelCreationCancelledWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeMetadataModelCreationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetRequests().begin(), result.GetRequests().end(),
                             [&](const Model::SchemaConversionRequest& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeMetadataModelCreations(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilMetadataModelCreationCancelled");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeMetadataModelExportsAsScriptOutcome> WaitUntilMetadataModelExportedAsScript(
      const Model::DescribeMetadataModelExportsAsScriptRequest& request) {
    using OutcomeT = Model::DescribeMetadataModelExportsAsScriptOutcome;
    using RequestT = Model::DescribeMetadataModelExportsAsScriptRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MetadataModelExportedAsScriptWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCESS"),
        [](const Model::DescribeMetadataModelExportsAsScriptOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetRequests().begin(), result.GetRequests().end(),
                             [&](const Model::SchemaConversionRequest& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MetadataModelExportedAsScriptWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeMetadataModelExportsAsScriptOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetRequests().begin(), result.GetRequests().end(),
                             [&](const Model::SchemaConversionRequest& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeMetadataModelExportsAsScript(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(20, 6, std::move(acceptors), operation, "WaitUntilMetadataModelExportedAsScript");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeMetadataModelExportsToTargetOutcome> WaitUntilMetadataModelExportedToTarget(
      const Model::DescribeMetadataModelExportsToTargetRequest& request) {
    using OutcomeT = Model::DescribeMetadataModelExportsToTargetOutcome;
    using RequestT = Model::DescribeMetadataModelExportsToTargetRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MetadataModelExportedToTargetWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCESS"),
        [](const Model::DescribeMetadataModelExportsToTargetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetRequests().begin(), result.GetRequests().end(),
                             [&](const Model::SchemaConversionRequest& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MetadataModelExportedToTargetWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeMetadataModelExportsToTargetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetRequests().begin(), result.GetRequests().end(),
                             [&](const Model::SchemaConversionRequest& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeMetadataModelExportsToTarget(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(20, 6, std::move(acceptors), operation, "WaitUntilMetadataModelExportedToTarget");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeMetadataModelImportsOutcome> WaitUntilMetadataModelImported(
      const Model::DescribeMetadataModelImportsRequest& request) {
    using OutcomeT = Model::DescribeMetadataModelImportsOutcome;
    using RequestT = Model::DescribeMetadataModelImportsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MetadataModelImportedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCESS"),
        [](const Model::DescribeMetadataModelImportsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetRequests().begin(), result.GetRequests().end(),
                             [&](const Model::SchemaConversionRequest& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MetadataModelImportedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeMetadataModelImportsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetRequests().begin(), result.GetRequests().end(),
                             [&](const Model::SchemaConversionRequest& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeMetadataModelImports(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 2, std::move(acceptors), operation, "WaitUntilMetadataModelImported");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationInstancesOutcome> WaitUntilReplicationInstanceAvailable(
      const Model::DescribeReplicationInstancesRequest& request) {
    using OutcomeT = Model::DescribeReplicationInstancesOutcome;
    using RequestT = Model::DescribeReplicationInstancesRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationInstanceAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeReplicationInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(
              result.GetReplicationInstances().begin(), result.GetReplicationInstances().end(),
              [&](const Model::ReplicationInstance& item) { return item.GetReplicationInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationInstanceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleting"),
        [](const Model::DescribeReplicationInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetReplicationInstances().begin(), result.GetReplicationInstances().end(),
              [&](const Model::ReplicationInstance& item) { return item.GetReplicationInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationInstanceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("incompatible-credentials"),
        [](const Model::DescribeReplicationInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetReplicationInstances().begin(), result.GetReplicationInstances().end(),
              [&](const Model::ReplicationInstance& item) { return item.GetReplicationInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationInstanceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("incompatible-network"),
        [](const Model::DescribeReplicationInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetReplicationInstances().begin(), result.GetReplicationInstances().end(),
              [&](const Model::ReplicationInstance& item) { return item.GetReplicationInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationInstanceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("inaccessible-encryption-credentials"),
        [](const Model::DescribeReplicationInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetReplicationInstances().begin(), result.GetReplicationInstances().end(),
              [&](const Model::ReplicationInstance& item) { return item.GetReplicationInstanceStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeReplicationInstances(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 2, std::move(acceptors), operation, "WaitUntilReplicationInstanceAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationInstancesOutcome> WaitUntilReplicationInstanceDeleted(
      const Model::DescribeReplicationInstancesRequest& request) {
    using OutcomeT = Model::DescribeReplicationInstancesOutcome;
    using RequestT = Model::DescribeReplicationInstancesRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationInstanceDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("available"),
        [](const Model::DescribeReplicationInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetReplicationInstances().begin(), result.GetReplicationInstances().end(),
              [&](const Model::ReplicationInstance& item) { return item.GetReplicationInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "ReplicationInstanceDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundFault")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeReplicationInstances(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilReplicationInstanceDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationTasksOutcome> WaitUntilReplicationTaskDeleted(
      const Model::DescribeReplicationTasksRequest& request) {
    using OutcomeT = Model::DescribeReplicationTasksOutcome;
    using RequestT = Model::DescribeReplicationTasksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ready"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("creating"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("stopped"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("running"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "ReplicationTaskDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundFault")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeReplicationTasks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilReplicationTaskDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationTasksOutcome> WaitUntilReplicationTaskReady(
      const Model::DescribeReplicationTasksRequest& request) {
    using OutcomeT = Model::DescribeReplicationTasksOutcome;
    using RequestT = Model::DescribeReplicationTasksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskReadyWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ready"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("starting"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("running"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("stopping"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("stopped"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("modifying"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("testing"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleting"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeReplicationTasks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilReplicationTaskReady");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationTasksOutcome> WaitUntilReplicationTaskRunning(
      const Model::DescribeReplicationTasksRequest& request) {
    using OutcomeT = Model::DescribeReplicationTasksOutcome;
    using RequestT = Model::DescribeReplicationTasksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskRunningWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("running"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ready"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("creating"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("stopping"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("stopped"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("modifying"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("testing"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleting"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeReplicationTasks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilReplicationTaskRunning");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationTasksOutcome> WaitUntilReplicationTaskStopped(
      const Model::DescribeReplicationTasksRequest& request) {
    using OutcomeT = Model::DescribeReplicationTasksOutcome;
    using RequestT = Model::DescribeReplicationTasksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskStoppedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("stopped"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ready"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("creating"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("starting"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("modifying"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("testing"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleting"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeReplicationTasks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilReplicationTaskStopped");
    return waiter.Wait(request);
  }
};
}  // namespace DatabaseMigrationService
}  // namespace Aws
