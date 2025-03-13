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
    AWS_LOOKOUTFORVISION_API DatasetDescription() = default;
    AWS_LOOKOUTFORVISION_API DatasetDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API DatasetDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the project that contains the dataset.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    DatasetDescription& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the dataset. The value <code>train</code> represents a training
     * dataset or single dataset project. The value <code>test</code> represents a test
     * dataset.</p>
     */
    inline const Aws::String& GetDatasetType() const { return m_datasetType; }
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }
    template<typename DatasetTypeT = Aws::String>
    void SetDatasetType(DatasetTypeT&& value) { m_datasetTypeHasBeenSet = true; m_datasetType = std::forward<DatasetTypeT>(value); }
    template<typename DatasetTypeT = Aws::String>
    DatasetDescription& WithDatasetType(DatasetTypeT&& value) { SetDatasetType(std::forward<DatasetTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time and date that the dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    DatasetDescription& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the date and time that the dataset was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    DatasetDescription& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the dataset.</p>
     */
    inline DatasetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DatasetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DatasetDescription& WithStatus(DatasetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for the dataset. </p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    DatasetDescription& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Statistics about the images in a dataset.</p>
     */
    inline const DatasetImageStats& GetImageStats() const { return m_imageStats; }
    inline bool ImageStatsHasBeenSet() const { return m_imageStatsHasBeenSet; }
    template<typename ImageStatsT = DatasetImageStats>
    void SetImageStats(ImageStatsT&& value) { m_imageStatsHasBeenSet = true; m_imageStats = std::forward<ImageStatsT>(value); }
    template<typename ImageStatsT = DatasetImageStats>
    DatasetDescription& WithImageStats(ImageStatsT&& value) { SetImageStats(std::forward<ImageStatsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_datasetType;
    bool m_datasetTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp{};
    bool m_lastUpdatedTimestampHasBeenSet = false;

    DatasetStatus m_status{DatasetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    DatasetImageStats m_imageStats;
    bool m_imageStatsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
