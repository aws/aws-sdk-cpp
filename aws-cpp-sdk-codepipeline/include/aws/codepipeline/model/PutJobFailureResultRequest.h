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
   * <p>Represents the input of a put job failure result action.</p>
   */
  class AWS_CODEPIPELINE_API PutJobFailureResultRequest : public CodePipelineRequest
  {
  public:
    PutJobFailureResultRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The unique system-generated ID of the job that failed. This is the same ID
     * returned from PollForJobs.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The unique system-generated ID of the job that failed. This is the same ID
     * returned from PollForJobs.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The unique system-generated ID of the job that failed. This is the same ID
     * returned from PollForJobs.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The unique system-generated ID of the job that failed. This is the same ID
     * returned from PollForJobs.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The unique system-generated ID of the job that failed. This is the same ID
     * returned from PollForJobs.</p>
     */
    inline PutJobFailureResultRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique system-generated ID of the job that failed. This is the same ID
     * returned from PollForJobs.</p>
     */
    inline PutJobFailureResultRequest& WithJobId(Aws::String&& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique system-generated ID of the job that failed. This is the same ID
     * returned from PollForJobs.</p>
     */
    inline PutJobFailureResultRequest& WithJobId(const char* value) { SetJobId(value); return *this;}

    /**
     * <p>The details about the failure of a job.</p>
     */
    inline const FailureDetails& GetFailureDetails() const{ return m_failureDetails; }

    /**
     * <p>The details about the failure of a job.</p>
     */
    inline void SetFailureDetails(const FailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }

    /**
     * <p>The details about the failure of a job.</p>
     */
    inline void SetFailureDetails(FailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }

    /**
     * <p>The details about the failure of a job.</p>
     */
    inline PutJobFailureResultRequest& WithFailureDetails(const FailureDetails& value) { SetFailureDetails(value); return *this;}

    /**
     * <p>The details about the failure of a job.</p>
     */
    inline PutJobFailureResultRequest& WithFailureDetails(FailureDetails&& value) { SetFailureDetails(value); return *this;}

  private:
    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;
    FailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
