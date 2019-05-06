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
#include <aws/codepipeline/model/CurrentRevision.h>
#include <aws/codepipeline/model/ExecutionDetails.h>
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
  class AWS_CODEPIPELINE_API PutJobSuccessResultRequest : public CodePipelineRequest
  {
  public:
    PutJobSuccessResultRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutJobSuccessResult"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <p>The ID of the current revision of the artifact successfully worked upon by
     * the job.</p>
     */
    inline const CurrentRevision& GetCurrentRevision() const{ return m_currentRevision; }

    /**
     * <p>The ID of the current revision of the artifact successfully worked upon by
     * the job.</p>
     */
    inline bool CurrentRevisionHasBeenSet() const { return m_currentRevisionHasBeenSet; }

    /**
     * <p>The ID of the current revision of the artifact successfully worked upon by
     * the job.</p>
     */
    inline void SetCurrentRevision(const CurrentRevision& value) { m_currentRevisionHasBeenSet = true; m_currentRevision = value; }

    /**
     * <p>The ID of the current revision of the artifact successfully worked upon by
     * the job.</p>
     */
    inline void SetCurrentRevision(CurrentRevision&& value) { m_currentRevisionHasBeenSet = true; m_currentRevision = std::move(value); }

    /**
     * <p>The ID of the current revision of the artifact successfully worked upon by
     * the job.</p>
     */
    inline PutJobSuccessResultRequest& WithCurrentRevision(const CurrentRevision& value) { SetCurrentRevision(value); return *this;}

    /**
     * <p>The ID of the current revision of the artifact successfully worked upon by
     * the job.</p>
     */
    inline PutJobSuccessResultRequest& WithCurrentRevision(CurrentRevision&& value) { SetCurrentRevision(std::move(value)); return *this;}


    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a custom action in progress. Future
     * jobs will use this token in order to identify the running instance of the
     * action. It can be reused to return additional information about the progress of
     * the custom action. When the action is complete, no continuation token should be
     * supplied.</p>
     */
    inline const Aws::String& GetContinuationToken() const{ return m_continuationToken; }

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a custom action in progress. Future
     * jobs will use this token in order to identify the running instance of the
     * action. It can be reused to return additional information about the progress of
     * the custom action. When the action is complete, no continuation token should be
     * supplied.</p>
     */
    inline bool ContinuationTokenHasBeenSet() const { return m_continuationTokenHasBeenSet; }

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a custom action in progress. Future
     * jobs will use this token in order to identify the running instance of the
     * action. It can be reused to return additional information about the progress of
     * the custom action. When the action is complete, no continuation token should be
     * supplied.</p>
     */
    inline void SetContinuationToken(const Aws::String& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = value; }

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a custom action in progress. Future
     * jobs will use this token in order to identify the running instance of the
     * action. It can be reused to return additional information about the progress of
     * the custom action. When the action is complete, no continuation token should be
     * supplied.</p>
     */
    inline void SetContinuationToken(Aws::String&& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = std::move(value); }

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a custom action in progress. Future
     * jobs will use this token in order to identify the running instance of the
     * action. It can be reused to return additional information about the progress of
     * the custom action. When the action is complete, no continuation token should be
     * supplied.</p>
     */
    inline void SetContinuationToken(const char* value) { m_continuationTokenHasBeenSet = true; m_continuationToken.assign(value); }

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a custom action in progress. Future
     * jobs will use this token in order to identify the running instance of the
     * action. It can be reused to return additional information about the progress of
     * the custom action. When the action is complete, no continuation token should be
     * supplied.</p>
     */
    inline PutJobSuccessResultRequest& WithContinuationToken(const Aws::String& value) { SetContinuationToken(value); return *this;}

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a custom action in progress. Future
     * jobs will use this token in order to identify the running instance of the
     * action. It can be reused to return additional information about the progress of
     * the custom action. When the action is complete, no continuation token should be
     * supplied.</p>
     */
    inline PutJobSuccessResultRequest& WithContinuationToken(Aws::String&& value) { SetContinuationToken(std::move(value)); return *this;}

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a custom action in progress. Future
     * jobs will use this token in order to identify the running instance of the
     * action. It can be reused to return additional information about the progress of
     * the custom action. When the action is complete, no continuation token should be
     * supplied.</p>
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

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    CurrentRevision m_currentRevision;
    bool m_currentRevisionHasBeenSet;

    Aws::String m_continuationToken;
    bool m_continuationTokenHasBeenSet;

    ExecutionDetails m_executionDetails;
    bool m_executionDetailsHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
