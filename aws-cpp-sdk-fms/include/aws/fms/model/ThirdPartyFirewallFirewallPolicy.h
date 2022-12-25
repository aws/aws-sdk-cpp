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
   * <p>Configures the third-party firewall's firewall policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ThirdPartyFirewallFirewallPolicy">AWS
   * API Reference</a></p>
   */
  class ThirdPartyFirewallFirewallPolicy
  {
  public:
    AWS_FMS_API ThirdPartyFirewallFirewallPolicy();
    AWS_FMS_API ThirdPartyFirewallFirewallPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API ThirdPartyFirewallFirewallPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the specified firewall policy.</p>
     */
    inline const Aws::String& GetFirewallPolicyId() const{ return m_firewallPolicyId; }

    /**
     * <p>The ID of the specified firewall policy.</p>
     */
    inline bool FirewallPolicyIdHasBeenSet() const { return m_firewallPolicyIdHasBeenSet; }

    /**
     * <p>The ID of the specified firewall policy.</p>
     */
    inline void SetFirewallPolicyId(const Aws::String& value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId = value; }

    /**
     * <p>The ID of the specified firewall policy.</p>
     */
    inline void SetFirewallPolicyId(Aws::String&& value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId = std::move(value); }

    /**
     * <p>The ID of the specified firewall policy.</p>
     */
    inline void SetFirewallPolicyId(const char* value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId.assign(value); }

    /**
     * <p>The ID of the specified firewall policy.</p>
     */
    inline ThirdPartyFirewallFirewallPolicy& WithFirewallPolicyId(const Aws::String& value) { SetFirewallPolicyId(value); return *this;}

    /**
     * <p>The ID of the specified firewall policy.</p>
     */
    inline ThirdPartyFirewallFirewallPolicy& WithFirewallPolicyId(Aws::String&& value) { SetFirewallPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the specified firewall policy.</p>
     */
    inline ThirdPartyFirewallFirewallPolicy& WithFirewallPolicyId(const char* value) { SetFirewallPolicyId(value); return *this;}


    /**
     * <p>The name of the specified firewall policy.</p>
     */
    inline const Aws::String& GetFirewallPolicyName() const{ return m_firewallPolicyName; }

    /**
     * <p>The name of the specified firewall policy.</p>
     */
    inline bool FirewallPolicyNameHasBeenSet() const { return m_firewallPolicyNameHasBeenSet; }

    /**
     * <p>The name of the specified firewall policy.</p>
     */
    inline void SetFirewallPolicyName(const Aws::String& value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName = value; }

    /**
     * <p>The name of the specified firewall policy.</p>
     */
    inline void SetFirewallPolicyName(Aws::String&& value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName = std::move(value); }

    /**
     * <p>The name of the specified firewall policy.</p>
     */
    inline void SetFirewallPolicyName(const char* value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName.assign(value); }

    /**
     * <p>The name of the specified firewall policy.</p>
     */
    inline ThirdPartyFirewallFirewallPolicy& WithFirewallPolicyName(const Aws::String& value) { SetFirewallPolicyName(value); return *this;}

    /**
     * <p>The name of the specified firewall policy.</p>
     */
    inline ThirdPartyFirewallFirewallPolicy& WithFirewallPolicyName(Aws::String&& value) { SetFirewallPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the specified firewall policy.</p>
     */
    inline ThirdPartyFirewallFirewallPolicy& WithFirewallPolicyName(const char* value) { SetFirewallPolicyName(value); return *this;}

  private:

    Aws::String m_firewallPolicyId;
    bool m_firewallPolicyIdHasBeenSet = false;

    Aws::String m_firewallPolicyName;
    bool m_firewallPolicyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
