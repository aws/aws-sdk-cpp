﻿/**
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
    AWS_COMPREHEND_API StartEntitiesDetectionJobResult();
    AWS_COMPREHEND_API StartEntitiesDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API StartEntitiesDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier generated for the job. To get the status of job, use this
     * identifier with the operation.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline StartEntitiesDetectionJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline StartEntitiesDetectionJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline StartEntitiesDetectionJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
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
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }
    inline StartEntitiesDetectionJobResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline StartEntitiesDetectionJobResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline StartEntitiesDetectionJobResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}
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
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }
    inline StartEntitiesDetectionJobResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}
    inline StartEntitiesDetectionJobResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the custom entity recognition model.</p>
     */
    inline const Aws::String& GetEntityRecognizerArn() const{ return m_entityRecognizerArn; }
    inline void SetEntityRecognizerArn(const Aws::String& value) { m_entityRecognizerArn = value; }
    inline void SetEntityRecognizerArn(Aws::String&& value) { m_entityRecognizerArn = std::move(value); }
    inline void SetEntityRecognizerArn(const char* value) { m_entityRecognizerArn.assign(value); }
    inline StartEntitiesDetectionJobResult& WithEntityRecognizerArn(const Aws::String& value) { SetEntityRecognizerArn(value); return *this;}
    inline StartEntitiesDetectionJobResult& WithEntityRecognizerArn(Aws::String&& value) { SetEntityRecognizerArn(std::move(value)); return *this;}
    inline StartEntitiesDetectionJobResult& WithEntityRecognizerArn(const char* value) { SetEntityRecognizerArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartEntitiesDetectionJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartEntitiesDetectionJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartEntitiesDetectionJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;

    Aws::String m_jobArn;

    JobStatus m_jobStatus;

    Aws::String m_entityRecognizerArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
