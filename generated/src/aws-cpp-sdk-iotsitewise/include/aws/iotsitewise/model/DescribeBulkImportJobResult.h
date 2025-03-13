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
    AWS_IOTSITEWISE_API DescribeBulkImportJobResult() = default;
    AWS_IOTSITEWISE_API DescribeBulkImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeBulkImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    DescribeBulkImportJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name that helps identify the job request.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    DescribeBulkImportJobResult& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
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
    inline JobStatus GetJobStatus() const { return m_jobStatus; }
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline DescribeBulkImportJobResult& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows IoT SiteWise to read Amazon S3 data.</p>
     */
    inline const Aws::String& GetJobRoleArn() const { return m_jobRoleArn; }
    template<typename JobRoleArnT = Aws::String>
    void SetJobRoleArn(JobRoleArnT&& value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn = std::forward<JobRoleArnT>(value); }
    template<typename JobRoleArnT = Aws::String>
    DescribeBulkImportJobResult& WithJobRoleArn(JobRoleArnT&& value) { SetJobRoleArn(std::forward<JobRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The files in the specified Amazon S3 bucket that contain your data.</p>
     */
    inline const Aws::Vector<File>& GetFiles() const { return m_files; }
    template<typename FilesT = Aws::Vector<File>>
    void SetFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files = std::forward<FilesT>(value); }
    template<typename FilesT = Aws::Vector<File>>
    DescribeBulkImportJobResult& WithFiles(FilesT&& value) { SetFiles(std::forward<FilesT>(value)); return *this;}
    template<typename FilesT = File>
    DescribeBulkImportJobResult& AddFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files.emplace_back(std::forward<FilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 destination where errors associated with the job creation
     * request are saved.</p>
     */
    inline const ErrorReportLocation& GetErrorReportLocation() const { return m_errorReportLocation; }
    template<typename ErrorReportLocationT = ErrorReportLocation>
    void SetErrorReportLocation(ErrorReportLocationT&& value) { m_errorReportLocationHasBeenSet = true; m_errorReportLocation = std::forward<ErrorReportLocationT>(value); }
    template<typename ErrorReportLocationT = ErrorReportLocation>
    DescribeBulkImportJobResult& WithErrorReportLocation(ErrorReportLocationT&& value) { SetErrorReportLocation(std::forward<ErrorReportLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information of a job, such as the file format used
     * to save data in Amazon S3.</p>
     */
    inline const JobConfiguration& GetJobConfiguration() const { return m_jobConfiguration; }
    template<typename JobConfigurationT = JobConfiguration>
    void SetJobConfiguration(JobConfigurationT&& value) { m_jobConfigurationHasBeenSet = true; m_jobConfiguration = std::forward<JobConfigurationT>(value); }
    template<typename JobConfigurationT = JobConfiguration>
    DescribeBulkImportJobResult& WithJobConfiguration(JobConfigurationT&& value) { SetJobConfiguration(std::forward<JobConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the job was created, in Unix epoch TIME.</p>
     */
    inline const Aws::Utils::DateTime& GetJobCreationDate() const { return m_jobCreationDate; }
    template<typename JobCreationDateT = Aws::Utils::DateTime>
    void SetJobCreationDate(JobCreationDateT&& value) { m_jobCreationDateHasBeenSet = true; m_jobCreationDate = std::forward<JobCreationDateT>(value); }
    template<typename JobCreationDateT = Aws::Utils::DateTime>
    DescribeBulkImportJobResult& WithJobCreationDate(JobCreationDateT&& value) { SetJobCreationDate(std::forward<JobCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the job was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetJobLastUpdateDate() const { return m_jobLastUpdateDate; }
    template<typename JobLastUpdateDateT = Aws::Utils::DateTime>
    void SetJobLastUpdateDate(JobLastUpdateDateT&& value) { m_jobLastUpdateDateHasBeenSet = true; m_jobLastUpdateDate = std::forward<JobLastUpdateDateT>(value); }
    template<typename JobLastUpdateDateT = Aws::Utils::DateTime>
    DescribeBulkImportJobResult& WithJobLastUpdateDate(JobLastUpdateDateT&& value) { SetJobLastUpdateDate(std::forward<JobLastUpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, ingest new data into IoT SiteWise storage. Measurements with
     * notifications, metrics and transforms are computed. If set to false, historical
     * data is ingested into IoT SiteWise as is.</p>
     */
    inline bool GetAdaptiveIngestion() const { return m_adaptiveIngestion; }
    inline void SetAdaptiveIngestion(bool value) { m_adaptiveIngestionHasBeenSet = true; m_adaptiveIngestion = value; }
    inline DescribeBulkImportJobResult& WithAdaptiveIngestion(bool value) { SetAdaptiveIngestion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, your data files is deleted from S3, after ingestion into IoT
     * SiteWise storage.</p>
     */
    inline bool GetDeleteFilesAfterImport() const { return m_deleteFilesAfterImport; }
    inline void SetDeleteFilesAfterImport(bool value) { m_deleteFilesAfterImportHasBeenSet = true; m_deleteFilesAfterImport = value; }
    inline DescribeBulkImportJobResult& WithDeleteFilesAfterImport(bool value) { SetDeleteFilesAfterImport(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBulkImportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_jobRoleArn;
    bool m_jobRoleArnHasBeenSet = false;

    Aws::Vector<File> m_files;
    bool m_filesHasBeenSet = false;

    ErrorReportLocation m_errorReportLocation;
    bool m_errorReportLocationHasBeenSet = false;

    JobConfiguration m_jobConfiguration;
    bool m_jobConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_jobCreationDate{};
    bool m_jobCreationDateHasBeenSet = false;

    Aws::Utils::DateTime m_jobLastUpdateDate{};
    bool m_jobLastUpdateDateHasBeenSet = false;

    bool m_adaptiveIngestion{false};
    bool m_adaptiveIngestionHasBeenSet = false;

    bool m_deleteFilesAfterImport{false};
    bool m_deleteFilesAfterImportHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
