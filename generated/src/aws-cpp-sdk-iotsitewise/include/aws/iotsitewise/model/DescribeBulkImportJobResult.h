/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/JobStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/ErrorReportLocation.h>
#include <aws/iotsitewise/model/JobConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotsitewise/model/File.h>
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
  class DescribeBulkImportJobResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeBulkImportJobResult();
    AWS_IOTSITEWISE_API DescribeBulkImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeBulkImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline DescribeBulkImportJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline DescribeBulkImportJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline DescribeBulkImportJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name that helps identify the job request.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobName.assign(value); }
    inline DescribeBulkImportJobResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline DescribeBulkImportJobResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline DescribeBulkImportJobResult& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the bulk import job can be one of following values:</p> <ul>
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
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }
    inline DescribeBulkImportJobResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}
    inline DescribeBulkImportJobResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows IoT SiteWise to read Amazon S3 data.</p>
     */
    inline const Aws::String& GetJobRoleArn() const{ return m_jobRoleArn; }
    inline void SetJobRoleArn(const Aws::String& value) { m_jobRoleArn = value; }
    inline void SetJobRoleArn(Aws::String&& value) { m_jobRoleArn = std::move(value); }
    inline void SetJobRoleArn(const char* value) { m_jobRoleArn.assign(value); }
    inline DescribeBulkImportJobResult& WithJobRoleArn(const Aws::String& value) { SetJobRoleArn(value); return *this;}
    inline DescribeBulkImportJobResult& WithJobRoleArn(Aws::String&& value) { SetJobRoleArn(std::move(value)); return *this;}
    inline DescribeBulkImportJobResult& WithJobRoleArn(const char* value) { SetJobRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The files in the specified Amazon S3 bucket that contain your data.</p>
     */
    inline const Aws::Vector<File>& GetFiles() const{ return m_files; }
    inline void SetFiles(const Aws::Vector<File>& value) { m_files = value; }
    inline void SetFiles(Aws::Vector<File>&& value) { m_files = std::move(value); }
    inline DescribeBulkImportJobResult& WithFiles(const Aws::Vector<File>& value) { SetFiles(value); return *this;}
    inline DescribeBulkImportJobResult& WithFiles(Aws::Vector<File>&& value) { SetFiles(std::move(value)); return *this;}
    inline DescribeBulkImportJobResult& AddFiles(const File& value) { m_files.push_back(value); return *this; }
    inline DescribeBulkImportJobResult& AddFiles(File&& value) { m_files.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 destination where errors associated with the job creation
     * request are saved.</p>
     */
    inline const ErrorReportLocation& GetErrorReportLocation() const{ return m_errorReportLocation; }
    inline void SetErrorReportLocation(const ErrorReportLocation& value) { m_errorReportLocation = value; }
    inline void SetErrorReportLocation(ErrorReportLocation&& value) { m_errorReportLocation = std::move(value); }
    inline DescribeBulkImportJobResult& WithErrorReportLocation(const ErrorReportLocation& value) { SetErrorReportLocation(value); return *this;}
    inline DescribeBulkImportJobResult& WithErrorReportLocation(ErrorReportLocation&& value) { SetErrorReportLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information of a job, such as the file format used
     * to save data in Amazon S3.</p>
     */
    inline const JobConfiguration& GetJobConfiguration() const{ return m_jobConfiguration; }
    inline void SetJobConfiguration(const JobConfiguration& value) { m_jobConfiguration = value; }
    inline void SetJobConfiguration(JobConfiguration&& value) { m_jobConfiguration = std::move(value); }
    inline DescribeBulkImportJobResult& WithJobConfiguration(const JobConfiguration& value) { SetJobConfiguration(value); return *this;}
    inline DescribeBulkImportJobResult& WithJobConfiguration(JobConfiguration&& value) { SetJobConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the job was created, in Unix epoch TIME.</p>
     */
    inline const Aws::Utils::DateTime& GetJobCreationDate() const{ return m_jobCreationDate; }
    inline void SetJobCreationDate(const Aws::Utils::DateTime& value) { m_jobCreationDate = value; }
    inline void SetJobCreationDate(Aws::Utils::DateTime&& value) { m_jobCreationDate = std::move(value); }
    inline DescribeBulkImportJobResult& WithJobCreationDate(const Aws::Utils::DateTime& value) { SetJobCreationDate(value); return *this;}
    inline DescribeBulkImportJobResult& WithJobCreationDate(Aws::Utils::DateTime&& value) { SetJobCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the job was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetJobLastUpdateDate() const{ return m_jobLastUpdateDate; }
    inline void SetJobLastUpdateDate(const Aws::Utils::DateTime& value) { m_jobLastUpdateDate = value; }
    inline void SetJobLastUpdateDate(Aws::Utils::DateTime&& value) { m_jobLastUpdateDate = std::move(value); }
    inline DescribeBulkImportJobResult& WithJobLastUpdateDate(const Aws::Utils::DateTime& value) { SetJobLastUpdateDate(value); return *this;}
    inline DescribeBulkImportJobResult& WithJobLastUpdateDate(Aws::Utils::DateTime&& value) { SetJobLastUpdateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, ingest new data into IoT SiteWise storage. Measurements with
     * notifications, metrics and transforms are computed. If set to false, historical
     * data is ingested into IoT SiteWise as is.</p>
     */
    inline bool GetAdaptiveIngestion() const{ return m_adaptiveIngestion; }
    inline void SetAdaptiveIngestion(bool value) { m_adaptiveIngestion = value; }
    inline DescribeBulkImportJobResult& WithAdaptiveIngestion(bool value) { SetAdaptiveIngestion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, your data files is deleted from S3, after ingestion into IoT
     * SiteWise storage.</p>
     */
    inline bool GetDeleteFilesAfterImport() const{ return m_deleteFilesAfterImport; }
    inline void SetDeleteFilesAfterImport(bool value) { m_deleteFilesAfterImport = value; }
    inline DescribeBulkImportJobResult& WithDeleteFilesAfterImport(bool value) { SetDeleteFilesAfterImport(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeBulkImportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeBulkImportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeBulkImportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;

    Aws::String m_jobName;

    JobStatus m_jobStatus;

    Aws::String m_jobRoleArn;

    Aws::Vector<File> m_files;

    ErrorReportLocation m_errorReportLocation;

    JobConfiguration m_jobConfiguration;

    Aws::Utils::DateTime m_jobCreationDate;

    Aws::Utils::DateTime m_jobLastUpdateDate;

    bool m_adaptiveIngestion;

    bool m_deleteFilesAfterImport;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
