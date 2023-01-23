/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/VoiceConnectorAwsRegion.h>
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

  class VoiceConnector
  {
  public:
    AWS_CHIMESDKVOICE_API VoiceConnector();
    AWS_CHIMESDKVOICE_API VoiceConnector(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API VoiceConnector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }

    
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }

    
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }

    
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }

    
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }

    
    inline VoiceConnector& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    
    inline VoiceConnector& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    
    inline VoiceConnector& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    
    inline const VoiceConnectorAwsRegion& GetAwsRegion() const{ return m_awsRegion; }

    
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    
    inline void SetAwsRegion(const VoiceConnectorAwsRegion& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    
    inline void SetAwsRegion(VoiceConnectorAwsRegion&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    
    inline VoiceConnector& WithAwsRegion(const VoiceConnectorAwsRegion& value) { SetAwsRegion(value); return *this;}

    
    inline VoiceConnector& WithAwsRegion(VoiceConnectorAwsRegion&& value) { SetAwsRegion(std::move(value)); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline VoiceConnector& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline VoiceConnector& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline VoiceConnector& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetOutboundHostName() const{ return m_outboundHostName; }

    
    inline bool OutboundHostNameHasBeenSet() const { return m_outboundHostNameHasBeenSet; }

    
    inline void SetOutboundHostName(const Aws::String& value) { m_outboundHostNameHasBeenSet = true; m_outboundHostName = value; }

    
    inline void SetOutboundHostName(Aws::String&& value) { m_outboundHostNameHasBeenSet = true; m_outboundHostName = std::move(value); }

    
    inline void SetOutboundHostName(const char* value) { m_outboundHostNameHasBeenSet = true; m_outboundHostName.assign(value); }

    
    inline VoiceConnector& WithOutboundHostName(const Aws::String& value) { SetOutboundHostName(value); return *this;}

    
    inline VoiceConnector& WithOutboundHostName(Aws::String&& value) { SetOutboundHostName(std::move(value)); return *this;}

    
    inline VoiceConnector& WithOutboundHostName(const char* value) { SetOutboundHostName(value); return *this;}


    
    inline bool GetRequireEncryption() const{ return m_requireEncryption; }

    
    inline bool RequireEncryptionHasBeenSet() const { return m_requireEncryptionHasBeenSet; }

    
    inline void SetRequireEncryption(bool value) { m_requireEncryptionHasBeenSet = true; m_requireEncryption = value; }

    
    inline VoiceConnector& WithRequireEncryption(bool value) { SetRequireEncryption(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    
    inline VoiceConnector& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    
    inline VoiceConnector& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    
    inline VoiceConnector& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    
    inline VoiceConnector& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::String& GetVoiceConnectorArn() const{ return m_voiceConnectorArn; }

    
    inline bool VoiceConnectorArnHasBeenSet() const { return m_voiceConnectorArnHasBeenSet; }

    
    inline void SetVoiceConnectorArn(const Aws::String& value) { m_voiceConnectorArnHasBeenSet = true; m_voiceConnectorArn = value; }

    
    inline void SetVoiceConnectorArn(Aws::String&& value) { m_voiceConnectorArnHasBeenSet = true; m_voiceConnectorArn = std::move(value); }

    
    inline void SetVoiceConnectorArn(const char* value) { m_voiceConnectorArnHasBeenSet = true; m_voiceConnectorArn.assign(value); }

    
    inline VoiceConnector& WithVoiceConnectorArn(const Aws::String& value) { SetVoiceConnectorArn(value); return *this;}

    
    inline VoiceConnector& WithVoiceConnectorArn(Aws::String&& value) { SetVoiceConnectorArn(std::move(value)); return *this;}

    
    inline VoiceConnector& WithVoiceConnectorArn(const char* value) { SetVoiceConnectorArn(value); return *this;}

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    VoiceConnectorAwsRegion m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_outboundHostName;
    bool m_outboundHostNameHasBeenSet = false;

    bool m_requireEncryption;
    bool m_requireEncryptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;

    Aws::String m_voiceConnectorArn;
    bool m_voiceConnectorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
