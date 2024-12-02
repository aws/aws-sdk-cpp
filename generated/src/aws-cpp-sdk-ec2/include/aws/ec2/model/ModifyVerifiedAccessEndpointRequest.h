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
#include <aws/ec2/model/ModifyVerifiedAccessEndpointRdsOptions.h>
#include <aws/ec2/model/ModifyVerifiedAccessEndpointCidrOptions.h>
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

    ///@{
    /**
     * <p>The ID of the Verified Access endpoint.</p>
     */
    inline const Aws::String& GetVerifiedAccessEndpointId() const{ return m_verifiedAccessEndpointId; }
    inline bool VerifiedAccessEndpointIdHasBeenSet() const { return m_verifiedAccessEndpointIdHasBeenSet; }
    inline void SetVerifiedAccessEndpointId(const Aws::String& value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId = value; }
    inline void SetVerifiedAccessEndpointId(Aws::String&& value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId = std::move(value); }
    inline void SetVerifiedAccessEndpointId(const char* value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId.assign(value); }
    inline ModifyVerifiedAccessEndpointRequest& WithVerifiedAccessEndpointId(const Aws::String& value) { SetVerifiedAccessEndpointId(value); return *this;}
    inline ModifyVerifiedAccessEndpointRequest& WithVerifiedAccessEndpointId(Aws::String&& value) { SetVerifiedAccessEndpointId(std::move(value)); return *this;}
    inline ModifyVerifiedAccessEndpointRequest& WithVerifiedAccessEndpointId(const char* value) { SetVerifiedAccessEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline const Aws::String& GetVerifiedAccessGroupId() const{ return m_verifiedAccessGroupId; }
    inline bool VerifiedAccessGroupIdHasBeenSet() const { return m_verifiedAccessGroupIdHasBeenSet; }
    inline void SetVerifiedAccessGroupId(const Aws::String& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = value; }
    inline void SetVerifiedAccessGroupId(Aws::String&& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = std::move(value); }
    inline void SetVerifiedAccessGroupId(const char* value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId.assign(value); }
    inline ModifyVerifiedAccessEndpointRequest& WithVerifiedAccessGroupId(const Aws::String& value) { SetVerifiedAccessGroupId(value); return *this;}
    inline ModifyVerifiedAccessEndpointRequest& WithVerifiedAccessGroupId(Aws::String&& value) { SetVerifiedAccessGroupId(std::move(value)); return *this;}
    inline ModifyVerifiedAccessEndpointRequest& WithVerifiedAccessGroupId(const char* value) { SetVerifiedAccessGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The load balancer details if creating the Verified Access endpoint as
     * <code>load-balancer</code>type.</p>
     */
    inline const ModifyVerifiedAccessEndpointLoadBalancerOptions& GetLoadBalancerOptions() const{ return m_loadBalancerOptions; }
    inline bool LoadBalancerOptionsHasBeenSet() const { return m_loadBalancerOptionsHasBeenSet; }
    inline void SetLoadBalancerOptions(const ModifyVerifiedAccessEndpointLoadBalancerOptions& value) { m_loadBalancerOptionsHasBeenSet = true; m_loadBalancerOptions = value; }
    inline void SetLoadBalancerOptions(ModifyVerifiedAccessEndpointLoadBalancerOptions&& value) { m_loadBalancerOptionsHasBeenSet = true; m_loadBalancerOptions = std::move(value); }
    inline ModifyVerifiedAccessEndpointRequest& WithLoadBalancerOptions(const ModifyVerifiedAccessEndpointLoadBalancerOptions& value) { SetLoadBalancerOptions(value); return *this;}
    inline ModifyVerifiedAccessEndpointRequest& WithLoadBalancerOptions(ModifyVerifiedAccessEndpointLoadBalancerOptions&& value) { SetLoadBalancerOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface options.</p>
     */
    inline const ModifyVerifiedAccessEndpointEniOptions& GetNetworkInterfaceOptions() const{ return m_networkInterfaceOptions; }
    inline bool NetworkInterfaceOptionsHasBeenSet() const { return m_networkInterfaceOptionsHasBeenSet; }
    inline void SetNetworkInterfaceOptions(const ModifyVerifiedAccessEndpointEniOptions& value) { m_networkInterfaceOptionsHasBeenSet = true; m_networkInterfaceOptions = value; }
    inline void SetNetworkInterfaceOptions(ModifyVerifiedAccessEndpointEniOptions&& value) { m_networkInterfaceOptionsHasBeenSet = true; m_networkInterfaceOptions = std::move(value); }
    inline ModifyVerifiedAccessEndpointRequest& WithNetworkInterfaceOptions(const ModifyVerifiedAccessEndpointEniOptions& value) { SetNetworkInterfaceOptions(value); return *this;}
    inline ModifyVerifiedAccessEndpointRequest& WithNetworkInterfaceOptions(ModifyVerifiedAccessEndpointEniOptions&& value) { SetNetworkInterfaceOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the Verified Access endpoint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ModifyVerifiedAccessEndpointRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ModifyVerifiedAccessEndpointRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ModifyVerifiedAccessEndpointRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline ModifyVerifiedAccessEndpointRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline ModifyVerifiedAccessEndpointRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline ModifyVerifiedAccessEndpointRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyVerifiedAccessEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RDS options.</p>
     */
    inline const ModifyVerifiedAccessEndpointRdsOptions& GetRdsOptions() const{ return m_rdsOptions; }
    inline bool RdsOptionsHasBeenSet() const { return m_rdsOptionsHasBeenSet; }
    inline void SetRdsOptions(const ModifyVerifiedAccessEndpointRdsOptions& value) { m_rdsOptionsHasBeenSet = true; m_rdsOptions = value; }
    inline void SetRdsOptions(ModifyVerifiedAccessEndpointRdsOptions&& value) { m_rdsOptionsHasBeenSet = true; m_rdsOptions = std::move(value); }
    inline ModifyVerifiedAccessEndpointRequest& WithRdsOptions(const ModifyVerifiedAccessEndpointRdsOptions& value) { SetRdsOptions(value); return *this;}
    inline ModifyVerifiedAccessEndpointRequest& WithRdsOptions(ModifyVerifiedAccessEndpointRdsOptions&& value) { SetRdsOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR options.</p>
     */
    inline const ModifyVerifiedAccessEndpointCidrOptions& GetCidrOptions() const{ return m_cidrOptions; }
    inline bool CidrOptionsHasBeenSet() const { return m_cidrOptionsHasBeenSet; }
    inline void SetCidrOptions(const ModifyVerifiedAccessEndpointCidrOptions& value) { m_cidrOptionsHasBeenSet = true; m_cidrOptions = value; }
    inline void SetCidrOptions(ModifyVerifiedAccessEndpointCidrOptions&& value) { m_cidrOptionsHasBeenSet = true; m_cidrOptions = std::move(value); }
    inline ModifyVerifiedAccessEndpointRequest& WithCidrOptions(const ModifyVerifiedAccessEndpointCidrOptions& value) { SetCidrOptions(value); return *this;}
    inline ModifyVerifiedAccessEndpointRequest& WithCidrOptions(ModifyVerifiedAccessEndpointCidrOptions&& value) { SetCidrOptions(std::move(value)); return *this;}
    ///@}
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

    ModifyVerifiedAccessEndpointRdsOptions m_rdsOptions;
    bool m_rdsOptionsHasBeenSet = false;

    ModifyVerifiedAccessEndpointCidrOptions m_cidrOptions;
    bool m_cidrOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
