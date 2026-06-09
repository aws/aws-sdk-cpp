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
class ModifyIpamPoolAllocationRequest : public EC2Request {
 public:
  AWS_EC2_API ModifyIpamPoolAllocationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyIpamPoolAllocation"; }

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
  inline ModifyIpamPoolAllocationRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM pool allocation you want to modify.</p>
   */
  inline const Aws::String& GetIpamPoolAllocationId() const { return m_ipamPoolAllocationId; }
  inline bool IpamPoolAllocationIdHasBeenSet() const { return m_ipamPoolAllocationIdHasBeenSet; }
  template <typename IpamPoolAllocationIdT = Aws::String>
  void SetIpamPoolAllocationId(IpamPoolAllocationIdT&& value) {
    m_ipamPoolAllocationIdHasBeenSet = true;
    m_ipamPoolAllocationId = std::forward<IpamPoolAllocationIdT>(value);
  }
  template <typename IpamPoolAllocationIdT = Aws::String>
  ModifyIpamPoolAllocationRequest& WithIpamPoolAllocationId(IpamPoolAllocationIdT&& value) {
    SetIpamPoolAllocationId(std::forward<IpamPoolAllocationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new description for the IPAM pool allocation. If you submit a
   * <code>null</code> value, the description is removed from the allocation.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ModifyIpamPoolAllocationRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};

  Aws::String m_ipamPoolAllocationId;

  Aws::String m_description;
  bool m_dryRunHasBeenSet = false;
  bool m_ipamPoolAllocationIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
