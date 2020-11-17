/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/ResourceStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/Tag.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>The high-level properties of a firewall policy. This, along with the
   * <a>FirewallPolicy</a>, define the policy. You can retrieve all objects for a
   * firewall policy by calling <a>DescribeFirewallPolicy</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/FirewallPolicyResponse">AWS
   * API Reference</a></p>
   */
  class AWS_NETWORKFIREWALL_API FirewallPolicyResponse
  {
  public:
    FirewallPolicyResponse();
    FirewallPolicyResponse(Aws::Utils::Json::JsonView jsonValue);
    FirewallPolicyResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p>
     */
    inline const Aws::String& GetFirewallPolicyName() const{ return m_firewallPolicyName; }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p>
     */
    inline bool FirewallPolicyNameHasBeenSet() const { return m_firewallPolicyNameHasBeenSet; }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p>
     */
    inline void SetFirewallPolicyName(const Aws::String& value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName = value; }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p>
     */
    inline void SetFirewallPolicyName(Aws::String&& value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName = std::move(value); }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p>
     */
    inline void SetFirewallPolicyName(const char* value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName.assign(value); }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p>
     */
    inline FirewallPolicyResponse& WithFirewallPolicyName(const Aws::String& value) { SetFirewallPolicyName(value); return *this;}

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p>
     */
    inline FirewallPolicyResponse& WithFirewallPolicyName(Aws::String&& value) { SetFirewallPolicyName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p>
     */
    inline FirewallPolicyResponse& WithFirewallPolicyName(const char* value) { SetFirewallPolicyName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p>  <p>If this
     * response is for a create request that had <code>DryRun</code> set to
     * <code>TRUE</code>, then this ARN is a placeholder that isn't attached to a valid
     * resource.</p> 
     */
    inline const Aws::String& GetFirewallPolicyArn() const{ return m_firewallPolicyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p>  <p>If this
     * response is for a create request that had <code>DryRun</code> set to
     * <code>TRUE</code>, then this ARN is a placeholder that isn't attached to a valid
     * resource.</p> 
     */
    inline bool FirewallPolicyArnHasBeenSet() const { return m_firewallPolicyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p>  <p>If this
     * response is for a create request that had <code>DryRun</code> set to
     * <code>TRUE</code>, then this ARN is a placeholder that isn't attached to a valid
     * resource.</p> 
     */
    inline void SetFirewallPolicyArn(const Aws::String& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p>  <p>If this
     * response is for a create request that had <code>DryRun</code> set to
     * <code>TRUE</code>, then this ARN is a placeholder that isn't attached to a valid
     * resource.</p> 
     */
    inline void SetFirewallPolicyArn(Aws::String&& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p>  <p>If this
     * response is for a create request that had <code>DryRun</code> set to
     * <code>TRUE</code>, then this ARN is a placeholder that isn't attached to a valid
     * resource.</p> 
     */
    inline void SetFirewallPolicyArn(const char* value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p>  <p>If this
     * response is for a create request that had <code>DryRun</code> set to
     * <code>TRUE</code>, then this ARN is a placeholder that isn't attached to a valid
     * resource.</p> 
     */
    inline FirewallPolicyResponse& WithFirewallPolicyArn(const Aws::String& value) { SetFirewallPolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p>  <p>If this
     * response is for a create request that had <code>DryRun</code> set to
     * <code>TRUE</code>, then this ARN is a placeholder that isn't attached to a valid
     * resource.</p> 
     */
    inline FirewallPolicyResponse& WithFirewallPolicyArn(Aws::String&& value) { SetFirewallPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p>  <p>If this
     * response is for a create request that had <code>DryRun</code> set to
     * <code>TRUE</code>, then this ARN is a placeholder that isn't attached to a valid
     * resource.</p> 
     */
    inline FirewallPolicyResponse& WithFirewallPolicyArn(const char* value) { SetFirewallPolicyArn(value); return *this;}


    /**
     * <p>The unique identifier for the firewall policy. </p>
     */
    inline const Aws::String& GetFirewallPolicyId() const{ return m_firewallPolicyId; }

    /**
     * <p>The unique identifier for the firewall policy. </p>
     */
    inline bool FirewallPolicyIdHasBeenSet() const { return m_firewallPolicyIdHasBeenSet; }

    /**
     * <p>The unique identifier for the firewall policy. </p>
     */
    inline void SetFirewallPolicyId(const Aws::String& value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId = value; }

    /**
     * <p>The unique identifier for the firewall policy. </p>
     */
    inline void SetFirewallPolicyId(Aws::String&& value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId = std::move(value); }

    /**
     * <p>The unique identifier for the firewall policy. </p>
     */
    inline void SetFirewallPolicyId(const char* value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId.assign(value); }

    /**
     * <p>The unique identifier for the firewall policy. </p>
     */
    inline FirewallPolicyResponse& WithFirewallPolicyId(const Aws::String& value) { SetFirewallPolicyId(value); return *this;}

    /**
     * <p>The unique identifier for the firewall policy. </p>
     */
    inline FirewallPolicyResponse& WithFirewallPolicyId(Aws::String&& value) { SetFirewallPolicyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the firewall policy. </p>
     */
    inline FirewallPolicyResponse& WithFirewallPolicyId(const char* value) { SetFirewallPolicyId(value); return *this;}


    /**
     * <p>A description of the firewall policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline FirewallPolicyResponse& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline FirewallPolicyResponse& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline FirewallPolicyResponse& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The current status of the firewall policy. You can retrieve this for a
     * firewall policy by calling <a>DescribeFirewallPolicy</a> and providing the
     * firewall policy's name or ARN.</p>
     */
    inline const ResourceStatus& GetFirewallPolicyStatus() const{ return m_firewallPolicyStatus; }

    /**
     * <p>The current status of the firewall policy. You can retrieve this for a
     * firewall policy by calling <a>DescribeFirewallPolicy</a> and providing the
     * firewall policy's name or ARN.</p>
     */
    inline bool FirewallPolicyStatusHasBeenSet() const { return m_firewallPolicyStatusHasBeenSet; }

    /**
     * <p>The current status of the firewall policy. You can retrieve this for a
     * firewall policy by calling <a>DescribeFirewallPolicy</a> and providing the
     * firewall policy's name or ARN.</p>
     */
    inline void SetFirewallPolicyStatus(const ResourceStatus& value) { m_firewallPolicyStatusHasBeenSet = true; m_firewallPolicyStatus = value; }

    /**
     * <p>The current status of the firewall policy. You can retrieve this for a
     * firewall policy by calling <a>DescribeFirewallPolicy</a> and providing the
     * firewall policy's name or ARN.</p>
     */
    inline void SetFirewallPolicyStatus(ResourceStatus&& value) { m_firewallPolicyStatusHasBeenSet = true; m_firewallPolicyStatus = std::move(value); }

    /**
     * <p>The current status of the firewall policy. You can retrieve this for a
     * firewall policy by calling <a>DescribeFirewallPolicy</a> and providing the
     * firewall policy's name or ARN.</p>
     */
    inline FirewallPolicyResponse& WithFirewallPolicyStatus(const ResourceStatus& value) { SetFirewallPolicyStatus(value); return *this;}

    /**
     * <p>The current status of the firewall policy. You can retrieve this for a
     * firewall policy by calling <a>DescribeFirewallPolicy</a> and providing the
     * firewall policy's name or ARN.</p>
     */
    inline FirewallPolicyResponse& WithFirewallPolicyStatus(ResourceStatus&& value) { SetFirewallPolicyStatus(std::move(value)); return *this;}


    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline FirewallPolicyResponse& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline FirewallPolicyResponse& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline FirewallPolicyResponse& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline FirewallPolicyResponse& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_firewallPolicyName;
    bool m_firewallPolicyNameHasBeenSet;

    Aws::String m_firewallPolicyArn;
    bool m_firewallPolicyArnHasBeenSet;

    Aws::String m_firewallPolicyId;
    bool m_firewallPolicyIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ResourceStatus m_firewallPolicyStatus;
    bool m_firewallPolicyStatusHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
