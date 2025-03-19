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
   * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-notifications">Notifications
   * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ContactMethod">AWS
   * API Reference</a></p>
   */
  class ContactMethod
  {
  public:
    AWS_LIGHTSAIL_API ContactMethod() = default;
    AWS_LIGHTSAIL_API ContactMethod(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ContactMethod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The destination of the contact method, such as an email address or a mobile
     * phone number.</p>
     */
    inline const Aws::String& GetContactEndpoint() const { return m_contactEndpoint; }
    inline bool ContactEndpointHasBeenSet() const { return m_contactEndpointHasBeenSet; }
    template<typename ContactEndpointT = Aws::String>
    void SetContactEndpoint(ContactEndpointT&& value) { m_contactEndpointHasBeenSet = true; m_contactEndpoint = std::forward<ContactEndpointT>(value); }
    template<typename ContactEndpointT = Aws::String>
    ContactMethod& WithContactEndpoint(ContactEndpointT&& value) { SetContactEndpoint(std::forward<ContactEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the contact method.</p> <p>A contact method has the
     * following possible status:</p> <ul> <li> <p> <code>PendingVerification</code> -
     * The contact method has not yet been verified, and the verification has not yet
     * expired.</p> </li> <li> <p> <code>Valid</code> - The contact method has been
     * verified.</p> </li> <li> <p> <code>InValid</code> - An attempt was made to
     * verify the contact method, but the verification has expired.</p> </li> </ul>
     */
    inline ContactMethodStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ContactMethodStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ContactMethod& WithStatus(ContactMethodStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol of the contact method, such as email or SMS (text
     * messaging).</p>
     */
    inline ContactProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(ContactProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline ContactMethod& WithProtocol(ContactProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the contact method.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ContactMethod& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the contact method.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ContactMethod& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the contact method was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ContactMethod& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the location of the contact method, such as the
     * Amazon Web Services Region and Availability Zone.</p>
     */
    inline const ResourceLocation& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = ResourceLocation>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = ResourceLocation>
    ContactMethod& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lightsail resource type of the contact method.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline ContactMethod& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail contact method. This code enables our support
     * team to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const { return m_supportCode; }
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }
    template<typename SupportCodeT = Aws::String>
    void SetSupportCode(SupportCodeT&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::forward<SupportCodeT>(value); }
    template<typename SupportCodeT = Aws::String>
    ContactMethod& WithSupportCode(SupportCodeT&& value) { SetSupportCode(std::forward<SupportCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactEndpoint;
    bool m_contactEndpointHasBeenSet = false;

    ContactMethodStatus m_status{ContactMethodStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ContactProtocol m_protocol{ContactProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
