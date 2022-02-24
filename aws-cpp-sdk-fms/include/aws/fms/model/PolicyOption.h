/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/NetworkFirewallPolicy.h>
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
   * <p>Contains the Network Firewall firewall policy options to configure a
   * centralized deployment model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PolicyOption">AWS
   * API Reference</a></p>
   */
  class AWS_FMS_API PolicyOption
  {
  public:
    PolicyOption();
    PolicyOption(Aws::Utils::Json::JsonView jsonValue);
    PolicyOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    NetworkFirewallPolicy m_networkFirewallPolicy;
    bool m_networkFirewallPolicyHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
