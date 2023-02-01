/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   */
  class StopPipelineExecutionRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API StopPipelineExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopPipelineExecution"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the pipeline to stop.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of the pipeline to stop.</p>
     */
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }

    /**
     * <p>The name of the pipeline to stop.</p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }

    /**
     * <p>The name of the pipeline to stop.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }

    /**
     * <p>The name of the pipeline to stop.</p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }

    /**
     * <p>The name of the pipeline to stop.</p>
     */
    inline StopPipelineExecutionRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the pipeline to stop.</p>
     */
    inline StopPipelineExecutionRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline to stop.</p>
     */
    inline StopPipelineExecutionRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


    /**
     * <p>The ID of the pipeline execution to be stopped in the current stage. Use the
     * <code>GetPipelineState</code> action to retrieve the current
     * pipelineExecutionId.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const{ return m_pipelineExecutionId; }

    /**
     * <p>The ID of the pipeline execution to be stopped in the current stage. Use the
     * <code>GetPipelineState</code> action to retrieve the current
     * pipelineExecutionId.</p>
     */
    inline bool PipelineExecutionIdHasBeenSet() const { return m_pipelineExecutionIdHasBeenSet; }

    /**
     * <p>The ID of the pipeline execution to be stopped in the current stage. Use the
     * <code>GetPipelineState</code> action to retrieve the current
     * pipelineExecutionId.</p>
     */
    inline void SetPipelineExecutionId(const Aws::String& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = value; }

    /**
     * <p>The ID of the pipeline execution to be stopped in the current stage. Use the
     * <code>GetPipelineState</code> action to retrieve the current
     * pipelineExecutionId.</p>
     */
    inline void SetPipelineExecutionId(Aws::String&& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = std::move(value); }

    /**
     * <p>The ID of the pipeline execution to be stopped in the current stage. Use the
     * <code>GetPipelineState</code> action to retrieve the current
     * pipelineExecutionId.</p>
     */
    inline void SetPipelineExecutionId(const char* value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId.assign(value); }

    /**
     * <p>The ID of the pipeline execution to be stopped in the current stage. Use the
     * <code>GetPipelineState</code> action to retrieve the current
     * pipelineExecutionId.</p>
     */
    inline StopPipelineExecutionRequest& WithPipelineExecutionId(const Aws::String& value) { SetPipelineExecutionId(value); return *this;}

    /**
     * <p>The ID of the pipeline execution to be stopped in the current stage. Use the
     * <code>GetPipelineState</code> action to retrieve the current
     * pipelineExecutionId.</p>
     */
    inline StopPipelineExecutionRequest& WithPipelineExecutionId(Aws::String&& value) { SetPipelineExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the pipeline execution to be stopped in the current stage. Use the
     * <code>GetPipelineState</code> action to retrieve the current
     * pipelineExecutionId.</p>
     */
    inline StopPipelineExecutionRequest& WithPipelineExecutionId(const char* value) { SetPipelineExecutionId(value); return *this;}


    /**
     * <p>Use this option to stop the pipeline execution by abandoning, rather than
     * finishing, in-progress actions.</p>  <p>This option can lead to failed or
     * out-of-sequence tasks.</p> 
     */
    inline bool GetAbandon() const{ return m_abandon; }

    /**
     * <p>Use this option to stop the pipeline execution by abandoning, rather than
     * finishing, in-progress actions.</p>  <p>This option can lead to failed or
     * out-of-sequence tasks.</p> 
     */
    inline bool AbandonHasBeenSet() const { return m_abandonHasBeenSet; }

    /**
     * <p>Use this option to stop the pipeline execution by abandoning, rather than
     * finishing, in-progress actions.</p>  <p>This option can lead to failed or
     * out-of-sequence tasks.</p> 
     */
    inline void SetAbandon(bool value) { m_abandonHasBeenSet = true; m_abandon = value; }

    /**
     * <p>Use this option to stop the pipeline execution by abandoning, rather than
     * finishing, in-progress actions.</p>  <p>This option can lead to failed or
     * out-of-sequence tasks.</p> 
     */
    inline StopPipelineExecutionRequest& WithAbandon(bool value) { SetAbandon(value); return *this;}


    /**
     * <p>Use this option to enter comments, such as the reason the pipeline was
     * stopped.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>Use this option to enter comments, such as the reason the pipeline was
     * stopped.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>Use this option to enter comments, such as the reason the pipeline was
     * stopped.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>Use this option to enter comments, such as the reason the pipeline was
     * stopped.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>Use this option to enter comments, such as the reason the pipeline was
     * stopped.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>Use this option to enter comments, such as the reason the pipeline was
     * stopped.</p>
     */
    inline StopPipelineExecutionRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>Use this option to enter comments, such as the reason the pipeline was
     * stopped.</p>
     */
    inline StopPipelineExecutionRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>Use this option to enter comments, such as the reason the pipeline was
     * stopped.</p>
     */
    inline StopPipelineExecutionRequest& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    Aws::String m_pipelineExecutionId;
    bool m_pipelineExecutionIdHasBeenSet = false;

    bool m_abandon;
    bool m_abandonHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
