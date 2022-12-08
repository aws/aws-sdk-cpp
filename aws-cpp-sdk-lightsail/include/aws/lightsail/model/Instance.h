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


    /**
     * <p>The name the user gave the instance (e.g.,
     * <code>Amazon_Linux-1GB-Ohio-1</code>).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name the user gave the instance (e.g.,
     * <code>Amazon_Linux-1GB-Ohio-1</code>).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name the user gave the instance (e.g.,
     * <code>Amazon_Linux-1GB-Ohio-1</code>).</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name the user gave the instance (e.g.,
     * <code>Amazon_Linux-1GB-Ohio-1</code>).</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name the user gave the instance (e.g.,
     * <code>Amazon_Linux-1GB-Ohio-1</code>).</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name the user gave the instance (e.g.,
     * <code>Amazon_Linux-1GB-Ohio-1</code>).</p>
     */
    inline Instance& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name the user gave the instance (e.g.,
     * <code>Amazon_Linux-1GB-Ohio-1</code>).</p>
     */
    inline Instance& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name the user gave the instance (e.g.,
     * <code>Amazon_Linux-1GB-Ohio-1</code>).</p>
     */
    inline Instance& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the instance (e.g.,
     * <code>arn:aws:lightsail:us-east-2:123456789101:Instance/244ad76f-8aad-4741-809f-12345EXAMPLE</code>).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance (e.g.,
     * <code>arn:aws:lightsail:us-east-2:123456789101:Instance/244ad76f-8aad-4741-809f-12345EXAMPLE</code>).</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance (e.g.,
     * <code>arn:aws:lightsail:us-east-2:123456789101:Instance/244ad76f-8aad-4741-809f-12345EXAMPLE</code>).</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance (e.g.,
     * <code>arn:aws:lightsail:us-east-2:123456789101:Instance/244ad76f-8aad-4741-809f-12345EXAMPLE</code>).</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance (e.g.,
     * <code>arn:aws:lightsail:us-east-2:123456789101:Instance/244ad76f-8aad-4741-809f-12345EXAMPLE</code>).</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance (e.g.,
     * <code>arn:aws:lightsail:us-east-2:123456789101:Instance/244ad76f-8aad-4741-809f-12345EXAMPLE</code>).</p>
     */
    inline Instance& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the instance (e.g.,
     * <code>arn:aws:lightsail:us-east-2:123456789101:Instance/244ad76f-8aad-4741-809f-12345EXAMPLE</code>).</p>
     */
    inline Instance& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the instance (e.g.,
     * <code>arn:aws:lightsail:us-east-2:123456789101:Instance/244ad76f-8aad-4741-809f-12345EXAMPLE</code>).</p>
     */
    inline Instance& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const{ return m_supportCode; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const Aws::String& value) { m_supportCodeHasBeenSet = true; m_supportCode = value; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(Aws::String&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::move(value); }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const char* value) { m_supportCodeHasBeenSet = true; m_supportCode.assign(value); }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline Instance& WithSupportCode(const Aws::String& value) { SetSupportCode(value); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline Instance& WithSupportCode(Aws::String&& value) { SetSupportCode(std::move(value)); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline Instance& WithSupportCode(const char* value) { SetSupportCode(value); return *this;}


    /**
     * <p>The timestamp when the instance was created (e.g.,
     * <code>1479734909.17</code>) in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the instance was created (e.g.,
     * <code>1479734909.17</code>) in Unix time format.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when the instance was created (e.g.,
     * <code>1479734909.17</code>) in Unix time format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the instance was created (e.g.,
     * <code>1479734909.17</code>) in Unix time format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the instance was created (e.g.,
     * <code>1479734909.17</code>) in Unix time format.</p>
     */
    inline Instance& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the instance was created (e.g.,
     * <code>1479734909.17</code>) in Unix time format.</p>
     */
    inline Instance& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The region name and Availability Zone where the instance is located.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }

    /**
     * <p>The region name and Availability Zone where the instance is located.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The region name and Availability Zone where the instance is located.</p>
     */
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The region name and Availability Zone where the instance is located.</p>
     */
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The region name and Availability Zone where the instance is located.</p>
     */
    inline Instance& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>The region name and Availability Zone where the instance is located.</p>
     */
    inline Instance& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The type of resource (usually <code>Instance</code>).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource (usually <code>Instance</code>).</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource (usually <code>Instance</code>).</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource (usually <code>Instance</code>).</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource (usually <code>Instance</code>).</p>
     */
    inline Instance& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource (usually <code>Instance</code>).</p>
     */
    inline Instance& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline Instance& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline Instance& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline Instance& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline Instance& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The blueprint ID (e.g., <code>os_amlinux_2016_03</code>).</p>
     */
    inline const Aws::String& GetBlueprintId() const{ return m_blueprintId; }

    /**
     * <p>The blueprint ID (e.g., <code>os_amlinux_2016_03</code>).</p>
     */
    inline bool BlueprintIdHasBeenSet() const { return m_blueprintIdHasBeenSet; }

    /**
     * <p>The blueprint ID (e.g., <code>os_amlinux_2016_03</code>).</p>
     */
    inline void SetBlueprintId(const Aws::String& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = value; }

    /**
     * <p>The blueprint ID (e.g., <code>os_amlinux_2016_03</code>).</p>
     */
    inline void SetBlueprintId(Aws::String&& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = std::move(value); }

    /**
     * <p>The blueprint ID (e.g., <code>os_amlinux_2016_03</code>).</p>
     */
    inline void SetBlueprintId(const char* value) { m_blueprintIdHasBeenSet = true; m_blueprintId.assign(value); }

    /**
     * <p>The blueprint ID (e.g., <code>os_amlinux_2016_03</code>).</p>
     */
    inline Instance& WithBlueprintId(const Aws::String& value) { SetBlueprintId(value); return *this;}

    /**
     * <p>The blueprint ID (e.g., <code>os_amlinux_2016_03</code>).</p>
     */
    inline Instance& WithBlueprintId(Aws::String&& value) { SetBlueprintId(std::move(value)); return *this;}

    /**
     * <p>The blueprint ID (e.g., <code>os_amlinux_2016_03</code>).</p>
     */
    inline Instance& WithBlueprintId(const char* value) { SetBlueprintId(value); return *this;}


    /**
     * <p>The friendly name of the blueprint (e.g., <code>Amazon Linux</code>).</p>
     */
    inline const Aws::String& GetBlueprintName() const{ return m_blueprintName; }

    /**
     * <p>The friendly name of the blueprint (e.g., <code>Amazon Linux</code>).</p>
     */
    inline bool BlueprintNameHasBeenSet() const { return m_blueprintNameHasBeenSet; }

    /**
     * <p>The friendly name of the blueprint (e.g., <code>Amazon Linux</code>).</p>
     */
    inline void SetBlueprintName(const Aws::String& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = value; }

    /**
     * <p>The friendly name of the blueprint (e.g., <code>Amazon Linux</code>).</p>
     */
    inline void SetBlueprintName(Aws::String&& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = std::move(value); }

    /**
     * <p>The friendly name of the blueprint (e.g., <code>Amazon Linux</code>).</p>
     */
    inline void SetBlueprintName(const char* value) { m_blueprintNameHasBeenSet = true; m_blueprintName.assign(value); }

    /**
     * <p>The friendly name of the blueprint (e.g., <code>Amazon Linux</code>).</p>
     */
    inline Instance& WithBlueprintName(const Aws::String& value) { SetBlueprintName(value); return *this;}

    /**
     * <p>The friendly name of the blueprint (e.g., <code>Amazon Linux</code>).</p>
     */
    inline Instance& WithBlueprintName(Aws::String&& value) { SetBlueprintName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the blueprint (e.g., <code>Amazon Linux</code>).</p>
     */
    inline Instance& WithBlueprintName(const char* value) { SetBlueprintName(value); return *this;}


    /**
     * <p>The bundle for the instance (e.g., <code>micro_1_0</code>).</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p>The bundle for the instance (e.g., <code>micro_1_0</code>).</p>
     */
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }

    /**
     * <p>The bundle for the instance (e.g., <code>micro_1_0</code>).</p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The bundle for the instance (e.g., <code>micro_1_0</code>).</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }

    /**
     * <p>The bundle for the instance (e.g., <code>micro_1_0</code>).</p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p>The bundle for the instance (e.g., <code>micro_1_0</code>).</p>
     */
    inline Instance& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p>The bundle for the instance (e.g., <code>micro_1_0</code>).</p>
     */
    inline Instance& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}

    /**
     * <p>The bundle for the instance (e.g., <code>micro_1_0</code>).</p>
     */
    inline Instance& WithBundleId(const char* value) { SetBundleId(value); return *this;}


    /**
     * <p>An array of objects representing the add-ons enabled on the instance.</p>
     */
    inline const Aws::Vector<AddOn>& GetAddOns() const{ return m_addOns; }

    /**
     * <p>An array of objects representing the add-ons enabled on the instance.</p>
     */
    inline bool AddOnsHasBeenSet() const { return m_addOnsHasBeenSet; }

    /**
     * <p>An array of objects representing the add-ons enabled on the instance.</p>
     */
    inline void SetAddOns(const Aws::Vector<AddOn>& value) { m_addOnsHasBeenSet = true; m_addOns = value; }

    /**
     * <p>An array of objects representing the add-ons enabled on the instance.</p>
     */
    inline void SetAddOns(Aws::Vector<AddOn>&& value) { m_addOnsHasBeenSet = true; m_addOns = std::move(value); }

    /**
     * <p>An array of objects representing the add-ons enabled on the instance.</p>
     */
    inline Instance& WithAddOns(const Aws::Vector<AddOn>& value) { SetAddOns(value); return *this;}

    /**
     * <p>An array of objects representing the add-ons enabled on the instance.</p>
     */
    inline Instance& WithAddOns(Aws::Vector<AddOn>&& value) { SetAddOns(std::move(value)); return *this;}

    /**
     * <p>An array of objects representing the add-ons enabled on the instance.</p>
     */
    inline Instance& AddAddOns(const AddOn& value) { m_addOnsHasBeenSet = true; m_addOns.push_back(value); return *this; }

    /**
     * <p>An array of objects representing the add-ons enabled on the instance.</p>
     */
    inline Instance& AddAddOns(AddOn&& value) { m_addOnsHasBeenSet = true; m_addOns.push_back(std::move(value)); return *this; }


    /**
     * <p>A Boolean value indicating whether this instance has a static IP assigned to
     * it.</p>
     */
    inline bool GetIsStaticIp() const{ return m_isStaticIp; }

    /**
     * <p>A Boolean value indicating whether this instance has a static IP assigned to
     * it.</p>
     */
    inline bool IsStaticIpHasBeenSet() const { return m_isStaticIpHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether this instance has a static IP assigned to
     * it.</p>
     */
    inline void SetIsStaticIp(bool value) { m_isStaticIpHasBeenSet = true; m_isStaticIp = value; }

    /**
     * <p>A Boolean value indicating whether this instance has a static IP assigned to
     * it.</p>
     */
    inline Instance& WithIsStaticIp(bool value) { SetIsStaticIp(value); return *this;}


    /**
     * <p>The private IP address of the instance.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The private IP address of the instance.</p>
     */
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }

    /**
     * <p>The private IP address of the instance.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The private IP address of the instance.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>The private IP address of the instance.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The private IP address of the instance.</p>
     */
    inline Instance& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private IP address of the instance.</p>
     */
    inline Instance& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The private IP address of the instance.</p>
     */
    inline Instance& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}


    /**
     * <p>The public IP address of the instance.</p>
     */
    inline const Aws::String& GetPublicIpAddress() const{ return m_publicIpAddress; }

    /**
     * <p>The public IP address of the instance.</p>
     */
    inline bool PublicIpAddressHasBeenSet() const { return m_publicIpAddressHasBeenSet; }

    /**
     * <p>The public IP address of the instance.</p>
     */
    inline void SetPublicIpAddress(const Aws::String& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = value; }

    /**
     * <p>The public IP address of the instance.</p>
     */
    inline void SetPublicIpAddress(Aws::String&& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = std::move(value); }

    /**
     * <p>The public IP address of the instance.</p>
     */
    inline void SetPublicIpAddress(const char* value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress.assign(value); }

    /**
     * <p>The public IP address of the instance.</p>
     */
    inline Instance& WithPublicIpAddress(const Aws::String& value) { SetPublicIpAddress(value); return *this;}

    /**
     * <p>The public IP address of the instance.</p>
     */
    inline Instance& WithPublicIpAddress(Aws::String&& value) { SetPublicIpAddress(std::move(value)); return *this;}

    /**
     * <p>The public IP address of the instance.</p>
     */
    inline Instance& WithPublicIpAddress(const char* value) { SetPublicIpAddress(value); return *this;}


    /**
     * <p>The IPv6 addresses of the instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv6Addresses() const{ return m_ipv6Addresses; }

    /**
     * <p>The IPv6 addresses of the instance.</p>
     */
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }

    /**
     * <p>The IPv6 addresses of the instance.</p>
     */
    inline void SetIpv6Addresses(const Aws::Vector<Aws::String>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }

    /**
     * <p>The IPv6 addresses of the instance.</p>
     */
    inline void SetIpv6Addresses(Aws::Vector<Aws::String>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::move(value); }

    /**
     * <p>The IPv6 addresses of the instance.</p>
     */
    inline Instance& WithIpv6Addresses(const Aws::Vector<Aws::String>& value) { SetIpv6Addresses(value); return *this;}

    /**
     * <p>The IPv6 addresses of the instance.</p>
     */
    inline Instance& WithIpv6Addresses(Aws::Vector<Aws::String>&& value) { SetIpv6Addresses(std::move(value)); return *this;}

    /**
     * <p>The IPv6 addresses of the instance.</p>
     */
    inline Instance& AddIpv6Addresses(const Aws::String& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }

    /**
     * <p>The IPv6 addresses of the instance.</p>
     */
    inline Instance& AddIpv6Addresses(Aws::String&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The IPv6 addresses of the instance.</p>
     */
    inline Instance& AddIpv6Addresses(const char* value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }


    /**
     * <p>The IP address type of the instance.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }

    /**
     * <p>The IP address type of the instance.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p>
     */
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }

    /**
     * <p>The IP address type of the instance.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p>
     */
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>The IP address type of the instance.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p>
     */
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }

    /**
     * <p>The IP address type of the instance.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p>
     */
    inline Instance& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}

    /**
     * <p>The IP address type of the instance.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p>
     */
    inline Instance& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}


    /**
     * <p>The size of the vCPU and the amount of RAM for the instance.</p>
     */
    inline const InstanceHardware& GetHardware() const{ return m_hardware; }

    /**
     * <p>The size of the vCPU and the amount of RAM for the instance.</p>
     */
    inline bool HardwareHasBeenSet() const { return m_hardwareHasBeenSet; }

    /**
     * <p>The size of the vCPU and the amount of RAM for the instance.</p>
     */
    inline void SetHardware(const InstanceHardware& value) { m_hardwareHasBeenSet = true; m_hardware = value; }

    /**
     * <p>The size of the vCPU and the amount of RAM for the instance.</p>
     */
    inline void SetHardware(InstanceHardware&& value) { m_hardwareHasBeenSet = true; m_hardware = std::move(value); }

    /**
     * <p>The size of the vCPU and the amount of RAM for the instance.</p>
     */
    inline Instance& WithHardware(const InstanceHardware& value) { SetHardware(value); return *this;}

    /**
     * <p>The size of the vCPU and the amount of RAM for the instance.</p>
     */
    inline Instance& WithHardware(InstanceHardware&& value) { SetHardware(std::move(value)); return *this;}


    /**
     * <p>Information about the public ports and monthly data transfer rates for the
     * instance.</p>
     */
    inline const InstanceNetworking& GetNetworking() const{ return m_networking; }

    /**
     * <p>Information about the public ports and monthly data transfer rates for the
     * instance.</p>
     */
    inline bool NetworkingHasBeenSet() const { return m_networkingHasBeenSet; }

    /**
     * <p>Information about the public ports and monthly data transfer rates for the
     * instance.</p>
     */
    inline void SetNetworking(const InstanceNetworking& value) { m_networkingHasBeenSet = true; m_networking = value; }

    /**
     * <p>Information about the public ports and monthly data transfer rates for the
     * instance.</p>
     */
    inline void SetNetworking(InstanceNetworking&& value) { m_networkingHasBeenSet = true; m_networking = std::move(value); }

    /**
     * <p>Information about the public ports and monthly data transfer rates for the
     * instance.</p>
     */
    inline Instance& WithNetworking(const InstanceNetworking& value) { SetNetworking(value); return *this;}

    /**
     * <p>Information about the public ports and monthly data transfer rates for the
     * instance.</p>
     */
    inline Instance& WithNetworking(InstanceNetworking&& value) { SetNetworking(std::move(value)); return *this;}


    /**
     * <p>The status code and the state (e.g., <code>running</code>) for the
     * instance.</p>
     */
    inline const InstanceState& GetState() const{ return m_state; }

    /**
     * <p>The status code and the state (e.g., <code>running</code>) for the
     * instance.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The status code and the state (e.g., <code>running</code>) for the
     * instance.</p>
     */
    inline void SetState(const InstanceState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The status code and the state (e.g., <code>running</code>) for the
     * instance.</p>
     */
    inline void SetState(InstanceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The status code and the state (e.g., <code>running</code>) for the
     * instance.</p>
     */
    inline Instance& WithState(const InstanceState& value) { SetState(value); return *this;}

    /**
     * <p>The status code and the state (e.g., <code>running</code>) for the
     * instance.</p>
     */
    inline Instance& WithState(InstanceState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The user name for connecting to the instance (e.g.,
     * <code>ec2-user</code>).</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name for connecting to the instance (e.g.,
     * <code>ec2-user</code>).</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user name for connecting to the instance (e.g.,
     * <code>ec2-user</code>).</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name for connecting to the instance (e.g.,
     * <code>ec2-user</code>).</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user name for connecting to the instance (e.g.,
     * <code>ec2-user</code>).</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name for connecting to the instance (e.g.,
     * <code>ec2-user</code>).</p>
     */
    inline Instance& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name for connecting to the instance (e.g.,
     * <code>ec2-user</code>).</p>
     */
    inline Instance& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name for connecting to the instance (e.g.,
     * <code>ec2-user</code>).</p>
     */
    inline Instance& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The name of the SSH key being used to connect to the instance (e.g.,
     * <code>LightsailDefaultKeyPair</code>).</p>
     */
    inline const Aws::String& GetSshKeyName() const{ return m_sshKeyName; }

    /**
     * <p>The name of the SSH key being used to connect to the instance (e.g.,
     * <code>LightsailDefaultKeyPair</code>).</p>
     */
    inline bool SshKeyNameHasBeenSet() const { return m_sshKeyNameHasBeenSet; }

    /**
     * <p>The name of the SSH key being used to connect to the instance (e.g.,
     * <code>LightsailDefaultKeyPair</code>).</p>
     */
    inline void SetSshKeyName(const Aws::String& value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName = value; }

    /**
     * <p>The name of the SSH key being used to connect to the instance (e.g.,
     * <code>LightsailDefaultKeyPair</code>).</p>
     */
    inline void SetSshKeyName(Aws::String&& value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName = std::move(value); }

    /**
     * <p>The name of the SSH key being used to connect to the instance (e.g.,
     * <code>LightsailDefaultKeyPair</code>).</p>
     */
    inline void SetSshKeyName(const char* value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName.assign(value); }

    /**
     * <p>The name of the SSH key being used to connect to the instance (e.g.,
     * <code>LightsailDefaultKeyPair</code>).</p>
     */
    inline Instance& WithSshKeyName(const Aws::String& value) { SetSshKeyName(value); return *this;}

    /**
     * <p>The name of the SSH key being used to connect to the instance (e.g.,
     * <code>LightsailDefaultKeyPair</code>).</p>
     */
    inline Instance& WithSshKeyName(Aws::String&& value) { SetSshKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the SSH key being used to connect to the instance (e.g.,
     * <code>LightsailDefaultKeyPair</code>).</p>
     */
    inline Instance& WithSshKeyName(const char* value) { SetSshKeyName(value); return *this;}


    /**
     * <p>The metadata options for the Amazon Lightsail instance.</p>
     */
    inline const InstanceMetadataOptions& GetMetadataOptions() const{ return m_metadataOptions; }

    /**
     * <p>The metadata options for the Amazon Lightsail instance.</p>
     */
    inline bool MetadataOptionsHasBeenSet() const { return m_metadataOptionsHasBeenSet; }

    /**
     * <p>The metadata options for the Amazon Lightsail instance.</p>
     */
    inline void SetMetadataOptions(const InstanceMetadataOptions& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = value; }

    /**
     * <p>The metadata options for the Amazon Lightsail instance.</p>
     */
    inline void SetMetadataOptions(InstanceMetadataOptions&& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = std::move(value); }

    /**
     * <p>The metadata options for the Amazon Lightsail instance.</p>
     */
    inline Instance& WithMetadataOptions(const InstanceMetadataOptions& value) { SetMetadataOptions(value); return *this;}

    /**
     * <p>The metadata options for the Amazon Lightsail instance.</p>
     */
    inline Instance& WithMetadataOptions(InstanceMetadataOptions&& value) { SetMetadataOptions(std::move(value)); return *this;}

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
