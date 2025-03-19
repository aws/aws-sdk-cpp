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
    AWS_CODEPIPELINE_API LatestInPipelineExecutionFilter() = default;
    AWS_CODEPIPELINE_API LatestInPipelineExecutionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API LatestInPipelineExecutionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The execution ID for the latest execution in the pipeline.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const { return m_pipelineExecutionId; }
    inline bool PipelineExecutionIdHasBeenSet() const { return m_pipelineExecutionIdHasBeenSet; }
    template<typename PipelineExecutionIdT = Aws::String>
    void SetPipelineExecutionId(PipelineExecutionIdT&& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = std::forward<PipelineExecutionIdT>(value); }
    template<typename PipelineExecutionIdT = Aws::String>
    LatestInPipelineExecutionFilter& WithPipelineExecutionId(PipelineExecutionIdT&& value) { SetPipelineExecutionId(std::forward<PipelineExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time to filter on for the latest execution in the pipeline. Valid
     * options:</p> <ul> <li> <p>All</p> </li> <li> <p>Latest</p> </li> </ul>
     */
    inline StartTimeRange GetStartTimeRange() const { return m_startTimeRange; }
    inline bool StartTimeRangeHasBeenSet() const { return m_startTimeRangeHasBeenSet; }
    inline void SetStartTimeRange(StartTimeRange value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = value; }
    inline LatestInPipelineExecutionFilter& WithStartTimeRange(StartTimeRange value) { SetStartTimeRange(value); return *this;}
    ///@}
  private:

    Aws::String m_pipelineExecutionId;
    bool m_pipelineExecutionIdHasBeenSet = false;

    StartTimeRange m_startTimeRange{StartTimeRange::NOT_SET};
    bool m_startTimeRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
