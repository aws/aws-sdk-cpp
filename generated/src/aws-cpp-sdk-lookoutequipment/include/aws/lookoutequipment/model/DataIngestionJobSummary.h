/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/IngestionInputConfiguration.h>
#include <aws/lookoutequipment/model/IngestionJobStatus.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p>Provides information about a specified data ingestion job, including dataset
   * information, data ingestion configuration, and status. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DataIngestionJobSummary">AWS
   * API Reference</a></p>
   */
  class DataIngestionJobSummary
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API DataIngestionJobSummary() = default;
    AWS_LOOKOUTEQUIPMENT_API DataIngestionJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API DataIngestionJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the job ID of the data ingestion job. </p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    DataIngestionJobSummary& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset used for the data ingestion job. </p>
     */
    inline const Aws::String& GetDatasetName() const { return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    template<typename DatasetNameT = Aws::String>
    void SetDatasetName(DatasetNameT&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::forward<DatasetNameT>(value); }
    template<typename DatasetNameT = Aws::String>
    DataIngestionJobSummary& WithDatasetName(DatasetNameT&& value) { SetDatasetName(std::forward<DatasetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset used in the data ingestion job.
     * </p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    DataIngestionJobSummary& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies information for the input data for the data inference job,
     * including data Amazon S3 location parameters. </p>
     */
    inline const IngestionInputConfiguration& GetIngestionInputConfiguration() const { return m_ingestionInputConfiguration; }
    inline bool IngestionInputConfigurationHasBeenSet() const { return m_ingestionInputConfigurationHasBeenSet; }
    template<typename IngestionInputConfigurationT = IngestionInputConfiguration>
    void SetIngestionInputConfiguration(IngestionInputConfigurationT&& value) { m_ingestionInputConfigurationHasBeenSet = true; m_ingestionInputConfiguration = std::forward<IngestionInputConfigurationT>(value); }
    template<typename IngestionInputConfigurationT = IngestionInputConfiguration>
    DataIngestionJobSummary& WithIngestionInputConfiguration(IngestionInputConfigurationT&& value) { SetIngestionInputConfiguration(std::forward<IngestionInputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the data ingestion job. </p>
     */
    inline IngestionJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(IngestionJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DataIngestionJobSummary& WithStatus(IngestionJobStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    IngestionInputConfiguration m_ingestionInputConfiguration;
    bool m_ingestionInputConfigurationHasBeenSet = false;

    IngestionJobStatus m_status{IngestionJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
