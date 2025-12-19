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
#include <aws/ec2/model/TagSpecification.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class CreateIpamPrefixListResolverTargetRequest : public EC2Request {
 public:
  AWS_EC2_API CreateIpamPrefixListResolverTargetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateIpamPrefixListResolverTarget"; }

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
  inline CreateIpamPrefixListResolverTargetRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM prefix list resolver that will manage the synchronization
   * of CIDRs to the target prefix list.</p>
   */
  inline const Aws::String& GetIpamPrefixListResolverId() const { return m_ipamPrefixListResolverId; }
  inline bool IpamPrefixListResolverIdHasBeenSet() const { return m_ipamPrefixListResolverIdHasBeenSet; }
  template <typename IpamPrefixListResolverIdT = Aws::String>
  void SetIpamPrefixListResolverId(IpamPrefixListResolverIdT&& value) {
    m_ipamPrefixListResolverIdHasBeenSet = true;
    m_ipamPrefixListResolverId = std::forward<IpamPrefixListResolverIdT>(value);
  }
  template <typename IpamPrefixListResolverIdT = Aws::String>
  CreateIpamPrefixListResolverTargetRequest& WithIpamPrefixListResolverId(IpamPrefixListResolverIdT&& value) {
    SetIpamPrefixListResolverId(std::forward<IpamPrefixListResolverIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the managed prefix list that will be synchronized with CIDRs
   * selected by the IPAM prefix list resolver. This prefix list becomes an IPAM
   * managed prefix list.</p> <p>An IPAM-managed prefix list is a customer-managed
   * prefix list that has been associated with an IPAM prefix list resolver target.
   * When a prefix list becomes IPAM managed, its CIDRs are automatically
   * synchronized based on the IPAM prefix list resolver's CIDR selection rules, and
   * direct CIDR modifications are restricted.</p>
   */
  inline const Aws::String& GetPrefixListId() const { return m_prefixListId; }
  inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }
  template <typename PrefixListIdT = Aws::String>
  void SetPrefixListId(PrefixListIdT&& value) {
    m_prefixListIdHasBeenSet = true;
    m_prefixListId = std::forward<PrefixListIdT>(value);
  }
  template <typename PrefixListIdT = Aws::String>
  CreateIpamPrefixListResolverTargetRequest& WithPrefixListId(PrefixListIdT&& value) {
    SetPrefixListId(std::forward<PrefixListIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region where the prefix list is located. This is
   * required when referencing a prefix list in a different Region.</p>
   */
  inline const Aws::String& GetPrefixListRegion() const { return m_prefixListRegion; }
  inline bool PrefixListRegionHasBeenSet() const { return m_prefixListRegionHasBeenSet; }
  template <typename PrefixListRegionT = Aws::String>
  void SetPrefixListRegion(PrefixListRegionT&& value) {
    m_prefixListRegionHasBeenSet = true;
    m_prefixListRegion = std::forward<PrefixListRegionT>(value);
  }
  template <typename PrefixListRegionT = Aws::String>
  CreateIpamPrefixListResolverTargetRequest& WithPrefixListRegion(PrefixListRegionT&& value) {
    SetPrefixListRegion(std::forward<PrefixListRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific version of the prefix list to target. If not specified, the
   * resolver will target the latest version.</p>
   */
  inline long long GetDesiredVersion() const { return m_desiredVersion; }
  inline bool DesiredVersionHasBeenSet() const { return m_desiredVersionHasBeenSet; }
  inline void SetDesiredVersion(long long value) {
    m_desiredVersionHasBeenSet = true;
    m_desiredVersion = value;
  }
  inline CreateIpamPrefixListResolverTargetRequest& WithDesiredVersion(long long value) {
    SetDesiredVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the resolver target should automatically track the latest
   * version of the prefix list. When enabled, the target will always synchronize
   * with the most current version of the prefix list.</p> <p>Choose this for
   * automatic updates when you want your prefix lists to stay current with
   * infrastructure changes without manual intervention.</p>
   */
  inline bool GetTrackLatestVersion() const { return m_trackLatestVersion; }
  inline bool TrackLatestVersionHasBeenSet() const { return m_trackLatestVersionHasBeenSet; }
  inline void SetTrackLatestVersion(bool value) {
    m_trackLatestVersionHasBeenSet = true;
    m_trackLatestVersion = value;
  }
  inline CreateIpamPrefixListResolverTargetRequest& WithTrackLatestVersion(bool value) {
    SetTrackLatestVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to apply to the IPAM prefix list resolver target during creation.
   * Tags help you organize and manage your Amazon Web Services resources.</p>
   */
  inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
  inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  void SetTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications = std::forward<TagSpecificationsT>(value);
  }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  CreateIpamPrefixListResolverTargetRequest& WithTagSpecifications(TagSpecificationsT&& value) {
    SetTagSpecifications(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  template <typename TagSpecificationsT = TagSpecification>
  CreateIpamPrefixListResolverTargetRequest& AddTagSpecifications(TagSpecificationsT&& value) {
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
  CreateIpamPrefixListResolverTargetRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};

  Aws::String m_ipamPrefixListResolverId;

  Aws::String m_prefixListId;

  Aws::String m_prefixListRegion;

  long long m_desiredVersion{0};

  bool m_trackLatestVersion{false};

  Aws::Vector<TagSpecification> m_tagSpecifications;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_dryRunHasBeenSet = false;
  bool m_ipamPrefixListResolverIdHasBeenSet = false;
  bool m_prefixListIdHasBeenSet = false;
  bool m_prefixListRegionHasBeenSet = false;
  bool m_desiredVersionHasBeenSet = false;
  bool m_trackLatestVersionHasBeenSet = false;
  bool m_tagSpecificationsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
