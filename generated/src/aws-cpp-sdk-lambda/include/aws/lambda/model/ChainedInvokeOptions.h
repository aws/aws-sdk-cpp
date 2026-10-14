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

  ///@{
  /**
   * <p>The optional X-Ray trace header to use when starting the chained invocation.
   * If you omit this value, the child invocation inherits the parent durable
   * execution's trace header.</p> <p>Specify this value on the <code>START</code>
   * update for the chained invocation operation. For more information about the
   * header format, see <a
   * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-concepts.html#xray-concepts-tracingheader">Tracing
   * header</a> in the <i>X-Ray Developer Guide</i>.</p>
   */
  inline const Aws::String& GetXAmznTraceId() const { return m_xAmznTraceId; }
  inline bool XAmznTraceIdHasBeenSet() const { return m_xAmznTraceIdHasBeenSet; }
  template <typename XAmznTraceIdT = Aws::String>
  void SetXAmznTraceId(XAmznTraceIdT&& value) {
    m_xAmznTraceIdHasBeenSet = true;
    m_xAmznTraceId = std::forward<XAmznTraceIdT>(value);
  }
  template <typename XAmznTraceIdT = Aws::String>
  ChainedInvokeOptions& WithXAmznTraceId(XAmznTraceIdT&& value) {
    SetXAmznTraceId(std::forward<XAmznTraceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionName;

  Aws::String m_tenantId;

  Aws::String m_xAmznTraceId;
  bool m_functionNameHasBeenSet = false;
  bool m_tenantIdHasBeenSet = false;
  bool m_xAmznTraceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
