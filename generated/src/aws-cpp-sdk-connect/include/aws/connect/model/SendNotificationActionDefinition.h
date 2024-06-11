﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/NotificationDeliveryType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/NotificationContentType.h>
#include <aws/connect/model/NotificationRecipientType.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the send notification action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SendNotificationActionDefinition">AWS
   * API Reference</a></p>
   */
  class SendNotificationActionDefinition
  {
  public:
    AWS_CONNECT_API SendNotificationActionDefinition();
    AWS_CONNECT_API SendNotificationActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SendNotificationActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Notification delivery method.</p>
     */
    inline const NotificationDeliveryType& GetDeliveryMethod() const{ return m_deliveryMethod; }
    inline bool DeliveryMethodHasBeenSet() const { return m_deliveryMethodHasBeenSet; }
    inline void SetDeliveryMethod(const NotificationDeliveryType& value) { m_deliveryMethodHasBeenSet = true; m_deliveryMethod = value; }
    inline void SetDeliveryMethod(NotificationDeliveryType&& value) { m_deliveryMethodHasBeenSet = true; m_deliveryMethod = std::move(value); }
    inline SendNotificationActionDefinition& WithDeliveryMethod(const NotificationDeliveryType& value) { SetDeliveryMethod(value); return *this;}
    inline SendNotificationActionDefinition& WithDeliveryMethod(NotificationDeliveryType&& value) { SetDeliveryMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject of the email if the delivery method is <code>EMAIL</code>.
     * Supports variable injection. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-variable-injection.html">JSONPath
     * reference</a> in the <i>Amazon Connect Administrators Guide</i>.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }
    inline SendNotificationActionDefinition& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}
    inline SendNotificationActionDefinition& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}
    inline SendNotificationActionDefinition& WithSubject(const char* value) { SetSubject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Notification content. Supports variable injection. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-variable-injection.html">JSONPath
     * reference</a> in the <i>Amazon Connect Administrators Guide</i>.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline SendNotificationActionDefinition& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline SendNotificationActionDefinition& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline SendNotificationActionDefinition& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Content type format.</p>
     */
    inline const NotificationContentType& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const NotificationContentType& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(NotificationContentType&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline SendNotificationActionDefinition& WithContentType(const NotificationContentType& value) { SetContentType(value); return *this;}
    inline SendNotificationActionDefinition& WithContentType(NotificationContentType&& value) { SetContentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Notification recipient.</p>
     */
    inline const NotificationRecipientType& GetRecipient() const{ return m_recipient; }
    inline bool RecipientHasBeenSet() const { return m_recipientHasBeenSet; }
    inline void SetRecipient(const NotificationRecipientType& value) { m_recipientHasBeenSet = true; m_recipient = value; }
    inline void SetRecipient(NotificationRecipientType&& value) { m_recipientHasBeenSet = true; m_recipient = std::move(value); }
    inline SendNotificationActionDefinition& WithRecipient(const NotificationRecipientType& value) { SetRecipient(value); return *this;}
    inline SendNotificationActionDefinition& WithRecipient(NotificationRecipientType&& value) { SetRecipient(std::move(value)); return *this;}
    ///@}
  private:

    NotificationDeliveryType m_deliveryMethod;
    bool m_deliveryMethodHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    NotificationContentType m_contentType;
    bool m_contentTypeHasBeenSet = false;

    NotificationRecipientType m_recipient;
    bool m_recipientHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
