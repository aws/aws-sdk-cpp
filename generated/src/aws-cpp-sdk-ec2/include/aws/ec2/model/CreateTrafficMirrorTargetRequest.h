/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateTrafficMirrorTargetRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateTrafficMirrorTargetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrafficMirrorTarget"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The network interface ID that is associated with the target.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The network interface ID that is associated with the target.</p>
     */
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }

    /**
     * <p>The network interface ID that is associated with the target.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The network interface ID that is associated with the target.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The network interface ID that is associated with the target.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The network interface ID that is associated with the target.</p>
     */
    inline CreateTrafficMirrorTargetRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The network interface ID that is associated with the target.</p>
     */
    inline CreateTrafficMirrorTargetRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The network interface ID that is associated with the target.</p>
     */
    inline CreateTrafficMirrorTargetRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer that is
     * associated with the target.</p>
     */
    inline const Aws::String& GetNetworkLoadBalancerArn() const{ return m_networkLoadBalancerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer that is
     * associated with the target.</p>
     */
    inline bool NetworkLoadBalancerArnHasBeenSet() const { return m_networkLoadBalancerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer that is
     * associated with the target.</p>
     */
    inline void SetNetworkLoadBalancerArn(const Aws::String& value) { m_networkLoadBalancerArnHasBeenSet = true; m_networkLoadBalancerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer that is
     * associated with the target.</p>
     */
    inline void SetNetworkLoadBalancerArn(Aws::String&& value) { m_networkLoadBalancerArnHasBeenSet = true; m_networkLoadBalancerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer that is
     * associated with the target.</p>
     */
    inline void SetNetworkLoadBalancerArn(const char* value) { m_networkLoadBalancerArnHasBeenSet = true; m_networkLoadBalancerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer that is
     * associated with the target.</p>
     */
    inline CreateTrafficMirrorTargetRequest& WithNetworkLoadBalancerArn(const Aws::String& value) { SetNetworkLoadBalancerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer that is
     * associated with the target.</p>
     */
    inline CreateTrafficMirrorTargetRequest& WithNetworkLoadBalancerArn(Aws::String&& value) { SetNetworkLoadBalancerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer that is
     * associated with the target.</p>
     */
    inline CreateTrafficMirrorTargetRequest& WithNetworkLoadBalancerArn(const char* value) { SetNetworkLoadBalancerArn(value); return *this;}


    /**
     * <p>The description of the Traffic Mirror target.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the Traffic Mirror target.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the Traffic Mirror target.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the Traffic Mirror target.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the Traffic Mirror target.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the Traffic Mirror target.</p>
     */
    inline CreateTrafficMirrorTargetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the Traffic Mirror target.</p>
     */
    inline CreateTrafficMirrorTargetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the Traffic Mirror target.</p>
     */
    inline CreateTrafficMirrorTargetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The tags to assign to the Traffic Mirror target.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to assign to the Traffic Mirror target.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to assign to the Traffic Mirror target.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to assign to the Traffic Mirror target.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to assign to the Traffic Mirror target.</p>
     */
    inline CreateTrafficMirrorTargetRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to assign to the Traffic Mirror target.</p>
     */
    inline CreateTrafficMirrorTargetRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the Traffic Mirror target.</p>
     */
    inline CreateTrafficMirrorTargetRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the Traffic Mirror target.</p>
     */
    inline CreateTrafficMirrorTargetRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateTrafficMirrorTargetRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateTrafficMirrorTargetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateTrafficMirrorTargetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateTrafficMirrorTargetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ID of the Gateway Load Balancer endpoint.</p>
     */
    inline const Aws::String& GetGatewayLoadBalancerEndpointId() const{ return m_gatewayLoadBalancerEndpointId; }

    /**
     * <p>The ID of the Gateway Load Balancer endpoint.</p>
     */
    inline bool GatewayLoadBalancerEndpointIdHasBeenSet() const { return m_gatewayLoadBalancerEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the Gateway Load Balancer endpoint.</p>
     */
    inline void SetGatewayLoadBalancerEndpointId(const Aws::String& value) { m_gatewayLoadBalancerEndpointIdHasBeenSet = true; m_gatewayLoadBalancerEndpointId = value; }

    /**
     * <p>The ID of the Gateway Load Balancer endpoint.</p>
     */
    inline void SetGatewayLoadBalancerEndpointId(Aws::String&& value) { m_gatewayLoadBalancerEndpointIdHasBeenSet = true; m_gatewayLoadBalancerEndpointId = std::move(value); }

    /**
     * <p>The ID of the Gateway Load Balancer endpoint.</p>
     */
    inline void SetGatewayLoadBalancerEndpointId(const char* value) { m_gatewayLoadBalancerEndpointIdHasBeenSet = true; m_gatewayLoadBalancerEndpointId.assign(value); }

    /**
     * <p>The ID of the Gateway Load Balancer endpoint.</p>
     */
    inline CreateTrafficMirrorTargetRequest& WithGatewayLoadBalancerEndpointId(const Aws::String& value) { SetGatewayLoadBalancerEndpointId(value); return *this;}

    /**
     * <p>The ID of the Gateway Load Balancer endpoint.</p>
     */
    inline CreateTrafficMirrorTargetRequest& WithGatewayLoadBalancerEndpointId(Aws::String&& value) { SetGatewayLoadBalancerEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Gateway Load Balancer endpoint.</p>
     */
    inline CreateTrafficMirrorTargetRequest& WithGatewayLoadBalancerEndpointId(const char* value) { SetGatewayLoadBalancerEndpointId(value); return *this;}

  private:

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_networkLoadBalancerArn;
    bool m_networkLoadBalancerArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_gatewayLoadBalancerEndpointId;
    bool m_gatewayLoadBalancerEndpointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
