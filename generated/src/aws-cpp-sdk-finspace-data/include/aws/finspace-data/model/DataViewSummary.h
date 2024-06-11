﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace-data/model/DataViewStatus.h>
#include <aws/finspace-data/model/DataViewErrorInfo.h>
#include <aws/finspace-data/model/DataViewDestinationTypeParams.h>
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
namespace FinSpaceData
{
namespace Model
{

  /**
   * <p>Structure for the summary of a Dataview.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/DataViewSummary">AWS
   * API Reference</a></p>
   */
  class DataViewSummary
  {
  public:
    AWS_FINSPACEDATA_API DataViewSummary();
    AWS_FINSPACEDATA_API DataViewSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API DataViewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the Dataview.</p>
     */
    inline const Aws::String& GetDataViewId() const{ return m_dataViewId; }
    inline bool DataViewIdHasBeenSet() const { return m_dataViewIdHasBeenSet; }
    inline void SetDataViewId(const Aws::String& value) { m_dataViewIdHasBeenSet = true; m_dataViewId = value; }
    inline void SetDataViewId(Aws::String&& value) { m_dataViewIdHasBeenSet = true; m_dataViewId = std::move(value); }
    inline void SetDataViewId(const char* value) { m_dataViewIdHasBeenSet = true; m_dataViewId.assign(value); }
    inline DataViewSummary& WithDataViewId(const Aws::String& value) { SetDataViewId(value); return *this;}
    inline DataViewSummary& WithDataViewId(Aws::String&& value) { SetDataViewId(std::move(value)); return *this;}
    inline DataViewSummary& WithDataViewId(const char* value) { SetDataViewId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN identifier of the Dataview.</p>
     */
    inline const Aws::String& GetDataViewArn() const{ return m_dataViewArn; }
    inline bool DataViewArnHasBeenSet() const { return m_dataViewArnHasBeenSet; }
    inline void SetDataViewArn(const Aws::String& value) { m_dataViewArnHasBeenSet = true; m_dataViewArn = value; }
    inline void SetDataViewArn(Aws::String&& value) { m_dataViewArnHasBeenSet = true; m_dataViewArn = std::move(value); }
    inline void SetDataViewArn(const char* value) { m_dataViewArnHasBeenSet = true; m_dataViewArn.assign(value); }
    inline DataViewSummary& WithDataViewArn(const Aws::String& value) { SetDataViewArn(value); return *this;}
    inline DataViewSummary& WithDataViewArn(Aws::String&& value) { SetDataViewArn(std::move(value)); return *this;}
    inline DataViewSummary& WithDataViewArn(const char* value) { SetDataViewArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Th unique identifier for the Dataview Dataset.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }
    inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }
    inline void SetDatasetId(const Aws::String& value) { m_datasetIdHasBeenSet = true; m_datasetId = value; }
    inline void SetDatasetId(Aws::String&& value) { m_datasetIdHasBeenSet = true; m_datasetId = std::move(value); }
    inline void SetDatasetId(const char* value) { m_datasetIdHasBeenSet = true; m_datasetId.assign(value); }
    inline DataViewSummary& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}
    inline DataViewSummary& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}
    inline DataViewSummary& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time range to use for the Dataview. The value is determined as epoch time in
     * milliseconds. For example, the value for Monday, November 1, 2021 12:00:00 PM
     * UTC is specified as 1635768000000.</p>
     */
    inline long long GetAsOfTimestamp() const{ return m_asOfTimestamp; }
    inline bool AsOfTimestampHasBeenSet() const { return m_asOfTimestampHasBeenSet; }
    inline void SetAsOfTimestamp(long long value) { m_asOfTimestampHasBeenSet = true; m_asOfTimestamp = value; }
    inline DataViewSummary& WithAsOfTimestamp(long long value) { SetAsOfTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Ordered set of column names used to partition data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionColumns() const{ return m_partitionColumns; }
    inline bool PartitionColumnsHasBeenSet() const { return m_partitionColumnsHasBeenSet; }
    inline void SetPartitionColumns(const Aws::Vector<Aws::String>& value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns = value; }
    inline void SetPartitionColumns(Aws::Vector<Aws::String>&& value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns = std::move(value); }
    inline DataViewSummary& WithPartitionColumns(const Aws::Vector<Aws::String>& value) { SetPartitionColumns(value); return *this;}
    inline DataViewSummary& WithPartitionColumns(Aws::Vector<Aws::String>&& value) { SetPartitionColumns(std::move(value)); return *this;}
    inline DataViewSummary& AddPartitionColumns(const Aws::String& value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns.push_back(value); return *this; }
    inline DataViewSummary& AddPartitionColumns(Aws::String&& value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns.push_back(std::move(value)); return *this; }
    inline DataViewSummary& AddPartitionColumns(const char* value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Columns to be used for sorting the data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSortColumns() const{ return m_sortColumns; }
    inline bool SortColumnsHasBeenSet() const { return m_sortColumnsHasBeenSet; }
    inline void SetSortColumns(const Aws::Vector<Aws::String>& value) { m_sortColumnsHasBeenSet = true; m_sortColumns = value; }
    inline void SetSortColumns(Aws::Vector<Aws::String>&& value) { m_sortColumnsHasBeenSet = true; m_sortColumns = std::move(value); }
    inline DataViewSummary& WithSortColumns(const Aws::Vector<Aws::String>& value) { SetSortColumns(value); return *this;}
    inline DataViewSummary& WithSortColumns(Aws::Vector<Aws::String>&& value) { SetSortColumns(std::move(value)); return *this;}
    inline DataViewSummary& AddSortColumns(const Aws::String& value) { m_sortColumnsHasBeenSet = true; m_sortColumns.push_back(value); return *this; }
    inline DataViewSummary& AddSortColumns(Aws::String&& value) { m_sortColumnsHasBeenSet = true; m_sortColumns.push_back(std::move(value)); return *this; }
    inline DataViewSummary& AddSortColumns(const char* value) { m_sortColumnsHasBeenSet = true; m_sortColumns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of a Dataview creation.</p> <ul> <li> <p> <code>RUNNING</code> –
     * Dataview creation is running.</p> </li> <li> <p> <code>STARTING</code> –
     * Dataview creation is starting.</p> </li> <li> <p> <code>FAILED</code> – Dataview
     * creation has failed.</p> </li> <li> <p> <code>CANCELLED</code> – Dataview
     * creation has been cancelled.</p> </li> <li> <p> <code>TIMEOUT</code> – Dataview
     * creation has timed out.</p> </li> <li> <p> <code>SUCCESS</code> – Dataview
     * creation has succeeded.</p> </li> <li> <p> <code>PENDING</code> – Dataview
     * creation is pending.</p> </li> <li> <p> <code>FAILED_CLEANUP_FAILED</code> –
     * Dataview creation failed and resource cleanup failed.</p> </li> </ul>
     */
    inline const DataViewStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DataViewStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DataViewStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DataViewSummary& WithStatus(const DataViewStatus& value) { SetStatus(value); return *this;}
    inline DataViewSummary& WithStatus(DataViewStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure with error messages.</p>
     */
    inline const DataViewErrorInfo& GetErrorInfo() const{ return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    inline void SetErrorInfo(const DataViewErrorInfo& value) { m_errorInfoHasBeenSet = true; m_errorInfo = value; }
    inline void SetErrorInfo(DataViewErrorInfo&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::move(value); }
    inline DataViewSummary& WithErrorInfo(const DataViewErrorInfo& value) { SetErrorInfo(value); return *this;}
    inline DataViewSummary& WithErrorInfo(DataViewErrorInfo&& value) { SetErrorInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Dataview destination.</p>
     */
    inline const DataViewDestinationTypeParams& GetDestinationTypeProperties() const{ return m_destinationTypeProperties; }
    inline bool DestinationTypePropertiesHasBeenSet() const { return m_destinationTypePropertiesHasBeenSet; }
    inline void SetDestinationTypeProperties(const DataViewDestinationTypeParams& value) { m_destinationTypePropertiesHasBeenSet = true; m_destinationTypeProperties = value; }
    inline void SetDestinationTypeProperties(DataViewDestinationTypeParams&& value) { m_destinationTypePropertiesHasBeenSet = true; m_destinationTypeProperties = std::move(value); }
    inline DataViewSummary& WithDestinationTypeProperties(const DataViewDestinationTypeParams& value) { SetDestinationTypeProperties(value); return *this;}
    inline DataViewSummary& WithDestinationTypeProperties(DataViewDestinationTypeParams&& value) { SetDestinationTypeProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The flag to indicate Dataview should be updated automatically.</p>
     */
    inline bool GetAutoUpdate() const{ return m_autoUpdate; }
    inline bool AutoUpdateHasBeenSet() const { return m_autoUpdateHasBeenSet; }
    inline void SetAutoUpdate(bool value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }
    inline DataViewSummary& WithAutoUpdate(bool value) { SetAutoUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the Dataview was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline long long GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(long long value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline DataViewSummary& WithCreateTime(long long value) { SetCreateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that a Dataview was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline DataViewSummary& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}
  private:

    Aws::String m_dataViewId;
    bool m_dataViewIdHasBeenSet = false;

    Aws::String m_dataViewArn;
    bool m_dataViewArnHasBeenSet = false;

    Aws::String m_datasetId;
    bool m_datasetIdHasBeenSet = false;

    long long m_asOfTimestamp;
    bool m_asOfTimestampHasBeenSet = false;

    Aws::Vector<Aws::String> m_partitionColumns;
    bool m_partitionColumnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_sortColumns;
    bool m_sortColumnsHasBeenSet = false;

    DataViewStatus m_status;
    bool m_statusHasBeenSet = false;

    DataViewErrorInfo m_errorInfo;
    bool m_errorInfoHasBeenSet = false;

    DataViewDestinationTypeParams m_destinationTypeProperties;
    bool m_destinationTypePropertiesHasBeenSet = false;

    bool m_autoUpdate;
    bool m_autoUpdateHasBeenSet = false;

    long long m_createTime;
    bool m_createTimeHasBeenSet = false;

    long long m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
