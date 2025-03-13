/**
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
    AWS_FORECASTSERVICE_API DatasetImportJobSummary() = default;
    AWS_FORECASTSERVICE_API DatasetImportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API DatasetImportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job.</p>
     */
    inline const Aws::String& GetDatasetImportJobArn() const { return m_datasetImportJobArn; }
    inline bool DatasetImportJobArnHasBeenSet() const { return m_datasetImportJobArnHasBeenSet; }
    template<typename DatasetImportJobArnT = Aws::String>
    void SetDatasetImportJobArn(DatasetImportJobArnT&& value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn = std::forward<DatasetImportJobArnT>(value); }
    template<typename DatasetImportJobArnT = Aws::String>
    DatasetImportJobSummary& WithDatasetImportJobArn(DatasetImportJobArnT&& value) { SetDatasetImportJobArn(std::forward<DatasetImportJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset import job.</p>
     */
    inline const Aws::String& GetDatasetImportJobName() const { return m_datasetImportJobName; }
    inline bool DatasetImportJobNameHasBeenSet() const { return m_datasetImportJobNameHasBeenSet; }
    template<typename DatasetImportJobNameT = Aws::String>
    void SetDatasetImportJobName(DatasetImportJobNameT&& value) { m_datasetImportJobNameHasBeenSet = true; m_datasetImportJobName = std::forward<DatasetImportJobNameT>(value); }
    template<typename DatasetImportJobNameT = Aws::String>
    DatasetImportJobSummary& WithDatasetImportJobName(DatasetImportJobNameT&& value) { SetDatasetImportJobName(std::forward<DatasetImportJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the training data to import and an Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the data. The
     * training data must be stored in an Amazon S3 bucket.</p> <p>If encryption is
     * used, <code>DataSource</code> includes an Key Management Service (KMS) key.</p>
     */
    inline const DataSource& GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    template<typename DataSourceT = DataSource>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = DataSource>
    DatasetImportJobSummary& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
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
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DatasetImportJobSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DatasetImportJobSummary& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the dataset import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DatasetImportJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    inline const Aws::Utils::DateTime& GetLastModificationTime() const { return m_lastModificationTime; }
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    DatasetImportJobSummary& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The import mode of the dataset import job, FULL or INCREMENTAL.</p>
     */
    inline ImportMode GetImportMode() const { return m_importMode; }
    inline bool ImportModeHasBeenSet() const { return m_importModeHasBeenSet; }
    inline void SetImportMode(ImportMode value) { m_importModeHasBeenSet = true; m_importMode = value; }
    inline DatasetImportJobSummary& WithImportMode(ImportMode value) { SetImportMode(value); return *this;}
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

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;

    ImportMode m_importMode{ImportMode::NOT_SET};
    bool m_importModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
