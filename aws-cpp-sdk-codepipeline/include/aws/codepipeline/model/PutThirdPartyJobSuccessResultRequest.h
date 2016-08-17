/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a put third party job success result action.</p>
   */
  class AWS_CODEPIPELINE_API PutThirdPartyJobSuccessResultRequest : public CodePipelineRequest
  {
  public:
    PutThirdPartyJobSuccessResultRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID of the job that successfully completed. This is the same ID returned
     * from PollForThirdPartyJobs.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID of the job that successfully completed. This is the same ID returned
     * from PollForThirdPartyJobs.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID of the job that successfully completed. This is the same ID returned
     * from PollForThirdPartyJobs.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID of the job that successfully completed. This is the same ID returned
     * from PollForThirdPartyJobs.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID of the job that successfully completed. This is the same ID returned
     * from PollForThirdPartyJobs.</p>
     */
    inline PutThirdPartyJobSuccessResultRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the job that successfully completed. This is the same ID returned
     * from PollForThirdPartyJobs.</p>
     */
    inline PutThirdPartyJobSuccessResultRequest& WithJobId(Aws::String&& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the job that successfully completed. This is the same ID returned
     * from PollForThirdPartyJobs.</p>
     */
    inline PutThirdPartyJobSuccessResultRequest& WithJobId(const char* value) { SetJobId(value); return *this;}

    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline PutThirdPartyJobSuccessResultRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline PutThirdPartyJobSuccessResultRequest& WithClientToken(Aws::String&& value) { SetClientToken(value); return *this;}

    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline PutThirdPartyJobSuccessResultRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

    
    inline const CurrentRevision& GetCurrentRevision() const{ return m_currentRevision; }

    
    inline void SetCurrentRevision(const CurrentRevision& value) { m_currentRevisionHasBeenSet = true; m_currentRevision = value; }

    
    inline void SetCurrentRevision(CurrentRevision&& value) { m_currentRevisionHasBeenSet = true; m_currentRevision = value; }

    
    inline PutThirdPartyJobSuccessResultRequest& WithCurrentRevision(const CurrentRevision& value) { SetCurrentRevision(value); return *this;}

    
    inline PutThirdPartyJobSuccessResultRequest& WithCurrentRevision(CurrentRevision&& value) { SetCurrentRevision(value); return *this;}

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a partner action in progress. Future
     * jobs will use this token in order to identify the running instance of the
     * action. It can be reused to return additional information about the progress of
     * the partner action. When the action is complete, no continuation token should be
     * supplied.</p>
     */
    inline const Aws::String& GetContinuationToken() const{ return m_continuationToken; }

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a partner action in progress. Future
     * jobs will use this token in order to identify the running instance of the
     * action. It can be reused to return additional information about the progress of
     * the partner action. When the action is complete, no continuation token should be
     * supplied.</p>
     */
    inline void SetContinuationToken(const Aws::String& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = value; }

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a partner action in progress. Future
     * jobs will use this token in order to identify the running instance of the
     * action. It can be reused to return additional information about the progress of
     * the partner action. When the action is complete, no continuation token should be
     * supplied.</p>
     */
    inline void SetContinuationToken(Aws::String&& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = value; }

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a partner action in progress. Future
     * jobs will use this token in order to identify the running instance of the
     * action. It can be reused to return additional information about the progress of
     * the partner action. When the action is complete, no continuation token should be
     * supplied.</p>
     */
    inline void SetContinuationToken(const char* value) { m_continuationTokenHasBeenSet = true; m_continuationToken.assign(value); }

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a partner action in progress. Future
     * jobs will use this token in order to identify the running instance of the
     * action. It can be reused to return additional information about the progress of
     * the partner action. When the action is complete, no continuation token should be
     * supplied.</p>
     */
    inline PutThirdPartyJobSuccessResultRequest& WithContinuationToken(const Aws::String& value) { SetContinuationToken(value); return *this;}

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a partner action in progress. Future
     * jobs will use this token in order to identify the running instance of the
     * action. It can be reused to return additional information about the progress of
     * the partner action. When the action is complete, no continuation token should be
     * supplied.</p>
     */
    inline PutThirdPartyJobSuccessResultRequest& WithContinuationToken(Aws::String&& value) { SetContinuationToken(value); return *this;}

    /**
     * <p>A token generated by a job worker, such as an AWS CodeDeploy deployment ID,
     * that a successful job provides to identify a partner action in progress. Future
     * jobs will use this token in order to identify the running instance of the
     * action. It can be reused to return additional information about the progress of
     * the partner action. When the action is complete, no continuation token should be
     * supplied.</p>
     */
    inline PutThirdPartyJobSuccessResultRequest& WithContinuationToken(const char* value) { SetContinuationToken(value); return *this;}

    
    inline const ExecutionDetails& GetExecutionDetails() const{ return m_executionDetails; }

    
    inline void SetExecutionDetails(const ExecutionDetails& value) { m_executionDetailsHasBeenSet = true; m_executionDetails = value; }

    
    inline void SetExecutionDetails(ExecutionDetails&& value) { m_executionDetailsHasBeenSet = true; m_executionDetails = value; }

    
    inline PutThirdPartyJobSuccessResultRequest& WithExecutionDetails(const ExecutionDetails& value) { SetExecutionDetails(value); return *this;}

    
    inline PutThirdPartyJobSuccessResultRequest& WithExecutionDetails(ExecutionDetails&& value) { SetExecutionDetails(value); return *this;}

  private:
    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
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
