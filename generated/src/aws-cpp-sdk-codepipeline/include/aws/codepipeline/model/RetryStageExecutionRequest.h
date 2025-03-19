/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/StageRetryMode.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>RetryStageExecution</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RetryStageExecutionInput">AWS
   * API Reference</a></p>
   */
  class RetryStageExecutionRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API RetryStageExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RetryStageExecution"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the pipeline that contains the failed stage.</p>
     */
    inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    template<typename PipelineNameT = Aws::String>
    void SetPipelineName(PipelineNameT&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::forward<PipelineNameT>(value); }
    template<typename PipelineNameT = Aws::String>
    RetryStageExecutionRequest& WithPipelineName(PipelineNameT&& value) { SetPipelineName(std::forward<PipelineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the failed stage to be retried.</p>
     */
    inline const Aws::String& GetStageName() const { return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    template<typename StageNameT = Aws::String>
    void SetStageName(StageNameT&& value) { m_stageNameHasBeenSet = true; m_stageName = std::forward<StageNameT>(value); }
    template<typename StageNameT = Aws::String>
    RetryStageExecutionRequest& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pipeline execution in the failed stage to be retried. Use the
     * <a>GetPipelineState</a> action to retrieve the current pipelineExecutionId of
     * the failed stage</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const { return m_pipelineExecutionId; }
    inline bool PipelineExecutionIdHasBeenSet() const { return m_pipelineExecutionIdHasBeenSet; }
    template<typename PipelineExecutionIdT = Aws::String>
    void SetPipelineExecutionId(PipelineExecutionIdT&& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = std::forward<PipelineExecutionIdT>(value); }
    template<typename PipelineExecutionIdT = Aws::String>
    RetryStageExecutionRequest& WithPipelineExecutionId(PipelineExecutionIdT&& value) { SetPipelineExecutionId(std::forward<PipelineExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope of the retry attempt.</p>
     */
    inline StageRetryMode GetRetryMode() const { return m_retryMode; }
    inline bool RetryModeHasBeenSet() const { return m_retryModeHasBeenSet; }
    inline void SetRetryMode(StageRetryMode value) { m_retryModeHasBeenSet = true; m_retryMode = value; }
    inline RetryStageExecutionRequest& WithRetryMode(StageRetryMode value) { SetRetryMode(value); return *this;}
    ///@}
  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    Aws::String m_pipelineExecutionId;
    bool m_pipelineExecutionIdHasBeenSet = false;

    StageRetryMode m_retryMode{StageRetryMode::NOT_SET};
    bool m_retryModeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
