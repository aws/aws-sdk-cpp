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
  class StartEventsDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API StartEventsDetectionJobResult();
    AWS_COMPREHEND_API StartEventsDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API StartEventsDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>An unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>An unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>An unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>An unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline StartEventsDetectionJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>An unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline StartEventsDetectionJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>An unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline StartEventsDetectionJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the events detection job. It is a unique,
     * fully qualified identifier for the job. It includes the AWS account, Region, and
     * the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:events-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:events-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the events detection job. It is a unique,
     * fully qualified identifier for the job. It includes the AWS account, Region, and
     * the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:events-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:events-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the events detection job. It is a unique,
     * fully qualified identifier for the job. It includes the AWS account, Region, and
     * the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:events-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:events-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the events detection job. It is a unique,
     * fully qualified identifier for the job. It includes the AWS account, Region, and
     * the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:events-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:events-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the events detection job. It is a unique,
     * fully qualified identifier for the job. It includes the AWS account, Region, and
     * the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:events-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:events-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline StartEventsDetectionJobResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the events detection job. It is a unique,
     * fully qualified identifier for the job. It includes the AWS account, Region, and
     * the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:events-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:events-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline StartEventsDetectionJobResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the events detection job. It is a unique,
     * fully qualified identifier for the job. It includes the AWS account, Region, and
     * the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:events-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:events-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline StartEventsDetectionJobResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}


    /**
     * <p>The status of the events detection job.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The status of the events detection job.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }

    /**
     * <p>The status of the events detection job.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>The status of the events detection job.</p>
     */
    inline StartEventsDetectionJobResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The status of the events detection job.</p>
     */
    inline StartEventsDetectionJobResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;

    Aws::String m_jobArn;

    JobStatus m_jobStatus;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
