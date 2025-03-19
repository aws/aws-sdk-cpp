/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about the actions that you can take to remediate scope
   * violations caused by your policy's <code>FirewallCreationConfig</code>.
   * <code>FirewallCreationConfig</code> is an optional configuration that you can
   * use to choose which Availability Zones Firewall Manager creates Network Firewall
   * endpoints in.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/FMSPolicyUpdateFirewallCreationConfigAction">AWS
   * API Reference</a></p>
   */
  class FMSPolicyUpdateFirewallCreationConfigAction
  {
  public:
    AWS_FMS_API FMSPolicyUpdateFirewallCreationConfigAction() = default;
    AWS_FMS_API FMSPolicyUpdateFirewallCreationConfigAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API FMSPolicyUpdateFirewallCreationConfigAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the remedial action.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    FMSPolicyUpdateFirewallCreationConfigAction& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>FirewallCreationConfig</code> that you can copy into your current
     * policy's <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_SecurityServicePolicyData.html">SecurityServiceData</a>
     * in order to remedy scope violations.</p>
     */
    inline const Aws::String& GetFirewallCreationConfig() const { return m_firewallCreationConfig; }
    inline bool FirewallCreationConfigHasBeenSet() const { return m_firewallCreationConfigHasBeenSet; }
    template<typename FirewallCreationConfigT = Aws::String>
    void SetFirewallCreationConfig(FirewallCreationConfigT&& value) { m_firewallCreationConfigHasBeenSet = true; m_firewallCreationConfig = std::forward<FirewallCreationConfigT>(value); }
    template<typename FirewallCreationConfigT = Aws::String>
    FMSPolicyUpdateFirewallCreationConfigAction& WithFirewallCreationConfig(FirewallCreationConfigT&& value) { SetFirewallCreationConfig(std::forward<FirewallCreationConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_firewallCreationConfig;
    bool m_firewallCreationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
