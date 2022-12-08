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
    AWS_IOTSITEWISE_API CreateBulkImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBulkImportJob"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique name that helps identify the job request.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The unique name that helps identify the job request.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The unique name that helps identify the job request.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The unique name that helps identify the job request.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The unique name that helps identify the job request.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The unique name that helps identify the job request.</p>
     */
    inline CreateBulkImportJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The unique name that helps identify the job request.</p>
     */
    inline CreateBulkImportJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The unique name that helps identify the job request.</p>
     */
    inline CreateBulkImportJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows IoT SiteWise to read Amazon S3 data.</p>
     */
    inline const Aws::String& GetJobRoleArn() const{ return m_jobRoleArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows IoT SiteWise to read Amazon S3 data.</p>
     */
    inline bool JobRoleArnHasBeenSet() const { return m_jobRoleArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows IoT SiteWise to read Amazon S3 data.</p>
     */
    inline void SetJobRoleArn(const Aws::String& value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows IoT SiteWise to read Amazon S3 data.</p>
     */
    inline void SetJobRoleArn(Aws::String&& value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows IoT SiteWise to read Amazon S3 data.</p>
     */
    inline void SetJobRoleArn(const char* value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows IoT SiteWise to read Amazon S3 data.</p>
     */
    inline CreateBulkImportJobRequest& WithJobRoleArn(const Aws::String& value) { SetJobRoleArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows IoT SiteWise to read Amazon S3 data.</p>
     */
    inline CreateBulkImportJobRequest& WithJobRoleArn(Aws::String&& value) { SetJobRoleArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows IoT SiteWise to read Amazon S3 data.</p>
     */
    inline CreateBulkImportJobRequest& WithJobRoleArn(const char* value) { SetJobRoleArn(value); return *this;}


    /**
     * <p>The files in the specified Amazon S3 bucket that contain your data.</p>
     */
    inline const Aws::Vector<File>& GetFiles() const{ return m_files; }

    /**
     * <p>The files in the specified Amazon S3 bucket that contain your data.</p>
     */
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }

    /**
     * <p>The files in the specified Amazon S3 bucket that contain your data.</p>
     */
    inline void SetFiles(const Aws::Vector<File>& value) { m_filesHasBeenSet = true; m_files = value; }

    /**
     * <p>The files in the specified Amazon S3 bucket that contain your data.</p>
     */
    inline void SetFiles(Aws::Vector<File>&& value) { m_filesHasBeenSet = true; m_files = std::move(value); }

    /**
     * <p>The files in the specified Amazon S3 bucket that contain your data.</p>
     */
    inline CreateBulkImportJobRequest& WithFiles(const Aws::Vector<File>& value) { SetFiles(value); return *this;}

    /**
     * <p>The files in the specified Amazon S3 bucket that contain your data.</p>
     */
    inline CreateBulkImportJobRequest& WithFiles(Aws::Vector<File>&& value) { SetFiles(std::move(value)); return *this;}

    /**
     * <p>The files in the specified Amazon S3 bucket that contain your data.</p>
     */
    inline CreateBulkImportJobRequest& AddFiles(const File& value) { m_filesHasBeenSet = true; m_files.push_back(value); return *this; }

    /**
     * <p>The files in the specified Amazon S3 bucket that contain your data.</p>
     */
    inline CreateBulkImportJobRequest& AddFiles(File&& value) { m_filesHasBeenSet = true; m_files.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon S3 destination where errors associated with the job creation
     * request are saved.</p>
     */
    inline const ErrorReportLocation& GetErrorReportLocation() const{ return m_errorReportLocation; }

    /**
     * <p>The Amazon S3 destination where errors associated with the job creation
     * request are saved.</p>
     */
    inline bool ErrorReportLocationHasBeenSet() const { return m_errorReportLocationHasBeenSet; }

    /**
     * <p>The Amazon S3 destination where errors associated with the job creation
     * request are saved.</p>
     */
    inline void SetErrorReportLocation(const ErrorReportLocation& value) { m_errorReportLocationHasBeenSet = true; m_errorReportLocation = value; }

    /**
     * <p>The Amazon S3 destination where errors associated with the job creation
     * request are saved.</p>
     */
    inline void SetErrorReportLocation(ErrorReportLocation&& value) { m_errorReportLocationHasBeenSet = true; m_errorReportLocation = std::move(value); }

    /**
     * <p>The Amazon S3 destination where errors associated with the job creation
     * request are saved.</p>
     */
    inline CreateBulkImportJobRequest& WithErrorReportLocation(const ErrorReportLocation& value) { SetErrorReportLocation(value); return *this;}

    /**
     * <p>The Amazon S3 destination where errors associated with the job creation
     * request are saved.</p>
     */
    inline CreateBulkImportJobRequest& WithErrorReportLocation(ErrorReportLocation&& value) { SetErrorReportLocation(std::move(value)); return *this;}


    /**
     * <p>Contains the configuration information of a job, such as the file format used
     * to save data in Amazon S3.</p>
     */
    inline const JobConfiguration& GetJobConfiguration() const{ return m_jobConfiguration; }

    /**
     * <p>Contains the configuration information of a job, such as the file format used
     * to save data in Amazon S3.</p>
     */
    inline bool JobConfigurationHasBeenSet() const { return m_jobConfigurationHasBeenSet; }

    /**
     * <p>Contains the configuration information of a job, such as the file format used
     * to save data in Amazon S3.</p>
     */
    inline void SetJobConfiguration(const JobConfiguration& value) { m_jobConfigurationHasBeenSet = true; m_jobConfiguration = value; }

    /**
     * <p>Contains the configuration information of a job, such as the file format used
     * to save data in Amazon S3.</p>
     */
    inline void SetJobConfiguration(JobConfiguration&& value) { m_jobConfigurationHasBeenSet = true; m_jobConfiguration = std::move(value); }

    /**
     * <p>Contains the configuration information of a job, such as the file format used
     * to save data in Amazon S3.</p>
     */
    inline CreateBulkImportJobRequest& WithJobConfiguration(const JobConfiguration& value) { SetJobConfiguration(value); return *this;}

    /**
     * <p>Contains the configuration information of a job, such as the file format used
     * to save data in Amazon S3.</p>
     */
    inline CreateBulkImportJobRequest& WithJobConfiguration(JobConfiguration&& value) { SetJobConfiguration(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
