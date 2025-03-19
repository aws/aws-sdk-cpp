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
    AWS_CHIMESDKVOICE_API VoiceProfileDomain() = default;
    AWS_CHIMESDKVOICE_API VoiceProfileDomain(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API VoiceProfileDomain& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the voice profile domain.</p>
     */
    inline const Aws::String& GetVoiceProfileDomainId() const { return m_voiceProfileDomainId; }
    inline bool VoiceProfileDomainIdHasBeenSet() const { return m_voiceProfileDomainIdHasBeenSet; }
    template<typename VoiceProfileDomainIdT = Aws::String>
    void SetVoiceProfileDomainId(VoiceProfileDomainIdT&& value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId = std::forward<VoiceProfileDomainIdT>(value); }
    template<typename VoiceProfileDomainIdT = Aws::String>
    VoiceProfileDomain& WithVoiceProfileDomainId(VoiceProfileDomainIdT&& value) { SetVoiceProfileDomainId(std::forward<VoiceProfileDomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The voice profile domain's Amazon Resource Number (ARN).</p>
     */
    inline const Aws::String& GetVoiceProfileDomainArn() const { return m_voiceProfileDomainArn; }
    inline bool VoiceProfileDomainArnHasBeenSet() const { return m_voiceProfileDomainArnHasBeenSet; }
    template<typename VoiceProfileDomainArnT = Aws::String>
    void SetVoiceProfileDomainArn(VoiceProfileDomainArnT&& value) { m_voiceProfileDomainArnHasBeenSet = true; m_voiceProfileDomainArn = std::forward<VoiceProfileDomainArnT>(value); }
    template<typename VoiceProfileDomainArnT = Aws::String>
    VoiceProfileDomain& WithVoiceProfileDomainArn(VoiceProfileDomainArnT&& value) { SetVoiceProfileDomainArn(std::forward<VoiceProfileDomainArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the voice profile domain.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    VoiceProfileDomain& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the voice profile domain.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    VoiceProfileDomain& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the configuration settings for server-side
     * encryption.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const { return m_serverSideEncryptionConfiguration; }
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }
    template<typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
    void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::forward<ServerSideEncryptionConfigurationT>(value); }
    template<typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
    VoiceProfileDomain& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) { SetServerSideEncryptionConfiguration(std::forward<ServerSideEncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the voice profile domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    VoiceProfileDomain& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the voice profile was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    VoiceProfileDomain& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}
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

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
