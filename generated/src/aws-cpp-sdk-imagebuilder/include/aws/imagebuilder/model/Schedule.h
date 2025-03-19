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
   * <p>A schedule configures when and how often a pipeline will automatically create
   * a new image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/Schedule">AWS
   * API Reference</a></p>
   */
  class Schedule
  {
  public:
    AWS_IMAGEBUILDER_API Schedule() = default;
    AWS_IMAGEBUILDER_API Schedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Schedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cron expression determines how often EC2 Image Builder evaluates your
     * <code>pipelineExecutionStartCondition</code>.</p> <p>For information on how to
     * format a cron expression in Image Builder, see <a
     * href="https://docs.aws.amazon.com/imagebuilder/latest/userguide/image-builder-cron.html">Use
     * cron expressions in EC2 Image Builder</a>.</p>
     */
    inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
    template<typename ScheduleExpressionT = Aws::String>
    void SetScheduleExpression(ScheduleExpressionT&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::forward<ScheduleExpressionT>(value); }
    template<typename ScheduleExpressionT = Aws::String>
    Schedule& WithScheduleExpression(ScheduleExpressionT&& value) { SetScheduleExpression(std::forward<ScheduleExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timezone that applies to the scheduling expression. For example,
     * "Etc/UTC", "America/Los_Angeles" in the <a
     * href="https://www.joda.org/joda-time/timezones.html">IANA timezone format</a>.
     * If not specified this defaults to UTC.</p>
     */
    inline const Aws::String& GetTimezone() const { return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    template<typename TimezoneT = Aws::String>
    void SetTimezone(TimezoneT&& value) { m_timezoneHasBeenSet = true; m_timezone = std::forward<TimezoneT>(value); }
    template<typename TimezoneT = Aws::String>
    Schedule& WithTimezone(TimezoneT&& value) { SetTimezone(std::forward<TimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start condition configures when the pipeline should trigger a new image
     * build, as follows. If no value is set Image Builder defaults to
     * <code>EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE</code>.</p> <ul> <li>
     * <p> <code>EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE</code> (default) –
     * When you use semantic version filters on the base image or components in your
     * image recipe, EC2 Image Builder builds a new image only when there are new
     * versions of the base image or components in your recipe that match the
     * filter.</p>  <p>For semantic version syntax, see <a
     * href="https://docs.aws.amazon.com/imagebuilder/latest/APIReference/API_CreateComponent.html">CreateComponent</a>.</p>
     *  </li> <li> <p> <code>EXPRESSION_MATCH_ONLY</code> – This condition
     * builds a new image every time the CRON expression matches the current time.</p>
     * </li> </ul>
     */
    inline PipelineExecutionStartCondition GetPipelineExecutionStartCondition() const { return m_pipelineExecutionStartCondition; }
    inline bool PipelineExecutionStartConditionHasBeenSet() const { return m_pipelineExecutionStartConditionHasBeenSet; }
    inline void SetPipelineExecutionStartCondition(PipelineExecutionStartCondition value) { m_pipelineExecutionStartConditionHasBeenSet = true; m_pipelineExecutionStartCondition = value; }
    inline Schedule& WithPipelineExecutionStartCondition(PipelineExecutionStartCondition value) { SetPipelineExecutionStartCondition(value); return *this;}
    ///@}
  private:

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    PipelineExecutionStartCondition m_pipelineExecutionStartCondition{PipelineExecutionStartCondition::NOT_SET};
    bool m_pipelineExecutionStartConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
