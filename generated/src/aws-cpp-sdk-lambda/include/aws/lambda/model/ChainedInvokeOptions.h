/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>Configuration options for chained function invocations in durable executions,
 * including retry settings and timeout configuration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ChainedInvokeOptions">AWS
 * API Reference</a></p>
 */
class ChainedInvokeOptions {
 public:
  AWS_LAMBDA_API ChainedInvokeOptions() = default;
  AWS_LAMBDA_API ChainedInvokeOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API ChainedInvokeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name or ARN of the Lambda function to invoke.</p>
   */
  inline const Aws::String& GetFunctionName() const { return m_functionName; }
  inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
  template <typename FunctionNameT = Aws::String>
  void SetFunctionName(FunctionNameT&& value) {
    m_functionNameHasBeenSet = true;
    m_functionName = std::forward<FunctionNameT>(value);
  }
  template <typename FunctionNameT = Aws::String>
  ChainedInvokeOptions& WithFunctionName(FunctionNameT&& value) {
    SetFunctionName(std::forward<FunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tenant identifier for the chained invocation.</p>
   */
  inline const Aws::String& GetTenantId() const { return m_tenantId; }
  inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
  template <typename TenantIdT = Aws::String>
  void SetTenantId(TenantIdT&& value) {
    m_tenantIdHasBeenSet = true;
    m_tenantId = std::forward<TenantIdT>(value);
  }
  template <typename TenantIdT = Aws::String>
  ChainedInvokeOptions& WithTenantId(TenantIdT&& value) {
    SetTenantId(std::forward<TenantIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionName;
  bool m_functionNameHasBeenSet = false;

  Aws::String m_tenantId;
  bool m_tenantIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
