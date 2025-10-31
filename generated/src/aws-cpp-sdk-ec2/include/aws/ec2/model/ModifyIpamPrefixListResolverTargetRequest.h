/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class ModifyIpamPrefixListResolverTargetRequest : public EC2Request {
 public:
  AWS_EC2_API ModifyIpamPrefixListResolverTargetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyIpamPrefixListResolverTarget"; }

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
  inline ModifyIpamPrefixListResolverTargetRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM prefix list resolver target to modify.</p>
   */
  inline const Aws::String& GetIpamPrefixListResolverTargetId() const { return m_ipamPrefixListResolverTargetId; }
  inline bool IpamPrefixListResolverTargetIdHasBeenSet() const { return m_ipamPrefixListResolverTargetIdHasBeenSet; }
  template <typename IpamPrefixListResolverTargetIdT = Aws::String>
  void SetIpamPrefixListResolverTargetId(IpamPrefixListResolverTargetIdT&& value) {
    m_ipamPrefixListResolverTargetIdHasBeenSet = true;
    m_ipamPrefixListResolverTargetId = std::forward<IpamPrefixListResolverTargetIdT>(value);
  }
  template <typename IpamPrefixListResolverTargetIdT = Aws::String>
  ModifyIpamPrefixListResolverTargetRequest& WithIpamPrefixListResolverTargetId(IpamPrefixListResolverTargetIdT&& value) {
    SetIpamPrefixListResolverTargetId(std::forward<IpamPrefixListResolverTargetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The desired version of the prefix list to target. This allows you to pin the
   * target to a specific version.</p>
   */
  inline long long GetDesiredVersion() const { return m_desiredVersion; }
  inline bool DesiredVersionHasBeenSet() const { return m_desiredVersionHasBeenSet; }
  inline void SetDesiredVersion(long long value) {
    m_desiredVersionHasBeenSet = true;
    m_desiredVersion = value;
  }
  inline ModifyIpamPrefixListResolverTargetRequest& WithDesiredVersion(long long value) {
    SetDesiredVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the resolver target should automatically track the latest
   * version of the prefix list. When enabled, the target will always synchronize
   * with the most current version.</p> <p>Choose this for automatic updates when you
   * want your prefix lists to stay current with infrastructure changes without
   * manual intervention.</p>
   */
  inline bool GetTrackLatestVersion() const { return m_trackLatestVersion; }
  inline bool TrackLatestVersionHasBeenSet() const { return m_trackLatestVersionHasBeenSet; }
  inline void SetTrackLatestVersion(bool value) {
    m_trackLatestVersionHasBeenSet = true;
    m_trackLatestVersion = value;
  }
  inline ModifyIpamPrefixListResolverTargetRequest& WithTrackLatestVersion(bool value) {
    SetTrackLatestVersion(value);
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
  ModifyIpamPrefixListResolverTargetRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};
  bool m_dryRunHasBeenSet = false;

  Aws::String m_ipamPrefixListResolverTargetId;
  bool m_ipamPrefixListResolverTargetIdHasBeenSet = false;

  long long m_desiredVersion{0};
  bool m_desiredVersionHasBeenSet = false;

  bool m_trackLatestVersion{false};
  bool m_trackLatestVersionHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
