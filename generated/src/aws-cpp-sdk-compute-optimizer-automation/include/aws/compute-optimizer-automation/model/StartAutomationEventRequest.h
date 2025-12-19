/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationRequest.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 */
class StartAutomationEventRequest : public ComputeOptimizerAutomationRequest {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API StartAutomationEventRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartAutomationEvent"; }

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String SerializePayload() const override;

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p> The ID of the recommended action to automate. </p>
   */
  inline const Aws::String& GetRecommendedActionId() const { return m_recommendedActionId; }
  inline bool RecommendedActionIdHasBeenSet() const { return m_recommendedActionIdHasBeenSet; }
  template <typename RecommendedActionIdT = Aws::String>
  void SetRecommendedActionId(RecommendedActionIdT&& value) {
    m_recommendedActionIdHasBeenSet = true;
    m_recommendedActionId = std::forward<RecommendedActionIdT>(value);
  }
  template <typename RecommendedActionIdT = Aws::String>
  StartAutomationEventRequest& WithRecommendedActionId(RecommendedActionIdT&& value) {
    SetRecommendedActionId(std::forward<RecommendedActionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. Must be 1-64 characters long and contain only
   * alphanumeric characters, underscores, and hyphens.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartAutomationEventRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommendedActionId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_recommendedActionIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
