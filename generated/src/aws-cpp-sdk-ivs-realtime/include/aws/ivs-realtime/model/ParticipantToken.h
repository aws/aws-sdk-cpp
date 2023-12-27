/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/ParticipantTokenCapability.h>
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
   * <p>Object specifying a participant token in a stage.</p> <p> <b>Important</b>:
   * Treat tokens as opaque; i.e., do not build functionality based on token
   * contents. The format of tokens could change in the future.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ParticipantToken">AWS
   * API Reference</a></p>
   */
  class ParticipantToken
  {
  public:
    AWS_IVSREALTIME_API ParticipantToken();
    AWS_IVSREALTIME_API ParticipantToken(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API ParticipantToken& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. <i>This field is exposed to all stage participants and should not be used
     * for personally identifying, confidential, or sensitive information.</i> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. <i>This field is exposed to all stage participants and should not be used
     * for personally identifying, confidential, or sensitive information.</i> </p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. <i>This field is exposed to all stage participants and should not be used
     * for personally identifying, confidential, or sensitive information.</i> </p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. <i>This field is exposed to all stage participants and should not be used
     * for personally identifying, confidential, or sensitive information.</i> </p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. <i>This field is exposed to all stage participants and should not be used
     * for personally identifying, confidential, or sensitive information.</i> </p>
     */
    inline ParticipantToken& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. <i>This field is exposed to all stage participants and should not be used
     * for personally identifying, confidential, or sensitive information.</i> </p>
     */
    inline ParticipantToken& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. <i>This field is exposed to all stage participants and should not be used
     * for personally identifying, confidential, or sensitive information.</i> </p>
     */
    inline ParticipantToken& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. <i>This field is exposed to all stage participants and should not be used
     * for personally identifying, confidential, or sensitive information.</i> </p>
     */
    inline ParticipantToken& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. <i>This field is exposed to all stage participants and should not be used
     * for personally identifying, confidential, or sensitive information.</i> </p>
     */
    inline ParticipantToken& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. <i>This field is exposed to all stage participants and should not be used
     * for personally identifying, confidential, or sensitive information.</i> </p>
     */
    inline ParticipantToken& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. <i>This field is exposed to all stage participants and should not be used
     * for personally identifying, confidential, or sensitive information.</i> </p>
     */
    inline ParticipantToken& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. <i>This field is exposed to all stage participants and should not be used
     * for personally identifying, confidential, or sensitive information.</i> </p>
     */
    inline ParticipantToken& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. <i>This field is exposed to all stage participants and should not be used
     * for personally identifying, confidential, or sensitive information.</i> </p>
     */
    inline ParticipantToken& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>Set of capabilities that the user is allowed to perform in the stage.</p>
     */
    inline const Aws::Vector<ParticipantTokenCapability>& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>Set of capabilities that the user is allowed to perform in the stage.</p>
     */
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    /**
     * <p>Set of capabilities that the user is allowed to perform in the stage.</p>
     */
    inline void SetCapabilities(const Aws::Vector<ParticipantTokenCapability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>Set of capabilities that the user is allowed to perform in the stage.</p>
     */
    inline void SetCapabilities(Aws::Vector<ParticipantTokenCapability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>Set of capabilities that the user is allowed to perform in the stage.</p>
     */
    inline ParticipantToken& WithCapabilities(const Aws::Vector<ParticipantTokenCapability>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>Set of capabilities that the user is allowed to perform in the stage.</p>
     */
    inline ParticipantToken& WithCapabilities(Aws::Vector<ParticipantTokenCapability>&& value) { SetCapabilities(std::move(value)); return *this;}

    /**
     * <p>Set of capabilities that the user is allowed to perform in the stage.</p>
     */
    inline ParticipantToken& AddCapabilities(const ParticipantTokenCapability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>Set of capabilities that the user is allowed to perform in the stage.</p>
     */
    inline ParticipantToken& AddCapabilities(ParticipantTokenCapability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }


    /**
     * <p>Duration (in minutes), after which the participant token expires. Default:
     * 720 (12 hours).</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>Duration (in minutes), after which the participant token expires. Default:
     * 720 (12 hours).</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>Duration (in minutes), after which the participant token expires. Default:
     * 720 (12 hours).</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>Duration (in minutes), after which the participant token expires. Default:
     * 720 (12 hours).</p>
     */
    inline ParticipantToken& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>ISO 8601 timestamp (returned as a string) for when this token expires.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const{ return m_expirationTime; }

    /**
     * <p>ISO 8601 timestamp (returned as a string) for when this token expires.</p>
     */
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }

    /**
     * <p>ISO 8601 timestamp (returned as a string) for when this token expires.</p>
     */
    inline void SetExpirationTime(const Aws::Utils::DateTime& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }

    /**
     * <p>ISO 8601 timestamp (returned as a string) for when this token expires.</p>
     */
    inline void SetExpirationTime(Aws::Utils::DateTime&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::move(value); }

    /**
     * <p>ISO 8601 timestamp (returned as a string) for when this token expires.</p>
     */
    inline ParticipantToken& WithExpirationTime(const Aws::Utils::DateTime& value) { SetExpirationTime(value); return *this;}

    /**
     * <p>ISO 8601 timestamp (returned as a string) for when this token expires.</p>
     */
    inline ParticipantToken& WithExpirationTime(Aws::Utils::DateTime&& value) { SetExpirationTime(std::move(value)); return *this;}


    /**
     * <p>Unique identifier for this participant token, assigned by IVS.</p>
     */
    inline const Aws::String& GetParticipantId() const{ return m_participantId; }

    /**
     * <p>Unique identifier for this participant token, assigned by IVS.</p>
     */
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }

    /**
     * <p>Unique identifier for this participant token, assigned by IVS.</p>
     */
    inline void SetParticipantId(const Aws::String& value) { m_participantIdHasBeenSet = true; m_participantId = value; }

    /**
     * <p>Unique identifier for this participant token, assigned by IVS.</p>
     */
    inline void SetParticipantId(Aws::String&& value) { m_participantIdHasBeenSet = true; m_participantId = std::move(value); }

    /**
     * <p>Unique identifier for this participant token, assigned by IVS.</p>
     */
    inline void SetParticipantId(const char* value) { m_participantIdHasBeenSet = true; m_participantId.assign(value); }

    /**
     * <p>Unique identifier for this participant token, assigned by IVS.</p>
     */
    inline ParticipantToken& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}

    /**
     * <p>Unique identifier for this participant token, assigned by IVS.</p>
     */
    inline ParticipantToken& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for this participant token, assigned by IVS.</p>
     */
    inline ParticipantToken& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}


    /**
     * <p>The issued client token, encrypted.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>The issued client token, encrypted.</p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p>The issued client token, encrypted.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>The issued client token, encrypted.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p>The issued client token, encrypted.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>The issued client token, encrypted.</p>
     */
    inline ParticipantToken& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>The issued client token, encrypted.</p>
     */
    inline ParticipantToken& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>The issued client token, encrypted.</p>
     */
    inline ParticipantToken& WithToken(const char* value) { SetToken(value); return *this;}


    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive information.</i>
     * </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive information.</i>
     * </p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive information.</i>
     * </p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive information.</i>
     * </p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive information.</i>
     * </p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive information.</i>
     * </p>
     */
    inline ParticipantToken& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive information.</i>
     * </p>
     */
    inline ParticipantToken& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive information.</i>
     * </p>
     */
    inline ParticipantToken& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<ParticipantTokenCapability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTime;
    bool m_expirationTimeHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
