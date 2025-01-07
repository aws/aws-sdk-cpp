/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connect/model/ContactInitiationMethod.h>
#include <aws/connect/model/Channel.h>
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
   * <p>Contact summary of a contact in contact tree associated with unique
   * identifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociatedContactSummary">AWS
   * API Reference</a></p>
   */
  class AssociatedContactSummary
  {
  public:
    AWS_CONNECT_API AssociatedContactSummary();
    AWS_CONNECT_API AssociatedContactSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AssociatedContactSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }
    inline AssociatedContactSummary& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}
    inline AssociatedContactSummary& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}
    inline AssociatedContactSummary& WithContactId(const char* value) { SetContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the contact</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }
    inline bool ContactArnHasBeenSet() const { return m_contactArnHasBeenSet; }
    inline void SetContactArn(const Aws::String& value) { m_contactArnHasBeenSet = true; m_contactArn = value; }
    inline void SetContactArn(Aws::String&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::move(value); }
    inline void SetContactArn(const char* value) { m_contactArnHasBeenSet = true; m_contactArn.assign(value); }
    inline AssociatedContactSummary& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}
    inline AssociatedContactSummary& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}
    inline AssociatedContactSummary& WithContactArn(const char* value) { SetContactArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time this contact was initiated, in UTC time.</p>
     */
    inline const Aws::Utils::DateTime& GetInitiationTimestamp() const{ return m_initiationTimestamp; }
    inline bool InitiationTimestampHasBeenSet() const { return m_initiationTimestampHasBeenSet; }
    inline void SetInitiationTimestamp(const Aws::Utils::DateTime& value) { m_initiationTimestampHasBeenSet = true; m_initiationTimestamp = value; }
    inline void SetInitiationTimestamp(Aws::Utils::DateTime&& value) { m_initiationTimestampHasBeenSet = true; m_initiationTimestamp = std::move(value); }
    inline AssociatedContactSummary& WithInitiationTimestamp(const Aws::Utils::DateTime& value) { SetInitiationTimestamp(value); return *this;}
    inline AssociatedContactSummary& WithInitiationTimestamp(Aws::Utils::DateTime&& value) { SetInitiationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the customer endpoint disconnected from Amazon
     * Connect.</p>
     */
    inline const Aws::Utils::DateTime& GetDisconnectTimestamp() const{ return m_disconnectTimestamp; }
    inline bool DisconnectTimestampHasBeenSet() const { return m_disconnectTimestampHasBeenSet; }
    inline void SetDisconnectTimestamp(const Aws::Utils::DateTime& value) { m_disconnectTimestampHasBeenSet = true; m_disconnectTimestamp = value; }
    inline void SetDisconnectTimestamp(Aws::Utils::DateTime&& value) { m_disconnectTimestampHasBeenSet = true; m_disconnectTimestamp = std::move(value); }
    inline AssociatedContactSummary& WithDisconnectTimestamp(const Aws::Utils::DateTime& value) { SetDisconnectTimestamp(value); return *this;}
    inline AssociatedContactSummary& WithDisconnectTimestamp(Aws::Utils::DateTime&& value) { SetDisconnectTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this contact is related to other contacts, this is the ID of the initial
     * contact.</p>
     */
    inline const Aws::String& GetInitialContactId() const{ return m_initialContactId; }
    inline bool InitialContactIdHasBeenSet() const { return m_initialContactIdHasBeenSet; }
    inline void SetInitialContactId(const Aws::String& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = value; }
    inline void SetInitialContactId(Aws::String&& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = std::move(value); }
    inline void SetInitialContactId(const char* value) { m_initialContactIdHasBeenSet = true; m_initialContactId.assign(value); }
    inline AssociatedContactSummary& WithInitialContactId(const Aws::String& value) { SetInitialContactId(value); return *this;}
    inline AssociatedContactSummary& WithInitialContactId(Aws::String&& value) { SetInitialContactId(std::move(value)); return *this;}
    inline AssociatedContactSummary& WithInitialContactId(const char* value) { SetInitialContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this contact is not the first contact, this is the ID of the previous
     * contact.</p>
     */
    inline const Aws::String& GetPreviousContactId() const{ return m_previousContactId; }
    inline bool PreviousContactIdHasBeenSet() const { return m_previousContactIdHasBeenSet; }
    inline void SetPreviousContactId(const Aws::String& value) { m_previousContactIdHasBeenSet = true; m_previousContactId = value; }
    inline void SetPreviousContactId(Aws::String&& value) { m_previousContactIdHasBeenSet = true; m_previousContactId = std::move(value); }
    inline void SetPreviousContactId(const char* value) { m_previousContactIdHasBeenSet = true; m_previousContactId.assign(value); }
    inline AssociatedContactSummary& WithPreviousContactId(const Aws::String& value) { SetPreviousContactId(value); return *this;}
    inline AssociatedContactSummary& WithPreviousContactId(Aws::String&& value) { SetPreviousContactId(std::move(value)); return *this;}
    inline AssociatedContactSummary& WithPreviousContactId(const char* value) { SetPreviousContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contactId that is related to this contact.</p>
     */
    inline const Aws::String& GetRelatedContactId() const{ return m_relatedContactId; }
    inline bool RelatedContactIdHasBeenSet() const { return m_relatedContactIdHasBeenSet; }
    inline void SetRelatedContactId(const Aws::String& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = value; }
    inline void SetRelatedContactId(Aws::String&& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = std::move(value); }
    inline void SetRelatedContactId(const char* value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId.assign(value); }
    inline AssociatedContactSummary& WithRelatedContactId(const Aws::String& value) { SetRelatedContactId(value); return *this;}
    inline AssociatedContactSummary& WithRelatedContactId(Aws::String&& value) { SetRelatedContactId(std::move(value)); return *this;}
    inline AssociatedContactSummary& WithRelatedContactId(const char* value) { SetRelatedContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how the contact was initiated.</p>
     */
    inline const ContactInitiationMethod& GetInitiationMethod() const{ return m_initiationMethod; }
    inline bool InitiationMethodHasBeenSet() const { return m_initiationMethodHasBeenSet; }
    inline void SetInitiationMethod(const ContactInitiationMethod& value) { m_initiationMethodHasBeenSet = true; m_initiationMethod = value; }
    inline void SetInitiationMethod(ContactInitiationMethod&& value) { m_initiationMethodHasBeenSet = true; m_initiationMethod = std::move(value); }
    inline AssociatedContactSummary& WithInitiationMethod(const ContactInitiationMethod& value) { SetInitiationMethod(value); return *this;}
    inline AssociatedContactSummary& WithInitiationMethod(ContactInitiationMethod&& value) { SetInitiationMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How the contact reached your contact center.</p>
     */
    inline const Channel& GetChannel() const{ return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(const Channel& value) { m_channelHasBeenSet = true; m_channel = value; }
    inline void SetChannel(Channel&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }
    inline AssociatedContactSummary& WithChannel(const Channel& value) { SetChannel(value); return *this;}
    inline AssociatedContactSummary& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    Aws::String m_contactArn;
    bool m_contactArnHasBeenSet = false;

    Aws::Utils::DateTime m_initiationTimestamp;
    bool m_initiationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_disconnectTimestamp;
    bool m_disconnectTimestampHasBeenSet = false;

    Aws::String m_initialContactId;
    bool m_initialContactIdHasBeenSet = false;

    Aws::String m_previousContactId;
    bool m_previousContactIdHasBeenSet = false;

    Aws::String m_relatedContactId;
    bool m_relatedContactIdHasBeenSet = false;

    ContactInitiationMethod m_initiationMethod;
    bool m_initiationMethodHasBeenSet = false;

    Channel m_channel;
    bool m_channelHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
