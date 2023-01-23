/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutvision/model/DatasetStatus.h>
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
   * <p>Summary information for an Amazon Lookout for Vision dataset. For more
   * information, see <a>DescribeDataset</a> and
   * <a>ProjectDescription</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DatasetMetadata">AWS
   * API Reference</a></p>
   */
  class DatasetMetadata
  {
  public:
    AWS_LOOKOUTFORVISION_API DatasetMetadata();
    AWS_LOOKOUTFORVISION_API DatasetMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API DatasetMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the dataset.</p>
     */
    inline const Aws::String& GetDatasetType() const{ return m_datasetType; }

    /**
     * <p>The type of the dataset.</p>
     */
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }

    /**
     * <p>The type of the dataset.</p>
     */
    inline void SetDatasetType(const Aws::String& value) { m_datasetTypeHasBeenSet = true; m_datasetType = value; }

    /**
     * <p>The type of the dataset.</p>
     */
    inline void SetDatasetType(Aws::String&& value) { m_datasetTypeHasBeenSet = true; m_datasetType = std::move(value); }

    /**
     * <p>The type of the dataset.</p>
     */
    inline void SetDatasetType(const char* value) { m_datasetTypeHasBeenSet = true; m_datasetType.assign(value); }

    /**
     * <p>The type of the dataset.</p>
     */
    inline DatasetMetadata& WithDatasetType(const Aws::String& value) { SetDatasetType(value); return *this;}

    /**
     * <p>The type of the dataset.</p>
     */
    inline DatasetMetadata& WithDatasetType(Aws::String&& value) { SetDatasetType(std::move(value)); return *this;}

    /**
     * <p>The type of the dataset.</p>
     */
    inline DatasetMetadata& WithDatasetType(const char* value) { SetDatasetType(value); return *this;}


    /**
     * <p>The Unix timestamp for the date and time that the dataset was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The Unix timestamp for the date and time that the dataset was created. </p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The Unix timestamp for the date and time that the dataset was created. </p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The Unix timestamp for the date and time that the dataset was created. </p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The Unix timestamp for the date and time that the dataset was created. </p>
     */
    inline DatasetMetadata& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The Unix timestamp for the date and time that the dataset was created. </p>
     */
    inline DatasetMetadata& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The status for the dataset.</p>
     */
    inline const DatasetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status for the dataset.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status for the dataset.</p>
     */
    inline void SetStatus(const DatasetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status for the dataset.</p>
     */
    inline void SetStatus(DatasetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status for the dataset.</p>
     */
    inline DatasetMetadata& WithStatus(const DatasetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status for the dataset.</p>
     */
    inline DatasetMetadata& WithStatus(DatasetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status message for the dataset.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message for the dataset.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message for the dataset.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message for the dataset.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message for the dataset.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message for the dataset.</p>
     */
    inline DatasetMetadata& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message for the dataset.</p>
     */
    inline DatasetMetadata& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message for the dataset.</p>
     */
    inline DatasetMetadata& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_datasetType;
    bool m_datasetTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    DatasetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
