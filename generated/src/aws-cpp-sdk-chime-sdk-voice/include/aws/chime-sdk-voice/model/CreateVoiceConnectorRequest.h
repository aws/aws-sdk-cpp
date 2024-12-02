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
    AWS_CHIMESDKVOICE_API CreateVoiceConnectorRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateVoiceConnectorRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateVoiceConnectorRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateVoiceConnectorRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Region in which the Amazon Chime SDK Voice Connector is created.
     * Default value: <code>us-east-1</code> .</p>
     */
    inline const VoiceConnectorAwsRegion& GetAwsRegion() const{ return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    inline void SetAwsRegion(const VoiceConnectorAwsRegion& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }
    inline void SetAwsRegion(VoiceConnectorAwsRegion&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }
    inline CreateVoiceConnectorRequest& WithAwsRegion(const VoiceConnectorAwsRegion& value) { SetAwsRegion(value); return *this;}
    inline CreateVoiceConnectorRequest& WithAwsRegion(VoiceConnectorAwsRegion&& value) { SetAwsRegion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables encryption for the Voice Connector.</p>
     */
    inline bool GetRequireEncryption() const{ return m_requireEncryption; }
    inline bool RequireEncryptionHasBeenSet() const { return m_requireEncryptionHasBeenSet; }
    inline void SetRequireEncryption(bool value) { m_requireEncryptionHasBeenSet = true; m_requireEncryption = value; }
    inline CreateVoiceConnectorRequest& WithRequireEncryption(bool value) { SetRequireEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the Voice Connector.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateVoiceConnectorRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateVoiceConnectorRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateVoiceConnectorRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateVoiceConnectorRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
    inline const VoiceConnectorIntegrationType& GetIntegrationType() const{ return m_integrationType; }
    inline bool IntegrationTypeHasBeenSet() const { return m_integrationTypeHasBeenSet; }
    inline void SetIntegrationType(const VoiceConnectorIntegrationType& value) { m_integrationTypeHasBeenSet = true; m_integrationType = value; }
    inline void SetIntegrationType(VoiceConnectorIntegrationType&& value) { m_integrationTypeHasBeenSet = true; m_integrationType = std::move(value); }
    inline CreateVoiceConnectorRequest& WithIntegrationType(const VoiceConnectorIntegrationType& value) { SetIntegrationType(value); return *this;}
    inline CreateVoiceConnectorRequest& WithIntegrationType(VoiceConnectorIntegrationType&& value) { SetIntegrationType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    VoiceConnectorAwsRegion m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    bool m_requireEncryption;
    bool m_requireEncryptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    VoiceConnectorIntegrationType m_integrationType;
    bool m_integrationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
