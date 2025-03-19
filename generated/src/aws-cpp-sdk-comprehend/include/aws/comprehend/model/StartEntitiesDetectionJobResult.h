/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/JobStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Comprehend
{
namespace Model
{
  class StartEntitiesDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API StartEntitiesDetectionJobResult() = default;
    AWS_COMPREHEND_API StartEntitiesDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API StartEntitiesDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier generated for the job. To get the status of job, use this
     * identifier with the operation.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    StartEntitiesDetectionJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the entities detection job. It is a unique,
     * fully qualified identifier for the job. It includes the Amazon Web Services
     * account, Amazon Web Services Region, and the job ID. The format of the ARN is as
     * follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:entities-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:entities-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    StartEntitiesDetectionJobResult& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job. </p> <ul> <li> <p>SUBMITTED - The job has been
     * received and is queued for processing.</p> </li> <li> <p>IN_PROGRESS - Amazon
     * Comprehend is processing the job.</p> </li> <li> <p>COMPLETED - The job was
     * successfully completed and the output is available.</p> </li> <li> <p>FAILED -
     * The job did not complete. To get details, use the operation.</p> </li> <li>
     * <p>STOP_REQUESTED - Amazon Comprehend has received a stop request for the job
     * and is processing the request.</p> </li> <li> <p>STOPPED - The job was
     * successfully stopped without completing.</p> </li> </ul>
     */
    inline JobStatus GetJobStatus() const { return m_jobStatus; }
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline StartEntitiesDetectionJobResult& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the custom entity recognition model.</p>
     */
    inline const Aws::String& GetEntityRecognizerArn() const { return m_entityRecognizerArn; }
    template<typename EntityRecognizerArnT = Aws::String>
    void SetEntityRecognizerArn(EntityRecognizerArnT&& value) { m_entityRecognizerArnHasBeenSet = true; m_entityRecognizerArn = std::forward<EntityRecognizerArnT>(value); }
    template<typename EntityRecognizerArnT = Aws::String>
    StartEntitiesDetectionJobResult& WithEntityRecognizerArn(EntityRecognizerArnT&& value) { SetEntityRecognizerArn(std::forward<EntityRecognizerArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartEntitiesDetectionJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_entityRecognizerArn;
    bool m_entityRecognizerArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
