/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EntityType.h>
#include <aws/connect/model/SecurityProfileItem.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class DisassociateSecurityProfilesRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API DisassociateSecurityProfilesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DisassociateSecurityProfiles"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p> The identifier of the Amazon Connect instance. You can find the instance ID
   * in the Amazon Resource Name (ARN) of the instance. </p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  DisassociateSecurityProfilesRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> List of Security Profile Object. </p>
   */
  inline const Aws::Vector<SecurityProfileItem>& GetSecurityProfiles() const { return m_securityProfiles; }
  inline bool SecurityProfilesHasBeenSet() const { return m_securityProfilesHasBeenSet; }
  template <typename SecurityProfilesT = Aws::Vector<SecurityProfileItem>>
  void SetSecurityProfiles(SecurityProfilesT&& value) {
    m_securityProfilesHasBeenSet = true;
    m_securityProfiles = std::forward<SecurityProfilesT>(value);
  }
  template <typename SecurityProfilesT = Aws::Vector<SecurityProfileItem>>
  DisassociateSecurityProfilesRequest& WithSecurityProfiles(SecurityProfilesT&& value) {
    SetSecurityProfiles(std::forward<SecurityProfilesT>(value));
    return *this;
  }
  template <typename SecurityProfilesT = SecurityProfileItem>
  DisassociateSecurityProfilesRequest& AddSecurityProfiles(SecurityProfilesT&& value) {
    m_securityProfilesHasBeenSet = true;
    m_securityProfiles.emplace_back(std::forward<SecurityProfilesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Only supported type is AI_AGENT. </p>
   */
  inline EntityType GetEntityType() const { return m_entityType; }
  inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
  inline void SetEntityType(EntityType value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = value;
  }
  inline DisassociateSecurityProfilesRequest& WithEntityType(EntityType value) {
    SetEntityType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> ARN of a Q in Connect AI Agent. </p>
   */
  inline const Aws::String& GetEntityArn() const { return m_entityArn; }
  inline bool EntityArnHasBeenSet() const { return m_entityArnHasBeenSet; }
  template <typename EntityArnT = Aws::String>
  void SetEntityArn(EntityArnT&& value) {
    m_entityArnHasBeenSet = true;
    m_entityArn = std::forward<EntityArnT>(value);
  }
  template <typename EntityArnT = Aws::String>
  DisassociateSecurityProfilesRequest& WithEntityArn(EntityArnT&& value) {
    SetEntityArn(std::forward<EntityArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::Vector<SecurityProfileItem> m_securityProfiles;

  EntityType m_entityType{EntityType::NOT_SET};

  Aws::String m_entityArn;
  bool m_instanceIdHasBeenSet = false;
  bool m_securityProfilesHasBeenSet = false;
  bool m_entityTypeHasBeenSet = false;
  bool m_entityArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
