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
class DisableIpamPolicyRequest : public EC2Request {
 public:
  AWS_EC2_API DisableIpamPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DisableIpamPolicy"; }

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
  inline DisableIpamPolicyRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM policy to disable.</p>
   */
  inline const Aws::String& GetIpamPolicyId() const { return m_ipamPolicyId; }
  inline bool IpamPolicyIdHasBeenSet() const { return m_ipamPolicyIdHasBeenSet; }
  template <typename IpamPolicyIdT = Aws::String>
  void SetIpamPolicyId(IpamPolicyIdT&& value) {
    m_ipamPolicyIdHasBeenSet = true;
    m_ipamPolicyId = std::forward<IpamPolicyIdT>(value);
  }
  template <typename IpamPolicyIdT = Aws::String>
  DisableIpamPolicyRequest& WithIpamPolicyId(IpamPolicyIdT&& value) {
    SetIpamPolicyId(std::forward<IpamPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services Organizations target for which to disable
   * the IPAM policy. This parameter is required only when IPAM is integrated with
   * Amazon Web Services Organizations. When IPAM is not integrated with Amazon Web
   * Services Organizations, omit this parameter and the policy will be disabled for
   * the current account.</p> <p>A target can be an individual Amazon Web Services
   * account or an entity within an Amazon Web Services Organization to which an IPAM
   * policy can be applied.</p>
   */
  inline const Aws::String& GetOrganizationTargetId() const { return m_organizationTargetId; }
  inline bool OrganizationTargetIdHasBeenSet() const { return m_organizationTargetIdHasBeenSet; }
  template <typename OrganizationTargetIdT = Aws::String>
  void SetOrganizationTargetId(OrganizationTargetIdT&& value) {
    m_organizationTargetIdHasBeenSet = true;
    m_organizationTargetId = std::forward<OrganizationTargetIdT>(value);
  }
  template <typename OrganizationTargetIdT = Aws::String>
  DisableIpamPolicyRequest& WithOrganizationTargetId(OrganizationTargetIdT&& value) {
    SetOrganizationTargetId(std::forward<OrganizationTargetIdT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};

  Aws::String m_ipamPolicyId;

  Aws::String m_organizationTargetId;
  bool m_dryRunHasBeenSet = false;
  bool m_ipamPolicyIdHasBeenSet = false;
  bool m_organizationTargetIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
