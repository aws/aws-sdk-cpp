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
#include <aws/ec2/model/Rir.h>
#include <aws/ec2/model/TagSpecification.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class CreateIpamInternetRegistryAssociationRequest : public EC2Request {
 public:
  AWS_EC2_API CreateIpamInternetRegistryAssociationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateIpamInternetRegistryAssociation"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>Checks whether you have the required permissions for the operation, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline CreateIpamInternetRegistryAssociationRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM to associate with the internet registry.</p>
   */
  inline const Aws::String& GetIpamId() const { return m_ipamId; }
  inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }
  template <typename IpamIdT = Aws::String>
  void SetIpamId(IpamIdT&& value) {
    m_ipamIdHasBeenSet = true;
    m_ipamId = std::forward<IpamIdT>(value);
  }
  template <typename IpamIdT = Aws::String>
  CreateIpamInternetRegistryAssociationRequest& WithIpamId(IpamIdT&& value) {
    SetIpamId(std::forward<IpamIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Regional Internet Registry to associate with. Possible values:</p> <ul>
   * <li> <p> <code>ripe</code> - RIPE NCC (Europe, the Middle East, and Central
   * Asia).</p> </li> <li> <p> <code>apnic</code> - APNIC (Asia Pacific).</p> </li>
   * <li> <p> <code>arin</code> - ARIN (North America).</p> </li> <li> <p>
   * <code>lacnic</code> - LACNIC (Latin America and the Caribbean).</p> </li> </ul>
   */
  inline Rir GetRir() const { return m_rir; }
  inline bool RirHasBeenSet() const { return m_rirHasBeenSet; }
  inline void SetRir(Rir value) {
    m_rirHasBeenSet = true;
    m_rir = value;
  }
  inline CreateIpamInternetRegistryAssociationRequest& WithRir(Rir value) {
    SetRir(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The organization handle at the internet registry (for example, a RIPE NCC
   * organization ID or ARIN Org ID).</p>
   */
  inline const Aws::String& GetOrganizationHandle() const { return m_organizationHandle; }
  inline bool OrganizationHandleHasBeenSet() const { return m_organizationHandleHasBeenSet; }
  template <typename OrganizationHandleT = Aws::String>
  void SetOrganizationHandle(OrganizationHandleT&& value) {
    m_organizationHandleHasBeenSet = true;
    m_organizationHandle = std::forward<OrganizationHandleT>(value);
  }
  template <typename OrganizationHandleT = Aws::String>
  CreateIpamInternetRegistryAssociationRequest& WithOrganizationHandle(OrganizationHandleT&& value) {
    SetOrganizationHandle(std::forward<OrganizationHandleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description for the internet registry association.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateIpamInternetRegistryAssociationRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to assign to the internet registry association.</p>
   */
  inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
  inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  void SetTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications = std::forward<TagSpecificationsT>(value);
  }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  CreateIpamInternetRegistryAssociationRequest& WithTagSpecifications(TagSpecificationsT&& value) {
    SetTagSpecifications(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  template <typename TagSpecificationsT = TagSpecification>
  CreateIpamInternetRegistryAssociationRequest& AddTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the operation completes no
   * more than one time. If this token matches a previous request, the operation
   * ignores the request, but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateIpamInternetRegistryAssociationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};

  Aws::String m_ipamId;

  Rir m_rir{Rir::NOT_SET};

  Aws::String m_organizationHandle;

  Aws::String m_description;

  Aws::Vector<TagSpecification> m_tagSpecifications;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_dryRunHasBeenSet = false;
  bool m_ipamIdHasBeenSet = false;
  bool m_rirHasBeenSet = false;
  bool m_organizationHandleHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tagSpecificationsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
