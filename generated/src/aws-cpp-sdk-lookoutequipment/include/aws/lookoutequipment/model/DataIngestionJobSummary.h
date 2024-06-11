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
    AWS_LOOKOUTEQUIPMENT_API DataIngestionJobSummary();
    AWS_LOOKOUTEQUIPMENT_API DataIngestionJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API DataIngestionJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the job ID of the data ingestion job. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline DataIngestionJobSummary& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline DataIngestionJobSummary& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline DataIngestionJobSummary& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset used for the data ingestion job. </p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }
    inline DataIngestionJobSummary& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}
    inline DataIngestionJobSummary& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}
    inline DataIngestionJobSummary& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset used in the data ingestion job.
     * </p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }
    inline DataIngestionJobSummary& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}
    inline DataIngestionJobSummary& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}
    inline DataIngestionJobSummary& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies information for the input data for the data inference job,
     * including data Amazon S3 location parameters. </p>
     */
    inline const IngestionInputConfiguration& GetIngestionInputConfiguration() const{ return m_ingestionInputConfiguration; }
    inline bool IngestionInputConfigurationHasBeenSet() const { return m_ingestionInputConfigurationHasBeenSet; }
    inline void SetIngestionInputConfiguration(const IngestionInputConfiguration& value) { m_ingestionInputConfigurationHasBeenSet = true; m_ingestionInputConfiguration = value; }
    inline void SetIngestionInputConfiguration(IngestionInputConfiguration&& value) { m_ingestionInputConfigurationHasBeenSet = true; m_ingestionInputConfiguration = std::move(value); }
    inline DataIngestionJobSummary& WithIngestionInputConfiguration(const IngestionInputConfiguration& value) { SetIngestionInputConfiguration(value); return *this;}
    inline DataIngestionJobSummary& WithIngestionInputConfiguration(IngestionInputConfiguration&& value) { SetIngestionInputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the data ingestion job. </p>
     */
    inline const IngestionJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const IngestionJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(IngestionJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DataIngestionJobSummary& WithStatus(const IngestionJobStatus& value) { SetStatus(value); return *this;}
    inline DataIngestionJobSummary& WithStatus(IngestionJobStatus&& value) { SetStatus(std::move(value)); return *this;}
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

    IngestionJobStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
