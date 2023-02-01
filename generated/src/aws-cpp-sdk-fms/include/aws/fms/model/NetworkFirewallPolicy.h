/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/FirewallDeploymentModel.h>
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
   * <p>Configures the firewall policy deployment model of Network Firewall. For
   * information about Network Firewall deployment models, see <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/architectures.html">Network
   * Firewall example architectures with routing</a> in the <i>Network Firewall
   * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkFirewallPolicy">AWS
   * API Reference</a></p>
   */
  class NetworkFirewallPolicy
  {
  public:
    AWS_FMS_API NetworkFirewallPolicy();
    AWS_FMS_API NetworkFirewallPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the deployment model to use for the firewall policy. To use a
     * distributed model, set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>.</p>
     */
    inline const FirewallDeploymentModel& GetFirewallDeploymentModel() const{ return m_firewallDeploymentModel; }

    /**
     * <p>Defines the deployment model to use for the firewall policy. To use a
     * distributed model, set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>.</p>
     */
    inline bool FirewallDeploymentModelHasBeenSet() const { return m_firewallDeploymentModelHasBeenSet; }

    /**
     * <p>Defines the deployment model to use for the firewall policy. To use a
     * distributed model, set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>.</p>
     */
    inline void SetFirewallDeploymentModel(const FirewallDeploymentModel& value) { m_firewallDeploymentModelHasBeenSet = true; m_firewallDeploymentModel = value; }

    /**
     * <p>Defines the deployment model to use for the firewall policy. To use a
     * distributed model, set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>.</p>
     */
    inline void SetFirewallDeploymentModel(FirewallDeploymentModel&& value) { m_firewallDeploymentModelHasBeenSet = true; m_firewallDeploymentModel = std::move(value); }

    /**
     * <p>Defines the deployment model to use for the firewall policy. To use a
     * distributed model, set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>.</p>
     */
    inline NetworkFirewallPolicy& WithFirewallDeploymentModel(const FirewallDeploymentModel& value) { SetFirewallDeploymentModel(value); return *this;}

    /**
     * <p>Defines the deployment model to use for the firewall policy. To use a
     * distributed model, set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>.</p>
     */
    inline NetworkFirewallPolicy& WithFirewallDeploymentModel(FirewallDeploymentModel&& value) { SetFirewallDeploymentModel(std::move(value)); return *this;}

  private:

    FirewallDeploymentModel m_firewallDeploymentModel;
    bool m_firewallDeploymentModelHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
