/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class DeleteIpamPrefixListResolverTargetRequest : public EC2Request {
 public:
  AWS_EC2_API DeleteIpamPrefixListResolverTargetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteIpamPrefixListResolverTarget"; }

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
  inline DeleteIpamPrefixListResolverTargetRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM prefix list resolver target to delete.</p>
   */
  inline const Aws::String& GetIpamPrefixListResolverTargetId() const { return m_ipamPrefixListResolverTargetId; }
  inline bool IpamPrefixListResolverTargetIdHasBeenSet() const { return m_ipamPrefixListResolverTargetIdHasBeenSet; }
  template <typename IpamPrefixListResolverTargetIdT = Aws::String>
  void SetIpamPrefixListResolverTargetId(IpamPrefixListResolverTargetIdT&& value) {
    m_ipamPrefixListResolverTargetIdHasBeenSet = true;
    m_ipamPrefixListResolverTargetId = std::forward<IpamPrefixListResolverTargetIdT>(value);
  }
  template <typename IpamPrefixListResolverTargetIdT = Aws::String>
  DeleteIpamPrefixListResolverTargetRequest& WithIpamPrefixListResolverTargetId(IpamPrefixListResolverTargetIdT&& value) {
    SetIpamPrefixListResolverTargetId(std::forward<IpamPrefixListResolverTargetIdT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};

  Aws::String m_ipamPrefixListResolverTargetId;
  bool m_dryRunHasBeenSet = false;
  bool m_ipamPrefixListResolverTargetIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
