/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/LatestInPipelineExecutionFilter.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Filter values for the action execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionExecutionFilter">AWS
   * API Reference</a></p>
   */
  class ActionExecutionFilter
  {
  public:
    AWS_CODEPIPELINE_API ActionExecutionFilter();
    AWS_CODEPIPELINE_API ActionExecutionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionExecutionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The pipeline execution ID used to filter action execution history.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const{ return m_pipelineExecutionId; }

    /**
     * <p>The pipeline execution ID used to filter action execution history.</p>
     */
    inline bool PipelineExecutionIdHasBeenSet() const { return m_pipelineExecutionIdHasBeenSet; }

    /**
     * <p>The pipeline execution ID used to filter action execution history.</p>
     */
    inline void SetPipelineExecutionId(const Aws::String& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = value; }

    /**
     * <p>The pipeline execution ID used to filter action execution history.</p>
     */
    inline void SetPipelineExecutionId(Aws::String&& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = std::move(value); }

    /**
     * <p>The pipeline execution ID used to filter action execution history.</p>
     */
    inline void SetPipelineExecutionId(const char* value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId.assign(value); }

    /**
     * <p>The pipeline execution ID used to filter action execution history.</p>
     */
    inline ActionExecutionFilter& WithPipelineExecutionId(const Aws::String& value) { SetPipelineExecutionId(value); return *this;}

    /**
     * <p>The pipeline execution ID used to filter action execution history.</p>
     */
    inline ActionExecutionFilter& WithPipelineExecutionId(Aws::String&& value) { SetPipelineExecutionId(std::move(value)); return *this;}

    /**
     * <p>The pipeline execution ID used to filter action execution history.</p>
     */
    inline ActionExecutionFilter& WithPipelineExecutionId(const char* value) { SetPipelineExecutionId(value); return *this;}


    /**
     * <p>The latest execution in the pipeline.</p>  <p>Filtering on the latest
     * execution is available for executions run on or after February 08, 2024.</p>
     * 
     */
    inline const LatestInPipelineExecutionFilter& GetLatestInPipelineExecution() const{ return m_latestInPipelineExecution; }

    /**
     * <p>The latest execution in the pipeline.</p>  <p>Filtering on the latest
     * execution is available for executions run on or after February 08, 2024.</p>
     * 
     */
    inline bool LatestInPipelineExecutionHasBeenSet() const { return m_latestInPipelineExecutionHasBeenSet; }

    /**
     * <p>The latest execution in the pipeline.</p>  <p>Filtering on the latest
     * execution is available for executions run on or after February 08, 2024.</p>
     * 
     */
    inline void SetLatestInPipelineExecution(const LatestInPipelineExecutionFilter& value) { m_latestInPipelineExecutionHasBeenSet = true; m_latestInPipelineExecution = value; }

    /**
     * <p>The latest execution in the pipeline.</p>  <p>Filtering on the latest
     * execution is available for executions run on or after February 08, 2024.</p>
     * 
     */
    inline void SetLatestInPipelineExecution(LatestInPipelineExecutionFilter&& value) { m_latestInPipelineExecutionHasBeenSet = true; m_latestInPipelineExecution = std::move(value); }

    /**
     * <p>The latest execution in the pipeline.</p>  <p>Filtering on the latest
     * execution is available for executions run on or after February 08, 2024.</p>
     * 
     */
    inline ActionExecutionFilter& WithLatestInPipelineExecution(const LatestInPipelineExecutionFilter& value) { SetLatestInPipelineExecution(value); return *this;}

    /**
     * <p>The latest execution in the pipeline.</p>  <p>Filtering on the latest
     * execution is available for executions run on or after February 08, 2024.</p>
     * 
     */
    inline ActionExecutionFilter& WithLatestInPipelineExecution(LatestInPipelineExecutionFilter&& value) { SetLatestInPipelineExecution(std::move(value)); return *this;}

  private:

    Aws::String m_pipelineExecutionId;
    bool m_pipelineExecutionIdHasBeenSet = false;

    LatestInPipelineExecutionFilter m_latestInPipelineExecution;
    bool m_latestInPipelineExecutionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
