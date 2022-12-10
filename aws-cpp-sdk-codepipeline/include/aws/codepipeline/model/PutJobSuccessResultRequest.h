/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/CurrentRevision.h>
#include <aws/codepipeline/model/ExecutionDetails.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>PutJobSuccessResult</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutJobSuccessResultInput">AWS
   * API Reference</a></p>
   */
  class PutJobSuccessResultRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API PutJobSuccessResultRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutJobSuccessResult"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique system-generated ID of the job that succeeded. This is the same ID
     * returned from <code>PollForJobs</code>.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The unique system-generated ID of the job that succeeded. This is the same ID
     * returned from <code>PollForJobs</code>.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The unique system-generated ID of the job that succeeded. This is the same ID
     * returned from <code>PollForJobs</code>.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The unique system-generated ID of the job that succeeded. This is the same ID
     * returned from <code>PollForJobs</code>.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The unique system-generated ID of the job that succeeded. This is the same ID
     * returned from <code>PollForJobs</code>.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The unique system-generated ID of the job that succeeded. This is the same ID
     * returned from <code>PollForJobs</code>.</p>
     */
    inline PutJobSuccessResultRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique system-generated ID of the job that succeeded. This is the same ID
     * returned from <code>PollForJobs</code>.</p>
     */
    inline PutJobSuccessResultRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The unique system-generated ID of the job that succeeded. This is the same ID
     * returned from <code>PollForJobs</code>.</p>
     */
    inline PutJobSuccessResultRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The ID of the current revision of the artifact successfully worked on by the
     * job.</p>
     */
    inline const CurrentRevision& GetCurrentRevision() const{ return m_currentRevision; }

    /**
     * <p>The ID of the current revision of the artifact successfully worked on by the
     * job.</p>
     */
    inline bool CurrentRevisionHasBeenSet() const { return m_currentRevisionHasBeenSet; }

    /**
     * <p>The ID of the current revision of the artifact successfully worked on by the
     * job.</p>
     */
    inline void SetCurrentRevision(const CurrentRevision& value) { m_currentRevisionHasBeenSet = true; m_currentRevision = value; }

    /**
     * <p>The ID of the current revision of the artifact successfully worked on by the
     * job.</p>
     */
    inline void SetCurrentRevision(CurrentRevision&& value) { m_currentRevisionHasBeenSet = true; m_currentRevision = std::move(value); }

    /**
     * <p>The ID of the current revision of the artifact successfully worked on by the
     * job.</p>
     */
    inline PutJobSuccessResultRequest& WithCurrentRevision(const CurrentRevision& value) { SetCurrentRevision(value); return *this;}

    /**
     * <p>The ID of the current revision of the artifact successfully worked on by the
     * job.</p>
     */
    inline PutJobSuccessResultRequest& WithCurrentRevision(CurrentRevision&& value) { SetCurrentRevision(std::move(value)); return *this;}


    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a custom action in progress. Future
     * jobs use this token to identify the running instance of the action. It can be
     * reused to return more information about the progress of the custom action. When
     * the action is complete, no continuation token should be supplied.</p>
     */
    inline const Aws::String& GetContinuationToken() const{ return m_continuationToken; }

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a custom action in progress. Future
     * jobs use this token to identify the running instance of the action. It can be
     * reused to return more information about the progress of the custom action. When
     * the action is complete, no continuation token should be supplied.</p>
     */
    inline bool ContinuationTokenHasBeenSet() const { return m_continuationTokenHasBeenSet; }

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a custom action in progress. Future
     * jobs use this token to identify the running instance of the action. It can be
     * reused to return more information about the progress of the custom action. When
     * the action is complete, no continuation token should be supplied.</p>
     */
    inline void SetContinuationToken(const Aws::String& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = value; }

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a custom action in progress. Future
     * jobs use this token to identify the running instance of the action. It can be
     * reused to return more information about the progress of the custom action. When
     * the action is complete, no continuation token should be supplied.</p>
     */
    inline void SetContinuationToken(Aws::String&& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = std::move(value); }

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a custom action in progress. Future
     * jobs use this token to identify the running instance of the action. It can be
     * reused to return more information about the progress of the custom action. When
     * the action is complete, no continuation token should be supplied.</p>
     */
    inline void SetContinuationToken(const char* value) { m_continuationTokenHasBeenSet = true; m_continuationToken.assign(value); }

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a custom action in progress. Future
     * jobs use this token to identify the running instance of the action. It can be
     * reused to return more information about the progress of the custom action. When
     * the action is complete, no continuation token should be supplied.</p>
     */
    inline PutJobSuccessResultRequest& WithContinuationToken(const Aws::String& value) { SetContinuationToken(value); return *this;}

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a custom action in progress. Future
     * jobs use this token to identify the running instance of the action. It can be
     * reused to return more information about the progress of the custom action. When
     * the action is complete, no continuation token should be supplied.</p>
     */
    inline PutJobSuccessResultRequest& WithContinuationToken(Aws::String&& value) { SetContinuationToken(std::move(value)); return *this;}

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a custom action in progress. Future
     * jobs use this token to identify the running instance of the action. It can be
     * reused to return more information about the progress of the custom action. When
     * the action is complete, no continuation token should be supplied.</p>
     */
    inline PutJobSuccessResultRequest& WithContinuationToken(const char* value) { SetContinuationToken(value); return *this;}


    /**
     * <p>The execution details of the successful job, such as the actions taken by the
     * job worker.</p>
     */
    inline const ExecutionDetails& GetExecutionDetails() const{ return m_executionDetails; }

    /**
     * <p>The execution details of the successful job, such as the actions taken by the
     * job worker.</p>
     */
    inline bool ExecutionDetailsHasBeenSet() const { return m_executionDetailsHasBeenSet; }

    /**
     * <p>The execution details of the successful job, such as the actions taken by the
     * job worker.</p>
     */
    inline void SetExecutionDetails(const ExecutionDetails& value) { m_executionDetailsHasBeenSet = true; m_executionDetails = value; }

    /**
     * <p>The execution details of the successful job, such as the actions taken by the
     * job worker.</p>
     */
    inline void SetExecutionDetails(ExecutionDetails&& value) { m_executionDetailsHasBeenSet = true; m_executionDetails = std::move(value); }

    /**
     * <p>The execution details of the successful job, such as the actions taken by the
     * job worker.</p>
     */
    inline PutJobSuccessResultRequest& WithExecutionDetails(const ExecutionDetails& value) { SetExecutionDetails(value); return *this;}

    /**
     * <p>The execution details of the successful job, such as the actions taken by the
     * job worker.</p>
     */
    inline PutJobSuccessResultRequest& WithExecutionDetails(ExecutionDetails&& value) { SetExecutionDetails(std::move(value)); return *this;}


    /**
     * <p>Key-value pairs produced as output by a job worker that can be made available
     * to a downstream action configuration. <code>outputVariables</code> can be
     * included only when there is no continuation token on the request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOutputVariables() const{ return m_outputVariables; }

    /**
     * <p>Key-value pairs produced as output by a job worker that can be made available
     * to a downstream action configuration. <code>outputVariables</code> can be
     * included only when there is no continuation token on the request.</p>
     */
    inline bool OutputVariablesHasBeenSet() const { return m_outputVariablesHasBeenSet; }

    /**
     * <p>Key-value pairs produced as output by a job worker that can be made available
     * to a downstream action configuration. <code>outputVariables</code> can be
     * included only when there is no continuation token on the request.</p>
     */
    inline void SetOutputVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_outputVariablesHasBeenSet = true; m_outputVariables = value; }

    /**
     * <p>Key-value pairs produced as output by a job worker that can be made available
     * to a downstream action configuration. <code>outputVariables</code> can be
     * included only when there is no continuation token on the request.</p>
     */
    inline void SetOutputVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_outputVariablesHasBeenSet = true; m_outputVariables = std::move(value); }

    /**
     * <p>Key-value pairs produced as output by a job worker that can be made available
     * to a downstream action configuration. <code>outputVariables</code> can be
     * included only when there is no continuation token on the request.</p>
     */
    inline PutJobSuccessResultRequest& WithOutputVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetOutputVariables(value); return *this;}

    /**
     * <p>Key-value pairs produced as output by a job worker that can be made available
     * to a downstream action configuration. <code>outputVariables</code> can be
     * included only when there is no continuation token on the request.</p>
     */
    inline PutJobSuccessResultRequest& WithOutputVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetOutputVariables(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs produced as output by a job worker that can be made available
     * to a downstream action configuration. <code>outputVariables</code> can be
     * included only when there is no continuation token on the request.</p>
     */
    inline PutJobSuccessResultRequest& AddOutputVariables(const Aws::String& key, const Aws::String& value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(key, value); return *this; }

    /**
     * <p>Key-value pairs produced as output by a job worker that can be made available
     * to a downstream action configuration. <code>outputVariables</code> can be
     * included only when there is no continuation token on the request.</p>
     */
    inline PutJobSuccessResultRequest& AddOutputVariables(Aws::String&& key, const Aws::String& value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pairs produced as output by a job worker that can be made available
     * to a downstream action configuration. <code>outputVariables</code> can be
     * included only when there is no continuation token on the request.</p>
     */
    inline PutJobSuccessResultRequest& AddOutputVariables(const Aws::String& key, Aws::String&& value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pairs produced as output by a job worker that can be made available
     * to a downstream action configuration. <code>outputVariables</code> can be
     * included only when there is no continuation token on the request.</p>
     */
    inline PutJobSuccessResultRequest& AddOutputVariables(Aws::String&& key, Aws::String&& value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Key-value pairs produced as output by a job worker that can be made available
     * to a downstream action configuration. <code>outputVariables</code> can be
     * included only when there is no continuation token on the request.</p>
     */
    inline PutJobSuccessResultRequest& AddOutputVariables(const char* key, Aws::String&& value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pairs produced as output by a job worker that can be made available
     * to a downstream action configuration. <code>outputVariables</code> can be
     * included only when there is no continuation token on the request.</p>
     */
    inline PutJobSuccessResultRequest& AddOutputVariables(Aws::String&& key, const char* value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pairs produced as output by a job worker that can be made available
     * to a downstream action configuration. <code>outputVariables</code> can be
     * included only when there is no continuation token on the request.</p>
     */
    inline PutJobSuccessResultRequest& AddOutputVariables(const char* key, const char* value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(key, value); return *this; }

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    CurrentRevision m_currentRevision;
    bool m_currentRevisionHasBeenSet = false;

    Aws::String m_continuationToken;
    bool m_continuationTokenHasBeenSet = false;

    ExecutionDetails m_executionDetails;
    bool m_executionDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_outputVariables;
    bool m_outputVariablesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
