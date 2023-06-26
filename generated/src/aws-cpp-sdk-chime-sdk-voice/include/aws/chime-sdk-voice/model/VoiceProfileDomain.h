/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/ServerSideEncryptionConfiguration.h>
#include <aws/core/utils/DateTime.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>A collection of voice profiles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/VoiceProfileDomain">AWS
   * API Reference</a></p>
   */
  class VoiceProfileDomain
  {
  public:
    AWS_CHIMESDKVOICE_API VoiceProfileDomain();
    AWS_CHIMESDKVOICE_API VoiceProfileDomain(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API VoiceProfileDomain& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the voice profile domain.</p>
     */
    inline const Aws::String& GetVoiceProfileDomainId() const{ return m_voiceProfileDomainId; }

    /**
     * <p>The ID of the voice profile domain.</p>
     */
    inline bool VoiceProfileDomainIdHasBeenSet() const { return m_voiceProfileDomainIdHasBeenSet; }

    /**
     * <p>The ID of the voice profile domain.</p>
     */
    inline void SetVoiceProfileDomainId(const Aws::String& value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId = value; }

    /**
     * <p>The ID of the voice profile domain.</p>
     */
    inline void SetVoiceProfileDomainId(Aws::String&& value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId = std::move(value); }

    /**
     * <p>The ID of the voice profile domain.</p>
     */
    inline void SetVoiceProfileDomainId(const char* value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId.assign(value); }

    /**
     * <p>The ID of the voice profile domain.</p>
     */
    inline VoiceProfileDomain& WithVoiceProfileDomainId(const Aws::String& value) { SetVoiceProfileDomainId(value); return *this;}

    /**
     * <p>The ID of the voice profile domain.</p>
     */
    inline VoiceProfileDomain& WithVoiceProfileDomainId(Aws::String&& value) { SetVoiceProfileDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the voice profile domain.</p>
     */
    inline VoiceProfileDomain& WithVoiceProfileDomainId(const char* value) { SetVoiceProfileDomainId(value); return *this;}


    /**
     * <p>The voice profile domain's Amazon Resource Number (ARN).</p>
     */
    inline const Aws::String& GetVoiceProfileDomainArn() const{ return m_voiceProfileDomainArn; }

    /**
     * <p>The voice profile domain's Amazon Resource Number (ARN).</p>
     */
    inline bool VoiceProfileDomainArnHasBeenSet() const { return m_voiceProfileDomainArnHasBeenSet; }

    /**
     * <p>The voice profile domain's Amazon Resource Number (ARN).</p>
     */
    inline void SetVoiceProfileDomainArn(const Aws::String& value) { m_voiceProfileDomainArnHasBeenSet = true; m_voiceProfileDomainArn = value; }

    /**
     * <p>The voice profile domain's Amazon Resource Number (ARN).</p>
     */
    inline void SetVoiceProfileDomainArn(Aws::String&& value) { m_voiceProfileDomainArnHasBeenSet = true; m_voiceProfileDomainArn = std::move(value); }

    /**
     * <p>The voice profile domain's Amazon Resource Number (ARN).</p>
     */
    inline void SetVoiceProfileDomainArn(const char* value) { m_voiceProfileDomainArnHasBeenSet = true; m_voiceProfileDomainArn.assign(value); }

    /**
     * <p>The voice profile domain's Amazon Resource Number (ARN).</p>
     */
    inline VoiceProfileDomain& WithVoiceProfileDomainArn(const Aws::String& value) { SetVoiceProfileDomainArn(value); return *this;}

    /**
     * <p>The voice profile domain's Amazon Resource Number (ARN).</p>
     */
    inline VoiceProfileDomain& WithVoiceProfileDomainArn(Aws::String&& value) { SetVoiceProfileDomainArn(std::move(value)); return *this;}

    /**
     * <p>The voice profile domain's Amazon Resource Number (ARN).</p>
     */
    inline VoiceProfileDomain& WithVoiceProfileDomainArn(const char* value) { SetVoiceProfileDomainArn(value); return *this;}


    /**
     * <p>The name of the voice profile domain.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the voice profile domain.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the voice profile domain.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the voice profile domain.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the voice profile domain.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the voice profile domain.</p>
     */
    inline VoiceProfileDomain& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the voice profile domain.</p>
     */
    inline VoiceProfileDomain& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the voice profile domain.</p>
     */
    inline VoiceProfileDomain& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the voice profile domain.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the voice profile domain.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the voice profile domain.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the voice profile domain.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the voice profile domain.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the voice profile domain.</p>
     */
    inline VoiceProfileDomain& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the voice profile domain.</p>
     */
    inline VoiceProfileDomain& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the voice profile domain.</p>
     */
    inline VoiceProfileDomain& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A structure that contains the configuration settings for server-side
     * encryption.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const{ return m_serverSideEncryptionConfiguration; }

    /**
     * <p>A structure that contains the configuration settings for server-side
     * encryption.</p>
     */
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }

    /**
     * <p>A structure that contains the configuration settings for server-side
     * encryption.</p>
     */
    inline void SetServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = value; }

    /**
     * <p>A structure that contains the configuration settings for server-side
     * encryption.</p>
     */
    inline void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::move(value); }

    /**
     * <p>A structure that contains the configuration settings for server-side
     * encryption.</p>
     */
    inline VoiceProfileDomain& WithServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { SetServerSideEncryptionConfiguration(value); return *this;}

    /**
     * <p>A structure that contains the configuration settings for server-side
     * encryption.</p>
     */
    inline VoiceProfileDomain& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { SetServerSideEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>The time at which the voice profile domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time at which the voice profile domain was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time at which the voice profile domain was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time at which the voice profile domain was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time at which the voice profile domain was created.</p>
     */
    inline VoiceProfileDomain& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the voice profile domain was created.</p>
     */
    inline VoiceProfileDomain& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which the voice profile was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p>The time at which the voice profile was last updated.</p>
     */
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    /**
     * <p>The time at which the voice profile was last updated.</p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    /**
     * <p>The time at which the voice profile was last updated.</p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    /**
     * <p>The time at which the voice profile was last updated.</p>
     */
    inline VoiceProfileDomain& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the voice profile was last updated.</p>
     */
    inline VoiceProfileDomain& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_voiceProfileDomainId;
    bool m_voiceProfileDomainIdHasBeenSet = false;

    Aws::String m_voiceProfileDomainArn;
    bool m_voiceProfileDomainArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
