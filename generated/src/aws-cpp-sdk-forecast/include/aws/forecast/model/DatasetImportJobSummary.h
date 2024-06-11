﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/DataSource.h>
#include <aws/core/utils/DateTime.h>
#include <aws/forecast/model/ImportMode.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>Provides a summary of the dataset import job properties used in the <a
   * href="https://docs.aws.amazon.com/forecast/latest/dg/API_ListDatasetImportJobs.html">ListDatasetImportJobs</a>
   * operation. To get the complete set of properties, call the <a
   * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDatasetImportJob.html">DescribeDatasetImportJob</a>
   * operation, and provide the <code>DatasetImportJobArn</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DatasetImportJobSummary">AWS
   * API Reference</a></p>
   */
  class DatasetImportJobSummary
  {
  public:
    AWS_FORECASTSERVICE_API DatasetImportJobSummary();
    AWS_FORECASTSERVICE_API DatasetImportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API DatasetImportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job.</p>
     */
    inline const Aws::String& GetDatasetImportJobArn() const{ return m_datasetImportJobArn; }
    inline bool DatasetImportJobArnHasBeenSet() const { return m_datasetImportJobArnHasBeenSet; }
    inline void SetDatasetImportJobArn(const Aws::String& value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn = value; }
    inline void SetDatasetImportJobArn(Aws::String&& value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn = std::move(value); }
    inline void SetDatasetImportJobArn(const char* value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn.assign(value); }
    inline DatasetImportJobSummary& WithDatasetImportJobArn(const Aws::String& value) { SetDatasetImportJobArn(value); return *this;}
    inline DatasetImportJobSummary& WithDatasetImportJobArn(Aws::String&& value) { SetDatasetImportJobArn(std::move(value)); return *this;}
    inline DatasetImportJobSummary& WithDatasetImportJobArn(const char* value) { SetDatasetImportJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset import job.</p>
     */
    inline const Aws::String& GetDatasetImportJobName() const{ return m_datasetImportJobName; }
    inline bool DatasetImportJobNameHasBeenSet() const { return m_datasetImportJobNameHasBeenSet; }
    inline void SetDatasetImportJobName(const Aws::String& value) { m_datasetImportJobNameHasBeenSet = true; m_datasetImportJobName = value; }
    inline void SetDatasetImportJobName(Aws::String&& value) { m_datasetImportJobNameHasBeenSet = true; m_datasetImportJobName = std::move(value); }
    inline void SetDatasetImportJobName(const char* value) { m_datasetImportJobNameHasBeenSet = true; m_datasetImportJobName.assign(value); }
    inline DatasetImportJobSummary& WithDatasetImportJobName(const Aws::String& value) { SetDatasetImportJobName(value); return *this;}
    inline DatasetImportJobSummary& WithDatasetImportJobName(Aws::String&& value) { SetDatasetImportJobName(std::move(value)); return *this;}
    inline DatasetImportJobSummary& WithDatasetImportJobName(const char* value) { SetDatasetImportJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the training data to import and an Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the data. The
     * training data must be stored in an Amazon S3 bucket.</p> <p>If encryption is
     * used, <code>DataSource</code> includes an Key Management Service (KMS) key.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }
    inline DatasetImportJobSummary& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}
    inline DatasetImportJobSummary& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the dataset import job. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>CREATE_STOPPING</code>,
     * <code>CREATE_STOPPED</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline DatasetImportJobSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DatasetImportJobSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DatasetImportJobSummary& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline DatasetImportJobSummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline DatasetImportJobSummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline DatasetImportJobSummary& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the dataset import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline DatasetImportJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DatasetImportJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = value; }
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::move(value); }
    inline DatasetImportJobSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline DatasetImportJobSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The import mode of the dataset import job, FULL or INCREMENTAL.</p>
     */
    inline const ImportMode& GetImportMode() const{ return m_importMode; }
    inline bool ImportModeHasBeenSet() const { return m_importModeHasBeenSet; }
    inline void SetImportMode(const ImportMode& value) { m_importModeHasBeenSet = true; m_importMode = value; }
    inline void SetImportMode(ImportMode&& value) { m_importModeHasBeenSet = true; m_importMode = std::move(value); }
    inline DatasetImportJobSummary& WithImportMode(const ImportMode& value) { SetImportMode(value); return *this;}
    inline DatasetImportJobSummary& WithImportMode(ImportMode&& value) { SetImportMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_datasetImportJobArn;
    bool m_datasetImportJobArnHasBeenSet = false;

    Aws::String m_datasetImportJobName;
    bool m_datasetImportJobNameHasBeenSet = false;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime;
    bool m_lastModificationTimeHasBeenSet = false;

    ImportMode m_importMode;
    bool m_importModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
