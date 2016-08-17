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
#include <aws/codepipeline/model/FailureDetails.h>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a third party job failure result action.</p>
   */
  class AWS_CODEPIPELINE_API PutThirdPartyJobFailureResultRequest : public CodePipelineRequest
  {
  public:
    PutThirdPartyJobFailureResultRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID of the job that failed. This is the same ID returned from
     * PollForThirdPartyJobs.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID of the job that failed. This is the same ID returned from
     * PollForThirdPartyJobs.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID of the job that failed. This is the same ID returned from
     * PollForThirdPartyJobs.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID of the job that failed. This is the same ID returned from
     * PollForThirdPartyJobs.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID of the job that failed. This is the same ID returned from
     * PollForThirdPartyJobs.</p>
     */
    inline PutThirdPartyJobFailureResultRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the job that failed. This is the same ID returned from
     * PollForThirdPartyJobs.</p>
     */
    inline PutThirdPartyJobFailureResultRequest& WithJobId(Aws::String&& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the job that failed. This is the same ID returned from
     * PollForThirdPartyJobs.</p>
     */
    inline PutThirdPartyJobFailureResultRequest& WithJobId(const char* value) { SetJobId(value); return *this;}

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
    inline PutThirdPartyJobFailureResultRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline PutThirdPartyJobFailureResultRequest& WithClientToken(Aws::String&& value) { SetClientToken(value); return *this;}

    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline PutThirdPartyJobFailureResultRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

    
    inline const FailureDetails& GetFailureDetails() const{ return m_failureDetails; }

    
    inline void SetFailureDetails(const FailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }

    
    inline void SetFailureDetails(FailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }

    
    inline PutThirdPartyJobFailureResultRequest& WithFailureDetails(const FailureDetails& value) { SetFailureDetails(value); return *this;}

    
    inline PutThirdPartyJobFailureResultRequest& WithFailureDetails(FailureDetails&& value) { SetFailureDetails(value); return *this;}

  private:
    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
    FailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
