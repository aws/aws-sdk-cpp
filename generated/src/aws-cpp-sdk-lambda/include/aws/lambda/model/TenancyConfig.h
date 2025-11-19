/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/TenantIsolationMode.h>

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
 * <p>Specifies the tenant isolation mode configuration for a Lambda function. This
 * allows you to configure specific tenant isolation strategies for your function
 * invocations. Tenant isolation configuration cannot be modified after function
 * creation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/TenancyConfig">AWS
 * API Reference</a></p>
 */
class TenancyConfig {
 public:
  AWS_LAMBDA_API TenancyConfig() = default;
  AWS_LAMBDA_API TenancyConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API TenancyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Tenant isolation mode allows for invocation to be sent to a corresponding
   * execution environment dedicated to a specific tenant ID.</p>
   */
  inline TenantIsolationMode GetTenantIsolationMode() const { return m_tenantIsolationMode; }
  inline bool TenantIsolationModeHasBeenSet() const { return m_tenantIsolationModeHasBeenSet; }
  inline void SetTenantIsolationMode(TenantIsolationMode value) {
    m_tenantIsolationModeHasBeenSet = true;
    m_tenantIsolationMode = value;
  }
  inline TenancyConfig& WithTenantIsolationMode(TenantIsolationMode value) {
    SetTenantIsolationMode(value);
    return *this;
  }
  ///@}
 private:
  TenantIsolationMode m_tenantIsolationMode{TenantIsolationMode::NOT_SET};
  bool m_tenantIsolationModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
