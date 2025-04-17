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
    AWS_CONNECT_API AssociatedContactSummary() = default;
    AWS_CONNECT_API AssociatedContactSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AssociatedContactSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline const Aws::String& GetContactId() const { return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    template<typename ContactIdT = Aws::String>
    void SetContactId(ContactIdT&& value) { m_contactIdHasBeenSet = true; m_contactId = std::forward<ContactIdT>(value); }
    template<typename ContactIdT = Aws::String>
    AssociatedContactSummary& WithContactId(ContactIdT&& value) { SetContactId(std::forward<ContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the contact</p>
     */
    inline const Aws::String& GetContactArn() const { return m_contactArn; }
    inline bool ContactArnHasBeenSet() const { return m_contactArnHasBeenSet; }
    template<typename ContactArnT = Aws::String>
    void SetContactArn(ContactArnT&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::forward<ContactArnT>(value); }
    template<typename ContactArnT = Aws::String>
    AssociatedContactSummary& WithContactArn(ContactArnT&& value) { SetContactArn(std::forward<ContactArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time this contact was initiated, in UTC time.</p>
     */
    inline const Aws::Utils::DateTime& GetInitiationTimestamp() const { return m_initiationTimestamp; }
    inline bool InitiationTimestampHasBeenSet() const { return m_initiationTimestampHasBeenSet; }
    template<typename InitiationTimestampT = Aws::Utils::DateTime>
    void SetInitiationTimestamp(InitiationTimestampT&& value) { m_initiationTimestampHasBeenSet = true; m_initiationTimestamp = std::forward<InitiationTimestampT>(value); }
    template<typename InitiationTimestampT = Aws::Utils::DateTime>
    AssociatedContactSummary& WithInitiationTimestamp(InitiationTimestampT&& value) { SetInitiationTimestamp(std::forward<InitiationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the customer endpoint disconnected from the current
     * contact, in UTC time. In transfer scenarios, the DisconnectTimestamp of the
     * previous contact indicates the date and time when that contact ended.</p>
     */
    inline const Aws::Utils::DateTime& GetDisconnectTimestamp() const { return m_disconnectTimestamp; }
    inline bool DisconnectTimestampHasBeenSet() const { return m_disconnectTimestampHasBeenSet; }
    template<typename DisconnectTimestampT = Aws::Utils::DateTime>
    void SetDisconnectTimestamp(DisconnectTimestampT&& value) { m_disconnectTimestampHasBeenSet = true; m_disconnectTimestamp = std::forward<DisconnectTimestampT>(value); }
    template<typename DisconnectTimestampT = Aws::Utils::DateTime>
    AssociatedContactSummary& WithDisconnectTimestamp(DisconnectTimestampT&& value) { SetDisconnectTimestamp(std::forward<DisconnectTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this contact is related to other contacts, this is the ID of the initial
     * contact.</p>
     */
    inline const Aws::String& GetInitialContactId() const { return m_initialContactId; }
    inline bool InitialContactIdHasBeenSet() const { return m_initialContactIdHasBeenSet; }
    template<typename InitialContactIdT = Aws::String>
    void SetInitialContactId(InitialContactIdT&& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = std::forward<InitialContactIdT>(value); }
    template<typename InitialContactIdT = Aws::String>
    AssociatedContactSummary& WithInitialContactId(InitialContactIdT&& value) { SetInitialContactId(std::forward<InitialContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this contact is not the first contact, this is the ID of the previous
     * contact.</p>
     */
    inline const Aws::String& GetPreviousContactId() const { return m_previousContactId; }
    inline bool PreviousContactIdHasBeenSet() const { return m_previousContactIdHasBeenSet; }
    template<typename PreviousContactIdT = Aws::String>
    void SetPreviousContactId(PreviousContactIdT&& value) { m_previousContactIdHasBeenSet = true; m_previousContactId = std::forward<PreviousContactIdT>(value); }
    template<typename PreviousContactIdT = Aws::String>
    AssociatedContactSummary& WithPreviousContactId(PreviousContactIdT&& value) { SetPreviousContactId(std::forward<PreviousContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contactId that is related to this contact.</p>
     */
    inline const Aws::String& GetRelatedContactId() const { return m_relatedContactId; }
    inline bool RelatedContactIdHasBeenSet() const { return m_relatedContactIdHasBeenSet; }
    template<typename RelatedContactIdT = Aws::String>
    void SetRelatedContactId(RelatedContactIdT&& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = std::forward<RelatedContactIdT>(value); }
    template<typename RelatedContactIdT = Aws::String>
    AssociatedContactSummary& WithRelatedContactId(RelatedContactIdT&& value) { SetRelatedContactId(std::forward<RelatedContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how the contact was initiated.</p>
     */
    inline ContactInitiationMethod GetInitiationMethod() const { return m_initiationMethod; }
    inline bool InitiationMethodHasBeenSet() const { return m_initiationMethodHasBeenSet; }
    inline void SetInitiationMethod(ContactInitiationMethod value) { m_initiationMethodHasBeenSet = true; m_initiationMethod = value; }
    inline AssociatedContactSummary& WithInitiationMethod(ContactInitiationMethod value) { SetInitiationMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How the contact reached your contact center.</p>
     */
    inline Channel GetChannel() const { return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(Channel value) { m_channelHasBeenSet = true; m_channel = value; }
    inline AssociatedContactSummary& WithChannel(Channel value) { SetChannel(value); return *this;}
    ///@}
  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    Aws::String m_contactArn;
    bool m_contactArnHasBeenSet = false;

    Aws::Utils::DateTime m_initiationTimestamp{};
    bool m_initiationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_disconnectTimestamp{};
    bool m_disconnectTimestampHasBeenSet = false;

    Aws::String m_initialContactId;
    bool m_initialContactIdHasBeenSet = false;

    Aws::String m_previousContactId;
    bool m_previousContactIdHasBeenSet = false;

    Aws::String m_relatedContactId;
    bool m_relatedContactIdHasBeenSet = false;

    ContactInitiationMethod m_initiationMethod{ContactInitiationMethod::NOT_SET};
    bool m_initiationMethodHasBeenSet = false;

    Channel m_channel{Channel::NOT_SET};
    bool m_channelHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
