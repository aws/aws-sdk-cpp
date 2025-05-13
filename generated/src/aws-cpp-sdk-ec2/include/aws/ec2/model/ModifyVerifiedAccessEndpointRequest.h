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
    AWS_EC2_API ModifyVerifiedAccessEndpointRequest() = default;

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
    inline const Aws::String& GetVerifiedAccessEndpointId() const { return m_verifiedAccessEndpointId; }
    inline bool VerifiedAccessEndpointIdHasBeenSet() const { return m_verifiedAccessEndpointIdHasBeenSet; }
    template<typename VerifiedAccessEndpointIdT = Aws::String>
    void SetVerifiedAccessEndpointId(VerifiedAccessEndpointIdT&& value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId = std::forward<VerifiedAccessEndpointIdT>(value); }
    template<typename VerifiedAccessEndpointIdT = Aws::String>
    ModifyVerifiedAccessEndpointRequest& WithVerifiedAccessEndpointId(VerifiedAccessEndpointIdT&& value) { SetVerifiedAccessEndpointId(std::forward<VerifiedAccessEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline const Aws::String& GetVerifiedAccessGroupId() const { return m_verifiedAccessGroupId; }
    inline bool VerifiedAccessGroupIdHasBeenSet() const { return m_verifiedAccessGroupIdHasBeenSet; }
    template<typename VerifiedAccessGroupIdT = Aws::String>
    void SetVerifiedAccessGroupId(VerifiedAccessGroupIdT&& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = std::forward<VerifiedAccessGroupIdT>(value); }
    template<typename VerifiedAccessGroupIdT = Aws::String>
    ModifyVerifiedAccessEndpointRequest& WithVerifiedAccessGroupId(VerifiedAccessGroupIdT&& value) { SetVerifiedAccessGroupId(std::forward<VerifiedAccessGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The load balancer details if creating the Verified Access endpoint as
     * <code>load-balancer</code>type.</p>
     */
    inline const ModifyVerifiedAccessEndpointLoadBalancerOptions& GetLoadBalancerOptions() const { return m_loadBalancerOptions; }
    inline bool LoadBalancerOptionsHasBeenSet() const { return m_loadBalancerOptionsHasBeenSet; }
    template<typename LoadBalancerOptionsT = ModifyVerifiedAccessEndpointLoadBalancerOptions>
    void SetLoadBalancerOptions(LoadBalancerOptionsT&& value) { m_loadBalancerOptionsHasBeenSet = true; m_loadBalancerOptions = std::forward<LoadBalancerOptionsT>(value); }
    template<typename LoadBalancerOptionsT = ModifyVerifiedAccessEndpointLoadBalancerOptions>
    ModifyVerifiedAccessEndpointRequest& WithLoadBalancerOptions(LoadBalancerOptionsT&& value) { SetLoadBalancerOptions(std::forward<LoadBalancerOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface options.</p>
     */
    inline const ModifyVerifiedAccessEndpointEniOptions& GetNetworkInterfaceOptions() const { return m_networkInterfaceOptions; }
    inline bool NetworkInterfaceOptionsHasBeenSet() const { return m_networkInterfaceOptionsHasBeenSet; }
    template<typename NetworkInterfaceOptionsT = ModifyVerifiedAccessEndpointEniOptions>
    void SetNetworkInterfaceOptions(NetworkInterfaceOptionsT&& value) { m_networkInterfaceOptionsHasBeenSet = true; m_networkInterfaceOptions = std::forward<NetworkInterfaceOptionsT>(value); }
    template<typename NetworkInterfaceOptionsT = ModifyVerifiedAccessEndpointEniOptions>
    ModifyVerifiedAccessEndpointRequest& WithNetworkInterfaceOptions(NetworkInterfaceOptionsT&& value) { SetNetworkInterfaceOptions(std::forward<NetworkInterfaceOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the Verified Access endpoint.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ModifyVerifiedAccessEndpointRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    ModifyVerifiedAccessEndpointRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyVerifiedAccessEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RDS options.</p>
     */
    inline const ModifyVerifiedAccessEndpointRdsOptions& GetRdsOptions() const { return m_rdsOptions; }
    inline bool RdsOptionsHasBeenSet() const { return m_rdsOptionsHasBeenSet; }
    template<typename RdsOptionsT = ModifyVerifiedAccessEndpointRdsOptions>
    void SetRdsOptions(RdsOptionsT&& value) { m_rdsOptionsHasBeenSet = true; m_rdsOptions = std::forward<RdsOptionsT>(value); }
    template<typename RdsOptionsT = ModifyVerifiedAccessEndpointRdsOptions>
    ModifyVerifiedAccessEndpointRequest& WithRdsOptions(RdsOptionsT&& value) { SetRdsOptions(std::forward<RdsOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR options.</p>
     */
    inline const ModifyVerifiedAccessEndpointCidrOptions& GetCidrOptions() const { return m_cidrOptions; }
    inline bool CidrOptionsHasBeenSet() const { return m_cidrOptionsHasBeenSet; }
    template<typename CidrOptionsT = ModifyVerifiedAccessEndpointCidrOptions>
    void SetCidrOptions(CidrOptionsT&& value) { m_cidrOptionsHasBeenSet = true; m_cidrOptions = std::forward<CidrOptionsT>(value); }
    template<typename CidrOptionsT = ModifyVerifiedAccessEndpointCidrOptions>
    ModifyVerifiedAccessEndpointRequest& WithCidrOptions(CidrOptionsT&& value) { SetCidrOptions(std::forward<CidrOptionsT>(value)); return *this;}
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

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    ModifyVerifiedAccessEndpointRdsOptions m_rdsOptions;
    bool m_rdsOptionsHasBeenSet = false;

    ModifyVerifiedAccessEndpointCidrOptions m_cidrOptions;
    bool m_cidrOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
