/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/FunctionScalingConfig.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Lambda {
namespace Model {

/**
 */
class PutFunctionScalingConfigRequest : public LambdaRequest {
 public:
  AWS_LAMBDA_API PutFunctionScalingConfigRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutFunctionScalingConfig"; }

  AWS_LAMBDA_API Aws::String SerializePayload() const override;

  AWS_LAMBDA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The name or ARN of the Lambda function.</p>
   */
  inline const Aws::String& GetFunctionName() const { return m_functionName; }
  inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
  template <typename FunctionNameT = Aws::String>
  void SetFunctionName(FunctionNameT&& value) {
    m_functionNameHasBeenSet = true;
    m_functionName = std::forward<FunctionNameT>(value);
  }
  template <typename FunctionNameT = Aws::String>
  PutFunctionScalingConfigRequest& WithFunctionName(FunctionNameT&& value) {
    SetFunctionName(std::forward<FunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specify a version or alias to set the scaling configuration for a published
   * version of the function.</p>
   */
  inline const Aws::String& GetQualifier() const { return m_qualifier; }
  inline bool QualifierHasBeenSet() const { return m_qualifierHasBeenSet; }
  template <typename QualifierT = Aws::String>
  void SetQualifier(QualifierT&& value) {
    m_qualifierHasBeenSet = true;
    m_qualifier = std::forward<QualifierT>(value);
  }
  template <typename QualifierT = Aws::String>
  PutFunctionScalingConfigRequest& WithQualifier(QualifierT&& value) {
    SetQualifier(std::forward<QualifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scaling configuration to apply to the function, including minimum and
   * maximum execution environment limits.</p>
   */
  inline const FunctionScalingConfig& GetFunctionScalingConfig() const { return m_functionScalingConfig; }
  inline bool FunctionScalingConfigHasBeenSet() const { return m_functionScalingConfigHasBeenSet; }
  template <typename FunctionScalingConfigT = FunctionScalingConfig>
  void SetFunctionScalingConfig(FunctionScalingConfigT&& value) {
    m_functionScalingConfigHasBeenSet = true;
    m_functionScalingConfig = std::forward<FunctionScalingConfigT>(value);
  }
  template <typename FunctionScalingConfigT = FunctionScalingConfig>
  PutFunctionScalingConfigRequest& WithFunctionScalingConfig(FunctionScalingConfigT&& value) {
    SetFunctionScalingConfig(std::forward<FunctionScalingConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionName;
  bool m_functionNameHasBeenSet = false;

  Aws::String m_qualifier;
  bool m_qualifierHasBeenSet = false;

  FunctionScalingConfig m_functionScalingConfig;
  bool m_functionScalingConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
