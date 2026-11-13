/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class DeleteNetworkingFlexCostAllocationPoliciesRequest : public EC2Request {
 public:
  AWS_EC2_API DeleteNetworkingFlexCostAllocationPoliciesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteNetworkingFlexCostAllocationPolicies"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The IDs of the flex cost allocation policies to delete. You can specify up to
   * 50 policy IDs. This parameter is required.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFcaPolicyIds() const { return m_fcaPolicyIds; }
  inline bool FcaPolicyIdsHasBeenSet() const { return m_fcaPolicyIdsHasBeenSet; }
  template <typename FcaPolicyIdsT = Aws::Vector<Aws::String>>
  void SetFcaPolicyIds(FcaPolicyIdsT&& value) {
    m_fcaPolicyIdsHasBeenSet = true;
    m_fcaPolicyIds = std::forward<FcaPolicyIdsT>(value);
  }
  template <typename FcaPolicyIdsT = Aws::Vector<Aws::String>>
  DeleteNetworkingFlexCostAllocationPoliciesRequest& WithFcaPolicyIds(FcaPolicyIdsT&& value) {
    SetFcaPolicyIds(std::forward<FcaPolicyIdsT>(value));
    return *this;
  }
  template <typename FcaPolicyIdsT = Aws::String>
  DeleteNetworkingFlexCostAllocationPoliciesRequest& AddFcaPolicyIds(FcaPolicyIdsT&& value) {
    m_fcaPolicyIdsHasBeenSet = true;
    m_fcaPolicyIds.emplace_back(std::forward<FcaPolicyIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks whether you have the required permissions for the action, without
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
  inline DeleteNetworkingFlexCostAllocationPoliciesRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_fcaPolicyIds;

  bool m_dryRun{false};
  bool m_fcaPolicyIdsHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
