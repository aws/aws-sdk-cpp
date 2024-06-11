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
   * <p>Describes a static IP.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StaticIp">AWS
   * API Reference</a></p>
   */
  class StaticIp
  {
  public:
    AWS_LIGHTSAIL_API StaticIp();
    AWS_LIGHTSAIL_API StaticIp(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API StaticIp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the static IP (<code>StaticIP-Ohio-EXAMPLE</code>).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StaticIp& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StaticIp& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StaticIp& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the static IP
     * (<code>arn:aws:lightsail:us-east-2:123456789101:StaticIp/9cbb4a9e-f8e3-4dfe-b57e-12345EXAMPLE</code>).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline StaticIp& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline StaticIp& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline StaticIp& WithArn(const char* value) { SetArn(value); return *this;}
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
    inline StaticIp& WithSupportCode(const Aws::String& value) { SetSupportCode(value); return *this;}
    inline StaticIp& WithSupportCode(Aws::String&& value) { SetSupportCode(std::move(value)); return *this;}
    inline StaticIp& WithSupportCode(const char* value) { SetSupportCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the static IP was created
     * (<code>1479735304.222</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline StaticIp& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline StaticIp& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region and Availability Zone where the static IP was created.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline StaticIp& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}
    inline StaticIp& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type (usually <code>StaticIp</code>).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline StaticIp& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline StaticIp& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The static IP address.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline StaticIp& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline StaticIp& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline StaticIp& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance where the static IP is attached
     * (<code>Amazon_Linux-1GB-Ohio-1</code>).</p>
     */
    inline const Aws::String& GetAttachedTo() const{ return m_attachedTo; }
    inline bool AttachedToHasBeenSet() const { return m_attachedToHasBeenSet; }
    inline void SetAttachedTo(const Aws::String& value) { m_attachedToHasBeenSet = true; m_attachedTo = value; }
    inline void SetAttachedTo(Aws::String&& value) { m_attachedToHasBeenSet = true; m_attachedTo = std::move(value); }
    inline void SetAttachedTo(const char* value) { m_attachedToHasBeenSet = true; m_attachedTo.assign(value); }
    inline StaticIp& WithAttachedTo(const Aws::String& value) { SetAttachedTo(value); return *this;}
    inline StaticIp& WithAttachedTo(Aws::String&& value) { SetAttachedTo(std::move(value)); return *this;}
    inline StaticIp& WithAttachedTo(const char* value) { SetAttachedTo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the static IP is attached.</p>
     */
    inline bool GetIsAttached() const{ return m_isAttached; }
    inline bool IsAttachedHasBeenSet() const { return m_isAttachedHasBeenSet; }
    inline void SetIsAttached(bool value) { m_isAttachedHasBeenSet = true; m_isAttached = value; }
    inline StaticIp& WithIsAttached(bool value) { SetIsAttached(value); return *this;}
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

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_attachedTo;
    bool m_attachedToHasBeenSet = false;

    bool m_isAttached;
    bool m_isAttachedHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
