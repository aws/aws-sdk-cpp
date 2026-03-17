/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::DescribeBotOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Available"),
                         [](const Model::DescribeBotVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotStatusMapper::GetNameForBotStatus(result.GetBotStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Deleting"),
                         [](const Model::DescribeBotVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotStatusMapper::GetNameForBotStatus(result.GetBotStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeBotVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotStatusMapper::GetNameForBotStatus(result.GetBotStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Inactive"),
                         [](const Model::DescribeBotOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotStatusMapper::GetNameForBotStatus(result.GetBotStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeBotRequest& req) { return static_cast<DerivedClient*>(this)->DescribeBot(req); };
    Aws::Utils::Waiter<Model::DescribeBotRequest, Model::DescribeBotOutcome> waiter(10, 12, acceptors, operation, "WaitUntilBotAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeBotAliasOutcome> WaitUntilBotAliasAvailable(const Model::DescribeBotAliasRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeBotAliasOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Available"),
                         [](const Model::DescribeBotAliasOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotAliasStatusMapper::GetNameForBotAliasStatus(result.GetBotAliasStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeBotAliasOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotAliasStatusMapper::GetNameForBotAliasStatus(result.GetBotAliasStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Deleting"),
                         [](const Model::DescribeBotAliasOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotAliasStatusMapper::GetNameForBotAliasStatus(result.GetBotAliasStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeBotAliasRequest& req) { return static_cast<DerivedClient*>(this)->DescribeBotAlias(req); };
    Aws::Utils::Waiter<Model::DescribeBotAliasRequest, Model::DescribeBotAliasOutcome> waiter(10, 12, acceptors, operation,
                                                                                              "WaitUntilBotAliasAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeBotLocaleOutcome> WaitUntilBotLocaleBuilt(const Model::DescribeBotLocaleRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeBotLocaleOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Built"),
                         [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Deleting"),
                         [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("NotBuilt"),
                         [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeBotLocaleRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeBotLocale(req);
    };
    Aws::Utils::Waiter<Model::DescribeBotLocaleRequest, Model::DescribeBotLocaleOutcome> waiter(10, 12, acceptors, operation,
                                                                                                "WaitUntilBotLocaleBuilt");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeBotLocaleOutcome> WaitUntilBotLocaleCreated(const Model::DescribeBotLocaleRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeBotLocaleOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Built"),
                         [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ReadyExpressTesting"),
                         [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("NotBuilt"),
                         [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Deleting"),
                         [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeBotLocaleRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeBotLocale(req);
    };
    Aws::Utils::Waiter<Model::DescribeBotLocaleRequest, Model::DescribeBotLocaleOutcome> waiter(10, 12, acceptors, operation,
                                                                                                "WaitUntilBotLocaleCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeBotLocaleOutcome> WaitUntilBotLocaleExpressTestingAvailable(
      const Model::DescribeBotLocaleRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeBotLocaleOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Built"),
                         [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ReadyExpressTesting"),
                         [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Deleting"),
                         [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("NotBuilt"),
                         [](const Model::DescribeBotLocaleOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotLocaleStatusMapper::GetNameForBotLocaleStatus(result.GetBotLocaleStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeBotLocaleRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeBotLocale(req);
    };
    Aws::Utils::Waiter<Model::DescribeBotLocaleRequest, Model::DescribeBotLocaleOutcome> waiter(
        10, 12, acceptors, operation, "WaitUntilBotLocaleExpressTestingAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeBotVersionOutcome> WaitUntilBotVersionAvailable(
      const Model::DescribeBotVersionRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeBotVersionOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Available"),
                         [](const Model::DescribeBotVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotStatusMapper::GetNameForBotStatus(result.GetBotStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Deleting"),
                         [](const Model::DescribeBotVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotStatusMapper::GetNameForBotStatus(result.GetBotStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeBotVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::BotStatusMapper::GetNameForBotStatus(result.GetBotStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::DescribeBotVersionRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeBotVersion(req);
    };
    Aws::Utils::Waiter<Model::DescribeBotVersionRequest, Model::DescribeBotVersionOutcome> waiter(10, 12, acceptors, operation,
                                                                                                  "WaitUntilBotVersionAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeExportOutcome> WaitUntilBotExportCompleted(const Model::DescribeExportRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeExportOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Completed"),
                         [](const Model::DescribeExportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ExportStatusMapper::GetNameForExportStatus(result.GetExportStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Deleting"),
                         [](const Model::DescribeExportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ExportStatusMapper::GetNameForExportStatus(result.GetExportStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeExportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ExportStatusMapper::GetNameForExportStatus(result.GetExportStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeExportRequest& req) { return static_cast<DerivedClient*>(this)->DescribeExport(req); };
    Aws::Utils::Waiter<Model::DescribeExportRequest, Model::DescribeExportOutcome> waiter(10, 12, acceptors, operation,
                                                                                          "WaitUntilBotExportCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImportOutcome> WaitUntilBotImportCompleted(const Model::DescribeImportRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeImportOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Completed"),
                         [](const Model::DescribeImportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImportStatusMapper::GetNameForImportStatus(result.GetImportStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Deleting"),
                         [](const Model::DescribeImportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImportStatusMapper::GetNameForImportStatus(result.GetImportStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeImportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImportStatusMapper::GetNameForImportStatus(result.GetImportStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeImportRequest& req) { return static_cast<DerivedClient*>(this)->DescribeImport(req); };
    Aws::Utils::Waiter<Model::DescribeImportRequest, Model::DescribeImportOutcome> waiter(10, 12, acceptors, operation,
                                                                                          "WaitUntilBotImportCompleted");
    return waiter.Wait(request);
  }
};
}  // namespace LexModelsV2
}  // namespace Aws
