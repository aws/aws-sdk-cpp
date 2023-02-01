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
  class StartSentimentDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API StartSentimentDetectionJobResult();
    AWS_COMPREHEND_API StartSentimentDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API StartSentimentDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier generated for the job. To get the status of a job, use this
     * identifier with the operation.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier generated for the job. To get the status of a job, use this
     * identifier with the operation.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The identifier generated for the job. To get the status of a job, use this
     * identifier with the operation.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The identifier generated for the job. To get the status of a job, use this
     * identifier with the operation.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The identifier generated for the job. To get the status of a job, use this
     * identifier with the operation.</p>
     */
    inline StartSentimentDetectionJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier generated for the job. To get the status of a job, use this
     * identifier with the operation.</p>
     */
    inline StartSentimentDetectionJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier generated for the job. To get the status of a job, use this
     * identifier with the operation.</p>
     */
    inline StartSentimentDetectionJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the sentiment detection job. It is a
     * unique, fully qualified identifier for the job. It includes the AWS account,
     * Region, and the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:sentiment-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:sentiment-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the sentiment detection job. It is a
     * unique, fully qualified identifier for the job. It includes the AWS account,
     * Region, and the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:sentiment-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:sentiment-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the sentiment detection job. It is a
     * unique, fully qualified identifier for the job. It includes the AWS account,
     * Region, and the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:sentiment-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:sentiment-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the sentiment detection job. It is a
     * unique, fully qualified identifier for the job. It includes the AWS account,
     * Region, and the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:sentiment-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:sentiment-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the sentiment detection job. It is a
     * unique, fully qualified identifier for the job. It includes the AWS account,
     * Region, and the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:sentiment-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:sentiment-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline StartSentimentDetectionJobResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the sentiment detection job. It is a
     * unique, fully qualified identifier for the job. It includes the AWS account,
     * Region, and the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:sentiment-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:sentiment-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline StartSentimentDetectionJobResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the sentiment detection job. It is a
     * unique, fully qualified identifier for the job. It includes the AWS account,
     * Region, and the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:sentiment-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:sentiment-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline StartSentimentDetectionJobResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}


    /**
     * <p>The status of the job. </p> <ul> <li> <p>SUBMITTED - The job has been
     * received and is queued for processing.</p> </li> <li> <p>IN_PROGRESS - Amazon
     * Comprehend is processing the job.</p> </li> <li> <p>COMPLETED - The job was
     * successfully completed and the output is available.</p> </li> <li> <p>FAILED -
     * The job did not complete. To get details, use the operation.</p> </li> </ul>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The status of the job. </p> <ul> <li> <p>SUBMITTED - The job has been
     * received and is queued for processing.</p> </li> <li> <p>IN_PROGRESS - Amazon
     * Comprehend is processing the job.</p> </li> <li> <p>COMPLETED - The job was
     * successfully completed and the output is available.</p> </li> <li> <p>FAILED -
     * The job did not complete. To get details, use the operation.</p> </li> </ul>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }

    /**
     * <p>The status of the job. </p> <ul> <li> <p>SUBMITTED - The job has been
     * received and is queued for processing.</p> </li> <li> <p>IN_PROGRESS - Amazon
     * Comprehend is processing the job.</p> </li> <li> <p>COMPLETED - The job was
     * successfully completed and the output is available.</p> </li> <li> <p>FAILED -
     * The job did not complete. To get details, use the operation.</p> </li> </ul>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>The status of the job. </p> <ul> <li> <p>SUBMITTED - The job has been
     * received and is queued for processing.</p> </li> <li> <p>IN_PROGRESS - Amazon
     * Comprehend is processing the job.</p> </li> <li> <p>COMPLETED - The job was
     * successfully completed and the output is available.</p> </li> <li> <p>FAILED -
     * The job did not complete. To get details, use the operation.</p> </li> </ul>
     */
    inline StartSentimentDetectionJobResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The status of the job. </p> <ul> <li> <p>SUBMITTED - The job has been
     * received and is queued for processing.</p> </li> <li> <p>IN_PROGRESS - Amazon
     * Comprehend is processing the job.</p> </li> <li> <p>COMPLETED - The job was
     * successfully completed and the output is available.</p> </li> <li> <p>FAILED -
     * The job did not complete. To get details, use the operation.</p> </li> </ul>
     */
    inline StartSentimentDetectionJobResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;

    Aws::String m_jobArn;

    JobStatus m_jobStatus;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
