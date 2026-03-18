/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/healthlake/HealthLakeClient.h>
#include <aws/healthlake/model/DatastoreStatus.h>
#include <aws/healthlake/model/DescribeFHIRDatastoreRequest.h>
#include <aws/healthlake/model/DescribeFHIRDatastoreResult.h>
#include <aws/healthlake/model/DescribeFHIRExportJobRequest.h>
#include <aws/healthlake/model/DescribeFHIRExportJobResult.h>
#include <aws/healthlake/model/DescribeFHIRImportJobRequest.h>
#include <aws/healthlake/model/DescribeFHIRImportJobResult.h>
#include <aws/healthlake/model/JobStatus.h>

#include <algorithm>

namespace Aws {
namespace HealthLake {

template <typename DerivedClient = HealthLakeClient>
class HealthLakeWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeFHIRDatastoreOutcome> WaitUntilFHIRDatastoreActive(
      const Model::DescribeFHIRDatastoreRequest& request) {
    using OutcomeT = Model::DescribeFHIRDatastoreOutcome;
    using RequestT = Model::DescribeFHIRDatastoreRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FHIRDatastoreActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeFHIRDatastoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::DatastoreStatusMapper::GetNameForDatastoreStatus(result.GetDatastoreProperties().GetDatastoreStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FHIRDatastoreActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::DescribeFHIRDatastoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::DatastoreStatusMapper::GetNameForDatastoreStatus(result.GetDatastoreProperties().GetDatastoreStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FHIRDatastoreActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETED"),
        [](const Model::DescribeFHIRDatastoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::DatastoreStatusMapper::GetNameForDatastoreStatus(result.GetDatastoreProperties().GetDatastoreStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeFHIRDatastore(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 2, std::move(acceptors), operation, "WaitUntilFHIRDatastoreActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeFHIRDatastoreOutcome> WaitUntilFHIRDatastoreDeleted(
      const Model::DescribeFHIRDatastoreRequest& request) {
    using OutcomeT = Model::DescribeFHIRDatastoreOutcome;
    using RequestT = Model::DescribeFHIRDatastoreRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FHIRDatastoreDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DELETED"),
        [](const Model::DescribeFHIRDatastoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::DatastoreStatusMapper::GetNameForDatastoreStatus(result.GetDatastoreProperties().GetDatastoreStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeFHIRDatastore(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(120, 1, std::move(acceptors), operation, "WaitUntilFHIRDatastoreDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeFHIRExportJobOutcome> WaitUntilFHIRExportJobCompleted(
      const Model::DescribeFHIRExportJobRequest& request) {
    using OutcomeT = Model::DescribeFHIRExportJobOutcome;
    using RequestT = Model::DescribeFHIRExportJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FHIRExportJobCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::DescribeFHIRExportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetExportJobProperties().GetJobStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FHIRExportJobCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED_WITH_ERRORS"),
        [](const Model::DescribeFHIRExportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetExportJobProperties().GetJobStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FHIRExportJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CANCEL_COMPLETED"),
        [](const Model::DescribeFHIRExportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetExportJobProperties().GetJobStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FHIRExportJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeFHIRExportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetExportJobProperties().GetJobStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FHIRExportJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CANCEL_FAILED"),
        [](const Model::DescribeFHIRExportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetExportJobProperties().GetJobStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeFHIRExportJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(120, 1, std::move(acceptors), operation, "WaitUntilFHIRExportJobCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeFHIRImportJobOutcome> WaitUntilFHIRImportJobCompleted(
      const Model::DescribeFHIRImportJobRequest& request) {
    using OutcomeT = Model::DescribeFHIRImportJobOutcome;
    using RequestT = Model::DescribeFHIRImportJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FHIRImportJobCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::DescribeFHIRImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetImportJobProperties().GetJobStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FHIRImportJobCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED_WITH_ERRORS"),
        [](const Model::DescribeFHIRImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetImportJobProperties().GetJobStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FHIRImportJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeFHIRImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetImportJobProperties().GetJobStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeFHIRImportJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(120, 1, std::move(acceptors), operation, "WaitUntilFHIRImportJobCompleted");
    return waiter.Wait(request);
  }
};
}  // namespace HealthLake
}  // namespace Aws
