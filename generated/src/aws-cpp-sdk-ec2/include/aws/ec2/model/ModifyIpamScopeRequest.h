/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ExternalAuthorityConfiguration.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class ModifyIpamScopeRequest : public EC2Request {
 public:
  AWS_EC2_API ModifyIpamScopeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyIpamScope"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>A check for whether you have the required permissions for the action without
   * actually making the request and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline ModifyIpamScopeRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the scope you want to modify.</p>
   */
  inline const Aws::String& GetIpamScopeId() const { return m_ipamScopeId; }
  inline bool IpamScopeIdHasBeenSet() const { return m_ipamScopeIdHasBeenSet; }
  template <typename IpamScopeIdT = Aws::String>
  void SetIpamScopeId(IpamScopeIdT&& value) {
    m_ipamScopeIdHasBeenSet = true;
    m_ipamScopeId = std::forward<IpamScopeIdT>(value);
  }
  template <typename IpamScopeIdT = Aws::String>
  ModifyIpamScopeRequest& WithIpamScopeId(IpamScopeIdT&& value) {
    SetIpamScopeId(std::forward<IpamScopeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the scope you want to modify.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ModifyIpamScopeRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that links an Amazon VPC IPAM scope to an external
   * authority system. It specifies the type of external system and the external
   * resource identifier that identifies your account or instance in that system.</p>
   * <p>In IPAM, an external authority is a third-party IP address management system
   * that provides CIDR blocks when you provision address space for top-level IPAM
   * pools. This allows you to use your existing IP management system to control
   * which address ranges are allocated to Amazon Web Services while using Amazon VPC
   * IPAM to manage subnets within those ranges.</p>
   */
  inline const ExternalAuthorityConfiguration& GetExternalAuthorityConfiguration() const { return m_externalAuthorityConfiguration; }
  inline bool ExternalAuthorityConfigurationHasBeenSet() const { return m_externalAuthorityConfigurationHasBeenSet; }
  template <typename ExternalAuthorityConfigurationT = ExternalAuthorityConfiguration>
  void SetExternalAuthorityConfiguration(ExternalAuthorityConfigurationT&& value) {
    m_externalAuthorityConfigurationHasBeenSet = true;
    m_externalAuthorityConfiguration = std::forward<ExternalAuthorityConfigurationT>(value);
  }
  template <typename ExternalAuthorityConfigurationT = ExternalAuthorityConfiguration>
  ModifyIpamScopeRequest& WithExternalAuthorityConfiguration(ExternalAuthorityConfigurationT&& value) {
    SetExternalAuthorityConfiguration(std::forward<ExternalAuthorityConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Remove the external authority configuration. <code>true</code> to remove.</p>
   */
  inline bool GetRemoveExternalAuthorityConfiguration() const { return m_removeExternalAuthorityConfiguration; }
  inline bool RemoveExternalAuthorityConfigurationHasBeenSet() const { return m_removeExternalAuthorityConfigurationHasBeenSet; }
  inline void SetRemoveExternalAuthorityConfiguration(bool value) {
    m_removeExternalAuthorityConfigurationHasBeenSet = true;
    m_removeExternalAuthorityConfiguration = value;
  }
  inline ModifyIpamScopeRequest& WithRemoveExternalAuthorityConfiguration(bool value) {
    SetRemoveExternalAuthorityConfiguration(value);
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};
  bool m_dryRunHasBeenSet = false;

  Aws::String m_ipamScopeId;
  bool m_ipamScopeIdHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  ExternalAuthorityConfiguration m_externalAuthorityConfiguration;
  bool m_externalAuthorityConfigurationHasBeenSet = false;

  bool m_removeExternalAuthorityConfiguration{false};
  bool m_removeExternalAuthorityConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
