/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ivs-realtime/model/AutoParticipantRecordingConfiguration.h>
#include <aws/ivs-realtime/model/StageEndpoints.h>
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
   * <p>Object specifying a stage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/Stage">AWS
   * API Reference</a></p>
   */
  class Stage
  {
  public:
    AWS_IVSREALTIME_API Stage() = default;
    AWS_IVSREALTIME_API Stage(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Stage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Stage ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Stage& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stage name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Stage& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the active session within the stage.</p>
     */
    inline const Aws::String& GetActiveSessionId() const { return m_activeSessionId; }
    inline bool ActiveSessionIdHasBeenSet() const { return m_activeSessionIdHasBeenSet; }
    template<typename ActiveSessionIdT = Aws::String>
    void SetActiveSessionId(ActiveSessionIdT&& value) { m_activeSessionIdHasBeenSet = true; m_activeSessionId = std::forward<ActiveSessionIdT>(value); }
    template<typename ActiveSessionIdT = Aws::String>
    Stage& WithActiveSessionId(ActiveSessionIdT&& value) { SetActiveSessionId(std::forward<ActiveSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/best-practices-and-strats.html">Best
     * practices and strategies</a> in <i>Tagging AWS Resources and Tag Editor</i> for
     * details, including restrictions that apply to tags and "Tag naming limits and
     * requirements"; Amazon IVS has no constraints on tags beyond what is documented
     * there.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Stage& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Stage& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Configuration object for individual participant recording, attached to the
     * stage.</p>
     */
    inline const AutoParticipantRecordingConfiguration& GetAutoParticipantRecordingConfiguration() const { return m_autoParticipantRecordingConfiguration; }
    inline bool AutoParticipantRecordingConfigurationHasBeenSet() const { return m_autoParticipantRecordingConfigurationHasBeenSet; }
    template<typename AutoParticipantRecordingConfigurationT = AutoParticipantRecordingConfiguration>
    void SetAutoParticipantRecordingConfiguration(AutoParticipantRecordingConfigurationT&& value) { m_autoParticipantRecordingConfigurationHasBeenSet = true; m_autoParticipantRecordingConfiguration = std::forward<AutoParticipantRecordingConfigurationT>(value); }
    template<typename AutoParticipantRecordingConfigurationT = AutoParticipantRecordingConfiguration>
    Stage& WithAutoParticipantRecordingConfiguration(AutoParticipantRecordingConfigurationT&& value) { SetAutoParticipantRecordingConfiguration(std::forward<AutoParticipantRecordingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information about various endpoints for a stage.</p>
     */
    inline const StageEndpoints& GetEndpoints() const { return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    template<typename EndpointsT = StageEndpoints>
    void SetEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::forward<EndpointsT>(value); }
    template<typename EndpointsT = StageEndpoints>
    Stage& WithEndpoints(EndpointsT&& value) { SetEndpoints(std::forward<EndpointsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_activeSessionId;
    bool m_activeSessionIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    AutoParticipantRecordingConfiguration m_autoParticipantRecordingConfiguration;
    bool m_autoParticipantRecordingConfigurationHasBeenSet = false;

    StageEndpoints m_endpoints;
    bool m_endpointsHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
