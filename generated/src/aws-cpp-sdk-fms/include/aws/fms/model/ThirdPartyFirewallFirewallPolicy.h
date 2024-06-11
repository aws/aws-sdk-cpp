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


    ///@{
    /**
     * <p>The ID of the specified firewall policy.</p>
     */
    inline const Aws::String& GetFirewallPolicyId() const{ return m_firewallPolicyId; }
    inline bool FirewallPolicyIdHasBeenSet() const { return m_firewallPolicyIdHasBeenSet; }
    inline void SetFirewallPolicyId(const Aws::String& value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId = value; }
    inline void SetFirewallPolicyId(Aws::String&& value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId = std::move(value); }
    inline void SetFirewallPolicyId(const char* value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId.assign(value); }
    inline ThirdPartyFirewallFirewallPolicy& WithFirewallPolicyId(const Aws::String& value) { SetFirewallPolicyId(value); return *this;}
    inline ThirdPartyFirewallFirewallPolicy& WithFirewallPolicyId(Aws::String&& value) { SetFirewallPolicyId(std::move(value)); return *this;}
    inline ThirdPartyFirewallFirewallPolicy& WithFirewallPolicyId(const char* value) { SetFirewallPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the specified firewall policy.</p>
     */
    inline const Aws::String& GetFirewallPolicyName() const{ return m_firewallPolicyName; }
    inline bool FirewallPolicyNameHasBeenSet() const { return m_firewallPolicyNameHasBeenSet; }
    inline void SetFirewallPolicyName(const Aws::String& value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName = value; }
    inline void SetFirewallPolicyName(Aws::String&& value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName = std::move(value); }
    inline void SetFirewallPolicyName(const char* value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName.assign(value); }
    inline ThirdPartyFirewallFirewallPolicy& WithFirewallPolicyName(const Aws::String& value) { SetFirewallPolicyName(value); return *this;}
    inline ThirdPartyFirewallFirewallPolicy& WithFirewallPolicyName(Aws::String&& value) { SetFirewallPolicyName(std::move(value)); return *this;}
    inline ThirdPartyFirewallFirewallPolicy& WithFirewallPolicyName(const char* value) { SetFirewallPolicyName(value); return *this;}
    ///@}
  private:

    Aws::String m_firewallPolicyId;
    bool m_firewallPolicyIdHasBeenSet = false;

    Aws::String m_firewallPolicyName;
    bool m_firewallPolicyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
