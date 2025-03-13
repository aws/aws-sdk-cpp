/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/IvsrealtimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ivs-realtime/model/AutoParticipantRecordingConfiguration.h>
#include <aws/ivs-realtime/model/ParticipantTokenConfiguration.h>
#include <utility>

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

  /**
   */
  class CreateStageRequest : public IvsrealtimeRequest
  {
  public:
    AWS_IVSREALTIME_API CreateStageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStage"; }

    AWS_IVSREALTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Optional name that can be specified for the stage being created.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateStageRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of participant token configuration objects to attach to the new
     * stage.</p>
     */
    inline const Aws::Vector<ParticipantTokenConfiguration>& GetParticipantTokenConfigurations() const { return m_participantTokenConfigurations; }
    inline bool ParticipantTokenConfigurationsHasBeenSet() const { return m_participantTokenConfigurationsHasBeenSet; }
    template<typename ParticipantTokenConfigurationsT = Aws::Vector<ParticipantTokenConfiguration>>
    void SetParticipantTokenConfigurations(ParticipantTokenConfigurationsT&& value) { m_participantTokenConfigurationsHasBeenSet = true; m_participantTokenConfigurations = std::forward<ParticipantTokenConfigurationsT>(value); }
    template<typename ParticipantTokenConfigurationsT = Aws::Vector<ParticipantTokenConfiguration>>
    CreateStageRequest& WithParticipantTokenConfigurations(ParticipantTokenConfigurationsT&& value) { SetParticipantTokenConfigurations(std::forward<ParticipantTokenConfigurationsT>(value)); return *this;}
    template<typename ParticipantTokenConfigurationsT = ParticipantTokenConfiguration>
    CreateStageRequest& AddParticipantTokenConfigurations(ParticipantTokenConfigurationsT&& value) { m_participantTokenConfigurationsHasBeenSet = true; m_participantTokenConfigurations.emplace_back(std::forward<ParticipantTokenConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/best-practices-and-strats.html">Best
     * practices and strategies</a> in <i>Tagging AWS Resources and Tag Editor</i> for
     * details, including restrictions that apply to tags and "Tag naming limits and
     * requirements"; Amazon IVS has no constraints on tags beyond what is documented
     * there. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateStageRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateStageRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Configuration object for individual participant recording, to attach to the
     * new stage.</p>
     */
    inline const AutoParticipantRecordingConfiguration& GetAutoParticipantRecordingConfiguration() const { return m_autoParticipantRecordingConfiguration; }
    inline bool AutoParticipantRecordingConfigurationHasBeenSet() const { return m_autoParticipantRecordingConfigurationHasBeenSet; }
    template<typename AutoParticipantRecordingConfigurationT = AutoParticipantRecordingConfiguration>
    void SetAutoParticipantRecordingConfiguration(AutoParticipantRecordingConfigurationT&& value) { m_autoParticipantRecordingConfigurationHasBeenSet = true; m_autoParticipantRecordingConfiguration = std::forward<AutoParticipantRecordingConfigurationT>(value); }
    template<typename AutoParticipantRecordingConfigurationT = AutoParticipantRecordingConfiguration>
    CreateStageRequest& WithAutoParticipantRecordingConfiguration(AutoParticipantRecordingConfigurationT&& value) { SetAutoParticipantRecordingConfiguration(std::forward<AutoParticipantRecordingConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<ParticipantTokenConfiguration> m_participantTokenConfigurations;
    bool m_participantTokenConfigurationsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    AutoParticipantRecordingConfiguration m_autoParticipantRecordingConfiguration;
    bool m_autoParticipantRecordingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
