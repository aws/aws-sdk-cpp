/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ContactMethodStatus.h>
#include <aws/lightsail/model/ContactProtocol.h>
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
   * <p>Describes a contact method.</p> <p>A contact method is a way to send you
   * notifications. For more information, see <a
   * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
   * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ContactMethod">AWS
   * API Reference</a></p>
   */
  class ContactMethod
  {
  public:
    AWS_LIGHTSAIL_API ContactMethod();
    AWS_LIGHTSAIL_API ContactMethod(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ContactMethod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The destination of the contact method, such as an email address or a mobile
     * phone number.</p>
     */
    inline const Aws::String& GetContactEndpoint() const{ return m_contactEndpoint; }

    /**
     * <p>The destination of the contact method, such as an email address or a mobile
     * phone number.</p>
     */
    inline bool ContactEndpointHasBeenSet() const { return m_contactEndpointHasBeenSet; }

    /**
     * <p>The destination of the contact method, such as an email address or a mobile
     * phone number.</p>
     */
    inline void SetContactEndpoint(const Aws::String& value) { m_contactEndpointHasBeenSet = true; m_contactEndpoint = value; }

    /**
     * <p>The destination of the contact method, such as an email address or a mobile
     * phone number.</p>
     */
    inline void SetContactEndpoint(Aws::String&& value) { m_contactEndpointHasBeenSet = true; m_contactEndpoint = std::move(value); }

    /**
     * <p>The destination of the contact method, such as an email address or a mobile
     * phone number.</p>
     */
    inline void SetContactEndpoint(const char* value) { m_contactEndpointHasBeenSet = true; m_contactEndpoint.assign(value); }

    /**
     * <p>The destination of the contact method, such as an email address or a mobile
     * phone number.</p>
     */
    inline ContactMethod& WithContactEndpoint(const Aws::String& value) { SetContactEndpoint(value); return *this;}

    /**
     * <p>The destination of the contact method, such as an email address or a mobile
     * phone number.</p>
     */
    inline ContactMethod& WithContactEndpoint(Aws::String&& value) { SetContactEndpoint(std::move(value)); return *this;}

    /**
     * <p>The destination of the contact method, such as an email address or a mobile
     * phone number.</p>
     */
    inline ContactMethod& WithContactEndpoint(const char* value) { SetContactEndpoint(value); return *this;}


    /**
     * <p>The current status of the contact method.</p> <p>A contact method has the
     * following possible status:</p> <ul> <li> <p> <code>PendingVerification</code> -
     * The contact method has not yet been verified, and the verification has not yet
     * expired.</p> </li> <li> <p> <code>Valid</code> - The contact method has been
     * verified.</p> </li> <li> <p> <code>InValid</code> - An attempt was made to
     * verify the contact method, but the verification has expired.</p> </li> </ul>
     */
    inline const ContactMethodStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the contact method.</p> <p>A contact method has the
     * following possible status:</p> <ul> <li> <p> <code>PendingVerification</code> -
     * The contact method has not yet been verified, and the verification has not yet
     * expired.</p> </li> <li> <p> <code>Valid</code> - The contact method has been
     * verified.</p> </li> <li> <p> <code>InValid</code> - An attempt was made to
     * verify the contact method, but the verification has expired.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the contact method.</p> <p>A contact method has the
     * following possible status:</p> <ul> <li> <p> <code>PendingVerification</code> -
     * The contact method has not yet been verified, and the verification has not yet
     * expired.</p> </li> <li> <p> <code>Valid</code> - The contact method has been
     * verified.</p> </li> <li> <p> <code>InValid</code> - An attempt was made to
     * verify the contact method, but the verification has expired.</p> </li> </ul>
     */
    inline void SetStatus(const ContactMethodStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the contact method.</p> <p>A contact method has the
     * following possible status:</p> <ul> <li> <p> <code>PendingVerification</code> -
     * The contact method has not yet been verified, and the verification has not yet
     * expired.</p> </li> <li> <p> <code>Valid</code> - The contact method has been
     * verified.</p> </li> <li> <p> <code>InValid</code> - An attempt was made to
     * verify the contact method, but the verification has expired.</p> </li> </ul>
     */
    inline void SetStatus(ContactMethodStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the contact method.</p> <p>A contact method has the
     * following possible status:</p> <ul> <li> <p> <code>PendingVerification</code> -
     * The contact method has not yet been verified, and the verification has not yet
     * expired.</p> </li> <li> <p> <code>Valid</code> - The contact method has been
     * verified.</p> </li> <li> <p> <code>InValid</code> - An attempt was made to
     * verify the contact method, but the verification has expired.</p> </li> </ul>
     */
    inline ContactMethod& WithStatus(const ContactMethodStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the contact method.</p> <p>A contact method has the
     * following possible status:</p> <ul> <li> <p> <code>PendingVerification</code> -
     * The contact method has not yet been verified, and the verification has not yet
     * expired.</p> </li> <li> <p> <code>Valid</code> - The contact method has been
     * verified.</p> </li> <li> <p> <code>InValid</code> - An attempt was made to
     * verify the contact method, but the verification has expired.</p> </li> </ul>
     */
    inline ContactMethod& WithStatus(ContactMethodStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The protocol of the contact method, such as email or SMS (text
     * messaging).</p>
     */
    inline const ContactProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol of the contact method, such as email or SMS (text
     * messaging).</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol of the contact method, such as email or SMS (text
     * messaging).</p>
     */
    inline void SetProtocol(const ContactProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol of the contact method, such as email or SMS (text
     * messaging).</p>
     */
    inline void SetProtocol(ContactProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol of the contact method, such as email or SMS (text
     * messaging).</p>
     */
    inline ContactMethod& WithProtocol(const ContactProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol of the contact method, such as email or SMS (text
     * messaging).</p>
     */
    inline ContactMethod& WithProtocol(ContactProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The name of the contact method.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the contact method.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the contact method.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the contact method.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the contact method.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the contact method.</p>
     */
    inline ContactMethod& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the contact method.</p>
     */
    inline ContactMethod& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the contact method.</p>
     */
    inline ContactMethod& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the contact method.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact method.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact method.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact method.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact method.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact method.</p>
     */
    inline ContactMethod& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact method.</p>
     */
    inline ContactMethod& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact method.</p>
     */
    inline ContactMethod& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The timestamp when the contact method was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the contact method was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when the contact method was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the contact method was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the contact method was created.</p>
     */
    inline ContactMethod& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the contact method was created.</p>
     */
    inline ContactMethod& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>An object that describes the location of the contact method, such as the
     * Amazon Web Services Region and Availability Zone.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }

    /**
     * <p>An object that describes the location of the contact method, such as the
     * Amazon Web Services Region and Availability Zone.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>An object that describes the location of the contact method, such as the
     * Amazon Web Services Region and Availability Zone.</p>
     */
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>An object that describes the location of the contact method, such as the
     * Amazon Web Services Region and Availability Zone.</p>
     */
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>An object that describes the location of the contact method, such as the
     * Amazon Web Services Region and Availability Zone.</p>
     */
    inline ContactMethod& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>An object that describes the location of the contact method, such as the
     * Amazon Web Services Region and Availability Zone.</p>
     */
    inline ContactMethod& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The Lightsail resource type (e.g., <code>ContactMethod</code>).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The Lightsail resource type (e.g., <code>ContactMethod</code>).</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The Lightsail resource type (e.g., <code>ContactMethod</code>).</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The Lightsail resource type (e.g., <code>ContactMethod</code>).</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The Lightsail resource type (e.g., <code>ContactMethod</code>).</p>
     */
    inline ContactMethod& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The Lightsail resource type (e.g., <code>ContactMethod</code>).</p>
     */
    inline ContactMethod& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail contact method. This code enables our support
     * team to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const{ return m_supportCode; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail contact method. This code enables our support
     * team to look up your Lightsail information more easily.</p>
     */
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail contact method. This code enables our support
     * team to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const Aws::String& value) { m_supportCodeHasBeenSet = true; m_supportCode = value; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail contact method. This code enables our support
     * team to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(Aws::String&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::move(value); }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail contact method. This code enables our support
     * team to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const char* value) { m_supportCodeHasBeenSet = true; m_supportCode.assign(value); }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail contact method. This code enables our support
     * team to look up your Lightsail information more easily.</p>
     */
    inline ContactMethod& WithSupportCode(const Aws::String& value) { SetSupportCode(value); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail contact method. This code enables our support
     * team to look up your Lightsail information more easily.</p>
     */
    inline ContactMethod& WithSupportCode(Aws::String&& value) { SetSupportCode(std::move(value)); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail contact method. This code enables our support
     * team to look up your Lightsail information more easily.</p>
     */
    inline ContactMethod& WithSupportCode(const char* value) { SetSupportCode(value); return *this;}

  private:

    Aws::String m_contactEndpoint;
    bool m_contactEndpointHasBeenSet = false;

    ContactMethodStatus m_status;
    bool m_statusHasBeenSet = false;

    ContactProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
