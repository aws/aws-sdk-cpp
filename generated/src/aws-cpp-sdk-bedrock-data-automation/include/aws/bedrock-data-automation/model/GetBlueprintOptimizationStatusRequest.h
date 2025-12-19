/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomationRequest.h>
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

/**
 * <p>Structure for request of GetBlueprintOptimizationStatus API.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/GetBlueprintOptimizationStatusRequest">AWS
 * API Reference</a></p>
 */
class GetBlueprintOptimizationStatusRequest : public BedrockDataAutomationRequest {
 public:
  AWS_BEDROCKDATAAUTOMATION_API GetBlueprintOptimizationStatusRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetBlueprintOptimizationStatus"; }

  AWS_BEDROCKDATAAUTOMATION_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Invocation arn.</p>
   */
  inline const Aws::String& GetInvocationArn() const { return m_invocationArn; }
  inline bool InvocationArnHasBeenSet() const { return m_invocationArnHasBeenSet; }
  template <typename InvocationArnT = Aws::String>
  void SetInvocationArn(InvocationArnT&& value) {
    m_invocationArnHasBeenSet = true;
    m_invocationArn = std::forward<InvocationArnT>(value);
  }
  template <typename InvocationArnT = Aws::String>
  GetBlueprintOptimizationStatusRequest& WithInvocationArn(InvocationArnT&& value) {
    SetInvocationArn(std::forward<InvocationArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_invocationArn;
  bool m_invocationArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
