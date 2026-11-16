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
class RejectVpcEndpointConnectionsRequest : public EC2Request {
 public:
  AWS_EC2_API RejectVpcEndpointConnectionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RejectVpcEndpointConnections"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
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
  inline RejectVpcEndpointConnectionsRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the service.</p>
   */
  inline const Aws::String& GetServiceId() const { return m_serviceId; }
  inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
  template <typename ServiceIdT = Aws::String>
  void SetServiceId(ServiceIdT&& value) {
    m_serviceIdHasBeenSet = true;
    m_serviceId = std::forward<ServiceIdT>(value);
  }
  template <typename ServiceIdT = Aws::String>
  RejectVpcEndpointConnectionsRequest& WithServiceId(ServiceIdT&& value) {
    SetServiceId(std::forward<ServiceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the VPC endpoints.</p> <p>You must specify either
   * <code>VpcEndpointIds</code> or <code>TransitGatewayAttachmentIds</code>, but not
   * both.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVpcEndpointIds() const { return m_vpcEndpointIds; }
  inline bool VpcEndpointIdsHasBeenSet() const { return m_vpcEndpointIdsHasBeenSet; }
  template <typename VpcEndpointIdsT = Aws::Vector<Aws::String>>
  void SetVpcEndpointIds(VpcEndpointIdsT&& value) {
    m_vpcEndpointIdsHasBeenSet = true;
    m_vpcEndpointIds = std::forward<VpcEndpointIdsT>(value);
  }
  template <typename VpcEndpointIdsT = Aws::Vector<Aws::String>>
  RejectVpcEndpointConnectionsRequest& WithVpcEndpointIds(VpcEndpointIdsT&& value) {
    SetVpcEndpointIds(std::forward<VpcEndpointIdsT>(value));
    return *this;
  }
  template <typename VpcEndpointIdsT = Aws::String>
  RejectVpcEndpointConnectionsRequest& AddVpcEndpointIds(VpcEndpointIdsT&& value) {
    m_vpcEndpointIdsHasBeenSet = true;
    m_vpcEndpointIds.emplace_back(std::forward<VpcEndpointIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the transit gateway attachments to reject. This parameter is
   * supported only for Gateway Load Balancer endpoint services.</p> <p>You must
   * specify either <code>VpcEndpointIds</code> or
   * <code>TransitGatewayAttachmentIds</code>, but not both.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTransitGatewayAttachmentIds() const { return m_transitGatewayAttachmentIds; }
  inline bool TransitGatewayAttachmentIdsHasBeenSet() const { return m_transitGatewayAttachmentIdsHasBeenSet; }
  template <typename TransitGatewayAttachmentIdsT = Aws::Vector<Aws::String>>
  void SetTransitGatewayAttachmentIds(TransitGatewayAttachmentIdsT&& value) {
    m_transitGatewayAttachmentIdsHasBeenSet = true;
    m_transitGatewayAttachmentIds = std::forward<TransitGatewayAttachmentIdsT>(value);
  }
  template <typename TransitGatewayAttachmentIdsT = Aws::Vector<Aws::String>>
  RejectVpcEndpointConnectionsRequest& WithTransitGatewayAttachmentIds(TransitGatewayAttachmentIdsT&& value) {
    SetTransitGatewayAttachmentIds(std::forward<TransitGatewayAttachmentIdsT>(value));
    return *this;
  }
  template <typename TransitGatewayAttachmentIdsT = Aws::String>
  RejectVpcEndpointConnectionsRequest& AddTransitGatewayAttachmentIds(TransitGatewayAttachmentIdsT&& value) {
    m_transitGatewayAttachmentIdsHasBeenSet = true;
    m_transitGatewayAttachmentIds.emplace_back(std::forward<TransitGatewayAttachmentIdsT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};

  Aws::String m_serviceId;

  Aws::Vector<Aws::String> m_vpcEndpointIds;

  Aws::Vector<Aws::String> m_transitGatewayAttachmentIds;
  bool m_dryRunHasBeenSet = false;
  bool m_serviceIdHasBeenSet = false;
  bool m_vpcEndpointIdsHasBeenSet = false;
  bool m_transitGatewayAttachmentIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
