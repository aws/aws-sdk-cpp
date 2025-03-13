/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/VoiceConnectorAwsRegion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-voice/model/VoiceConnectorIntegrationType.h>
#include <aws/chime-sdk-voice/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class CreateVoiceConnectorRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API CreateVoiceConnectorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVoiceConnector"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the Voice Connector.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateVoiceConnectorRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Region in which the Amazon Chime SDK Voice Connector is created.
     * Default value: <code>us-east-1</code> .</p>
     */
    inline VoiceConnectorAwsRegion GetAwsRegion() const { return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    inline void SetAwsRegion(VoiceConnectorAwsRegion value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }
    inline CreateVoiceConnectorRequest& WithAwsRegion(VoiceConnectorAwsRegion value) { SetAwsRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables encryption for the Voice Connector.</p>
     */
    inline bool GetRequireEncryption() const { return m_requireEncryption; }
    inline bool RequireEncryptionHasBeenSet() const { return m_requireEncryptionHasBeenSet; }
    inline void SetRequireEncryption(bool value) { m_requireEncryptionHasBeenSet = true; m_requireEncryption = value; }
    inline CreateVoiceConnectorRequest& WithRequireEncryption(bool value) { SetRequireEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the Voice Connector.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateVoiceConnectorRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateVoiceConnectorRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The connectors for use with Amazon Connect.</p> <p>The following options are
     * available:</p> <ul> <li> <p> <code>CONNECT_CALL_TRANSFER_CONNECTOR</code> -
     * Enables enterprises to integrate Amazon Connect with other voice systems to
     * directly transfer voice calls and metadata without using the public telephone
     * network. They can use Amazon Connect telephony and Interactive Voice Response
     * (IVR) with their existing voice systems to modernize the IVR experience of their
     * existing contact center and their enterprise and branch voice systems.
     * Additionally, enterprises migrating their contact center to Amazon Connect can
     * start with Connect telephony and IVR for immediate modernization ahead of agent
     * migration.</p> </li> <li> <p> <code>CONNECT_ANALYTICS_CONNECTOR</code> - Enables
     * enterprises to integrate Amazon Connect with other voice systems for real-time
     * and post-call analytics. They can use Amazon Connect Contact Lens with their
     * existing voice systems to provides call recordings, conversational analytics
     * (including contact transcript, sensitive data redaction, content categorization,
     * theme detection, sentiment analysis, real-time alerts, and post-contact
     * summary), and agent performance evaluations (including evaluation forms,
     * automated evaluation, supervisor review) with a rich user experience to display,
     * search and filter customer interactions, and programmatic access to data streams
     * and the data lake. Additionally, enterprises migrating their contact center to
     * Amazon Connect can start with Contact Lens analytics and performance insights
     * ahead of agent migration.</p> </li> </ul>
     */
    inline VoiceConnectorIntegrationType GetIntegrationType() const { return m_integrationType; }
    inline bool IntegrationTypeHasBeenSet() const { return m_integrationTypeHasBeenSet; }
    inline void SetIntegrationType(VoiceConnectorIntegrationType value) { m_integrationTypeHasBeenSet = true; m_integrationType = value; }
    inline CreateVoiceConnectorRequest& WithIntegrationType(VoiceConnectorIntegrationType value) { SetIntegrationType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    VoiceConnectorAwsRegion m_awsRegion{VoiceConnectorAwsRegion::NOT_SET};
    bool m_awsRegionHasBeenSet = false;

    bool m_requireEncryption{false};
    bool m_requireEncryptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    VoiceConnectorIntegrationType m_integrationType{VoiceConnectorIntegrationType::NOT_SET};
    bool m_integrationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
