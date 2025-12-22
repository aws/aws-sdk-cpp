/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockDataAutomation {
namespace Model {
/**
 * <p>Invoke Blueprint Optimization Async Response</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/InvokeBlueprintOptimizationAsyncResponse">AWS
 * API Reference</a></p>
 */
class InvokeBlueprintOptimizationAsyncResult {
 public:
  AWS_BEDROCKDATAAUTOMATION_API InvokeBlueprintOptimizationAsyncResult() = default;
  AWS_BEDROCKDATAAUTOMATION_API InvokeBlueprintOptimizationAsyncResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKDATAAUTOMATION_API InvokeBlueprintOptimizationAsyncResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>ARN of the blueprint optimization job</p>
   */
  inline const Aws::String& GetInvocationArn() const { return m_invocationArn; }
  template <typename InvocationArnT = Aws::String>
  void SetInvocationArn(InvocationArnT&& value) {
    m_invocationArnHasBeenSet = true;
    m_invocationArn = std::forward<InvocationArnT>(value);
  }
  template <typename InvocationArnT = Aws::String>
  InvokeBlueprintOptimizationAsyncResult& WithInvocationArn(InvocationArnT&& value) {
    SetInvocationArn(std::forward<InvocationArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  InvokeBlueprintOptimizationAsyncResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_invocationArn;

  Aws::String m_requestId;
  bool m_invocationArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
