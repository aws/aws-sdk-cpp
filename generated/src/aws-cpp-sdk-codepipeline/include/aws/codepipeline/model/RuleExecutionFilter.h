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
   * <p>Filter values for the rule execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RuleExecutionFilter">AWS
   * API Reference</a></p>
   */
  class RuleExecutionFilter
  {
  public:
    AWS_CODEPIPELINE_API RuleExecutionFilter() = default;
    AWS_CODEPIPELINE_API RuleExecutionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API RuleExecutionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The pipeline execution ID used to filter rule execution history.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const { return m_pipelineExecutionId; }
    inline bool PipelineExecutionIdHasBeenSet() const { return m_pipelineExecutionIdHasBeenSet; }
    template<typename PipelineExecutionIdT = Aws::String>
    void SetPipelineExecutionId(PipelineExecutionIdT&& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = std::forward<PipelineExecutionIdT>(value); }
    template<typename PipelineExecutionIdT = Aws::String>
    RuleExecutionFilter& WithPipelineExecutionId(PipelineExecutionIdT&& value) { SetPipelineExecutionId(std::forward<PipelineExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LatestInPipelineExecutionFilter& GetLatestInPipelineExecution() const { return m_latestInPipelineExecution; }
    inline bool LatestInPipelineExecutionHasBeenSet() const { return m_latestInPipelineExecutionHasBeenSet; }
    template<typename LatestInPipelineExecutionT = LatestInPipelineExecutionFilter>
    void SetLatestInPipelineExecution(LatestInPipelineExecutionT&& value) { m_latestInPipelineExecutionHasBeenSet = true; m_latestInPipelineExecution = std::forward<LatestInPipelineExecutionT>(value); }
    template<typename LatestInPipelineExecutionT = LatestInPipelineExecutionFilter>
    RuleExecutionFilter& WithLatestInPipelineExecution(LatestInPipelineExecutionT&& value) { SetLatestInPipelineExecution(std::forward<LatestInPipelineExecutionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineExecutionId;
    bool m_pipelineExecutionIdHasBeenSet = false;

    LatestInPipelineExecutionFilter m_latestInPipelineExecution;
    bool m_latestInPipelineExecutionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
