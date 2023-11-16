/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ivs-realtime/model/CompositionState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ivs-realtime/model/DestinationSummary.h>
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
   * <p>Summary information about a Composition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/CompositionSummary">AWS
   * API Reference</a></p>
   */
  class CompositionSummary
  {
  public:
    AWS_IVSREALTIME_API CompositionSummary();
    AWS_IVSREALTIME_API CompositionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API CompositionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ARN of the Composition resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>ARN of the Composition resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>ARN of the Composition resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>ARN of the Composition resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>ARN of the Composition resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>ARN of the Composition resource.</p>
     */
    inline CompositionSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>ARN of the Composition resource.</p>
     */
    inline CompositionSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the Composition resource.</p>
     */
    inline CompositionSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Array of Destination objects.</p>
     */
    inline const Aws::Vector<DestinationSummary>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>Array of Destination objects.</p>
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * <p>Array of Destination objects.</p>
     */
    inline void SetDestinations(const Aws::Vector<DestinationSummary>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>Array of Destination objects.</p>
     */
    inline void SetDestinations(Aws::Vector<DestinationSummary>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p>Array of Destination objects.</p>
     */
    inline CompositionSummary& WithDestinations(const Aws::Vector<DestinationSummary>& value) { SetDestinations(value); return *this;}

    /**
     * <p>Array of Destination objects.</p>
     */
    inline CompositionSummary& WithDestinations(Aws::Vector<DestinationSummary>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>Array of Destination objects.</p>
     */
    inline CompositionSummary& AddDestinations(const DestinationSummary& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>Array of Destination objects.</p>
     */
    inline CompositionSummary& AddDestinations(DestinationSummary&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }


    /**
     * <p>UTC time of the Composition end. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>UTC time of the Composition end. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>UTC time of the Composition end. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>UTC time of the Composition end. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>UTC time of the Composition end. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline CompositionSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>UTC time of the Composition end. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline CompositionSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>ARN of the attached stage.</p>
     */
    inline const Aws::String& GetStageArn() const{ return m_stageArn; }

    /**
     * <p>ARN of the attached stage.</p>
     */
    inline bool StageArnHasBeenSet() const { return m_stageArnHasBeenSet; }

    /**
     * <p>ARN of the attached stage.</p>
     */
    inline void SetStageArn(const Aws::String& value) { m_stageArnHasBeenSet = true; m_stageArn = value; }

    /**
     * <p>ARN of the attached stage.</p>
     */
    inline void SetStageArn(Aws::String&& value) { m_stageArnHasBeenSet = true; m_stageArn = std::move(value); }

    /**
     * <p>ARN of the attached stage.</p>
     */
    inline void SetStageArn(const char* value) { m_stageArnHasBeenSet = true; m_stageArn.assign(value); }

    /**
     * <p>ARN of the attached stage.</p>
     */
    inline CompositionSummary& WithStageArn(const Aws::String& value) { SetStageArn(value); return *this;}

    /**
     * <p>ARN of the attached stage.</p>
     */
    inline CompositionSummary& WithStageArn(Aws::String&& value) { SetStageArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the attached stage.</p>
     */
    inline CompositionSummary& WithStageArn(const char* value) { SetStageArn(value); return *this;}


    /**
     * <p>UTC time of the Composition start. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>UTC time of the Composition start. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>UTC time of the Composition start. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>UTC time of the Composition start. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>UTC time of the Composition start. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>.</p>
     */
    inline CompositionSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>UTC time of the Composition start. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>.</p>
     */
    inline CompositionSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>State of the Composition resource.</p>
     */
    inline const CompositionState& GetState() const{ return m_state; }

    /**
     * <p>State of the Composition resource.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>State of the Composition resource.</p>
     */
    inline void SetState(const CompositionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>State of the Composition resource.</p>
     */
    inline void SetState(CompositionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>State of the Composition resource.</p>
     */
    inline CompositionSummary& WithState(const CompositionState& value) { SetState(value); return *this;}

    /**
     * <p>State of the Composition resource.</p>
     */
    inline CompositionSummary& WithState(CompositionState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline CompositionSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline CompositionSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline CompositionSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline CompositionSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline CompositionSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline CompositionSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline CompositionSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline CompositionSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline CompositionSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<DestinationSummary> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_stageArn;
    bool m_stageArnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    CompositionState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
