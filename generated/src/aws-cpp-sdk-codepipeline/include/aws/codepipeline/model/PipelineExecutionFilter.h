/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/SucceededInStageFilter.h>
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
   * <p>The pipeline execution to filter on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PipelineExecutionFilter">AWS
   * API Reference</a></p>
   */
  class PipelineExecutionFilter
  {
  public:
    AWS_CODEPIPELINE_API PipelineExecutionFilter();
    AWS_CODEPIPELINE_API PipelineExecutionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API PipelineExecutionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filter for pipeline executions where the stage was successful in the current
     * pipeline version.</p>
     */
    inline const SucceededInStageFilter& GetSucceededInStage() const{ return m_succeededInStage; }

    /**
     * <p>Filter for pipeline executions where the stage was successful in the current
     * pipeline version.</p>
     */
    inline bool SucceededInStageHasBeenSet() const { return m_succeededInStageHasBeenSet; }

    /**
     * <p>Filter for pipeline executions where the stage was successful in the current
     * pipeline version.</p>
     */
    inline void SetSucceededInStage(const SucceededInStageFilter& value) { m_succeededInStageHasBeenSet = true; m_succeededInStage = value; }

    /**
     * <p>Filter for pipeline executions where the stage was successful in the current
     * pipeline version.</p>
     */
    inline void SetSucceededInStage(SucceededInStageFilter&& value) { m_succeededInStageHasBeenSet = true; m_succeededInStage = std::move(value); }

    /**
     * <p>Filter for pipeline executions where the stage was successful in the current
     * pipeline version.</p>
     */
    inline PipelineExecutionFilter& WithSucceededInStage(const SucceededInStageFilter& value) { SetSucceededInStage(value); return *this;}

    /**
     * <p>Filter for pipeline executions where the stage was successful in the current
     * pipeline version.</p>
     */
    inline PipelineExecutionFilter& WithSucceededInStage(SucceededInStageFilter&& value) { SetSucceededInStage(std::move(value)); return *this;}

  private:

    SucceededInStageFilter m_succeededInStage;
    bool m_succeededInStageHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
