/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
class CreateTransitGatewayMeteringPolicyRequest : public EC2Request {
 public:
  AWS_EC2_API CreateTransitGatewayMeteringPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateTransitGatewayMeteringPolicy"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the transit gateway for which to create the metering policy.</p>
   */
  inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
  inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
  template <typename TransitGatewayIdT = Aws::String>
  void SetTransitGatewayId(TransitGatewayIdT&& value) {
    m_transitGatewayIdHasBeenSet = true;
    m_transitGatewayId = std::forward<TransitGatewayIdT>(value);
  }
  template <typename TransitGatewayIdT = Aws::String>
  CreateTransitGatewayMeteringPolicyRequest& WithTransitGatewayId(TransitGatewayIdT&& value) {
    SetTransitGatewayId(std::forward<TransitGatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the middlebox attachments to include in the metering policy.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMiddleboxAttachmentIds() const { return m_middleboxAttachmentIds; }
  inline bool MiddleboxAttachmentIdsHasBeenSet() const { return m_middleboxAttachmentIdsHasBeenSet; }
  template <typename MiddleboxAttachmentIdsT = Aws::Vector<Aws::String>>
  void SetMiddleboxAttachmentIds(MiddleboxAttachmentIdsT&& value) {
    m_middleboxAttachmentIdsHasBeenSet = true;
    m_middleboxAttachmentIds = std::forward<MiddleboxAttachmentIdsT>(value);
  }
  template <typename MiddleboxAttachmentIdsT = Aws::Vector<Aws::String>>
  CreateTransitGatewayMeteringPolicyRequest& WithMiddleboxAttachmentIds(MiddleboxAttachmentIdsT&& value) {
    SetMiddleboxAttachmentIds(std::forward<MiddleboxAttachmentIdsT>(value));
    return *this;
  }
  template <typename MiddleboxAttachmentIdsT = Aws::String>
  CreateTransitGatewayMeteringPolicyRequest& AddMiddleboxAttachmentIds(MiddleboxAttachmentIdsT&& value) {
    m_middleboxAttachmentIdsHasBeenSet = true;
    m_middleboxAttachmentIds.emplace_back(std::forward<MiddleboxAttachmentIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to assign to the metering policy.</p>
   */
  inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
  inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  void SetTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications = std::forward<TagSpecificationsT>(value);
  }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  CreateTransitGatewayMeteringPolicyRequest& WithTagSpecifications(TagSpecificationsT&& value) {
    SetTagSpecifications(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  template <typename TagSpecificationsT = TagSpecification>
  CreateTransitGatewayMeteringPolicyRequest& AddTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value));
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
  inline CreateTransitGatewayMeteringPolicyRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_transitGatewayId;
  bool m_transitGatewayIdHasBeenSet = false;

  Aws::Vector<Aws::String> m_middleboxAttachmentIds;
  bool m_middleboxAttachmentIdsHasBeenSet = false;

  Aws::Vector<TagSpecification> m_tagSpecifications;
  bool m_tagSpecificationsHasBeenSet = false;

  bool m_dryRun{false};
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
