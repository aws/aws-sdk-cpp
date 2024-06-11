/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutvision/model/DatasetStatus.h>
#include <aws/lookoutvision/model/DatasetImageStats.h>
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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p>The description for a dataset. For more information, see
   * <a>DescribeDataset</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DatasetDescription">AWS
   * API Reference</a></p>
   */
  class DatasetDescription
  {
  public:
    AWS_LOOKOUTFORVISION_API DatasetDescription();
    AWS_LOOKOUTFORVISION_API DatasetDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API DatasetDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the project that contains the dataset.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline DatasetDescription& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline DatasetDescription& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline DatasetDescription& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the dataset. The value <code>train</code> represents a training
     * dataset or single dataset project. The value <code>test</code> represents a test
     * dataset.</p>
     */
    inline const Aws::String& GetDatasetType() const{ return m_datasetType; }
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }
    inline void SetDatasetType(const Aws::String& value) { m_datasetTypeHasBeenSet = true; m_datasetType = value; }
    inline void SetDatasetType(Aws::String&& value) { m_datasetTypeHasBeenSet = true; m_datasetType = std::move(value); }
    inline void SetDatasetType(const char* value) { m_datasetTypeHasBeenSet = true; m_datasetType.assign(value); }
    inline DatasetDescription& WithDatasetType(const Aws::String& value) { SetDatasetType(value); return *this;}
    inline DatasetDescription& WithDatasetType(Aws::String&& value) { SetDatasetType(std::move(value)); return *this;}
    inline DatasetDescription& WithDatasetType(const char* value) { SetDatasetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time and date that the dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }
    inline DatasetDescription& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}
    inline DatasetDescription& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the date and time that the dataset was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }
    inline DatasetDescription& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline DatasetDescription& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the dataset.</p>
     */
    inline const DatasetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DatasetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DatasetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DatasetDescription& WithStatus(const DatasetStatus& value) { SetStatus(value); return *this;}
    inline DatasetDescription& WithStatus(DatasetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for the dataset. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline DatasetDescription& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline DatasetDescription& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline DatasetDescription& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Statistics about the images in a dataset.</p>
     */
    inline const DatasetImageStats& GetImageStats() const{ return m_imageStats; }
    inline bool ImageStatsHasBeenSet() const { return m_imageStatsHasBeenSet; }
    inline void SetImageStats(const DatasetImageStats& value) { m_imageStatsHasBeenSet = true; m_imageStats = value; }
    inline void SetImageStats(DatasetImageStats&& value) { m_imageStatsHasBeenSet = true; m_imageStats = std::move(value); }
    inline DatasetDescription& WithImageStats(const DatasetImageStats& value) { SetImageStats(value); return *this;}
    inline DatasetDescription& WithImageStats(DatasetImageStats&& value) { SetImageStats(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_datasetType;
    bool m_datasetTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;

    DatasetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    DatasetImageStats m_imageStats;
    bool m_imageStatsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
