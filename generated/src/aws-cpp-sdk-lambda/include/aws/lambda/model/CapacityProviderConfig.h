/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/LambdaManagedInstancesCapacityProviderConfig.h>

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
 * <p>Configuration for the capacity provider that manages compute resources for
 * Lambda functions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CapacityProviderConfig">AWS
 * API Reference</a></p>
 */
class CapacityProviderConfig {
 public:
  AWS_LAMBDA_API CapacityProviderConfig() = default;
  AWS_LAMBDA_API CapacityProviderConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API CapacityProviderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for Lambda-managed instances used by the capacity provider.</p>
   */
  inline const LambdaManagedInstancesCapacityProviderConfig& GetLambdaManagedInstancesCapacityProviderConfig() const {
    return m_lambdaManagedInstancesCapacityProviderConfig;
  }
  inline bool LambdaManagedInstancesCapacityProviderConfigHasBeenSet() const {
    return m_lambdaManagedInstancesCapacityProviderConfigHasBeenSet;
  }
  template <typename LambdaManagedInstancesCapacityProviderConfigT = LambdaManagedInstancesCapacityProviderConfig>
  void SetLambdaManagedInstancesCapacityProviderConfig(LambdaManagedInstancesCapacityProviderConfigT&& value) {
    m_lambdaManagedInstancesCapacityProviderConfigHasBeenSet = true;
    m_lambdaManagedInstancesCapacityProviderConfig = std::forward<LambdaManagedInstancesCapacityProviderConfigT>(value);
  }
  template <typename LambdaManagedInstancesCapacityProviderConfigT = LambdaManagedInstancesCapacityProviderConfig>
  CapacityProviderConfig& WithLambdaManagedInstancesCapacityProviderConfig(LambdaManagedInstancesCapacityProviderConfigT&& value) {
    SetLambdaManagedInstancesCapacityProviderConfig(std::forward<LambdaManagedInstancesCapacityProviderConfigT>(value));
    return *this;
  }
  ///@}
 private:
  LambdaManagedInstancesCapacityProviderConfig m_lambdaManagedInstancesCapacityProviderConfig;
  bool m_lambdaManagedInstancesCapacityProviderConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
