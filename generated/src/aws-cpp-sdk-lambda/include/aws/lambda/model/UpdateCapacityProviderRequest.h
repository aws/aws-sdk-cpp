/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/CapacityProviderScalingConfig.h>

#include <utility>

namespace Aws {
namespace Lambda {
namespace Model {

/**
 */
class UpdateCapacityProviderRequest : public LambdaRequest {
 public:
  AWS_LAMBDA_API UpdateCapacityProviderRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCapacityProvider"; }

  AWS_LAMBDA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the capacity provider to update.</p>
   */
  inline const Aws::String& GetCapacityProviderName() const { return m_capacityProviderName; }
  inline bool CapacityProviderNameHasBeenSet() const { return m_capacityProviderNameHasBeenSet; }
  template <typename CapacityProviderNameT = Aws::String>
  void SetCapacityProviderName(CapacityProviderNameT&& value) {
    m_capacityProviderNameHasBeenSet = true;
    m_capacityProviderName = std::forward<CapacityProviderNameT>(value);
  }
  template <typename CapacityProviderNameT = Aws::String>
  UpdateCapacityProviderRequest& WithCapacityProviderName(CapacityProviderNameT&& value) {
    SetCapacityProviderName(std::forward<CapacityProviderNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated scaling configuration for the capacity provider.</p>
   */
  inline const CapacityProviderScalingConfig& GetCapacityProviderScalingConfig() const { return m_capacityProviderScalingConfig; }
  inline bool CapacityProviderScalingConfigHasBeenSet() const { return m_capacityProviderScalingConfigHasBeenSet; }
  template <typename CapacityProviderScalingConfigT = CapacityProviderScalingConfig>
  void SetCapacityProviderScalingConfig(CapacityProviderScalingConfigT&& value) {
    m_capacityProviderScalingConfigHasBeenSet = true;
    m_capacityProviderScalingConfig = std::forward<CapacityProviderScalingConfigT>(value);
  }
  template <typename CapacityProviderScalingConfigT = CapacityProviderScalingConfig>
  UpdateCapacityProviderRequest& WithCapacityProviderScalingConfig(CapacityProviderScalingConfigT&& value) {
    SetCapacityProviderScalingConfig(std::forward<CapacityProviderScalingConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityProviderName;
  bool m_capacityProviderNameHasBeenSet = false;

  CapacityProviderScalingConfig m_capacityProviderScalingConfig;
  bool m_capacityProviderScalingConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
