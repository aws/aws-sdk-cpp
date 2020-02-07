/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p> A schedule configures how often and when a pipeline will automatically
   * create a new image. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/Schedule">AWS
   * API Reference</a></p>
   */
  class AWS_IMAGEBUILDER_API Schedule
  {
  public:
    Schedule();
    Schedule(Aws::Utils::Json::JsonView jsonValue);
    Schedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The expression determines how often EC2 Image Builder evaluates your
     * <code>pipelineExecutionStartCondition</code>.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p> The expression determines how often EC2 Image Builder evaluates your
     * <code>pipelineExecutionStartCondition</code>.</p>
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p> The expression determines how often EC2 Image Builder evaluates your
     * <code>pipelineExecutionStartCondition</code>.</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p> The expression determines how often EC2 Image Builder evaluates your
     * <code>pipelineExecutionStartCondition</code>.</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p> The expression determines how often EC2 Image Builder evaluates your
     * <code>pipelineExecutionStartCondition</code>.</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p> The expression determines how often EC2 Image Builder evaluates your
     * <code>pipelineExecutionStartCondition</code>.</p>
     */
    inline Schedule& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p> The expression determines how often EC2 Image Builder evaluates your
     * <code>pipelineExecutionStartCondition</code>.</p>
     */
    inline Schedule& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p> The expression determines how often EC2 Image Builder evaluates your
     * <code>pipelineExecutionStartCondition</code>.</p>
     */
    inline Schedule& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}


    /**
     * <p> The condition configures when the pipeline should trigger a new image build.
     * When the <code>pipelineExecutionStartCondition</code> is set to
     * <code>EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE</code>, EC2 Image
     * Builder will build a new image only when there are known changes pending. When
     * it is set to <code>EXPRESSION_MATCH_ONLY</code>, it will build a new image every
     * time the CRON expression matches the current time.</p>
     */
    inline const PipelineExecutionStartCondition& GetPipelineExecutionStartCondition() const{ return m_pipelineExecutionStartCondition; }

    /**
     * <p> The condition configures when the pipeline should trigger a new image build.
     * When the <code>pipelineExecutionStartCondition</code> is set to
     * <code>EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE</code>, EC2 Image
     * Builder will build a new image only when there are known changes pending. When
     * it is set to <code>EXPRESSION_MATCH_ONLY</code>, it will build a new image every
     * time the CRON expression matches the current time.</p>
     */
    inline bool PipelineExecutionStartConditionHasBeenSet() const { return m_pipelineExecutionStartConditionHasBeenSet; }

    /**
     * <p> The condition configures when the pipeline should trigger a new image build.
     * When the <code>pipelineExecutionStartCondition</code> is set to
     * <code>EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE</code>, EC2 Image
     * Builder will build a new image only when there are known changes pending. When
     * it is set to <code>EXPRESSION_MATCH_ONLY</code>, it will build a new image every
     * time the CRON expression matches the current time.</p>
     */
    inline void SetPipelineExecutionStartCondition(const PipelineExecutionStartCondition& value) { m_pipelineExecutionStartConditionHasBeenSet = true; m_pipelineExecutionStartCondition = value; }

    /**
     * <p> The condition configures when the pipeline should trigger a new image build.
     * When the <code>pipelineExecutionStartCondition</code> is set to
     * <code>EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE</code>, EC2 Image
     * Builder will build a new image only when there are known changes pending. When
     * it is set to <code>EXPRESSION_MATCH_ONLY</code>, it will build a new image every
     * time the CRON expression matches the current time.</p>
     */
    inline void SetPipelineExecutionStartCondition(PipelineExecutionStartCondition&& value) { m_pipelineExecutionStartConditionHasBeenSet = true; m_pipelineExecutionStartCondition = std::move(value); }

    /**
     * <p> The condition configures when the pipeline should trigger a new image build.
     * When the <code>pipelineExecutionStartCondition</code> is set to
     * <code>EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE</code>, EC2 Image
     * Builder will build a new image only when there are known changes pending. When
     * it is set to <code>EXPRESSION_MATCH_ONLY</code>, it will build a new image every
     * time the CRON expression matches the current time.</p>
     */
    inline Schedule& WithPipelineExecutionStartCondition(const PipelineExecutionStartCondition& value) { SetPipelineExecutionStartCondition(value); return *this;}

    /**
     * <p> The condition configures when the pipeline should trigger a new image build.
     * When the <code>pipelineExecutionStartCondition</code> is set to
     * <code>EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE</code>, EC2 Image
     * Builder will build a new image only when there are known changes pending. When
     * it is set to <code>EXPRESSION_MATCH_ONLY</code>, it will build a new image every
     * time the CRON expression matches the current time.</p>
     */
    inline Schedule& WithPipelineExecutionStartCondition(PipelineExecutionStartCondition&& value) { SetPipelineExecutionStartCondition(std::move(value)); return *this;}

  private:

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet;

    PipelineExecutionStartCondition m_pipelineExecutionStartCondition;
    bool m_pipelineExecutionStartConditionHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
