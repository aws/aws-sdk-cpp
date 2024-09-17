/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/CompositionState.h>
#include <aws/ivs-realtime/model/LayoutConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ivs-realtime/model/Destination.h>
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
   * <p>Object specifying a Composition resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/Composition">AWS
   * API Reference</a></p>
   */
  class Composition
  {
  public:
    AWS_IVSREALTIME_API Composition();
    AWS_IVSREALTIME_API Composition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Composition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of the Composition resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Composition& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Composition& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Composition& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the stage used as input</p>
     */
    inline const Aws::String& GetStageArn() const{ return m_stageArn; }
    inline bool StageArnHasBeenSet() const { return m_stageArnHasBeenSet; }
    inline void SetStageArn(const Aws::String& value) { m_stageArnHasBeenSet = true; m_stageArn = value; }
    inline void SetStageArn(Aws::String&& value) { m_stageArnHasBeenSet = true; m_stageArn = std::move(value); }
    inline void SetStageArn(const char* value) { m_stageArnHasBeenSet = true; m_stageArn.assign(value); }
    inline Composition& WithStageArn(const Aws::String& value) { SetStageArn(value); return *this;}
    inline Composition& WithStageArn(Aws::String&& value) { SetStageArn(std::move(value)); return *this;}
    inline Composition& WithStageArn(const char* value) { SetStageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the Composition.</p>
     */
    inline const CompositionState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const CompositionState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(CompositionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Composition& WithState(const CompositionState& value) { SetState(value); return *this;}
    inline Composition& WithState(CompositionState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Layout object to configure composition parameters.</p>
     */
    inline const LayoutConfiguration& GetLayout() const{ return m_layout; }
    inline bool LayoutHasBeenSet() const { return m_layoutHasBeenSet; }
    inline void SetLayout(const LayoutConfiguration& value) { m_layoutHasBeenSet = true; m_layout = value; }
    inline void SetLayout(LayoutConfiguration&& value) { m_layoutHasBeenSet = true; m_layout = std::move(value); }
    inline Composition& WithLayout(const LayoutConfiguration& value) { SetLayout(value); return *this;}
    inline Composition& WithLayout(LayoutConfiguration&& value) { SetLayout(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of Destination objects. A Composition can contain either one
     * destination (<code>channel</code> or <code>s3</code>) or two (one
     * <code>channel</code> and one <code>s3</code>).</p>
     */
    inline const Aws::Vector<Destination>& GetDestinations() const{ return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    inline void SetDestinations(const Aws::Vector<Destination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }
    inline void SetDestinations(Aws::Vector<Destination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }
    inline Composition& WithDestinations(const Aws::Vector<Destination>& value) { SetDestinations(value); return *this;}
    inline Composition& WithDestinations(Aws::Vector<Destination>&& value) { SetDestinations(std::move(value)); return *this;}
    inline Composition& AddDestinations(const Destination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }
    inline Composition& AddDestinations(Destination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }
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
    inline Composition& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Composition& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Composition& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Composition& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Composition& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Composition& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Composition& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Composition& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Composition& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>UTC time of the Composition start. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline Composition& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline Composition& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>UTC time of the Composition end. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline Composition& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline Composition& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_stageArn;
    bool m_stageArnHasBeenSet = false;

    CompositionState m_state;
    bool m_stateHasBeenSet = false;

    LayoutConfiguration m_layout;
    bool m_layoutHasBeenSet = false;

    Aws::Vector<Destination> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
