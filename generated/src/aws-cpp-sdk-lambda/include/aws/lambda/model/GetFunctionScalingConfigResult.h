/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/FunctionScalingConfig.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {
class GetFunctionScalingConfigResult {
 public:
  AWS_LAMBDA_API GetFunctionScalingConfigResult() = default;
  AWS_LAMBDA_API GetFunctionScalingConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDA_API GetFunctionScalingConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the function.</p>
   */
  inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
  template <typename FunctionArnT = Aws::String>
  void SetFunctionArn(FunctionArnT&& value) {
    m_functionArnHasBeenSet = true;
    m_functionArn = std::forward<FunctionArnT>(value);
  }
  template <typename FunctionArnT = Aws::String>
  GetFunctionScalingConfigResult& WithFunctionArn(FunctionArnT&& value) {
    SetFunctionArn(std::forward<FunctionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scaling configuration that is currently applied to the function. This
   * represents the actual scaling settings in effect.</p>
   */
  inline const FunctionScalingConfig& GetAppliedFunctionScalingConfig() const { return m_appliedFunctionScalingConfig; }
  template <typename AppliedFunctionScalingConfigT = FunctionScalingConfig>
  void SetAppliedFunctionScalingConfig(AppliedFunctionScalingConfigT&& value) {
    m_appliedFunctionScalingConfigHasBeenSet = true;
    m_appliedFunctionScalingConfig = std::forward<AppliedFunctionScalingConfigT>(value);
  }
  template <typename AppliedFunctionScalingConfigT = FunctionScalingConfig>
  GetFunctionScalingConfigResult& WithAppliedFunctionScalingConfig(AppliedFunctionScalingConfigT&& value) {
    SetAppliedFunctionScalingConfig(std::forward<AppliedFunctionScalingConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scaling configuration that was requested for the function.</p>
   */
  inline const FunctionScalingConfig& GetRequestedFunctionScalingConfig() const { return m_requestedFunctionScalingConfig; }
  template <typename RequestedFunctionScalingConfigT = FunctionScalingConfig>
  void SetRequestedFunctionScalingConfig(RequestedFunctionScalingConfigT&& value) {
    m_requestedFunctionScalingConfigHasBeenSet = true;
    m_requestedFunctionScalingConfig = std::forward<RequestedFunctionScalingConfigT>(value);
  }
  template <typename RequestedFunctionScalingConfigT = FunctionScalingConfig>
  GetFunctionScalingConfigResult& WithRequestedFunctionScalingConfig(RequestedFunctionScalingConfigT&& value) {
    SetRequestedFunctionScalingConfig(std::forward<RequestedFunctionScalingConfigT>(value));
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
  GetFunctionScalingConfigResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionArn;
  bool m_functionArnHasBeenSet = false;

  FunctionScalingConfig m_appliedFunctionScalingConfig;
  bool m_appliedFunctionScalingConfigHasBeenSet = false;

  FunctionScalingConfig m_requestedFunctionScalingConfig;
  bool m_requestedFunctionScalingConfigHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
