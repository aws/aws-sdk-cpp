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
  class AWS_CODEPIPELINE_API RetryStageExecutionRequest : public CodePipelineRequest
  {
  public:
    RetryStageExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RetryStageExecution"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the pipeline that contains the failed stage.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of the pipeline that contains the failed stage.</p>
     */
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }

    /**
     * <p>The name of the pipeline that contains the failed stage.</p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }

    /**
     * <p>The name of the pipeline that contains the failed stage.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }

    /**
     * <p>The name of the pipeline that contains the failed stage.</p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }

    /**
     * <p>The name of the pipeline that contains the failed stage.</p>
     */
    inline RetryStageExecutionRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the pipeline that contains the failed stage.</p>
     */
    inline RetryStageExecutionRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline that contains the failed stage.</p>
     */
    inline RetryStageExecutionRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


    /**
     * <p>The name of the failed stage to be retried.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the failed stage to be retried.</p>
     */
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }

    /**
     * <p>The name of the failed stage to be retried.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the failed stage to be retried.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }

    /**
     * <p>The name of the failed stage to be retried.</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The name of the failed stage to be retried.</p>
     */
    inline RetryStageExecutionRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the failed stage to be retried.</p>
     */
    inline RetryStageExecutionRequest& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>The name of the failed stage to be retried.</p>
     */
    inline RetryStageExecutionRequest& WithStageName(const char* value) { SetStageName(value); return *this;}


    /**
     * <p>The ID of the pipeline execution in the failed stage to be retried. Use the
     * <a>GetPipelineState</a> action to retrieve the current pipelineExecutionId of
     * the failed stage</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const{ return m_pipelineExecutionId; }

    /**
     * <p>The ID of the pipeline execution in the failed stage to be retried. Use the
     * <a>GetPipelineState</a> action to retrieve the current pipelineExecutionId of
     * the failed stage</p>
     */
    inline bool PipelineExecutionIdHasBeenSet() const { return m_pipelineExecutionIdHasBeenSet; }

    /**
     * <p>The ID of the pipeline execution in the failed stage to be retried. Use the
     * <a>GetPipelineState</a> action to retrieve the current pipelineExecutionId of
     * the failed stage</p>
     */
    inline void SetPipelineExecutionId(const Aws::String& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = value; }

    /**
     * <p>The ID of the pipeline execution in the failed stage to be retried. Use the
     * <a>GetPipelineState</a> action to retrieve the current pipelineExecutionId of
     * the failed stage</p>
     */
    inline void SetPipelineExecutionId(Aws::String&& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = std::move(value); }

    /**
     * <p>The ID of the pipeline execution in the failed stage to be retried. Use the
     * <a>GetPipelineState</a> action to retrieve the current pipelineExecutionId of
     * the failed stage</p>
     */
    inline void SetPipelineExecutionId(const char* value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId.assign(value); }

    /**
     * <p>The ID of the pipeline execution in the failed stage to be retried. Use the
     * <a>GetPipelineState</a> action to retrieve the current pipelineExecutionId of
     * the failed stage</p>
     */
    inline RetryStageExecutionRequest& WithPipelineExecutionId(const Aws::String& value) { SetPipelineExecutionId(value); return *this;}

    /**
     * <p>The ID of the pipeline execution in the failed stage to be retried. Use the
     * <a>GetPipelineState</a> action to retrieve the current pipelineExecutionId of
     * the failed stage</p>
     */
    inline RetryStageExecutionRequest& WithPipelineExecutionId(Aws::String&& value) { SetPipelineExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the pipeline execution in the failed stage to be retried. Use the
     * <a>GetPipelineState</a> action to retrieve the current pipelineExecutionId of
     * the failed stage</p>
     */
    inline RetryStageExecutionRequest& WithPipelineExecutionId(const char* value) { SetPipelineExecutionId(value); return *this;}


    /**
     * <p>The scope of the retry attempt. Currently, the only supported value is
     * FAILED_ACTIONS.</p>
     */
    inline const StageRetryMode& GetRetryMode() const{ return m_retryMode; }

    /**
     * <p>The scope of the retry attempt. Currently, the only supported value is
     * FAILED_ACTIONS.</p>
     */
    inline bool RetryModeHasBeenSet() const { return m_retryModeHasBeenSet; }

    /**
     * <p>The scope of the retry attempt. Currently, the only supported value is
     * FAILED_ACTIONS.</p>
     */
    inline void SetRetryMode(const StageRetryMode& value) { m_retryModeHasBeenSet = true; m_retryMode = value; }

    /**
     * <p>The scope of the retry attempt. Currently, the only supported value is
     * FAILED_ACTIONS.</p>
     */
    inline void SetRetryMode(StageRetryMode&& value) { m_retryModeHasBeenSet = true; m_retryMode = std::move(value); }

    /**
     * <p>The scope of the retry attempt. Currently, the only supported value is
     * FAILED_ACTIONS.</p>
     */
    inline RetryStageExecutionRequest& WithRetryMode(const StageRetryMode& value) { SetRetryMode(value); return *this;}

    /**
     * <p>The scope of the retry attempt. Currently, the only supported value is
     * FAILED_ACTIONS.</p>
     */
    inline RetryStageExecutionRequest& WithRetryMode(StageRetryMode&& value) { SetRetryMode(std::move(value)); return *this;}

  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet;

    Aws::String m_pipelineExecutionId;
    bool m_pipelineExecutionIdHasBeenSet;

    StageRetryMode m_retryMode;
    bool m_retryModeHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
