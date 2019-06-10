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
   * <p>Provides a summary of the properties of a dataset import job. For a complete
   * listing, call the <a>DescribeDatasetImportJob</a> API.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DatasetImportJobSummary">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API DatasetImportJobSummary
  {
  public:
    DatasetImportJobSummary();
    DatasetImportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    DatasetImportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job.</p>
     */
    inline const Aws::String& GetDatasetImportJobArn() const{ return m_datasetImportJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job.</p>
     */
    inline bool DatasetImportJobArnHasBeenSet() const { return m_datasetImportJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job.</p>
     */
    inline void SetDatasetImportJobArn(const Aws::String& value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job.</p>
     */
    inline void SetDatasetImportJobArn(Aws::String&& value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job.</p>
     */
    inline void SetDatasetImportJobArn(const char* value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job.</p>
     */
    inline DatasetImportJobSummary& WithDatasetImportJobArn(const Aws::String& value) { SetDatasetImportJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job.</p>
     */
    inline DatasetImportJobSummary& WithDatasetImportJobArn(Aws::String&& value) { SetDatasetImportJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job.</p>
     */
    inline DatasetImportJobSummary& WithDatasetImportJobArn(const char* value) { SetDatasetImportJobArn(value); return *this;}


    /**
     * <p>The name of the dataset import job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the dataset import job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the dataset import job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the dataset import job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the dataset import job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the dataset import job.</p>
     */
    inline DatasetImportJobSummary& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the dataset import job.</p>
     */
    inline DatasetImportJobSummary& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset import job.</p>
     */
    inline DatasetImportJobSummary& WithJobName(const char* value) { SetJobName(value); return *this;}


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
    inline DatasetImportJobSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the dataset import job.</p> <p>A dataset import job can be in
     * one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline DatasetImportJobSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the dataset import job.</p> <p>A dataset import job can be in
     * one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline DatasetImportJobSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The date and time (in Unix time) that the dataset import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time (in Unix time) that the dataset import job was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time (in Unix time) that the dataset import job was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time (in Unix time) that the dataset import job was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time (in Unix time) that the dataset import job was created.</p>
     */
    inline DatasetImportJobSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time (in Unix time) that the dataset import job was created.</p>
     */
    inline DatasetImportJobSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time (in Unix time) that the dataset was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time (in Unix time) that the dataset was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time (in Unix time) that the dataset was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time (in Unix time) that the dataset was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time (in Unix time) that the dataset was last updated.</p>
     */
    inline DatasetImportJobSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time (in Unix time) that the dataset was last updated.</p>
     */
    inline DatasetImportJobSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>If a dataset import job fails, the reason behind the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If a dataset import job fails, the reason behind the failure.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If a dataset import job fails, the reason behind the failure.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If a dataset import job fails, the reason behind the failure.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If a dataset import job fails, the reason behind the failure.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If a dataset import job fails, the reason behind the failure.</p>
     */
    inline DatasetImportJobSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If a dataset import job fails, the reason behind the failure.</p>
     */
    inline DatasetImportJobSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If a dataset import job fails, the reason behind the failure.</p>
     */
    inline DatasetImportJobSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_datasetImportJobArn;
    bool m_datasetImportJobArnHasBeenSet;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

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
