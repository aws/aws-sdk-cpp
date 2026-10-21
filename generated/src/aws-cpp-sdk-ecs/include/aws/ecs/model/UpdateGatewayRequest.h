/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/PropagateGatewayTags.h>
#include <aws/ecs/model/UpdateGatewayConfiguration.h>

#include <utility>

namespace Aws {
namespace ECS {
namespace Model {

/**
 */
class UpdateGatewayRequest : public ECSRequest {
 public:
  AWS_ECS_API UpdateGatewayRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateGateway"; }

  AWS_ECS_API Aws::String SerializePayload() const override;

  AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of the gateway to update.</p>
   */
  inline const Aws::String& GetGateway() const { return m_gateway; }
  inline bool GatewayHasBeenSet() const { return m_gatewayHasBeenSet; }
  template <typename GatewayT = Aws::String>
  void SetGateway(GatewayT&& value) {
    m_gatewayHasBeenSet = true;
    m_gateway = std::forward<GatewayT>(value);
  }
  template <typename GatewayT = Aws::String>
  UpdateGatewayRequest& WithGateway(GatewayT&& value) {
    SetGateway(std::forward<GatewayT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that the gateway assumes to
   * manage infrastructure on your behalf.</p>
   */
  inline const Aws::String& GetInfrastructureRoleArn() const { return m_infrastructureRoleArn; }
  inline bool InfrastructureRoleArnHasBeenSet() const { return m_infrastructureRoleArnHasBeenSet; }
  template <typename InfrastructureRoleArnT = Aws::String>
  void SetInfrastructureRoleArn(InfrastructureRoleArnT&& value) {
    m_infrastructureRoleArnHasBeenSet = true;
    m_infrastructureRoleArn = std::forward<InfrastructureRoleArnT>(value);
  }
  template <typename InfrastructureRoleArnT = Aws::String>
  UpdateGatewayRequest& WithInfrastructureRoleArn(InfrastructureRoleArnT&& value) {
    SetInfrastructureRoleArn(std::forward<InfrastructureRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to enable deletion protection for the gateway. When
   * enabled, the gateway can't be deleted.</p>
   */
  inline bool GetDeletionProtection() const { return m_deletionProtection; }
  inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
  inline void SetDeletionProtection(bool value) {
    m_deletionProtectionHasBeenSet = true;
    m_deletionProtection = value;
  }
  inline UpdateGatewayRequest& WithDeletionProtection(bool value) {
    SetDeletionProtection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated type-specific configuration for the gateway. The configuration
   * variant must match the gateway's existing type, and only mutable fields can be
   * changed.</p>
   */
  inline const UpdateGatewayConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = UpdateGatewayConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = UpdateGatewayConfiguration>
  UpdateGatewayRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to propagate the tags from the gateway to the
   * infrastructure that the gateway manages. If you don't specify a value, the
   * gateway's existing setting is unchanged.</p>
   */
  inline PropagateGatewayTags GetPropagateTags() const { return m_propagateTags; }
  inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
  inline void SetPropagateTags(PropagateGatewayTags value) {
    m_propagateTagsHasBeenSet = true;
    m_propagateTags = value;
  }
  inline UpdateGatewayRequest& WithPropagateTags(PropagateGatewayTags value) {
    SetPropagateTags(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_gateway;

  Aws::String m_infrastructureRoleArn;

  bool m_deletionProtection{false};

  UpdateGatewayConfiguration m_configuration;

  PropagateGatewayTags m_propagateTags{PropagateGatewayTags::NOT_SET};
  bool m_gatewayHasBeenSet = false;
  bool m_infrastructureRoleArnHasBeenSet = false;
  bool m_deletionProtectionHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_propagateTagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
