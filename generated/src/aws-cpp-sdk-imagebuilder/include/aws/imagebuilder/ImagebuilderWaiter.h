/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/imagebuilder/ImagebuilderClient.h>
#include <aws/imagebuilder/model/GetImageRequest.h>
#include <aws/imagebuilder/model/GetImageResult.h>
#include <aws/imagebuilder/model/ImageStatus.h>

#include <algorithm>

namespace Aws {
namespace imagebuilder {

template <typename DerivedClient = ImagebuilderClient>
class ImagebuilderWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetImageOutcome> WaitUntilImageAvailable(const Model::GetImageRequest& request) {
    using OutcomeT = Model::GetImageOutcome;
    using RequestT = Model::GetImageRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImageAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("AVAILABLE"),
        [](const Model::GetImageOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImageStatusMapper::GetNameForImageStatus(result.GetImage().GetState().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImageAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetImageOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImageStatusMapper::GetNameForImageStatus(result.GetImage().GetState().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImageAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CANCELLED"),
        [](const Model::GetImageOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImageStatusMapper::GetNameForImageStatus(result.GetImage().GetState().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetImage(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 2, std::move(acceptors), operation, "WaitUntilImageAvailable");
    return waiter.Wait(request);
  }
};
}  // namespace imagebuilder
}  // namespace Aws
