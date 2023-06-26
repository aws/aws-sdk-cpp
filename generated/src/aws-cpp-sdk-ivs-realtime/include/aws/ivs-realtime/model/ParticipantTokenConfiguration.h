/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Object specifying a participant token configuration in a stage.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ParticipantTokenConfiguration">AWS
   * API Reference</a></p>
   */
  class ParticipantTokenConfiguration
  {
  public:
    AWS_IVSREALTIME_API ParticipantTokenConfiguration();
    AWS_IVSREALTIME_API ParticipantTokenConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API ParticipantTokenConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Application-provided attributes to encode into the corresponding participant
     * token and attach to a stage. Map keys and values can contain UTF-8 encoded text.
     * The maximum length of this field is 1 KB total. <i>This field is exposed to all
     * stage participants and should not be used for personally identifying,
     * confidential, or sensitive information.</i> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Application-provided attributes to encode into the corresponding participant
     * token and attach to a stage. Map keys and values can contain UTF-8 encoded text.
     * The maximum length of this field is 1 KB total. <i>This field is exposed to all
     * stage participants and should not be used for personally identifying,
     * confidential, or sensitive information.</i> </p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>Application-provided attributes to encode into the corresponding participant
     * token and attach to a stage. Map keys and values can contain UTF-8 encoded text.
     * The maximum length of this field is 1 KB total. <i>This field is exposed to all
     * stage participants and should not be used for personally identifying,
     * confidential, or sensitive information.</i> </p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Application-provided attributes to encode into the corresponding participant
     * token and attach to a stage. Map keys and values can contain UTF-8 encoded text.
     * The maximum length of this field is 1 KB total. <i>This field is exposed to all
     * stage participants and should not be used for personally identifying,
     * confidential, or sensitive information.</i> </p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>Application-provided attributes to encode into the corresponding participant
     * token and attach to a stage. Map keys and values can contain UTF-8 encoded text.
     * The maximum length of this field is 1 KB total. <i>This field is exposed to all
     * stage participants and should not be used for personally identifying,
     * confidential, or sensitive information.</i> </p>
     */
    inline ParticipantTokenConfiguration& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Application-provided attributes to encode into the corresponding participant
     * token and attach to a stage. Map keys and values can contain UTF-8 encoded text.
     * The maximum length of this field is 1 KB total. <i>This field is exposed to all
     * stage participants and should not be used for personally identifying,
     * confidential, or sensitive information.</i> </p>
     */
    inline ParticipantTokenConfiguration& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Application-provided attributes to encode into the corresponding participant
     * token and attach to a stage. Map keys and values can contain UTF-8 encoded text.
     * The maximum length of this field is 1 KB total. <i>This field is exposed to all
     * stage participants and should not be used for personally identifying,
     * confidential, or sensitive information.</i> </p>
     */
    inline ParticipantTokenConfiguration& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>Application-provided attributes to encode into the corresponding participant
     * token and attach to a stage. Map keys and values can contain UTF-8 encoded text.
     * The maximum length of this field is 1 KB total. <i>This field is exposed to all
     * stage participants and should not be used for personally identifying,
     * confidential, or sensitive information.</i> </p>
     */
    inline ParticipantTokenConfiguration& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Application-provided attributes to encode into the corresponding participant
     * token and attach to a stage. Map keys and values can contain UTF-8 encoded text.
     * The maximum length of this field is 1 KB total. <i>This field is exposed to all
     * stage participants and should not be used for personally identifying,
     * confidential, or sensitive information.</i> </p>
     */
    inline ParticipantTokenConfiguration& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Application-provided attributes to encode into the corresponding participant
     * token and attach to a stage. Map keys and values can contain UTF-8 encoded text.
     * The maximum length of this field is 1 KB total. <i>This field is exposed to all
     * stage participants and should not be used for personally identifying,
     * confidential, or sensitive information.</i> </p>
     */
    inline ParticipantTokenConfiguration& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Application-provided attributes to encode into the corresponding participant
     * token and attach to a stage. Map keys and values can contain UTF-8 encoded text.
     * The maximum length of this field is 1 KB total. <i>This field is exposed to all
     * stage participants and should not be used for personally identifying,
     * confidential, or sensitive information.</i> </p>
     */
    inline ParticipantTokenConfiguration& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Application-provided attributes to encode into the corresponding participant
     * token and attach to a stage. Map keys and values can contain UTF-8 encoded text.
     * The maximum length of this field is 1 KB total. <i>This field is exposed to all
     * stage participants and should not be used for personally identifying,
     * confidential, or sensitive information.</i> </p>
     */
    inline ParticipantTokenConfiguration& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Application-provided attributes to encode into the corresponding participant
     * token and attach to a stage. Map keys and values can contain UTF-8 encoded text.
     * The maximum length of this field is 1 KB total. <i>This field is exposed to all
     * stage participants and should not be used for personally identifying,
     * confidential, or sensitive information.</i> </p>
     */
    inline ParticipantTokenConfiguration& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


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
    inline ParticipantTokenConfiguration& WithCapabilities(const Aws::Vector<ParticipantTokenCapability>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>Set of capabilities that the user is allowed to perform in the stage.</p>
     */
    inline ParticipantTokenConfiguration& WithCapabilities(Aws::Vector<ParticipantTokenCapability>&& value) { SetCapabilities(std::move(value)); return *this;}

    /**
     * <p>Set of capabilities that the user is allowed to perform in the stage.</p>
     */
    inline ParticipantTokenConfiguration& AddCapabilities(const ParticipantTokenCapability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>Set of capabilities that the user is allowed to perform in the stage.</p>
     */
    inline ParticipantTokenConfiguration& AddCapabilities(ParticipantTokenCapability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }


    /**
     * <p>Duration (in minutes), after which the corresponding participant token
     * expires. Default: 720 (12 hours).</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>Duration (in minutes), after which the corresponding participant token
     * expires. Default: 720 (12 hours).</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>Duration (in minutes), after which the corresponding participant token
     * expires. Default: 720 (12 hours).</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>Duration (in minutes), after which the corresponding participant token
     * expires. Default: 720 (12 hours).</p>
     */
    inline ParticipantTokenConfiguration& WithDuration(int value) { SetDuration(value); return *this;}


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
    inline ParticipantTokenConfiguration& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive information.</i>
     * </p>
     */
    inline ParticipantTokenConfiguration& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive information.</i>
     * </p>
     */
    inline ParticipantTokenConfiguration& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<ParticipantTokenCapability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
