/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ModifyVerifiedAccessEndpointLoadBalancerOptions.h>
#include <aws/ec2/model/ModifyVerifiedAccessEndpointEniOptions.h>
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
  class ModifyVerifiedAccessEndpointRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVerifiedAccessEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVerifiedAccessEndpoint"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline const Aws::String& GetVerifiedAccessEndpointId() const{ return m_verifiedAccessEndpointId; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline bool VerifiedAccessEndpointIdHasBeenSet() const { return m_verifiedAccessEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetVerifiedAccessEndpointId(const Aws::String& value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId = value; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetVerifiedAccessEndpointId(Aws::String&& value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetVerifiedAccessEndpointId(const char* value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline ModifyVerifiedAccessEndpointRequest& WithVerifiedAccessEndpointId(const Aws::String& value) { SetVerifiedAccessEndpointId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline ModifyVerifiedAccessEndpointRequest& WithVerifiedAccessEndpointId(Aws::String&& value) { SetVerifiedAccessEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline ModifyVerifiedAccessEndpointRequest& WithVerifiedAccessEndpointId(const char* value) { SetVerifiedAccessEndpointId(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline const Aws::String& GetVerifiedAccessGroupId() const{ return m_verifiedAccessGroupId; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline bool VerifiedAccessGroupIdHasBeenSet() const { return m_verifiedAccessGroupIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroupId(const Aws::String& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = value; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroupId(Aws::String&& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroupId(const char* value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline ModifyVerifiedAccessEndpointRequest& WithVerifiedAccessGroupId(const Aws::String& value) { SetVerifiedAccessGroupId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline ModifyVerifiedAccessEndpointRequest& WithVerifiedAccessGroupId(Aws::String&& value) { SetVerifiedAccessGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline ModifyVerifiedAccessEndpointRequest& WithVerifiedAccessGroupId(const char* value) { SetVerifiedAccessGroupId(value); return *this;}


    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline const ModifyVerifiedAccessEndpointLoadBalancerOptions& GetLoadBalancerOptions() const{ return m_loadBalancerOptions; }

    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline bool LoadBalancerOptionsHasBeenSet() const { return m_loadBalancerOptionsHasBeenSet; }

    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline void SetLoadBalancerOptions(const ModifyVerifiedAccessEndpointLoadBalancerOptions& value) { m_loadBalancerOptionsHasBeenSet = true; m_loadBalancerOptions = value; }

    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline void SetLoadBalancerOptions(ModifyVerifiedAccessEndpointLoadBalancerOptions&& value) { m_loadBalancerOptionsHasBeenSet = true; m_loadBalancerOptions = std::move(value); }

    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline ModifyVerifiedAccessEndpointRequest& WithLoadBalancerOptions(const ModifyVerifiedAccessEndpointLoadBalancerOptions& value) { SetLoadBalancerOptions(value); return *this;}

    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline ModifyVerifiedAccessEndpointRequest& WithLoadBalancerOptions(ModifyVerifiedAccessEndpointLoadBalancerOptions&& value) { SetLoadBalancerOptions(std::move(value)); return *this;}


    /**
     * <p>The network interface options.</p>
     */
    inline const ModifyVerifiedAccessEndpointEniOptions& GetNetworkInterfaceOptions() const{ return m_networkInterfaceOptions; }

    /**
     * <p>The network interface options.</p>
     */
    inline bool NetworkInterfaceOptionsHasBeenSet() const { return m_networkInterfaceOptionsHasBeenSet; }

    /**
     * <p>The network interface options.</p>
     */
    inline void SetNetworkInterfaceOptions(const ModifyVerifiedAccessEndpointEniOptions& value) { m_networkInterfaceOptionsHasBeenSet = true; m_networkInterfaceOptions = value; }

    /**
     * <p>The network interface options.</p>
     */
    inline void SetNetworkInterfaceOptions(ModifyVerifiedAccessEndpointEniOptions&& value) { m_networkInterfaceOptionsHasBeenSet = true; m_networkInterfaceOptions = std::move(value); }

    /**
     * <p>The network interface options.</p>
     */
    inline ModifyVerifiedAccessEndpointRequest& WithNetworkInterfaceOptions(const ModifyVerifiedAccessEndpointEniOptions& value) { SetNetworkInterfaceOptions(value); return *this;}

    /**
     * <p>The network interface options.</p>
     */
    inline ModifyVerifiedAccessEndpointRequest& WithNetworkInterfaceOptions(ModifyVerifiedAccessEndpointEniOptions&& value) { SetNetworkInterfaceOptions(std::move(value)); return *this;}


    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline ModifyVerifiedAccessEndpointRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline ModifyVerifiedAccessEndpointRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline ModifyVerifiedAccessEndpointRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ModifyVerifiedAccessEndpointRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ModifyVerifiedAccessEndpointRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ModifyVerifiedAccessEndpointRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


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
    inline ModifyVerifiedAccessEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_verifiedAccessEndpointId;
    bool m_verifiedAccessEndpointIdHasBeenSet = false;

    Aws::String m_verifiedAccessGroupId;
    bool m_verifiedAccessGroupIdHasBeenSet = false;

    ModifyVerifiedAccessEndpointLoadBalancerOptions m_loadBalancerOptions;
    bool m_loadBalancerOptionsHasBeenSet = false;

    ModifyVerifiedAccessEndpointEniOptions m_networkInterfaceOptions;
    bool m_networkInterfaceOptionsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
