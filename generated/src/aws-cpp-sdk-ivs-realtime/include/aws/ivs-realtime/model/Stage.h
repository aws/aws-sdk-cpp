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
    AWS_IVSREALTIME_API Stage();
    AWS_IVSREALTIME_API Stage(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Stage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Stage ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Stage& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Stage& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Stage& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stage name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Stage& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Stage& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Stage& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the active session within the stage.</p>
     */
    inline const Aws::String& GetActiveSessionId() const{ return m_activeSessionId; }
    inline bool ActiveSessionIdHasBeenSet() const { return m_activeSessionIdHasBeenSet; }
    inline void SetActiveSessionId(const Aws::String& value) { m_activeSessionIdHasBeenSet = true; m_activeSessionId = value; }
    inline void SetActiveSessionId(Aws::String&& value) { m_activeSessionIdHasBeenSet = true; m_activeSessionId = std::move(value); }
    inline void SetActiveSessionId(const char* value) { m_activeSessionIdHasBeenSet = true; m_activeSessionId.assign(value); }
    inline Stage& WithActiveSessionId(const Aws::String& value) { SetActiveSessionId(value); return *this;}
    inline Stage& WithActiveSessionId(Aws::String&& value) { SetActiveSessionId(std::move(value)); return *this;}
    inline Stage& WithActiveSessionId(const char* value) { SetActiveSessionId(value); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Stage& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Stage& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Stage& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Stage& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Stage& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Stage& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Stage& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Stage& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Stage& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration object for individual participant recording, attached to the
     * stage.</p>
     */
    inline const AutoParticipantRecordingConfiguration& GetAutoParticipantRecordingConfiguration() const{ return m_autoParticipantRecordingConfiguration; }
    inline bool AutoParticipantRecordingConfigurationHasBeenSet() const { return m_autoParticipantRecordingConfigurationHasBeenSet; }
    inline void SetAutoParticipantRecordingConfiguration(const AutoParticipantRecordingConfiguration& value) { m_autoParticipantRecordingConfigurationHasBeenSet = true; m_autoParticipantRecordingConfiguration = value; }
    inline void SetAutoParticipantRecordingConfiguration(AutoParticipantRecordingConfiguration&& value) { m_autoParticipantRecordingConfigurationHasBeenSet = true; m_autoParticipantRecordingConfiguration = std::move(value); }
    inline Stage& WithAutoParticipantRecordingConfiguration(const AutoParticipantRecordingConfiguration& value) { SetAutoParticipantRecordingConfiguration(value); return *this;}
    inline Stage& WithAutoParticipantRecordingConfiguration(AutoParticipantRecordingConfiguration&& value) { SetAutoParticipantRecordingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information about various endpoints for a stage.</p>
     */
    inline const StageEndpoints& GetEndpoints() const{ return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    inline void SetEndpoints(const StageEndpoints& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }
    inline void SetEndpoints(StageEndpoints&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }
    inline Stage& WithEndpoints(const StageEndpoints& value) { SetEndpoints(value); return *this;}
    inline Stage& WithEndpoints(StageEndpoints&& value) { SetEndpoints(std::move(value)); return *this;}
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
