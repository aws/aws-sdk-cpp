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
 * <p>Configuration that specifies the permissions required for the capacity
 * provider to manage compute resources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CapacityProviderPermissionsConfig">AWS
 * API Reference</a></p>
 */
class CapacityProviderPermissionsConfig {
 public:
  AWS_LAMBDA_API CapacityProviderPermissionsConfig() = default;
  AWS_LAMBDA_API CapacityProviderPermissionsConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API CapacityProviderPermissionsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the IAM role that the capacity provider uses to manage compute
   * instances and other Amazon Web Services resources.</p>
   */
  inline const Aws::String& GetCapacityProviderOperatorRoleArn() const { return m_capacityProviderOperatorRoleArn; }
  inline bool CapacityProviderOperatorRoleArnHasBeenSet() const { return m_capacityProviderOperatorRoleArnHasBeenSet; }
  template <typename CapacityProviderOperatorRoleArnT = Aws::String>
  void SetCapacityProviderOperatorRoleArn(CapacityProviderOperatorRoleArnT&& value) {
    m_capacityProviderOperatorRoleArnHasBeenSet = true;
    m_capacityProviderOperatorRoleArn = std::forward<CapacityProviderOperatorRoleArnT>(value);
  }
  template <typename CapacityProviderOperatorRoleArnT = Aws::String>
  CapacityProviderPermissionsConfig& WithCapacityProviderOperatorRoleArn(CapacityProviderOperatorRoleArnT&& value) {
    SetCapacityProviderOperatorRoleArn(std::forward<CapacityProviderOperatorRoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityProviderOperatorRoleArn;
  bool m_capacityProviderOperatorRoleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
