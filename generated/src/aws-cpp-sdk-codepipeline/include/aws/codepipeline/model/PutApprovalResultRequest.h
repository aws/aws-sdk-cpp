/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ApprovalResult.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>PutApprovalResult</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutApprovalResultInput">AWS
   * API Reference</a></p>
   */
  class PutApprovalResultRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API PutApprovalResultRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutApprovalResult"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the pipeline that contains the action. </p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of the pipeline that contains the action. </p>
     */
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }

    /**
     * <p>The name of the pipeline that contains the action. </p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }

    /**
     * <p>The name of the pipeline that contains the action. </p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }

    /**
     * <p>The name of the pipeline that contains the action. </p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }

    /**
     * <p>The name of the pipeline that contains the action. </p>
     */
    inline PutApprovalResultRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the pipeline that contains the action. </p>
     */
    inline PutApprovalResultRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline that contains the action. </p>
     */
    inline PutApprovalResultRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


    /**
     * <p>The name of the stage that contains the action.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the stage that contains the action.</p>
     */
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }

    /**
     * <p>The name of the stage that contains the action.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the stage that contains the action.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }

    /**
     * <p>The name of the stage that contains the action.</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The name of the stage that contains the action.</p>
     */
    inline PutApprovalResultRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the stage that contains the action.</p>
     */
    inline PutApprovalResultRequest& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>The name of the stage that contains the action.</p>
     */
    inline PutApprovalResultRequest& WithStageName(const char* value) { SetStageName(value); return *this;}


    /**
     * <p>The name of the action for which approval is requested.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>The name of the action for which approval is requested.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>The name of the action for which approval is requested.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The name of the action for which approval is requested.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>The name of the action for which approval is requested.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>The name of the action for which approval is requested.</p>
     */
    inline PutApprovalResultRequest& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>The name of the action for which approval is requested.</p>
     */
    inline PutApprovalResultRequest& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the action for which approval is requested.</p>
     */
    inline PutApprovalResultRequest& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>Represents information about the result of the approval request.</p>
     */
    inline const ApprovalResult& GetResult() const{ return m_result; }

    /**
     * <p>Represents information about the result of the approval request.</p>
     */
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }

    /**
     * <p>Represents information about the result of the approval request.</p>
     */
    inline void SetResult(const ApprovalResult& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>Represents information about the result of the approval request.</p>
     */
    inline void SetResult(ApprovalResult&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * <p>Represents information about the result of the approval request.</p>
     */
    inline PutApprovalResultRequest& WithResult(const ApprovalResult& value) { SetResult(value); return *this;}

    /**
     * <p>Represents information about the result of the approval request.</p>
     */
    inline PutApprovalResultRequest& WithResult(ApprovalResult&& value) { SetResult(std::move(value)); return *this;}


    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the
     * <a>GetPipelineState</a> action. It is used to validate that the approval request
     * corresponding to this token is still valid.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the
     * <a>GetPipelineState</a> action. It is used to validate that the approval request
     * corresponding to this token is still valid.</p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the
     * <a>GetPipelineState</a> action. It is used to validate that the approval request
     * corresponding to this token is still valid.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the
     * <a>GetPipelineState</a> action. It is used to validate that the approval request
     * corresponding to this token is still valid.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the
     * <a>GetPipelineState</a> action. It is used to validate that the approval request
     * corresponding to this token is still valid.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the
     * <a>GetPipelineState</a> action. It is used to validate that the approval request
     * corresponding to this token is still valid.</p>
     */
    inline PutApprovalResultRequest& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the
     * <a>GetPipelineState</a> action. It is used to validate that the approval request
     * corresponding to this token is still valid.</p>
     */
    inline PutApprovalResultRequest& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the
     * <a>GetPipelineState</a> action. It is used to validate that the approval request
     * corresponding to this token is still valid.</p>
     */
    inline PutApprovalResultRequest& WithToken(const char* value) { SetToken(value); return *this;}

  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    ApprovalResult m_result;
    bool m_resultHasBeenSet = false;

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
