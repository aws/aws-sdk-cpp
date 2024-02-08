/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/StartTimeRange.h>
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
   * <p>The field that specifies to filter on the latest execution in the
   * pipeline.</p>  <p>Filtering on the latest execution is available for
   * executions run on or after February 08, 2024.</p> <p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/LatestInPipelineExecutionFilter">AWS
   * API Reference</a></p>
   */
  class LatestInPipelineExecutionFilter
  {
  public:
    AWS_CODEPIPELINE_API LatestInPipelineExecutionFilter();
    AWS_CODEPIPELINE_API LatestInPipelineExecutionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API LatestInPipelineExecutionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The execution ID for the latest execution in the pipeline.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const{ return m_pipelineExecutionId; }

    /**
     * <p>The execution ID for the latest execution in the pipeline.</p>
     */
    inline bool PipelineExecutionIdHasBeenSet() const { return m_pipelineExecutionIdHasBeenSet; }

    /**
     * <p>The execution ID for the latest execution in the pipeline.</p>
     */
    inline void SetPipelineExecutionId(const Aws::String& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = value; }

    /**
     * <p>The execution ID for the latest execution in the pipeline.</p>
     */
    inline void SetPipelineExecutionId(Aws::String&& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = std::move(value); }

    /**
     * <p>The execution ID for the latest execution in the pipeline.</p>
     */
    inline void SetPipelineExecutionId(const char* value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId.assign(value); }

    /**
     * <p>The execution ID for the latest execution in the pipeline.</p>
     */
    inline LatestInPipelineExecutionFilter& WithPipelineExecutionId(const Aws::String& value) { SetPipelineExecutionId(value); return *this;}

    /**
     * <p>The execution ID for the latest execution in the pipeline.</p>
     */
    inline LatestInPipelineExecutionFilter& WithPipelineExecutionId(Aws::String&& value) { SetPipelineExecutionId(std::move(value)); return *this;}

    /**
     * <p>The execution ID for the latest execution in the pipeline.</p>
     */
    inline LatestInPipelineExecutionFilter& WithPipelineExecutionId(const char* value) { SetPipelineExecutionId(value); return *this;}


    /**
     * <p>The start time to filter on for the latest execution in the pipeline. Valid
     * options:</p> <ul> <li> <p>All</p> </li> <li> <p>Latest</p> </li> </ul>
     */
    inline const StartTimeRange& GetStartTimeRange() const{ return m_startTimeRange; }

    /**
     * <p>The start time to filter on for the latest execution in the pipeline. Valid
     * options:</p> <ul> <li> <p>All</p> </li> <li> <p>Latest</p> </li> </ul>
     */
    inline bool StartTimeRangeHasBeenSet() const { return m_startTimeRangeHasBeenSet; }

    /**
     * <p>The start time to filter on for the latest execution in the pipeline. Valid
     * options:</p> <ul> <li> <p>All</p> </li> <li> <p>Latest</p> </li> </ul>
     */
    inline void SetStartTimeRange(const StartTimeRange& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = value; }

    /**
     * <p>The start time to filter on for the latest execution in the pipeline. Valid
     * options:</p> <ul> <li> <p>All</p> </li> <li> <p>Latest</p> </li> </ul>
     */
    inline void SetStartTimeRange(StartTimeRange&& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = std::move(value); }

    /**
     * <p>The start time to filter on for the latest execution in the pipeline. Valid
     * options:</p> <ul> <li> <p>All</p> </li> <li> <p>Latest</p> </li> </ul>
     */
    inline LatestInPipelineExecutionFilter& WithStartTimeRange(const StartTimeRange& value) { SetStartTimeRange(value); return *this;}

    /**
     * <p>The start time to filter on for the latest execution in the pipeline. Valid
     * options:</p> <ul> <li> <p>All</p> </li> <li> <p>Latest</p> </li> </ul>
     */
    inline LatestInPipelineExecutionFilter& WithStartTimeRange(StartTimeRange&& value) { SetStartTimeRange(std::move(value)); return *this;}

  private:

    Aws::String m_pipelineExecutionId;
    bool m_pipelineExecutionIdHasBeenSet = false;

    StartTimeRange m_startTimeRange;
    bool m_startTimeRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
