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
class GetNetworkingFlexCostAllocationPolicyVersionsRequest : public EC2Request {
 public:
  AWS_EC2_API GetNetworkingFlexCostAllocationPolicyVersionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetNetworkingFlexCostAllocationPolicyVersions"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the flex cost allocation policy. This parameter is required.</p>
   */
  inline const Aws::String& GetFcaPolicyId() const { return m_fcaPolicyId; }
  inline bool FcaPolicyIdHasBeenSet() const { return m_fcaPolicyIdHasBeenSet; }
  template <typename FcaPolicyIdT = Aws::String>
  void SetFcaPolicyId(FcaPolicyIdT&& value) {
    m_fcaPolicyIdHasBeenSet = true;
    m_fcaPolicyId = std::forward<FcaPolicyIdT>(value);
  }
  template <typename FcaPolicyIdT = Aws::String>
  GetNetworkingFlexCostAllocationPolicyVersionsRequest& WithFcaPolicyId(FcaPolicyIdT&& value) {
    SetFcaPolicyId(std::forward<FcaPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The policy versions to include in the results.</p>
   */
  inline const Aws::Vector<int>& GetVersionsToInclude() const { return m_versionsToInclude; }
  inline bool VersionsToIncludeHasBeenSet() const { return m_versionsToIncludeHasBeenSet; }
  template <typename VersionsToIncludeT = Aws::Vector<int>>
  void SetVersionsToInclude(VersionsToIncludeT&& value) {
    m_versionsToIncludeHasBeenSet = true;
    m_versionsToInclude = std::forward<VersionsToIncludeT>(value);
  }
  template <typename VersionsToIncludeT = Aws::Vector<int>>
  GetNetworkingFlexCostAllocationPolicyVersionsRequest& WithVersionsToInclude(VersionsToIncludeT&& value) {
    SetVersionsToInclude(std::forward<VersionsToIncludeT>(value));
    return *this;
  }
  inline GetNetworkingFlexCostAllocationPolicyVersionsRequest& AddVersionsToInclude(int value) {
    m_versionsToIncludeHasBeenSet = true;
    m_versionsToInclude.push_back(value);
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
  inline GetNetworkingFlexCostAllocationPolicyVersionsRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_fcaPolicyId;

  Aws::Vector<int> m_versionsToInclude;

  bool m_dryRun{false};
  bool m_fcaPolicyIdHasBeenSet = false;
  bool m_versionsToIncludeHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
