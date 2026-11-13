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
#include <aws/ec2/model/FlexCostAllocationNetworkResourceScope.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class AssociateNetworkingFlexCostAllocationPolicyRequest : public EC2Request {
 public:
  AWS_EC2_API AssociateNetworkingFlexCostAllocationPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateNetworkingFlexCostAllocationPolicy"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the flex cost allocation policy to associate. This parameter is
   * required.</p>
   */
  inline const Aws::String& GetFcaPolicyId() const { return m_fcaPolicyId; }
  inline bool FcaPolicyIdHasBeenSet() const { return m_fcaPolicyIdHasBeenSet; }
  template <typename FcaPolicyIdT = Aws::String>
  void SetFcaPolicyId(FcaPolicyIdT&& value) {
    m_fcaPolicyIdHasBeenSet = true;
    m_fcaPolicyId = std::forward<FcaPolicyIdT>(value);
  }
  template <typename FcaPolicyIdT = Aws::String>
  AssociateNetworkingFlexCostAllocationPolicyRequest& WithFcaPolicyId(FcaPolicyIdT&& value) {
    SetFcaPolicyId(std::forward<FcaPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the network resources to associate with the policy. You can
   * specify from 1 to 20 resource IDs.</p> <p>You must specify
   * <code>NetworkResourceIds</code>, <code>NetworkResourceScope</code>, or both. A
   * request can include at most 20 distinct resources in total.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNetworkResourceIds() const { return m_networkResourceIds; }
  inline bool NetworkResourceIdsHasBeenSet() const { return m_networkResourceIdsHasBeenSet; }
  template <typename NetworkResourceIdsT = Aws::Vector<Aws::String>>
  void SetNetworkResourceIds(NetworkResourceIdsT&& value) {
    m_networkResourceIdsHasBeenSet = true;
    m_networkResourceIds = std::forward<NetworkResourceIdsT>(value);
  }
  template <typename NetworkResourceIdsT = Aws::Vector<Aws::String>>
  AssociateNetworkingFlexCostAllocationPolicyRequest& WithNetworkResourceIds(NetworkResourceIdsT&& value) {
    SetNetworkResourceIds(std::forward<NetworkResourceIdsT>(value));
    return *this;
  }
  template <typename NetworkResourceIdsT = Aws::String>
  AssociateNetworkingFlexCostAllocationPolicyRequest& AddNetworkResourceIds(NetworkResourceIdsT&& value) {
    m_networkResourceIdsHasBeenSet = true;
    m_networkResourceIds.emplace_back(std::forward<NetworkResourceIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope of network resources to associate with the policy. Use a scope to
   * associate the policy with the resources in an account, Amazon VPC, or
   * subnet.</p> <p>You must specify <code>NetworkResourceScope</code>,
   * <code>NetworkResourceIds</code>, or both.</p>
   */
  inline const FlexCostAllocationNetworkResourceScope& GetNetworkResourceScope() const { return m_networkResourceScope; }
  inline bool NetworkResourceScopeHasBeenSet() const { return m_networkResourceScopeHasBeenSet; }
  template <typename NetworkResourceScopeT = FlexCostAllocationNetworkResourceScope>
  void SetNetworkResourceScope(NetworkResourceScopeT&& value) {
    m_networkResourceScopeHasBeenSet = true;
    m_networkResourceScope = std::forward<NetworkResourceScopeT>(value);
  }
  template <typename NetworkResourceScopeT = FlexCostAllocationNetworkResourceScope>
  AssociateNetworkingFlexCostAllocationPolicyRequest& WithNetworkResourceScope(NetworkResourceScopeT&& value) {
    SetNetworkResourceScope(std::forward<NetworkResourceScopeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
   * of the request. For more information, see <a
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
  AssociateNetworkingFlexCostAllocationPolicyRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
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
  inline AssociateNetworkingFlexCostAllocationPolicyRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_fcaPolicyId;

  Aws::Vector<Aws::String> m_networkResourceIds;

  FlexCostAllocationNetworkResourceScope m_networkResourceScope;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  bool m_dryRun{false};
  bool m_fcaPolicyIdHasBeenSet = false;
  bool m_networkResourceIdsHasBeenSet = false;
  bool m_networkResourceScopeHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
