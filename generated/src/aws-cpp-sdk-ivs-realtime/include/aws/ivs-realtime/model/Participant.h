/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/ParticipantState.h>
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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p>Object describing a participant that has joined a stage.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/Participant">AWS
   * API Reference</a></p>
   */
  class Participant
  {
  public:
    AWS_IVSREALTIME_API Participant();
    AWS_IVSREALTIME_API Participant(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Participant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline Participant& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline Participant& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline Participant& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline Participant& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline Participant& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline Participant& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline Participant& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline Participant& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline Participant& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>ISO 8601 timestamp (returned as a string) when the participant first joined
     * the stage session.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstJoinTime() const{ return m_firstJoinTime; }

    /**
     * <p>ISO 8601 timestamp (returned as a string) when the participant first joined
     * the stage session.</p>
     */
    inline bool FirstJoinTimeHasBeenSet() const { return m_firstJoinTimeHasBeenSet; }

    /**
     * <p>ISO 8601 timestamp (returned as a string) when the participant first joined
     * the stage session.</p>
     */
    inline void SetFirstJoinTime(const Aws::Utils::DateTime& value) { m_firstJoinTimeHasBeenSet = true; m_firstJoinTime = value; }

    /**
     * <p>ISO 8601 timestamp (returned as a string) when the participant first joined
     * the stage session.</p>
     */
    inline void SetFirstJoinTime(Aws::Utils::DateTime&& value) { m_firstJoinTimeHasBeenSet = true; m_firstJoinTime = std::move(value); }

    /**
     * <p>ISO 8601 timestamp (returned as a string) when the participant first joined
     * the stage session.</p>
     */
    inline Participant& WithFirstJoinTime(const Aws::Utils::DateTime& value) { SetFirstJoinTime(value); return *this;}

    /**
     * <p>ISO 8601 timestamp (returned as a string) when the participant first joined
     * the stage session.</p>
     */
    inline Participant& WithFirstJoinTime(Aws::Utils::DateTime&& value) { SetFirstJoinTime(std::move(value)); return *this;}


    /**
     * <p>Unique identifier for this participant, assigned by IVS.</p>
     */
    inline const Aws::String& GetParticipantId() const{ return m_participantId; }

    /**
     * <p>Unique identifier for this participant, assigned by IVS.</p>
     */
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }

    /**
     * <p>Unique identifier for this participant, assigned by IVS.</p>
     */
    inline void SetParticipantId(const Aws::String& value) { m_participantIdHasBeenSet = true; m_participantId = value; }

    /**
     * <p>Unique identifier for this participant, assigned by IVS.</p>
     */
    inline void SetParticipantId(Aws::String&& value) { m_participantIdHasBeenSet = true; m_participantId = std::move(value); }

    /**
     * <p>Unique identifier for this participant, assigned by IVS.</p>
     */
    inline void SetParticipantId(const char* value) { m_participantIdHasBeenSet = true; m_participantId.assign(value); }

    /**
     * <p>Unique identifier for this participant, assigned by IVS.</p>
     */
    inline Participant& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}

    /**
     * <p>Unique identifier for this participant, assigned by IVS.</p>
     */
    inline Participant& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for this participant, assigned by IVS.</p>
     */
    inline Participant& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}


    /**
     * <p>Whether the participant ever published to the stage session.</p>
     */
    inline bool GetPublished() const{ return m_published; }

    /**
     * <p>Whether the participant ever published to the stage session.</p>
     */
    inline bool PublishedHasBeenSet() const { return m_publishedHasBeenSet; }

    /**
     * <p>Whether the participant ever published to the stage session.</p>
     */
    inline void SetPublished(bool value) { m_publishedHasBeenSet = true; m_published = value; }

    /**
     * <p>Whether the participant ever published to the stage session.</p>
     */
    inline Participant& WithPublished(bool value) { SetPublished(value); return *this;}


    /**
     * <p>Whether the participant is connected to or disconnected from the stage.</p>
     */
    inline const ParticipantState& GetState() const{ return m_state; }

    /**
     * <p>Whether the participant is connected to or disconnected from the stage.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Whether the participant is connected to or disconnected from the stage.</p>
     */
    inline void SetState(const ParticipantState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Whether the participant is connected to or disconnected from the stage.</p>
     */
    inline void SetState(ParticipantState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Whether the participant is connected to or disconnected from the stage.</p>
     */
    inline Participant& WithState(const ParticipantState& value) { SetState(value); return *this;}

    /**
     * <p>Whether the participant is connected to or disconnected from the stage.</p>
     */
    inline Participant& WithState(ParticipantState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline Participant& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline Participant& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline Participant& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Utils::DateTime m_firstJoinTime;
    bool m_firstJoinTimeHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    bool m_published;
    bool m_publishedHasBeenSet = false;

    ParticipantState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
