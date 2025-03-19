/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/VoiceConnectorAwsRegion.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime-sdk-voice/model/VoiceConnectorIntegrationType.h>
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
   * <p>The Amazon Chime SDK Voice Connector configuration, including outbound host
   * name and encryption settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/VoiceConnector">AWS
   * API Reference</a></p>
   */
  class VoiceConnector
  {
  public:
    AWS_CHIMESDKVOICE_API VoiceConnector() = default;
    AWS_CHIMESDKVOICE_API VoiceConnector(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API VoiceConnector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Voice Connector's ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorId() const { return m_voiceConnectorId; }
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }
    template<typename VoiceConnectorIdT = Aws::String>
    void SetVoiceConnectorId(VoiceConnectorIdT&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::forward<VoiceConnectorIdT>(value); }
    template<typename VoiceConnectorIdT = Aws::String>
    VoiceConnector& WithVoiceConnectorId(VoiceConnectorIdT&& value) { SetVoiceConnectorId(std::forward<VoiceConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Region in which the Voice Connector is created. Default:
     * us-east-1.</p>
     */
    inline VoiceConnectorAwsRegion GetAwsRegion() const { return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    inline void SetAwsRegion(VoiceConnectorAwsRegion value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }
    inline VoiceConnector& WithAwsRegion(VoiceConnectorAwsRegion value) { SetAwsRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Voice Connector's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    VoiceConnector& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outbound host name for the Voice Connector.</p>
     */
    inline const Aws::String& GetOutboundHostName() const { return m_outboundHostName; }
    inline bool OutboundHostNameHasBeenSet() const { return m_outboundHostNameHasBeenSet; }
    template<typename OutboundHostNameT = Aws::String>
    void SetOutboundHostName(OutboundHostNameT&& value) { m_outboundHostNameHasBeenSet = true; m_outboundHostName = std::forward<OutboundHostNameT>(value); }
    template<typename OutboundHostNameT = Aws::String>
    VoiceConnector& WithOutboundHostName(OutboundHostNameT&& value) { SetOutboundHostName(std::forward<OutboundHostNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables encryption for the Voice Connector.</p>
     */
    inline bool GetRequireEncryption() const { return m_requireEncryption; }
    inline bool RequireEncryptionHasBeenSet() const { return m_requireEncryptionHasBeenSet; }
    inline void SetRequireEncryption(bool value) { m_requireEncryptionHasBeenSet = true; m_requireEncryption = value; }
    inline VoiceConnector& WithRequireEncryption(bool value) { SetRequireEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Voice Connector's creation timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    VoiceConnector& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Voice Connector's updated timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    VoiceConnector& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Voice Connector.</p>
     */
    inline const Aws::String& GetVoiceConnectorArn() const { return m_voiceConnectorArn; }
    inline bool VoiceConnectorArnHasBeenSet() const { return m_voiceConnectorArnHasBeenSet; }
    template<typename VoiceConnectorArnT = Aws::String>
    void SetVoiceConnectorArn(VoiceConnectorArnT&& value) { m_voiceConnectorArnHasBeenSet = true; m_voiceConnectorArn = std::forward<VoiceConnectorArnT>(value); }
    template<typename VoiceConnectorArnT = Aws::String>
    VoiceConnector& WithVoiceConnectorArn(VoiceConnectorArnT&& value) { SetVoiceConnectorArn(std::forward<VoiceConnectorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connectors for use with Amazon Connect.</p>
     */
    inline VoiceConnectorIntegrationType GetIntegrationType() const { return m_integrationType; }
    inline bool IntegrationTypeHasBeenSet() const { return m_integrationTypeHasBeenSet; }
    inline void SetIntegrationType(VoiceConnectorIntegrationType value) { m_integrationTypeHasBeenSet = true; m_integrationType = value; }
    inline VoiceConnector& WithIntegrationType(VoiceConnectorIntegrationType value) { SetIntegrationType(value); return *this;}
    ///@}
  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    VoiceConnectorAwsRegion m_awsRegion{VoiceConnectorAwsRegion::NOT_SET};
    bool m_awsRegionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_outboundHostName;
    bool m_outboundHostNameHasBeenSet = false;

    bool m_requireEncryption{false};
    bool m_requireEncryptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
    bool m_updatedTimestampHasBeenSet = false;

    Aws::String m_voiceConnectorArn;
    bool m_voiceConnectorArnHasBeenSet = false;

    VoiceConnectorIntegrationType m_integrationType{VoiceConnectorIntegrationType::NOT_SET};
    bool m_integrationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
