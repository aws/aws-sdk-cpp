/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The metadata for the stage execution to be rolled back.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PipelineRollbackMetadata">AWS
   * API Reference</a></p>
   */
  class PipelineRollbackMetadata
  {
  public:
    AWS_CODEPIPELINE_API PipelineRollbackMetadata();
    AWS_CODEPIPELINE_API PipelineRollbackMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API PipelineRollbackMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The pipeline execution ID to which the stage will be rolled back.</p>
     */
    inline const Aws::String& GetRollbackTargetPipelineExecutionId() const{ return m_rollbackTargetPipelineExecutionId; }

    /**
     * <p>The pipeline execution ID to which the stage will be rolled back.</p>
     */
    inline bool RollbackTargetPipelineExecutionIdHasBeenSet() const { return m_rollbackTargetPipelineExecutionIdHasBeenSet; }

    /**
     * <p>The pipeline execution ID to which the stage will be rolled back.</p>
     */
    inline void SetRollbackTargetPipelineExecutionId(const Aws::String& value) { m_rollbackTargetPipelineExecutionIdHasBeenSet = true; m_rollbackTargetPipelineExecutionId = value; }

    /**
     * <p>The pipeline execution ID to which the stage will be rolled back.</p>
     */
    inline void SetRollbackTargetPipelineExecutionId(Aws::String&& value) { m_rollbackTargetPipelineExecutionIdHasBeenSet = true; m_rollbackTargetPipelineExecutionId = std::move(value); }

    /**
     * <p>The pipeline execution ID to which the stage will be rolled back.</p>
     */
    inline void SetRollbackTargetPipelineExecutionId(const char* value) { m_rollbackTargetPipelineExecutionIdHasBeenSet = true; m_rollbackTargetPipelineExecutionId.assign(value); }

    /**
     * <p>The pipeline execution ID to which the stage will be rolled back.</p>
     */
    inline PipelineRollbackMetadata& WithRollbackTargetPipelineExecutionId(const Aws::String& value) { SetRollbackTargetPipelineExecutionId(value); return *this;}

    /**
     * <p>The pipeline execution ID to which the stage will be rolled back.</p>
     */
    inline PipelineRollbackMetadata& WithRollbackTargetPipelineExecutionId(Aws::String&& value) { SetRollbackTargetPipelineExecutionId(std::move(value)); return *this;}

    /**
     * <p>The pipeline execution ID to which the stage will be rolled back.</p>
     */
    inline PipelineRollbackMetadata& WithRollbackTargetPipelineExecutionId(const char* value) { SetRollbackTargetPipelineExecutionId(value); return *this;}

  private:

    Aws::String m_rollbackTargetPipelineExecutionId;
    bool m_rollbackTargetPipelineExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
