/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/EncryptionConfiguration.h>
#include <aws/network-firewall/model/SubnetMapping.h>
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
   * <p>The firewall defines the configuration settings for an Network Firewall
   * firewall. These settings include the firewall policy, the subnets in your VPC to
   * use for the firewall endpoints, and any tags that are attached to the firewall
   * Amazon Web Services resource. </p> <p>The status of the firewall, for example
   * whether it's ready to filter network traffic, is provided in the corresponding
   * <a>FirewallStatus</a>. You can retrieve both objects by calling
   * <a>DescribeFirewall</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/Firewall">AWS
   * API Reference</a></p>
   */
  class Firewall
  {
  public:
    AWS_NETWORKFIREWALL_API Firewall();
    AWS_NETWORKFIREWALL_API Firewall(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Firewall& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline const Aws::String& GetFirewallName() const{ return m_firewallName; }

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline bool FirewallNameHasBeenSet() const { return m_firewallNameHasBeenSet; }

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline void SetFirewallName(const Aws::String& value) { m_firewallNameHasBeenSet = true; m_firewallName = value; }

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline void SetFirewallName(Aws::String&& value) { m_firewallNameHasBeenSet = true; m_firewallName = std::move(value); }

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline void SetFirewallName(const char* value) { m_firewallNameHasBeenSet = true; m_firewallName.assign(value); }

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline Firewall& WithFirewallName(const Aws::String& value) { SetFirewallName(value); return *this;}

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline Firewall& WithFirewallName(Aws::String&& value) { SetFirewallName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline Firewall& WithFirewallName(const char* value) { SetFirewallName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline const Aws::String& GetFirewallArn() const{ return m_firewallArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline bool FirewallArnHasBeenSet() const { return m_firewallArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline void SetFirewallArn(const Aws::String& value) { m_firewallArnHasBeenSet = true; m_firewallArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline void SetFirewallArn(Aws::String&& value) { m_firewallArnHasBeenSet = true; m_firewallArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline void SetFirewallArn(const char* value) { m_firewallArnHasBeenSet = true; m_firewallArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline Firewall& WithFirewallArn(const Aws::String& value) { SetFirewallArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline Firewall& WithFirewallArn(Aws::String&& value) { SetFirewallArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline Firewall& WithFirewallArn(const char* value) { SetFirewallArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>The
     * relationship of firewall to firewall policy is many to one. Each firewall
     * requires one firewall policy association, and you can use the same firewall
     * policy for multiple firewalls. </p>
     */
    inline const Aws::String& GetFirewallPolicyArn() const{ return m_firewallPolicyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>The
     * relationship of firewall to firewall policy is many to one. Each firewall
     * requires one firewall policy association, and you can use the same firewall
     * policy for multiple firewalls. </p>
     */
    inline bool FirewallPolicyArnHasBeenSet() const { return m_firewallPolicyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>The
     * relationship of firewall to firewall policy is many to one. Each firewall
     * requires one firewall policy association, and you can use the same firewall
     * policy for multiple firewalls. </p>
     */
    inline void SetFirewallPolicyArn(const Aws::String& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>The
     * relationship of firewall to firewall policy is many to one. Each firewall
     * requires one firewall policy association, and you can use the same firewall
     * policy for multiple firewalls. </p>
     */
    inline void SetFirewallPolicyArn(Aws::String&& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>The
     * relationship of firewall to firewall policy is many to one. Each firewall
     * requires one firewall policy association, and you can use the same firewall
     * policy for multiple firewalls. </p>
     */
    inline void SetFirewallPolicyArn(const char* value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>The
     * relationship of firewall to firewall policy is many to one. Each firewall
     * requires one firewall policy association, and you can use the same firewall
     * policy for multiple firewalls. </p>
     */
    inline Firewall& WithFirewallPolicyArn(const Aws::String& value) { SetFirewallPolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>The
     * relationship of firewall to firewall policy is many to one. Each firewall
     * requires one firewall policy association, and you can use the same firewall
     * policy for multiple firewalls. </p>
     */
    inline Firewall& WithFirewallPolicyArn(Aws::String&& value) { SetFirewallPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>The
     * relationship of firewall to firewall policy is many to one. Each firewall
     * requires one firewall policy association, and you can use the same firewall
     * policy for multiple firewalls. </p>
     */
    inline Firewall& WithFirewallPolicyArn(const char* value) { SetFirewallPolicyArn(value); return *this;}


    /**
     * <p>The unique identifier of the VPC where the firewall is in use. </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The unique identifier of the VPC where the firewall is in use. </p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The unique identifier of the VPC where the firewall is in use. </p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The unique identifier of the VPC where the firewall is in use. </p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The unique identifier of the VPC where the firewall is in use. </p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The unique identifier of the VPC where the firewall is in use. </p>
     */
    inline Firewall& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The unique identifier of the VPC where the firewall is in use. </p>
     */
    inline Firewall& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the VPC where the firewall is in use. </p>
     */
    inline Firewall& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The public subnets that Network Firewall is using for the firewall. Each
     * subnet must belong to a different Availability Zone. </p>
     */
    inline const Aws::Vector<SubnetMapping>& GetSubnetMappings() const{ return m_subnetMappings; }

    /**
     * <p>The public subnets that Network Firewall is using for the firewall. Each
     * subnet must belong to a different Availability Zone. </p>
     */
    inline bool SubnetMappingsHasBeenSet() const { return m_subnetMappingsHasBeenSet; }

    /**
     * <p>The public subnets that Network Firewall is using for the firewall. Each
     * subnet must belong to a different Availability Zone. </p>
     */
    inline void SetSubnetMappings(const Aws::Vector<SubnetMapping>& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings = value; }

    /**
     * <p>The public subnets that Network Firewall is using for the firewall. Each
     * subnet must belong to a different Availability Zone. </p>
     */
    inline void SetSubnetMappings(Aws::Vector<SubnetMapping>&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings = std::move(value); }

    /**
     * <p>The public subnets that Network Firewall is using for the firewall. Each
     * subnet must belong to a different Availability Zone. </p>
     */
    inline Firewall& WithSubnetMappings(const Aws::Vector<SubnetMapping>& value) { SetSubnetMappings(value); return *this;}

    /**
     * <p>The public subnets that Network Firewall is using for the firewall. Each
     * subnet must belong to a different Availability Zone. </p>
     */
    inline Firewall& WithSubnetMappings(Aws::Vector<SubnetMapping>&& value) { SetSubnetMappings(std::move(value)); return *this;}

    /**
     * <p>The public subnets that Network Firewall is using for the firewall. Each
     * subnet must belong to a different Availability Zone. </p>
     */
    inline Firewall& AddSubnetMappings(const SubnetMapping& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings.push_back(value); return *this; }

    /**
     * <p>The public subnets that Network Firewall is using for the firewall. Each
     * subnet must belong to a different Availability Zone. </p>
     */
    inline Firewall& AddSubnetMappings(SubnetMapping&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>A flag indicating whether it is possible to delete the firewall. A setting of
     * <code>TRUE</code> indicates that the firewall is protected against deletion. Use
     * this setting to protect against accidentally deleting a firewall that is in use.
     * When you create a firewall, the operation initializes this flag to
     * <code>TRUE</code>.</p>
     */
    inline bool GetDeleteProtection() const{ return m_deleteProtection; }

    /**
     * <p>A flag indicating whether it is possible to delete the firewall. A setting of
     * <code>TRUE</code> indicates that the firewall is protected against deletion. Use
     * this setting to protect against accidentally deleting a firewall that is in use.
     * When you create a firewall, the operation initializes this flag to
     * <code>TRUE</code>.</p>
     */
    inline bool DeleteProtectionHasBeenSet() const { return m_deleteProtectionHasBeenSet; }

    /**
     * <p>A flag indicating whether it is possible to delete the firewall. A setting of
     * <code>TRUE</code> indicates that the firewall is protected against deletion. Use
     * this setting to protect against accidentally deleting a firewall that is in use.
     * When you create a firewall, the operation initializes this flag to
     * <code>TRUE</code>.</p>
     */
    inline void SetDeleteProtection(bool value) { m_deleteProtectionHasBeenSet = true; m_deleteProtection = value; }

    /**
     * <p>A flag indicating whether it is possible to delete the firewall. A setting of
     * <code>TRUE</code> indicates that the firewall is protected against deletion. Use
     * this setting to protect against accidentally deleting a firewall that is in use.
     * When you create a firewall, the operation initializes this flag to
     * <code>TRUE</code>.</p>
     */
    inline Firewall& WithDeleteProtection(bool value) { SetDeleteProtection(value); return *this;}


    /**
     * <p>A setting indicating whether the firewall is protected against changes to the
     * subnet associations. Use this setting to protect against accidentally modifying
     * the subnet associations for a firewall that is in use. When you create a
     * firewall, the operation initializes this setting to <code>TRUE</code>.</p>
     */
    inline bool GetSubnetChangeProtection() const{ return m_subnetChangeProtection; }

    /**
     * <p>A setting indicating whether the firewall is protected against changes to the
     * subnet associations. Use this setting to protect against accidentally modifying
     * the subnet associations for a firewall that is in use. When you create a
     * firewall, the operation initializes this setting to <code>TRUE</code>.</p>
     */
    inline bool SubnetChangeProtectionHasBeenSet() const { return m_subnetChangeProtectionHasBeenSet; }

    /**
     * <p>A setting indicating whether the firewall is protected against changes to the
     * subnet associations. Use this setting to protect against accidentally modifying
     * the subnet associations for a firewall that is in use. When you create a
     * firewall, the operation initializes this setting to <code>TRUE</code>.</p>
     */
    inline void SetSubnetChangeProtection(bool value) { m_subnetChangeProtectionHasBeenSet = true; m_subnetChangeProtection = value; }

    /**
     * <p>A setting indicating whether the firewall is protected against changes to the
     * subnet associations. Use this setting to protect against accidentally modifying
     * the subnet associations for a firewall that is in use. When you create a
     * firewall, the operation initializes this setting to <code>TRUE</code>.</p>
     */
    inline Firewall& WithSubnetChangeProtection(bool value) { SetSubnetChangeProtection(value); return *this;}


    /**
     * <p>A setting indicating whether the firewall is protected against a change to
     * the firewall policy association. Use this setting to protect against
     * accidentally modifying the firewall policy for a firewall that is in use. When
     * you create a firewall, the operation initializes this setting to
     * <code>TRUE</code>.</p>
     */
    inline bool GetFirewallPolicyChangeProtection() const{ return m_firewallPolicyChangeProtection; }

    /**
     * <p>A setting indicating whether the firewall is protected against a change to
     * the firewall policy association. Use this setting to protect against
     * accidentally modifying the firewall policy for a firewall that is in use. When
     * you create a firewall, the operation initializes this setting to
     * <code>TRUE</code>.</p>
     */
    inline bool FirewallPolicyChangeProtectionHasBeenSet() const { return m_firewallPolicyChangeProtectionHasBeenSet; }

    /**
     * <p>A setting indicating whether the firewall is protected against a change to
     * the firewall policy association. Use this setting to protect against
     * accidentally modifying the firewall policy for a firewall that is in use. When
     * you create a firewall, the operation initializes this setting to
     * <code>TRUE</code>.</p>
     */
    inline void SetFirewallPolicyChangeProtection(bool value) { m_firewallPolicyChangeProtectionHasBeenSet = true; m_firewallPolicyChangeProtection = value; }

    /**
     * <p>A setting indicating whether the firewall is protected against a change to
     * the firewall policy association. Use this setting to protect against
     * accidentally modifying the firewall policy for a firewall that is in use. When
     * you create a firewall, the operation initializes this setting to
     * <code>TRUE</code>.</p>
     */
    inline Firewall& WithFirewallPolicyChangeProtection(bool value) { SetFirewallPolicyChangeProtection(value); return *this;}


    /**
     * <p>A description of the firewall.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the firewall.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the firewall.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the firewall.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the firewall.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the firewall.</p>
     */
    inline Firewall& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the firewall.</p>
     */
    inline Firewall& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the firewall.</p>
     */
    inline Firewall& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier for the firewall. </p>
     */
    inline const Aws::String& GetFirewallId() const{ return m_firewallId; }

    /**
     * <p>The unique identifier for the firewall. </p>
     */
    inline bool FirewallIdHasBeenSet() const { return m_firewallIdHasBeenSet; }

    /**
     * <p>The unique identifier for the firewall. </p>
     */
    inline void SetFirewallId(const Aws::String& value) { m_firewallIdHasBeenSet = true; m_firewallId = value; }

    /**
     * <p>The unique identifier for the firewall. </p>
     */
    inline void SetFirewallId(Aws::String&& value) { m_firewallIdHasBeenSet = true; m_firewallId = std::move(value); }

    /**
     * <p>The unique identifier for the firewall. </p>
     */
    inline void SetFirewallId(const char* value) { m_firewallIdHasBeenSet = true; m_firewallId.assign(value); }

    /**
     * <p>The unique identifier for the firewall. </p>
     */
    inline Firewall& WithFirewallId(const Aws::String& value) { SetFirewallId(value); return *this;}

    /**
     * <p>The unique identifier for the firewall. </p>
     */
    inline Firewall& WithFirewallId(Aws::String&& value) { SetFirewallId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the firewall. </p>
     */
    inline Firewall& WithFirewallId(const char* value) { SetFirewallId(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p/>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p/>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p/>
     */
    inline Firewall& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p/>
     */
    inline Firewall& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Firewall& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline Firewall& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your firewall.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your firewall.</p>
     */
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your firewall.</p>
     */
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your firewall.</p>
     */
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your firewall.</p>
     */
    inline Firewall& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your firewall.</p>
     */
    inline Firewall& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_firewallName;
    bool m_firewallNameHasBeenSet = false;

    Aws::String m_firewallArn;
    bool m_firewallArnHasBeenSet = false;

    Aws::String m_firewallPolicyArn;
    bool m_firewallPolicyArnHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<SubnetMapping> m_subnetMappings;
    bool m_subnetMappingsHasBeenSet = false;

    bool m_deleteProtection;
    bool m_deleteProtectionHasBeenSet = false;

    bool m_subnetChangeProtection;
    bool m_subnetChangeProtectionHasBeenSet = false;

    bool m_firewallPolicyChangeProtection;
    bool m_firewallPolicyChangeProtectionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_firewallId;
    bool m_firewallIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
