/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/PipelineExecutionStartCondition.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>A schedule configures how often and when a pipeline will automatically create
   * a new image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/Schedule">AWS
   * API Reference</a></p>
   */
  class Schedule
  {
  public:
    AWS_IMAGEBUILDER_API Schedule();
    AWS_IMAGEBUILDER_API Schedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Schedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The cron expression determines how often EC2 Image Builder evaluates your
     * <code>pipelineExecutionStartCondition</code>.</p> <p>For information on how to
     * format a cron expression in Image Builder, see <a
     * href="https://docs.aws.amazon.com/imagebuilder/latest/userguide/image-builder-cron.html">Use
     * cron expressions in EC2 Image Builder</a>.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>The cron expression determines how often EC2 Image Builder evaluates your
     * <code>pipelineExecutionStartCondition</code>.</p> <p>For information on how to
     * format a cron expression in Image Builder, see <a
     * href="https://docs.aws.amazon.com/imagebuilder/latest/userguide/image-builder-cron.html">Use
     * cron expressions in EC2 Image Builder</a>.</p>
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p>The cron expression determines how often EC2 Image Builder evaluates your
     * <code>pipelineExecutionStartCondition</code>.</p> <p>For information on how to
     * format a cron expression in Image Builder, see <a
     * href="https://docs.aws.amazon.com/imagebuilder/latest/userguide/image-builder-cron.html">Use
     * cron expressions in EC2 Image Builder</a>.</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>The cron expression determines how often EC2 Image Builder evaluates your
     * <code>pipelineExecutionStartCondition</code>.</p> <p>For information on how to
     * format a cron expression in Image Builder, see <a
     * href="https://docs.aws.amazon.com/imagebuilder/latest/userguide/image-builder-cron.html">Use
     * cron expressions in EC2 Image Builder</a>.</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>The cron expression determines how often EC2 Image Builder evaluates your
     * <code>pipelineExecutionStartCondition</code>.</p> <p>For information on how to
     * format a cron expression in Image Builder, see <a
     * href="https://docs.aws.amazon.com/imagebuilder/latest/userguide/image-builder-cron.html">Use
     * cron expressions in EC2 Image Builder</a>.</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>The cron expression determines how often EC2 Image Builder evaluates your
     * <code>pipelineExecutionStartCondition</code>.</p> <p>For information on how to
     * format a cron expression in Image Builder, see <a
     * href="https://docs.aws.amazon.com/imagebuilder/latest/userguide/image-builder-cron.html">Use
     * cron expressions in EC2 Image Builder</a>.</p>
     */
    inline Schedule& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>The cron expression determines how often EC2 Image Builder evaluates your
     * <code>pipelineExecutionStartCondition</code>.</p> <p>For information on how to
     * format a cron expression in Image Builder, see <a
     * href="https://docs.aws.amazon.com/imagebuilder/latest/userguide/image-builder-cron.html">Use
     * cron expressions in EC2 Image Builder</a>.</p>
     */
    inline Schedule& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>The cron expression determines how often EC2 Image Builder evaluates your
     * <code>pipelineExecutionStartCondition</code>.</p> <p>For information on how to
     * format a cron expression in Image Builder, see <a
     * href="https://docs.aws.amazon.com/imagebuilder/latest/userguide/image-builder-cron.html">Use
     * cron expressions in EC2 Image Builder</a>.</p>
     */
    inline Schedule& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}


    /**
     * <p>The timezone that applies to the scheduling expression. For example,
     * "Etc/UTC", "America/Los_Angeles" in the <a
     * href="https://www.joda.org/joda-time/timezones.html">IANA timezone format</a>.
     * If not specified this defaults to UTC.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>The timezone that applies to the scheduling expression. For example,
     * "Etc/UTC", "America/Los_Angeles" in the <a
     * href="https://www.joda.org/joda-time/timezones.html">IANA timezone format</a>.
     * If not specified this defaults to UTC.</p>
     */
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    /**
     * <p>The timezone that applies to the scheduling expression. For example,
     * "Etc/UTC", "America/Los_Angeles" in the <a
     * href="https://www.joda.org/joda-time/timezones.html">IANA timezone format</a>.
     * If not specified this defaults to UTC.</p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>The timezone that applies to the scheduling expression. For example,
     * "Etc/UTC", "America/Los_Angeles" in the <a
     * href="https://www.joda.org/joda-time/timezones.html">IANA timezone format</a>.
     * If not specified this defaults to UTC.</p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * <p>The timezone that applies to the scheduling expression. For example,
     * "Etc/UTC", "America/Los_Angeles" in the <a
     * href="https://www.joda.org/joda-time/timezones.html">IANA timezone format</a>.
     * If not specified this defaults to UTC.</p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>The timezone that applies to the scheduling expression. For example,
     * "Etc/UTC", "America/Los_Angeles" in the <a
     * href="https://www.joda.org/joda-time/timezones.html">IANA timezone format</a>.
     * If not specified this defaults to UTC.</p>
     */
    inline Schedule& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The timezone that applies to the scheduling expression. For example,
     * "Etc/UTC", "America/Los_Angeles" in the <a
     * href="https://www.joda.org/joda-time/timezones.html">IANA timezone format</a>.
     * If not specified this defaults to UTC.</p>
     */
    inline Schedule& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>The timezone that applies to the scheduling expression. For example,
     * "Etc/UTC", "America/Los_Angeles" in the <a
     * href="https://www.joda.org/joda-time/timezones.html">IANA timezone format</a>.
     * If not specified this defaults to UTC.</p>
     */
    inline Schedule& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * <p>The condition configures when the pipeline should trigger a new image build.
     * When the <code>pipelineExecutionStartCondition</code> is set to
     * <code>EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE</code>, and you use
     * semantic version filters on the base image or components in your image recipe,
     * EC2 Image Builder will build a new image only when there are new versions of the
     * image or components in your recipe that match the semantic version filter. When
     * it is set to <code>EXPRESSION_MATCH_ONLY</code>, it will build a new image every
     * time the CRON expression matches the current time. For semantic version syntax,
     * see <a
     * href="https://docs.aws.amazon.com/imagebuilder/latest/APIReference/API_CreateComponent.html">CreateComponent</a>
     * in the <i> EC2 Image Builder API Reference</i>.</p>
     */
    inline const PipelineExecutionStartCondition& GetPipelineExecutionStartCondition() const{ return m_pipelineExecutionStartCondition; }

    /**
     * <p>The condition configures when the pipeline should trigger a new image build.
     * When the <code>pipelineExecutionStartCondition</code> is set to
     * <code>EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE</code>, and you use
     * semantic version filters on the base image or components in your image recipe,
     * EC2 Image Builder will build a new image only when there are new versions of the
     * image or components in your recipe that match the semantic version filter. When
     * it is set to <code>EXPRESSION_MATCH_ONLY</code>, it will build a new image every
     * time the CRON expression matches the current time. For semantic version syntax,
     * see <a
     * href="https://docs.aws.amazon.com/imagebuilder/latest/APIReference/API_CreateComponent.html">CreateComponent</a>
     * in the <i> EC2 Image Builder API Reference</i>.</p>
     */
    inline bool PipelineExecutionStartConditionHasBeenSet() const { return m_pipelineExecutionStartConditionHasBeenSet; }

    /**
     * <p>The condition configures when the pipeline should trigger a new image build.
     * When the <code>pipelineExecutionStartCondition</code> is set to
     * <code>EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE</code>, and you use
     * semantic version filters on the base image or components in your image recipe,
     * EC2 Image Builder will build a new image only when there are new versions of the
     * image or components in your recipe that match the semantic version filter. When
     * it is set to <code>EXPRESSION_MATCH_ONLY</code>, it will build a new image every
     * time the CRON expression matches the current time. For semantic version syntax,
     * see <a
     * href="https://docs.aws.amazon.com/imagebuilder/latest/APIReference/API_CreateComponent.html">CreateComponent</a>
     * in the <i> EC2 Image Builder API Reference</i>.</p>
     */
    inline void SetPipelineExecutionStartCondition(const PipelineExecutionStartCondition& value) { m_pipelineExecutionStartConditionHasBeenSet = true; m_pipelineExecutionStartCondition = value; }

    /**
     * <p>The condition configures when the pipeline should trigger a new image build.
     * When the <code>pipelineExecutionStartCondition</code> is set to
     * <code>EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE</code>, and you use
     * semantic version filters on the base image or components in your image recipe,
     * EC2 Image Builder will build a new image only when there are new versions of the
     * image or components in your recipe that match the semantic version filter. When
     * it is set to <code>EXPRESSION_MATCH_ONLY</code>, it will build a new image every
     * time the CRON expression matches the current time. For semantic version syntax,
     * see <a
     * href="https://docs.aws.amazon.com/imagebuilder/latest/APIReference/API_CreateComponent.html">CreateComponent</a>
     * in the <i> EC2 Image Builder API Reference</i>.</p>
     */
    inline void SetPipelineExecutionStartCondition(PipelineExecutionStartCondition&& value) { m_pipelineExecutionStartConditionHasBeenSet = true; m_pipelineExecutionStartCondition = std::move(value); }

    /**
     * <p>The condition configures when the pipeline should trigger a new image build.
     * When the <code>pipelineExecutionStartCondition</code> is set to
     * <code>EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE</code>, and you use
     * semantic version filters on the base image or components in your image recipe,
     * EC2 Image Builder will build a new image only when there are new versions of the
     * image or components in your recipe that match the semantic version filter. When
     * it is set to <code>EXPRESSION_MATCH_ONLY</code>, it will build a new image every
     * time the CRON expression matches the current time. For semantic version syntax,
     * see <a
     * href="https://docs.aws.amazon.com/imagebuilder/latest/APIReference/API_CreateComponent.html">CreateComponent</a>
     * in the <i> EC2 Image Builder API Reference</i>.</p>
     */
    inline Schedule& WithPipelineExecutionStartCondition(const PipelineExecutionStartCondition& value) { SetPipelineExecutionStartCondition(value); return *this;}

    /**
     * <p>The condition configures when the pipeline should trigger a new image build.
     * When the <code>pipelineExecutionStartCondition</code> is set to
     * <code>EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE</code>, and you use
     * semantic version filters on the base image or components in your image recipe,
     * EC2 Image Builder will build a new image only when there are new versions of the
     * image or components in your recipe that match the semantic version filter. When
     * it is set to <code>EXPRESSION_MATCH_ONLY</code>, it will build a new image every
     * time the CRON expression matches the current time. For semantic version syntax,
     * see <a
     * href="https://docs.aws.amazon.com/imagebuilder/latest/APIReference/API_CreateComponent.html">CreateComponent</a>
     * in the <i> EC2 Image Builder API Reference</i>.</p>
     */
    inline Schedule& WithPipelineExecutionStartCondition(PipelineExecutionStartCondition&& value) { SetPipelineExecutionStartCondition(std::move(value)); return *this;}

  private:

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    PipelineExecutionStartCondition m_pipelineExecutionStartCondition;
    bool m_pipelineExecutionStartConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
