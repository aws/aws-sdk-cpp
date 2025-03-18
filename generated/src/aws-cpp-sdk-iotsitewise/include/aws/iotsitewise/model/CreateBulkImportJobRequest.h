/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/ErrorReportLocation.h>
#include <aws/iotsitewise/model/JobConfiguration.h>
#include <aws/iotsitewise/model/File.h>
#include <utility>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class CreateBulkImportJobRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API CreateBulkImportJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBulkImportJob"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name that helps identify the job request.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    CreateBulkImportJobRequest& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows IoT SiteWise to read Amazon S3 data.</p>
     */
    inline const Aws::String& GetJobRoleArn() const { return m_jobRoleArn; }
    inline bool JobRoleArnHasBeenSet() const { return m_jobRoleArnHasBeenSet; }
    template<typename JobRoleArnT = Aws::String>
    void SetJobRoleArn(JobRoleArnT&& value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn = std::forward<JobRoleArnT>(value); }
    template<typename JobRoleArnT = Aws::String>
    CreateBulkImportJobRequest& WithJobRoleArn(JobRoleArnT&& value) { SetJobRoleArn(std::forward<JobRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The files in the specified Amazon S3 bucket that contain your data.</p>
     */
    inline const Aws::Vector<File>& GetFiles() const { return m_files; }
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }
    template<typename FilesT = Aws::Vector<File>>
    void SetFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files = std::forward<FilesT>(value); }
    template<typename FilesT = Aws::Vector<File>>
    CreateBulkImportJobRequest& WithFiles(FilesT&& value) { SetFiles(std::forward<FilesT>(value)); return *this;}
    template<typename FilesT = File>
    CreateBulkImportJobRequest& AddFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files.emplace_back(std::forward<FilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 destination where errors associated with the job creation
     * request are saved.</p>
     */
    inline const ErrorReportLocation& GetErrorReportLocation() const { return m_errorReportLocation; }
    inline bool ErrorReportLocationHasBeenSet() const { return m_errorReportLocationHasBeenSet; }
    template<typename ErrorReportLocationT = ErrorReportLocation>
    void SetErrorReportLocation(ErrorReportLocationT&& value) { m_errorReportLocationHasBeenSet = true; m_errorReportLocation = std::forward<ErrorReportLocationT>(value); }
    template<typename ErrorReportLocationT = ErrorReportLocation>
    CreateBulkImportJobRequest& WithErrorReportLocation(ErrorReportLocationT&& value) { SetErrorReportLocation(std::forward<ErrorReportLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information of a job, such as the file format used
     * to save data in Amazon S3.</p>
     */
    inline const JobConfiguration& GetJobConfiguration() const { return m_jobConfiguration; }
    inline bool JobConfigurationHasBeenSet() const { return m_jobConfigurationHasBeenSet; }
    template<typename JobConfigurationT = JobConfiguration>
    void SetJobConfiguration(JobConfigurationT&& value) { m_jobConfigurationHasBeenSet = true; m_jobConfiguration = std::forward<JobConfigurationT>(value); }
    template<typename JobConfigurationT = JobConfiguration>
    CreateBulkImportJobRequest& WithJobConfiguration(JobConfigurationT&& value) { SetJobConfiguration(std::forward<JobConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, ingest new data into IoT SiteWise storage. Measurements with
     * notifications, metrics and transforms are computed. If set to false, historical
     * data is ingested into IoT SiteWise as is.</p>
     */
    inline bool GetAdaptiveIngestion() const { return m_adaptiveIngestion; }
    inline bool AdaptiveIngestionHasBeenSet() const { return m_adaptiveIngestionHasBeenSet; }
    inline void SetAdaptiveIngestion(bool value) { m_adaptiveIngestionHasBeenSet = true; m_adaptiveIngestion = value; }
    inline CreateBulkImportJobRequest& WithAdaptiveIngestion(bool value) { SetAdaptiveIngestion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, your data files is deleted from S3, after ingestion into IoT
     * SiteWise storage.</p>
     */
    inline bool GetDeleteFilesAfterImport() const { return m_deleteFilesAfterImport; }
    inline bool DeleteFilesAfterImportHasBeenSet() const { return m_deleteFilesAfterImportHasBeenSet; }
    inline void SetDeleteFilesAfterImport(bool value) { m_deleteFilesAfterImportHasBeenSet = true; m_deleteFilesAfterImport = value; }
    inline CreateBulkImportJobRequest& WithDeleteFilesAfterImport(bool value) { SetDeleteFilesAfterImport(value); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobRoleArn;
    bool m_jobRoleArnHasBeenSet = false;

    Aws::Vector<File> m_files;
    bool m_filesHasBeenSet = false;

    ErrorReportLocation m_errorReportLocation;
    bool m_errorReportLocationHasBeenSet = false;

    JobConfiguration m_jobConfiguration;
    bool m_jobConfigurationHasBeenSet = false;

    bool m_adaptiveIngestion{false};
    bool m_adaptiveIngestionHasBeenSet = false;

    bool m_deleteFilesAfterImport{false};
    bool m_deleteFilesAfterImportHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
