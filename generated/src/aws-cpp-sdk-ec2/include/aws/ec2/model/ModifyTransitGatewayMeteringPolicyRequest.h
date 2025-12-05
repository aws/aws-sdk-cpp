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
class ModifyTransitGatewayMeteringPolicyRequest : public EC2Request {
 public:
  AWS_EC2_API ModifyTransitGatewayMeteringPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyTransitGatewayMeteringPolicy"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the transit gateway metering policy to modify.</p>
   */
  inline const Aws::String& GetTransitGatewayMeteringPolicyId() const { return m_transitGatewayMeteringPolicyId; }
  inline bool TransitGatewayMeteringPolicyIdHasBeenSet() const { return m_transitGatewayMeteringPolicyIdHasBeenSet; }
  template <typename TransitGatewayMeteringPolicyIdT = Aws::String>
  void SetTransitGatewayMeteringPolicyId(TransitGatewayMeteringPolicyIdT&& value) {
    m_transitGatewayMeteringPolicyIdHasBeenSet = true;
    m_transitGatewayMeteringPolicyId = std::forward<TransitGatewayMeteringPolicyIdT>(value);
  }
  template <typename TransitGatewayMeteringPolicyIdT = Aws::String>
  ModifyTransitGatewayMeteringPolicyRequest& WithTransitGatewayMeteringPolicyId(TransitGatewayMeteringPolicyIdT&& value) {
    SetTransitGatewayMeteringPolicyId(std::forward<TransitGatewayMeteringPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of middlebox attachments to add to the metering policy.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAddMiddleboxAttachmentIds() const { return m_addMiddleboxAttachmentIds; }
  inline bool AddMiddleboxAttachmentIdsHasBeenSet() const { return m_addMiddleboxAttachmentIdsHasBeenSet; }
  template <typename AddMiddleboxAttachmentIdsT = Aws::Vector<Aws::String>>
  void SetAddMiddleboxAttachmentIds(AddMiddleboxAttachmentIdsT&& value) {
    m_addMiddleboxAttachmentIdsHasBeenSet = true;
    m_addMiddleboxAttachmentIds = std::forward<AddMiddleboxAttachmentIdsT>(value);
  }
  template <typename AddMiddleboxAttachmentIdsT = Aws::Vector<Aws::String>>
  ModifyTransitGatewayMeteringPolicyRequest& WithAddMiddleboxAttachmentIds(AddMiddleboxAttachmentIdsT&& value) {
    SetAddMiddleboxAttachmentIds(std::forward<AddMiddleboxAttachmentIdsT>(value));
    return *this;
  }
  template <typename AddMiddleboxAttachmentIdsT = Aws::String>
  ModifyTransitGatewayMeteringPolicyRequest& AddAddMiddleboxAttachmentIds(AddMiddleboxAttachmentIdsT&& value) {
    m_addMiddleboxAttachmentIdsHasBeenSet = true;
    m_addMiddleboxAttachmentIds.emplace_back(std::forward<AddMiddleboxAttachmentIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of middlebox attachments to remove from the metering policy.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRemoveMiddleboxAttachmentIds() const { return m_removeMiddleboxAttachmentIds; }
  inline bool RemoveMiddleboxAttachmentIdsHasBeenSet() const { return m_removeMiddleboxAttachmentIdsHasBeenSet; }
  template <typename RemoveMiddleboxAttachmentIdsT = Aws::Vector<Aws::String>>
  void SetRemoveMiddleboxAttachmentIds(RemoveMiddleboxAttachmentIdsT&& value) {
    m_removeMiddleboxAttachmentIdsHasBeenSet = true;
    m_removeMiddleboxAttachmentIds = std::forward<RemoveMiddleboxAttachmentIdsT>(value);
  }
  template <typename RemoveMiddleboxAttachmentIdsT = Aws::Vector<Aws::String>>
  ModifyTransitGatewayMeteringPolicyRequest& WithRemoveMiddleboxAttachmentIds(RemoveMiddleboxAttachmentIdsT&& value) {
    SetRemoveMiddleboxAttachmentIds(std::forward<RemoveMiddleboxAttachmentIdsT>(value));
    return *this;
  }
  template <typename RemoveMiddleboxAttachmentIdsT = Aws::String>
  ModifyTransitGatewayMeteringPolicyRequest& AddRemoveMiddleboxAttachmentIds(RemoveMiddleboxAttachmentIdsT&& value) {
    m_removeMiddleboxAttachmentIdsHasBeenSet = true;
    m_removeMiddleboxAttachmentIds.emplace_back(std::forward<RemoveMiddleboxAttachmentIdsT>(value));
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
  inline ModifyTransitGatewayMeteringPolicyRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_transitGatewayMeteringPolicyId;

  Aws::Vector<Aws::String> m_addMiddleboxAttachmentIds;

  Aws::Vector<Aws::String> m_removeMiddleboxAttachmentIds;

  bool m_dryRun{false};
  bool m_transitGatewayMeteringPolicyIdHasBeenSet = false;
  bool m_addMiddleboxAttachmentIdsHasBeenSet = false;
  bool m_removeMiddleboxAttachmentIdsHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
