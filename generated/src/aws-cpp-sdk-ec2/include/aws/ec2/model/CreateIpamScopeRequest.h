/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ExternalAuthorityConfiguration.h>
#include <aws/ec2/model/TagSpecification.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class CreateIpamScopeRequest : public EC2Request {
 public:
  AWS_EC2_API CreateIpamScopeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateIpamScope"; }

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
  inline CreateIpamScopeRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM for which you're creating this scope.</p>
   */
  inline const Aws::String& GetIpamId() const { return m_ipamId; }
  inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }
  template <typename IpamIdT = Aws::String>
  void SetIpamId(IpamIdT&& value) {
    m_ipamIdHasBeenSet = true;
    m_ipamId = std::forward<IpamIdT>(value);
  }
  template <typename IpamIdT = Aws::String>
  CreateIpamScopeRequest& WithIpamId(IpamIdT&& value) {
    SetIpamId(std::forward<IpamIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description for the scope you're creating.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateIpamScopeRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key/value combination of a tag assigned to the resource. Use the tag key
   * in the filter name and the tag value as the filter value. For example, to find
   * all resources that have a tag with the key <code>Owner</code> and the value
   * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
   * <code>TeamA</code> for the filter value.</p>
   */
  inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
  inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  void SetTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications = std::forward<TagSpecificationsT>(value);
  }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  CreateIpamScopeRequest& WithTagSpecifications(TagSpecificationsT&& value) {
    SetTagSpecifications(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  template <typename TagSpecificationsT = TagSpecification>
  CreateIpamScopeRequest& AddTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. For more information, see <a
   * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
   * idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateIpamScopeRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
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
  CreateIpamScopeRequest& WithExternalAuthorityConfiguration(ExternalAuthorityConfigurationT&& value) {
    SetExternalAuthorityConfiguration(std::forward<ExternalAuthorityConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};

  Aws::String m_ipamId;

  Aws::String m_description;

  Aws::Vector<TagSpecification> m_tagSpecifications;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  ExternalAuthorityConfiguration m_externalAuthorityConfiguration;
  bool m_dryRunHasBeenSet = false;
  bool m_ipamIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tagSpecificationsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_externalAuthorityConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
