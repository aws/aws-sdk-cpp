/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/JobStatus.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class CreateBulkImportJobResult
  {
  public:
    AWS_IOTSITEWISE_API CreateBulkImportJobResult();
    AWS_IOTSITEWISE_API CreateBulkImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API CreateBulkImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID of the job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The ID of the job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The ID of the job.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The ID of the job.</p>
     */
    inline CreateBulkImportJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the job.</p>
     */
    inline CreateBulkImportJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job.</p>
     */
    inline CreateBulkImportJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The unique name that helps identify the job request.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The unique name that helps identify the job request.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }

    /**
     * <p>The unique name that helps identify the job request.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }

    /**
     * <p>The unique name that helps identify the job request.</p>
     */
    inline void SetJobName(const char* value) { m_jobName.assign(value); }

    /**
     * <p>The unique name that helps identify the job request.</p>
     */
    inline CreateBulkImportJobResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The unique name that helps identify the job request.</p>
     */
    inline CreateBulkImportJobResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The unique name that helps identify the job request.</p>
     */
    inline CreateBulkImportJobResult& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The status of the bulk import job can be one of following values.</p> <ul>
     * <li> <p> <code>PENDING</code> – IoT SiteWise is waiting for the current bulk
     * import job to finish.</p> </li> <li> <p> <code>CANCELLED</code> – The bulk
     * import job has been canceled.</p> </li> <li> <p> <code>RUNNING</code> – IoT
     * SiteWise is processing your request to import your data from Amazon S3.</p>
     * </li> <li> <p> <code>COMPLETED</code> – IoT SiteWise successfully completed your
     * request to import data from Amazon S3.</p> </li> <li> <p> <code>FAILED</code> –
     * IoT SiteWise couldn't process your request to import data from Amazon S3. You
     * can use logs saved in the specified error report location in Amazon S3 to
     * troubleshoot issues.</p> </li> <li> <p> <code>COMPLETED_WITH_FAILURES</code> –
     * IoT SiteWise completed your request to import data from Amazon S3 with errors.
     * You can use logs saved in the specified error report location in Amazon S3 to
     * troubleshoot issues.</p> </li> </ul>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The status of the bulk import job can be one of following values.</p> <ul>
     * <li> <p> <code>PENDING</code> – IoT SiteWise is waiting for the current bulk
     * import job to finish.</p> </li> <li> <p> <code>CANCELLED</code> – The bulk
     * import job has been canceled.</p> </li> <li> <p> <code>RUNNING</code> – IoT
     * SiteWise is processing your request to import your data from Amazon S3.</p>
     * </li> <li> <p> <code>COMPLETED</code> – IoT SiteWise successfully completed your
     * request to import data from Amazon S3.</p> </li> <li> <p> <code>FAILED</code> –
     * IoT SiteWise couldn't process your request to import data from Amazon S3. You
     * can use logs saved in the specified error report location in Amazon S3 to
     * troubleshoot issues.</p> </li> <li> <p> <code>COMPLETED_WITH_FAILURES</code> –
     * IoT SiteWise completed your request to import data from Amazon S3 with errors.
     * You can use logs saved in the specified error report location in Amazon S3 to
     * troubleshoot issues.</p> </li> </ul>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }

    /**
     * <p>The status of the bulk import job can be one of following values.</p> <ul>
     * <li> <p> <code>PENDING</code> – IoT SiteWise is waiting for the current bulk
     * import job to finish.</p> </li> <li> <p> <code>CANCELLED</code> – The bulk
     * import job has been canceled.</p> </li> <li> <p> <code>RUNNING</code> – IoT
     * SiteWise is processing your request to import your data from Amazon S3.</p>
     * </li> <li> <p> <code>COMPLETED</code> – IoT SiteWise successfully completed your
     * request to import data from Amazon S3.</p> </li> <li> <p> <code>FAILED</code> –
     * IoT SiteWise couldn't process your request to import data from Amazon S3. You
     * can use logs saved in the specified error report location in Amazon S3 to
     * troubleshoot issues.</p> </li> <li> <p> <code>COMPLETED_WITH_FAILURES</code> –
     * IoT SiteWise completed your request to import data from Amazon S3 with errors.
     * You can use logs saved in the specified error report location in Amazon S3 to
     * troubleshoot issues.</p> </li> </ul>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>The status of the bulk import job can be one of following values.</p> <ul>
     * <li> <p> <code>PENDING</code> – IoT SiteWise is waiting for the current bulk
     * import job to finish.</p> </li> <li> <p> <code>CANCELLED</code> – The bulk
     * import job has been canceled.</p> </li> <li> <p> <code>RUNNING</code> – IoT
     * SiteWise is processing your request to import your data from Amazon S3.</p>
     * </li> <li> <p> <code>COMPLETED</code> – IoT SiteWise successfully completed your
     * request to import data from Amazon S3.</p> </li> <li> <p> <code>FAILED</code> –
     * IoT SiteWise couldn't process your request to import data from Amazon S3. You
     * can use logs saved in the specified error report location in Amazon S3 to
     * troubleshoot issues.</p> </li> <li> <p> <code>COMPLETED_WITH_FAILURES</code> –
     * IoT SiteWise completed your request to import data from Amazon S3 with errors.
     * You can use logs saved in the specified error report location in Amazon S3 to
     * troubleshoot issues.</p> </li> </ul>
     */
    inline CreateBulkImportJobResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The status of the bulk import job can be one of following values.</p> <ul>
     * <li> <p> <code>PENDING</code> – IoT SiteWise is waiting for the current bulk
     * import job to finish.</p> </li> <li> <p> <code>CANCELLED</code> – The bulk
     * import job has been canceled.</p> </li> <li> <p> <code>RUNNING</code> – IoT
     * SiteWise is processing your request to import your data from Amazon S3.</p>
     * </li> <li> <p> <code>COMPLETED</code> – IoT SiteWise successfully completed your
     * request to import data from Amazon S3.</p> </li> <li> <p> <code>FAILED</code> –
     * IoT SiteWise couldn't process your request to import data from Amazon S3. You
     * can use logs saved in the specified error report location in Amazon S3 to
     * troubleshoot issues.</p> </li> <li> <p> <code>COMPLETED_WITH_FAILURES</code> –
     * IoT SiteWise completed your request to import data from Amazon S3 with errors.
     * You can use logs saved in the specified error report location in Amazon S3 to
     * troubleshoot issues.</p> </li> </ul>
     */
    inline CreateBulkImportJobResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;

    Aws::String m_jobName;

    JobStatus m_jobStatus;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
