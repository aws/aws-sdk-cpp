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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/DataSource.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Personalize
{
namespace Model
{

  /**
   * <p>Describes a job that imports training data from a data source (Amazon S3
   * bucket) to an Amazon Personalize dataset. For more information, see
   * <a>CreateDatasetImportJob</a>.</p> <p>A dataset import job can be in one of the
   * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
   * ACTIVE -or- CREATE FAILED</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DatasetImportJob">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API DatasetImportJob
  {
  public:
    DatasetImportJob();
    DatasetImportJob(Aws::Utils::Json::JsonView jsonValue);
    DatasetImportJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the import job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the import job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the import job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the import job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the import job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the import job.</p>
     */
    inline DatasetImportJob& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the import job.</p>
     */
    inline DatasetImportJob& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the import job.</p>
     */
    inline DatasetImportJob& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline const Aws::String& GetDatasetImportJobArn() const{ return m_datasetImportJobArn; }

    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline bool DatasetImportJobArnHasBeenSet() const { return m_datasetImportJobArnHasBeenSet; }

    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline void SetDatasetImportJobArn(const Aws::String& value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn = value; }

    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline void SetDatasetImportJobArn(Aws::String&& value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn = std::move(value); }

    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline void SetDatasetImportJobArn(const char* value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn.assign(value); }

    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline DatasetImportJob& WithDatasetImportJobArn(const Aws::String& value) { SetDatasetImportJobArn(value); return *this;}

    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline DatasetImportJob& WithDatasetImportJobArn(Aws::String&& value) { SetDatasetImportJobArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline DatasetImportJob& WithDatasetImportJobArn(const char* value) { SetDatasetImportJobArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that receives the imported
     * data.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that receives the imported
     * data.</p>
     */
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that receives the imported
     * data.</p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that receives the imported
     * data.</p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that receives the imported
     * data.</p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that receives the imported
     * data.</p>
     */
    inline DatasetImportJob& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that receives the imported
     * data.</p>
     */
    inline DatasetImportJob& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that receives the imported
     * data.</p>
     */
    inline DatasetImportJob& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>The Amazon S3 bucket that contains the training data to import.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The Amazon S3 bucket that contains the training data to import.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket that contains the training data to import.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The Amazon S3 bucket that contains the training data to import.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The Amazon S3 bucket that contains the training data to import.</p>
     */
    inline DatasetImportJob& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that contains the training data to import.</p>
     */
    inline DatasetImportJob& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that has
     * permissions to read from the Amazon S3 data source.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that has
     * permissions to read from the Amazon S3 data source.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that has
     * permissions to read from the Amazon S3 data source.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that has
     * permissions to read from the Amazon S3 data source.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that has
     * permissions to read from the Amazon S3 data source.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that has
     * permissions to read from the Amazon S3 data source.</p>
     */
    inline DatasetImportJob& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that has
     * permissions to read from the Amazon S3 data source.</p>
     */
    inline DatasetImportJob& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that has
     * permissions to read from the Amazon S3 data source.</p>
     */
    inline DatasetImportJob& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The status of the dataset import job.</p> <p>A dataset import job can be in
     * one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the dataset import job.</p> <p>A dataset import job can be in
     * one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the dataset import job.</p> <p>A dataset import job can be in
     * one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the dataset import job.</p> <p>A dataset import job can be in
     * one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the dataset import job.</p> <p>A dataset import job can be in
     * one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the dataset import job.</p> <p>A dataset import job can be in
     * one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline DatasetImportJob& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the dataset import job.</p> <p>A dataset import job can be in
     * one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline DatasetImportJob& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the dataset import job.</p> <p>A dataset import job can be in
     * one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline DatasetImportJob& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The creation date and time (in Unix time) of the dataset import job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation date and time (in Unix time) of the dataset import job.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The creation date and time (in Unix time) of the dataset import job.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The creation date and time (in Unix time) of the dataset import job.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The creation date and time (in Unix time) of the dataset import job.</p>
     */
    inline DatasetImportJob& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation date and time (in Unix time) of the dataset import job.</p>
     */
    inline DatasetImportJob& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time (in Unix time) the dataset was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time (in Unix time) the dataset was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time (in Unix time) the dataset was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time (in Unix time) the dataset was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time (in Unix time) the dataset was last updated.</p>
     */
    inline DatasetImportJob& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time (in Unix time) the dataset was last updated.</p>
     */
    inline DatasetImportJob& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>If a dataset import job fails, provides the reason why.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If a dataset import job fails, provides the reason why.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If a dataset import job fails, provides the reason why.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If a dataset import job fails, provides the reason why.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If a dataset import job fails, provides the reason why.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If a dataset import job fails, provides the reason why.</p>
     */
    inline DatasetImportJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If a dataset import job fails, provides the reason why.</p>
     */
    inline DatasetImportJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If a dataset import job fails, provides the reason why.</p>
     */
    inline DatasetImportJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    Aws::String m_datasetImportJobArn;
    bool m_datasetImportJobArnHasBeenSet;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
