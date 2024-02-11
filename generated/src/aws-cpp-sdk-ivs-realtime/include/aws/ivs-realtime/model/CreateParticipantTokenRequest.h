/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/IvsrealtimeRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/ParticipantTokenCapability.h>
#include <utility>

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

  /**
   */
  class CreateParticipantTokenRequest : public IvsrealtimeRequest
  {
  public:
    AWS_IVSREALTIME_API CreateParticipantTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateParticipantToken"; }

    AWS_IVSREALTIME_API Aws::String SerializePayload() const override;


    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information.</i> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information.</i> </p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information.</i> </p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information.</i> </p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information.</i> </p>
     */
    inline CreateParticipantTokenRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information.</i> </p>
     */
    inline CreateParticipantTokenRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information.</i> </p>
     */
    inline CreateParticipantTokenRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information.</i> </p>
     */
    inline CreateParticipantTokenRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information.</i> </p>
     */
    inline CreateParticipantTokenRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information.</i> </p>
     */
    inline CreateParticipantTokenRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information.</i> </p>
     */
    inline CreateParticipantTokenRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information.</i> </p>
     */
    inline CreateParticipantTokenRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information.</i> </p>
     */
    inline CreateParticipantTokenRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>Set of capabilities that the user is allowed to perform in the stage.
     * Default: <code>PUBLISH, SUBSCRIBE</code>.</p>
     */
    inline const Aws::Vector<ParticipantTokenCapability>& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>Set of capabilities that the user is allowed to perform in the stage.
     * Default: <code>PUBLISH, SUBSCRIBE</code>.</p>
     */
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    /**
     * <p>Set of capabilities that the user is allowed to perform in the stage.
     * Default: <code>PUBLISH, SUBSCRIBE</code>.</p>
     */
    inline void SetCapabilities(const Aws::Vector<ParticipantTokenCapability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>Set of capabilities that the user is allowed to perform in the stage.
     * Default: <code>PUBLISH, SUBSCRIBE</code>.</p>
     */
    inline void SetCapabilities(Aws::Vector<ParticipantTokenCapability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>Set of capabilities that the user is allowed to perform in the stage.
     * Default: <code>PUBLISH, SUBSCRIBE</code>.</p>
     */
    inline CreateParticipantTokenRequest& WithCapabilities(const Aws::Vector<ParticipantTokenCapability>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>Set of capabilities that the user is allowed to perform in the stage.
     * Default: <code>PUBLISH, SUBSCRIBE</code>.</p>
     */
    inline CreateParticipantTokenRequest& WithCapabilities(Aws::Vector<ParticipantTokenCapability>&& value) { SetCapabilities(std::move(value)); return *this;}

    /**
     * <p>Set of capabilities that the user is allowed to perform in the stage.
     * Default: <code>PUBLISH, SUBSCRIBE</code>.</p>
     */
    inline CreateParticipantTokenRequest& AddCapabilities(const ParticipantTokenCapability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>Set of capabilities that the user is allowed to perform in the stage.
     * Default: <code>PUBLISH, SUBSCRIBE</code>.</p>
     */
    inline CreateParticipantTokenRequest& AddCapabilities(ParticipantTokenCapability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }


    /**
     * <p>Duration (in minutes), after which the token expires. Default: 720 (12
     * hours).</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>Duration (in minutes), after which the token expires. Default: 720 (12
     * hours).</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>Duration (in minutes), after which the token expires. Default: 720 (12
     * hours).</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>Duration (in minutes), after which the token expires. Default: 720 (12
     * hours).</p>
     */
    inline CreateParticipantTokenRequest& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>ARN of the stage to which this token is scoped.</p>
     */
    inline const Aws::String& GetStageArn() const{ return m_stageArn; }

    /**
     * <p>ARN of the stage to which this token is scoped.</p>
     */
    inline bool StageArnHasBeenSet() const { return m_stageArnHasBeenSet; }

    /**
     * <p>ARN of the stage to which this token is scoped.</p>
     */
    inline void SetStageArn(const Aws::String& value) { m_stageArnHasBeenSet = true; m_stageArn = value; }

    /**
     * <p>ARN of the stage to which this token is scoped.</p>
     */
    inline void SetStageArn(Aws::String&& value) { m_stageArnHasBeenSet = true; m_stageArn = std::move(value); }

    /**
     * <p>ARN of the stage to which this token is scoped.</p>
     */
    inline void SetStageArn(const char* value) { m_stageArnHasBeenSet = true; m_stageArn.assign(value); }

    /**
     * <p>ARN of the stage to which this token is scoped.</p>
     */
    inline CreateParticipantTokenRequest& WithStageArn(const Aws::String& value) { SetStageArn(value); return *this;}

    /**
     * <p>ARN of the stage to which this token is scoped.</p>
     */
    inline CreateParticipantTokenRequest& WithStageArn(Aws::String&& value) { SetStageArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the stage to which this token is scoped.</p>
     */
    inline CreateParticipantTokenRequest& WithStageArn(const char* value) { SetStageArn(value); return *this;}


    /**
     * <p>Name that can be specified to help identify the token. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive information.</i>
     * </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>Name that can be specified to help identify the token. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive information.</i>
     * </p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>Name that can be specified to help identify the token. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive information.</i>
     * </p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>Name that can be specified to help identify the token. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive information.</i>
     * </p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>Name that can be specified to help identify the token. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive information.</i>
     * </p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>Name that can be specified to help identify the token. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive information.</i>
     * </p>
     */
    inline CreateParticipantTokenRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>Name that can be specified to help identify the token. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive information.</i>
     * </p>
     */
    inline CreateParticipantTokenRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>Name that can be specified to help identify the token. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive information.</i>
     * </p>
     */
    inline CreateParticipantTokenRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<ParticipantTokenCapability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    Aws::String m_stageArn;
    bool m_stageArnHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
