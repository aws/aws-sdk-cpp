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
#include <aws/codepipeline/model/FailureDetails.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>PutJobFailureResult</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutJobFailureResultInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API PutJobFailureResultRequest : public CodePipelineRequest
  {
  public:
    PutJobFailureResultRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutJobFailureResult"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique system-generated ID of the job that failed. This is the same ID
     * returned from <code>PollForJobs</code>.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The unique system-generated ID of the job that failed. This is the same ID
     * returned from <code>PollForJobs</code>.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The unique system-generated ID of the job that failed. This is the same ID
     * returned from <code>PollForJobs</code>.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The unique system-generated ID of the job that failed. This is the same ID
     * returned from <code>PollForJobs</code>.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The unique system-generated ID of the job that failed. This is the same ID
     * returned from <code>PollForJobs</code>.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The unique system-generated ID of the job that failed. This is the same ID
     * returned from <code>PollForJobs</code>.</p>
     */
    inline PutJobFailureResultRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique system-generated ID of the job that failed. This is the same ID
     * returned from <code>PollForJobs</code>.</p>
     */
    inline PutJobFailureResultRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The unique system-generated ID of the job that failed. This is the same ID
     * returned from <code>PollForJobs</code>.</p>
     */
    inline PutJobFailureResultRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The details about the failure of a job.</p>
     */
    inline const FailureDetails& GetFailureDetails() const{ return m_failureDetails; }

    /**
     * <p>The details about the failure of a job.</p>
     */
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }

    /**
     * <p>The details about the failure of a job.</p>
     */
    inline void SetFailureDetails(const FailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }

    /**
     * <p>The details about the failure of a job.</p>
     */
    inline void SetFailureDetails(FailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::move(value); }

    /**
     * <p>The details about the failure of a job.</p>
     */
    inline PutJobFailureResultRequest& WithFailureDetails(const FailureDetails& value) { SetFailureDetails(value); return *this;}

    /**
     * <p>The details about the failure of a job.</p>
     */
    inline PutJobFailureResultRequest& WithFailureDetails(FailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    FailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
