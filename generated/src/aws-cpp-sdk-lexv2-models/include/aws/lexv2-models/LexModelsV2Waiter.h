/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/lexv2-models/LexModelsV2Client.h>
#include <aws/lexv2-models/model/BotAliasStatus.h>
#include <aws/lexv2-models/model/BotLocaleStatus.h>
#include <aws/lexv2-models/model/BotStatus.h>
#include <aws/lexv2-models/model/DescribeBotAliasRequest.h>
#include <aws/lexv2-models/model/DescribeBotAliasResult.h>
#include <aws/lexv2-models/model/DescribeBotLocaleRequest.h>
#include <aws/lexv2-models/model/DescribeBotLocaleResult.h>
#include <aws/lexv2-models/model/DescribeBotRequest.h>
#include <aws/lexv2-models/model/DescribeBotResult.h>
#include <aws/lexv2-models/model/DescribeBotVersionRequest.h>
#include <aws/lexv2-models/model/DescribeBotVersionResult.h>
#include <aws/lexv2-models/model/DescribeExportRequest.h>
#include <aws/lexv2-models/model/DescribeExportResult.h>
#include <aws/lexv2-models/model/DescribeImportRequest.h>
#include <aws/lexv2-models/model/DescribeImportResult.h>
#include <aws/lexv2-models/model/ExportStatus.h>
#include <aws/lexv2-models/model/ImportStatus.h>

#include <algorithm>

namespace Aws {
namespace LexModelsV2 {

template <typename DerivedClient = LexModelsV2Client>
class LexModelsV2Waiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeBotOutcome> WaitUntilBotAvailable(const Model::DescribeBotRequest& request) {
    using OutcomeT = Model::DescribeBotOutcome;
    using RequestT = Model::DescribeBotRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Available"),
        [](const Model::DescribeBotVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotStatusMapper::GetNameForBotStatus(result.GetBotStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Deleting"),
        [](const Model::DescribeBotVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotStatusMapper::GetNameForBotStatus(result.GetBotStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeBotVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotStatusMapper::GetNameForBotStatus(result.GetBotStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Inactive"),
        [](const Model::DescribeBotOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotStatusMapper::GetNameForBotStatus(result.GetBotStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeBot(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilBotAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeBotAliasOutcome> WaitUntilBotAliasAvailable(const Model::DescribeBotAliasRequest& request) {
    using OutcomeT = Model::DescribeBotAliasOutcome;
    using RequestT = Model::DescribeBotAliasRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotAliasAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Available"),
        [](const Model::DescribeBotAliasOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotAliasStatusMapper::GetNameForBotAliasStatus(result.GetBotAliasStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotAliasAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeBotAliasOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotAliasStatusMapper::GetNameForBotAliasStatus(result.GetBotAliasStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotAliasAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Deleting"),
        [](const Model::DescribeBotAliasOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotAliasStatusMapper::GetNameForBotAliasStatus(result.GetBotAliasStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeBotAlias(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilBotAliasAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeBotLocaleOutcome> WaitUntilBotLocaleBuilt(const Model::DescribeBotLocaleRequest& request) {
    using OutcomeT = Model::DescribeBotLocaleOutcome;
    using RequestT = Model::DescribeBotLocaleRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotLocaleBuiltWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Built"),
        [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotLocaleBuiltWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Deleting"),
        [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotLocaleBuiltWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotLocaleBuiltWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("NotBuilt"),
        [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeBotLocale(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilBotLocaleBuilt");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeBotLocaleOutcome> WaitUntilBotLocaleCreated(const Model::DescribeBotLocaleRequest& request) {
    using OutcomeT = Model::DescribeBotLocaleOutcome;
    using RequestT = Model::DescribeBotLocaleRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotLocaleCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Built"),
        [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotLocaleCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ReadyExpressTesting"),
        [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotLocaleCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("NotBuilt"),
        [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotLocaleCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Deleting"),
        [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotLocaleCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeBotLocale(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilBotLocaleCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeBotLocaleOutcome> WaitUntilBotLocaleExpressTestingAvailable(
      const Model::DescribeBotLocaleRequest& request) {
    using OutcomeT = Model::DescribeBotLocaleOutcome;
    using RequestT = Model::DescribeBotLocaleRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotLocaleExpressTestingAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Built"),
        [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotLocaleExpressTestingAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ReadyExpressTesting"),
        [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotLocaleExpressTestingAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Deleting"),
        [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotLocaleExpressTestingAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotLocaleExpressTestingAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("NotBuilt"),
        [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeBotLocale(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilBotLocaleExpressTestingAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeBotVersionOutcome> WaitUntilBotVersionAvailable(
      const Model::DescribeBotVersionRequest& request) {
    using OutcomeT = Model::DescribeBotVersionOutcome;
    using RequestT = Model::DescribeBotVersionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotVersionAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Available"),
        [](const Model::DescribeBotVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotStatusMapper::GetNameForBotStatus(result.GetBotStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotVersionAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Deleting"),
        [](const Model::DescribeBotVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotStatusMapper::GetNameForBotStatus(result.GetBotStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotVersionAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeBotVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BotStatusMapper::GetNameForBotStatus(result.GetBotStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("BotVersionAvailableWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeBotVersion(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilBotVersionAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeExportOutcome> WaitUntilBotExportCompleted(const Model::DescribeExportRequest& request) {
    using OutcomeT = Model::DescribeExportOutcome;
    using RequestT = Model::DescribeExportRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotExportCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Completed"),
        [](const Model::DescribeExportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ExportStatusMapper::GetNameForExportStatus(result.GetExportStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotExportCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Deleting"),
        [](const Model::DescribeExportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ExportStatusMapper::GetNameForExportStatus(result.GetExportStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotExportCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeExportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ExportStatusMapper::GetNameForExportStatus(result.GetExportStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeExport(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilBotExportCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImportOutcome> WaitUntilBotImportCompleted(const Model::DescribeImportRequest& request) {
    using OutcomeT = Model::DescribeImportOutcome;
    using RequestT = Model::DescribeImportRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotImportCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Completed"),
        [](const Model::DescribeImportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImportStatusMapper::GetNameForImportStatus(result.GetImportStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotImportCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Deleting"),
        [](const Model::DescribeImportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImportStatusMapper::GetNameForImportStatus(result.GetImportStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BotImportCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeImportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImportStatusMapper::GetNameForImportStatus(result.GetImportStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeImport(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilBotImportCompleted");
    return waiter.Wait(request);
  }
};
}  // namespace LexModelsV2
}  // namespace Aws
