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
    AWS_FMS_API PolicyOption() = default;
    AWS_FMS_API PolicyOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API PolicyOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the deployment model to use for the firewall policy.</p>
     */
    inline const NetworkFirewallPolicy& GetNetworkFirewallPolicy() const { return m_networkFirewallPolicy; }
    inline bool NetworkFirewallPolicyHasBeenSet() const { return m_networkFirewallPolicyHasBeenSet; }
    template<typename NetworkFirewallPolicyT = NetworkFirewallPolicy>
    void SetNetworkFirewallPolicy(NetworkFirewallPolicyT&& value) { m_networkFirewallPolicyHasBeenSet = true; m_networkFirewallPolicy = std::forward<NetworkFirewallPolicyT>(value); }
    template<typename NetworkFirewallPolicyT = NetworkFirewallPolicy>
    PolicyOption& WithNetworkFirewallPolicy(NetworkFirewallPolicyT&& value) { SetNetworkFirewallPolicy(std::forward<NetworkFirewallPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the policy options for a third-party firewall policy.</p>
     */
    inline const ThirdPartyFirewallPolicy& GetThirdPartyFirewallPolicy() const { return m_thirdPartyFirewallPolicy; }
    inline bool ThirdPartyFirewallPolicyHasBeenSet() const { return m_thirdPartyFirewallPolicyHasBeenSet; }
    template<typename ThirdPartyFirewallPolicyT = ThirdPartyFirewallPolicy>
    void SetThirdPartyFirewallPolicy(ThirdPartyFirewallPolicyT&& value) { m_thirdPartyFirewallPolicyHasBeenSet = true; m_thirdPartyFirewallPolicy = std::forward<ThirdPartyFirewallPolicyT>(value); }
    template<typename ThirdPartyFirewallPolicyT = ThirdPartyFirewallPolicy>
    PolicyOption& WithThirdPartyFirewallPolicy(ThirdPartyFirewallPolicyT&& value) { SetThirdPartyFirewallPolicy(std::forward<ThirdPartyFirewallPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines a Firewall Manager network ACL policy. </p>
     */
    inline const NetworkAclCommonPolicy& GetNetworkAclCommonPolicy() const { return m_networkAclCommonPolicy; }
    inline bool NetworkAclCommonPolicyHasBeenSet() const { return m_networkAclCommonPolicyHasBeenSet; }
    template<typename NetworkAclCommonPolicyT = NetworkAclCommonPolicy>
    void SetNetworkAclCommonPolicy(NetworkAclCommonPolicyT&& value) { m_networkAclCommonPolicyHasBeenSet = true; m_networkAclCommonPolicy = std::forward<NetworkAclCommonPolicyT>(value); }
    template<typename NetworkAclCommonPolicyT = NetworkAclCommonPolicy>
    PolicyOption& WithNetworkAclCommonPolicy(NetworkAclCommonPolicyT&& value) { SetNetworkAclCommonPolicy(std::forward<NetworkAclCommonPolicyT>(value)); return *this;}
    ///@}
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
