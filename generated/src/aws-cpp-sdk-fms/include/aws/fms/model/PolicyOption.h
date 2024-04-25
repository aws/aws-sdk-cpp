/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/NetworkFirewallPolicy.h>
#include <aws/fms/model/ThirdPartyFirewallPolicy.h>
#include <aws/fms/model/NetworkAclCommonPolicy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{

  /**
   * <p>Contains the settings to configure a network ACL policy, a Network Firewall
   * firewall policy deployment model, or a third-party firewall
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PolicyOption">AWS
   * API Reference</a></p>
   */
  class PolicyOption
  {
  public:
    AWS_FMS_API PolicyOption();
    AWS_FMS_API PolicyOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API PolicyOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the deployment model to use for the firewall policy.</p>
     */
    inline const NetworkFirewallPolicy& GetNetworkFirewallPolicy() const{ return m_networkFirewallPolicy; }

    /**
     * <p>Defines the deployment model to use for the firewall policy.</p>
     */
    inline bool NetworkFirewallPolicyHasBeenSet() const { return m_networkFirewallPolicyHasBeenSet; }

    /**
     * <p>Defines the deployment model to use for the firewall policy.</p>
     */
    inline void SetNetworkFirewallPolicy(const NetworkFirewallPolicy& value) { m_networkFirewallPolicyHasBeenSet = true; m_networkFirewallPolicy = value; }

    /**
     * <p>Defines the deployment model to use for the firewall policy.</p>
     */
    inline void SetNetworkFirewallPolicy(NetworkFirewallPolicy&& value) { m_networkFirewallPolicyHasBeenSet = true; m_networkFirewallPolicy = std::move(value); }

    /**
     * <p>Defines the deployment model to use for the firewall policy.</p>
     */
    inline PolicyOption& WithNetworkFirewallPolicy(const NetworkFirewallPolicy& value) { SetNetworkFirewallPolicy(value); return *this;}

    /**
     * <p>Defines the deployment model to use for the firewall policy.</p>
     */
    inline PolicyOption& WithNetworkFirewallPolicy(NetworkFirewallPolicy&& value) { SetNetworkFirewallPolicy(std::move(value)); return *this;}


    /**
     * <p>Defines the policy options for a third-party firewall policy.</p>
     */
    inline const ThirdPartyFirewallPolicy& GetThirdPartyFirewallPolicy() const{ return m_thirdPartyFirewallPolicy; }

    /**
     * <p>Defines the policy options for a third-party firewall policy.</p>
     */
    inline bool ThirdPartyFirewallPolicyHasBeenSet() const { return m_thirdPartyFirewallPolicyHasBeenSet; }

    /**
     * <p>Defines the policy options for a third-party firewall policy.</p>
     */
    inline void SetThirdPartyFirewallPolicy(const ThirdPartyFirewallPolicy& value) { m_thirdPartyFirewallPolicyHasBeenSet = true; m_thirdPartyFirewallPolicy = value; }

    /**
     * <p>Defines the policy options for a third-party firewall policy.</p>
     */
    inline void SetThirdPartyFirewallPolicy(ThirdPartyFirewallPolicy&& value) { m_thirdPartyFirewallPolicyHasBeenSet = true; m_thirdPartyFirewallPolicy = std::move(value); }

    /**
     * <p>Defines the policy options for a third-party firewall policy.</p>
     */
    inline PolicyOption& WithThirdPartyFirewallPolicy(const ThirdPartyFirewallPolicy& value) { SetThirdPartyFirewallPolicy(value); return *this;}

    /**
     * <p>Defines the policy options for a third-party firewall policy.</p>
     */
    inline PolicyOption& WithThirdPartyFirewallPolicy(ThirdPartyFirewallPolicy&& value) { SetThirdPartyFirewallPolicy(std::move(value)); return *this;}


    /**
     * <p>Defines a Firewall Manager network ACL policy. </p>
     */
    inline const NetworkAclCommonPolicy& GetNetworkAclCommonPolicy() const{ return m_networkAclCommonPolicy; }

    /**
     * <p>Defines a Firewall Manager network ACL policy. </p>
     */
    inline bool NetworkAclCommonPolicyHasBeenSet() const { return m_networkAclCommonPolicyHasBeenSet; }

    /**
     * <p>Defines a Firewall Manager network ACL policy. </p>
     */
    inline void SetNetworkAclCommonPolicy(const NetworkAclCommonPolicy& value) { m_networkAclCommonPolicyHasBeenSet = true; m_networkAclCommonPolicy = value; }

    /**
     * <p>Defines a Firewall Manager network ACL policy. </p>
     */
    inline void SetNetworkAclCommonPolicy(NetworkAclCommonPolicy&& value) { m_networkAclCommonPolicyHasBeenSet = true; m_networkAclCommonPolicy = std::move(value); }

    /**
     * <p>Defines a Firewall Manager network ACL policy. </p>
     */
    inline PolicyOption& WithNetworkAclCommonPolicy(const NetworkAclCommonPolicy& value) { SetNetworkAclCommonPolicy(value); return *this;}

    /**
     * <p>Defines a Firewall Manager network ACL policy. </p>
     */
    inline PolicyOption& WithNetworkAclCommonPolicy(NetworkAclCommonPolicy&& value) { SetNetworkAclCommonPolicy(std::move(value)); return *this;}

  private:

    NetworkFirewallPolicy m_networkFirewallPolicy;
    bool m_networkFirewallPolicyHasBeenSet = false;

    ThirdPartyFirewallPolicy m_thirdPartyFirewallPolicy;
    bool m_thirdPartyFirewallPolicyHasBeenSet = false;

    NetworkAclCommonPolicy m_networkAclCommonPolicy;
    bool m_networkAclCommonPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
