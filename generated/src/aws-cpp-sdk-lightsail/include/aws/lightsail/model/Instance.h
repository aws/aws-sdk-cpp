/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/ResourceLocation.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/IpAddressType.h>
#include <aws/lightsail/model/InstanceHardware.h>
#include <aws/lightsail/model/InstanceNetworking.h>
#include <aws/lightsail/model/InstanceState.h>
#include <aws/lightsail/model/InstanceMetadataOptions.h>
#include <aws/lightsail/model/Tag.h>
#include <aws/lightsail/model/AddOn.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes an instance (a virtual private server).</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Instance">AWS
   * API Reference</a></p>
   */
  class Instance
  {
  public:
    AWS_LIGHTSAIL_API Instance();
    AWS_LIGHTSAIL_API Instance(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Instance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name the user gave the instance (<code>Amazon_Linux_2023-1</code>).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Instance& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Instance& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Instance& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the instance
     * (<code>arn:aws:lightsail:us-east-2:123456789101:Instance/244ad76f-8aad-4741-809f-12345EXAMPLE</code>).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Instance& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Instance& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Instance& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const{ return m_supportCode; }
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }
    inline void SetSupportCode(const Aws::String& value) { m_supportCodeHasBeenSet = true; m_supportCode = value; }
    inline void SetSupportCode(Aws::String&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::move(value); }
    inline void SetSupportCode(const char* value) { m_supportCodeHasBeenSet = true; m_supportCode.assign(value); }
    inline Instance& WithSupportCode(const Aws::String& value) { SetSupportCode(value); return *this;}
    inline Instance& WithSupportCode(Aws::String&& value) { SetSupportCode(std::move(value)); return *this;}
    inline Instance& WithSupportCode(const char* value) { SetSupportCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the instance was created (<code>1479734909.17</code>) in
     * Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Instance& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Instance& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region name and Availability Zone where the instance is located.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline Instance& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}
    inline Instance& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource (usually <code>Instance</code>).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline Instance& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline Instance& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Instance& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Instance& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Instance& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Instance& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The blueprint ID (<code>amazon_linux_2023</code>).</p>
     */
    inline const Aws::String& GetBlueprintId() const{ return m_blueprintId; }
    inline bool BlueprintIdHasBeenSet() const { return m_blueprintIdHasBeenSet; }
    inline void SetBlueprintId(const Aws::String& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = value; }
    inline void SetBlueprintId(Aws::String&& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = std::move(value); }
    inline void SetBlueprintId(const char* value) { m_blueprintIdHasBeenSet = true; m_blueprintId.assign(value); }
    inline Instance& WithBlueprintId(const Aws::String& value) { SetBlueprintId(value); return *this;}
    inline Instance& WithBlueprintId(Aws::String&& value) { SetBlueprintId(std::move(value)); return *this;}
    inline Instance& WithBlueprintId(const char* value) { SetBlueprintId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the blueprint (<code>Amazon Linux 2023</code>).</p>
     */
    inline const Aws::String& GetBlueprintName() const{ return m_blueprintName; }
    inline bool BlueprintNameHasBeenSet() const { return m_blueprintNameHasBeenSet; }
    inline void SetBlueprintName(const Aws::String& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = value; }
    inline void SetBlueprintName(Aws::String&& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = std::move(value); }
    inline void SetBlueprintName(const char* value) { m_blueprintNameHasBeenSet = true; m_blueprintName.assign(value); }
    inline Instance& WithBlueprintName(const Aws::String& value) { SetBlueprintName(value); return *this;}
    inline Instance& WithBlueprintName(Aws::String&& value) { SetBlueprintName(std::move(value)); return *this;}
    inline Instance& WithBlueprintName(const char* value) { SetBlueprintName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bundle for the instance (<code>micro_x_x</code>).</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }
    inline Instance& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}
    inline Instance& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}
    inline Instance& WithBundleId(const char* value) { SetBundleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects representing the add-ons enabled on the instance.</p>
     */
    inline const Aws::Vector<AddOn>& GetAddOns() const{ return m_addOns; }
    inline bool AddOnsHasBeenSet() const { return m_addOnsHasBeenSet; }
    inline void SetAddOns(const Aws::Vector<AddOn>& value) { m_addOnsHasBeenSet = true; m_addOns = value; }
    inline void SetAddOns(Aws::Vector<AddOn>&& value) { m_addOnsHasBeenSet = true; m_addOns = std::move(value); }
    inline Instance& WithAddOns(const Aws::Vector<AddOn>& value) { SetAddOns(value); return *this;}
    inline Instance& WithAddOns(Aws::Vector<AddOn>&& value) { SetAddOns(std::move(value)); return *this;}
    inline Instance& AddAddOns(const AddOn& value) { m_addOnsHasBeenSet = true; m_addOns.push_back(value); return *this; }
    inline Instance& AddAddOns(AddOn&& value) { m_addOnsHasBeenSet = true; m_addOns.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether this instance has a static IP assigned to
     * it.</p>
     */
    inline bool GetIsStaticIp() const{ return m_isStaticIp; }
    inline bool IsStaticIpHasBeenSet() const { return m_isStaticIpHasBeenSet; }
    inline void SetIsStaticIp(bool value) { m_isStaticIpHasBeenSet = true; m_isStaticIp = value; }
    inline Instance& WithIsStaticIp(bool value) { SetIsStaticIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IP address of the instance.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }
    inline Instance& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}
    inline Instance& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}
    inline Instance& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public IP address of the instance.</p>
     */
    inline const Aws::String& GetPublicIpAddress() const{ return m_publicIpAddress; }
    inline bool PublicIpAddressHasBeenSet() const { return m_publicIpAddressHasBeenSet; }
    inline void SetPublicIpAddress(const Aws::String& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = value; }
    inline void SetPublicIpAddress(Aws::String&& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = std::move(value); }
    inline void SetPublicIpAddress(const char* value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress.assign(value); }
    inline Instance& WithPublicIpAddress(const Aws::String& value) { SetPublicIpAddress(value); return *this;}
    inline Instance& WithPublicIpAddress(Aws::String&& value) { SetPublicIpAddress(std::move(value)); return *this;}
    inline Instance& WithPublicIpAddress(const char* value) { SetPublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 addresses of the instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv6Addresses() const{ return m_ipv6Addresses; }
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }
    inline void SetIpv6Addresses(const Aws::Vector<Aws::String>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }
    inline void SetIpv6Addresses(Aws::Vector<Aws::String>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::move(value); }
    inline Instance& WithIpv6Addresses(const Aws::Vector<Aws::String>& value) { SetIpv6Addresses(value); return *this;}
    inline Instance& WithIpv6Addresses(Aws::Vector<Aws::String>&& value) { SetIpv6Addresses(std::move(value)); return *this;}
    inline Instance& AddIpv6Addresses(const Aws::String& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }
    inline Instance& AddIpv6Addresses(Aws::String&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(std::move(value)); return *this; }
    inline Instance& AddIpv6Addresses(const char* value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type of the instance.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, <code>ipv6</code> for IPv6 only, and
     * <code>dualstack</code> for IPv4 and IPv6.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }
    inline Instance& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}
    inline Instance& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the vCPU and the amount of RAM for the instance.</p>
     */
    inline const InstanceHardware& GetHardware() const{ return m_hardware; }
    inline bool HardwareHasBeenSet() const { return m_hardwareHasBeenSet; }
    inline void SetHardware(const InstanceHardware& value) { m_hardwareHasBeenSet = true; m_hardware = value; }
    inline void SetHardware(InstanceHardware&& value) { m_hardwareHasBeenSet = true; m_hardware = std::move(value); }
    inline Instance& WithHardware(const InstanceHardware& value) { SetHardware(value); return *this;}
    inline Instance& WithHardware(InstanceHardware&& value) { SetHardware(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the public ports and monthly data transfer rates for the
     * instance.</p>
     */
    inline const InstanceNetworking& GetNetworking() const{ return m_networking; }
    inline bool NetworkingHasBeenSet() const { return m_networkingHasBeenSet; }
    inline void SetNetworking(const InstanceNetworking& value) { m_networkingHasBeenSet = true; m_networking = value; }
    inline void SetNetworking(InstanceNetworking&& value) { m_networkingHasBeenSet = true; m_networking = std::move(value); }
    inline Instance& WithNetworking(const InstanceNetworking& value) { SetNetworking(value); return *this;}
    inline Instance& WithNetworking(InstanceNetworking&& value) { SetNetworking(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status code and the state (<code>running</code>) for the instance.</p>
     */
    inline const InstanceState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const InstanceState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(InstanceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Instance& WithState(const InstanceState& value) { SetState(value); return *this;}
    inline Instance& WithState(InstanceState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name for connecting to the instance (<code>ec2-user</code>).</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline Instance& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline Instance& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline Instance& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SSH key being used to connect to the instance
     * (<code>LightsailDefaultKeyPair</code>).</p>
     */
    inline const Aws::String& GetSshKeyName() const{ return m_sshKeyName; }
    inline bool SshKeyNameHasBeenSet() const { return m_sshKeyNameHasBeenSet; }
    inline void SetSshKeyName(const Aws::String& value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName = value; }
    inline void SetSshKeyName(Aws::String&& value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName = std::move(value); }
    inline void SetSshKeyName(const char* value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName.assign(value); }
    inline Instance& WithSshKeyName(const Aws::String& value) { SetSshKeyName(value); return *this;}
    inline Instance& WithSshKeyName(Aws::String&& value) { SetSshKeyName(std::move(value)); return *this;}
    inline Instance& WithSshKeyName(const char* value) { SetSshKeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata options for the Amazon Lightsail instance.</p>
     */
    inline const InstanceMetadataOptions& GetMetadataOptions() const{ return m_metadataOptions; }
    inline bool MetadataOptionsHasBeenSet() const { return m_metadataOptionsHasBeenSet; }
    inline void SetMetadataOptions(const InstanceMetadataOptions& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = value; }
    inline void SetMetadataOptions(InstanceMetadataOptions&& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = std::move(value); }
    inline Instance& WithMetadataOptions(const InstanceMetadataOptions& value) { SetMetadataOptions(value); return *this;}
    inline Instance& WithMetadataOptions(InstanceMetadataOptions&& value) { SetMetadataOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_blueprintId;
    bool m_blueprintIdHasBeenSet = false;

    Aws::String m_blueprintName;
    bool m_blueprintNameHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::Vector<AddOn> m_addOns;
    bool m_addOnsHasBeenSet = false;

    bool m_isStaticIp;
    bool m_isStaticIpHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::String m_publicIpAddress;
    bool m_publicIpAddressHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet = false;

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    InstanceHardware m_hardware;
    bool m_hardwareHasBeenSet = false;

    InstanceNetworking m_networking;
    bool m_networkingHasBeenSet = false;

    InstanceState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_sshKeyName;
    bool m_sshKeyNameHasBeenSet = false;

    InstanceMetadataOptions m_metadataOptions;
    bool m_metadataOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
