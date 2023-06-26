/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/VoiceConnectorAwsRegion.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The Amazon Chime Voice Connector configuration, including outbound host name
   * and encryption settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/VoiceConnector">AWS
   * API Reference</a></p>
   */
  class VoiceConnector
  {
  public:
    AWS_CHIME_API VoiceConnector();
    AWS_CHIME_API VoiceConnector(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API VoiceConnector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline VoiceConnector& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline VoiceConnector& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline VoiceConnector& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    /**
     * <p> The AWS Region in which the Amazon Chime Voice Connector is created.
     * Default: <code>us-east-1</code>. </p>
     */
    inline const VoiceConnectorAwsRegion& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p> The AWS Region in which the Amazon Chime Voice Connector is created.
     * Default: <code>us-east-1</code>. </p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p> The AWS Region in which the Amazon Chime Voice Connector is created.
     * Default: <code>us-east-1</code>. </p>
     */
    inline void SetAwsRegion(const VoiceConnectorAwsRegion& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p> The AWS Region in which the Amazon Chime Voice Connector is created.
     * Default: <code>us-east-1</code>. </p>
     */
    inline void SetAwsRegion(VoiceConnectorAwsRegion&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p> The AWS Region in which the Amazon Chime Voice Connector is created.
     * Default: <code>us-east-1</code>. </p>
     */
    inline VoiceConnector& WithAwsRegion(const VoiceConnectorAwsRegion& value) { SetAwsRegion(value); return *this;}

    /**
     * <p> The AWS Region in which the Amazon Chime Voice Connector is created.
     * Default: <code>us-east-1</code>. </p>
     */
    inline VoiceConnector& WithAwsRegion(VoiceConnectorAwsRegion&& value) { SetAwsRegion(std::move(value)); return *this;}


    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline VoiceConnector& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline VoiceConnector& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline VoiceConnector& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The outbound host name for the Amazon Chime Voice Connector.</p>
     */
    inline const Aws::String& GetOutboundHostName() const{ return m_outboundHostName; }

    /**
     * <p>The outbound host name for the Amazon Chime Voice Connector.</p>
     */
    inline bool OutboundHostNameHasBeenSet() const { return m_outboundHostNameHasBeenSet; }

    /**
     * <p>The outbound host name for the Amazon Chime Voice Connector.</p>
     */
    inline void SetOutboundHostName(const Aws::String& value) { m_outboundHostNameHasBeenSet = true; m_outboundHostName = value; }

    /**
     * <p>The outbound host name for the Amazon Chime Voice Connector.</p>
     */
    inline void SetOutboundHostName(Aws::String&& value) { m_outboundHostNameHasBeenSet = true; m_outboundHostName = std::move(value); }

    /**
     * <p>The outbound host name for the Amazon Chime Voice Connector.</p>
     */
    inline void SetOutboundHostName(const char* value) { m_outboundHostNameHasBeenSet = true; m_outboundHostName.assign(value); }

    /**
     * <p>The outbound host name for the Amazon Chime Voice Connector.</p>
     */
    inline VoiceConnector& WithOutboundHostName(const Aws::String& value) { SetOutboundHostName(value); return *this;}

    /**
     * <p>The outbound host name for the Amazon Chime Voice Connector.</p>
     */
    inline VoiceConnector& WithOutboundHostName(Aws::String&& value) { SetOutboundHostName(std::move(value)); return *this;}

    /**
     * <p>The outbound host name for the Amazon Chime Voice Connector.</p>
     */
    inline VoiceConnector& WithOutboundHostName(const char* value) { SetOutboundHostName(value); return *this;}


    /**
     * <p>Designates whether encryption is required for the Amazon Chime Voice
     * Connector.</p>
     */
    inline bool GetRequireEncryption() const{ return m_requireEncryption; }

    /**
     * <p>Designates whether encryption is required for the Amazon Chime Voice
     * Connector.</p>
     */
    inline bool RequireEncryptionHasBeenSet() const { return m_requireEncryptionHasBeenSet; }

    /**
     * <p>Designates whether encryption is required for the Amazon Chime Voice
     * Connector.</p>
     */
    inline void SetRequireEncryption(bool value) { m_requireEncryptionHasBeenSet = true; m_requireEncryption = value; }

    /**
     * <p>Designates whether encryption is required for the Amazon Chime Voice
     * Connector.</p>
     */
    inline VoiceConnector& WithRequireEncryption(bool value) { SetRequireEncryption(value); return *this;}


    /**
     * <p>The Amazon Chime Voice Connector creation timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The Amazon Chime Voice Connector creation timestamp, in ISO 8601 format.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The Amazon Chime Voice Connector creation timestamp, in ISO 8601 format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The Amazon Chime Voice Connector creation timestamp, in ISO 8601 format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The Amazon Chime Voice Connector creation timestamp, in ISO 8601 format.</p>
     */
    inline VoiceConnector& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The Amazon Chime Voice Connector creation timestamp, in ISO 8601 format.</p>
     */
    inline VoiceConnector& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The updated Amazon Chime Voice Connector timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p>The updated Amazon Chime Voice Connector timestamp, in ISO 8601 format.</p>
     */
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    /**
     * <p>The updated Amazon Chime Voice Connector timestamp, in ISO 8601 format.</p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    /**
     * <p>The updated Amazon Chime Voice Connector timestamp, in ISO 8601 format.</p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    /**
     * <p>The updated Amazon Chime Voice Connector timestamp, in ISO 8601 format.</p>
     */
    inline VoiceConnector& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p>The updated Amazon Chime Voice Connector timestamp, in ISO 8601 format.</p>
     */
    inline VoiceConnector& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The ARN of the specified Amazon Chime Voice Connector.</p>
     */
    inline const Aws::String& GetVoiceConnectorArn() const{ return m_voiceConnectorArn; }

    /**
     * <p>The ARN of the specified Amazon Chime Voice Connector.</p>
     */
    inline bool VoiceConnectorArnHasBeenSet() const { return m_voiceConnectorArnHasBeenSet; }

    /**
     * <p>The ARN of the specified Amazon Chime Voice Connector.</p>
     */
    inline void SetVoiceConnectorArn(const Aws::String& value) { m_voiceConnectorArnHasBeenSet = true; m_voiceConnectorArn = value; }

    /**
     * <p>The ARN of the specified Amazon Chime Voice Connector.</p>
     */
    inline void SetVoiceConnectorArn(Aws::String&& value) { m_voiceConnectorArnHasBeenSet = true; m_voiceConnectorArn = std::move(value); }

    /**
     * <p>The ARN of the specified Amazon Chime Voice Connector.</p>
     */
    inline void SetVoiceConnectorArn(const char* value) { m_voiceConnectorArnHasBeenSet = true; m_voiceConnectorArn.assign(value); }

    /**
     * <p>The ARN of the specified Amazon Chime Voice Connector.</p>
     */
    inline VoiceConnector& WithVoiceConnectorArn(const Aws::String& value) { SetVoiceConnectorArn(value); return *this;}

    /**
     * <p>The ARN of the specified Amazon Chime Voice Connector.</p>
     */
    inline VoiceConnector& WithVoiceConnectorArn(Aws::String&& value) { SetVoiceConnectorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the specified Amazon Chime Voice Connector.</p>
     */
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
} // namespace Chime
} // namespace Aws
