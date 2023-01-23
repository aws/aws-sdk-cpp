/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/model/DataViewErrorInfo.h>
#include <aws/finspace-data/model/DataViewDestinationTypeParams.h>
#include <aws/finspace-data/model/DataViewStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace FinSpaceData
{
namespace Model
{
  /**
   * Response from retrieving a dataview, which includes details on the target
   * database and table name<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetDataViewResponse">AWS
   * API Reference</a></p>
   */
  class GetDataViewResult
  {
  public:
    AWS_FINSPACEDATA_API GetDataViewResult();
    AWS_FINSPACEDATA_API GetDataViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API GetDataViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Flag to indicate Dataview should be updated automatically.</p>
     */
    inline bool GetAutoUpdate() const{ return m_autoUpdate; }

    /**
     * <p>Flag to indicate Dataview should be updated automatically.</p>
     */
    inline void SetAutoUpdate(bool value) { m_autoUpdate = value; }

    /**
     * <p>Flag to indicate Dataview should be updated automatically.</p>
     */
    inline GetDataViewResult& WithAutoUpdate(bool value) { SetAutoUpdate(value); return *this;}


    /**
     * <p>Ordered set of column names used to partition data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionColumns() const{ return m_partitionColumns; }

    /**
     * <p>Ordered set of column names used to partition data.</p>
     */
    inline void SetPartitionColumns(const Aws::Vector<Aws::String>& value) { m_partitionColumns = value; }

    /**
     * <p>Ordered set of column names used to partition data.</p>
     */
    inline void SetPartitionColumns(Aws::Vector<Aws::String>&& value) { m_partitionColumns = std::move(value); }

    /**
     * <p>Ordered set of column names used to partition data.</p>
     */
    inline GetDataViewResult& WithPartitionColumns(const Aws::Vector<Aws::String>& value) { SetPartitionColumns(value); return *this;}

    /**
     * <p>Ordered set of column names used to partition data.</p>
     */
    inline GetDataViewResult& WithPartitionColumns(Aws::Vector<Aws::String>&& value) { SetPartitionColumns(std::move(value)); return *this;}

    /**
     * <p>Ordered set of column names used to partition data.</p>
     */
    inline GetDataViewResult& AddPartitionColumns(const Aws::String& value) { m_partitionColumns.push_back(value); return *this; }

    /**
     * <p>Ordered set of column names used to partition data.</p>
     */
    inline GetDataViewResult& AddPartitionColumns(Aws::String&& value) { m_partitionColumns.push_back(std::move(value)); return *this; }

    /**
     * <p>Ordered set of column names used to partition data.</p>
     */
    inline GetDataViewResult& AddPartitionColumns(const char* value) { m_partitionColumns.push_back(value); return *this; }


    /**
     * <p>The unique identifier for the Dataset used in the Dataview.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }

    /**
     * <p>The unique identifier for the Dataset used in the Dataview.</p>
     */
    inline void SetDatasetId(const Aws::String& value) { m_datasetId = value; }

    /**
     * <p>The unique identifier for the Dataset used in the Dataview.</p>
     */
    inline void SetDatasetId(Aws::String&& value) { m_datasetId = std::move(value); }

    /**
     * <p>The unique identifier for the Dataset used in the Dataview.</p>
     */
    inline void SetDatasetId(const char* value) { m_datasetId.assign(value); }

    /**
     * <p>The unique identifier for the Dataset used in the Dataview.</p>
     */
    inline GetDataViewResult& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}

    /**
     * <p>The unique identifier for the Dataset used in the Dataview.</p>
     */
    inline GetDataViewResult& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Dataset used in the Dataview.</p>
     */
    inline GetDataViewResult& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}


    /**
     * <p>Time range to use for the Dataview. The value is determined as epoch time in
     * milliseconds. For example, the value for Monday, November 1, 2021 12:00:00 PM
     * UTC is specified as 1635768000000.</p>
     */
    inline long long GetAsOfTimestamp() const{ return m_asOfTimestamp; }

    /**
     * <p>Time range to use for the Dataview. The value is determined as epoch time in
     * milliseconds. For example, the value for Monday, November 1, 2021 12:00:00 PM
     * UTC is specified as 1635768000000.</p>
     */
    inline void SetAsOfTimestamp(long long value) { m_asOfTimestamp = value; }

    /**
     * <p>Time range to use for the Dataview. The value is determined as epoch time in
     * milliseconds. For example, the value for Monday, November 1, 2021 12:00:00 PM
     * UTC is specified as 1635768000000.</p>
     */
    inline GetDataViewResult& WithAsOfTimestamp(long long value) { SetAsOfTimestamp(value); return *this;}


    /**
     * <p>Information about an error that occurred for the Dataview.</p>
     */
    inline const DataViewErrorInfo& GetErrorInfo() const{ return m_errorInfo; }

    /**
     * <p>Information about an error that occurred for the Dataview.</p>
     */
    inline void SetErrorInfo(const DataViewErrorInfo& value) { m_errorInfo = value; }

    /**
     * <p>Information about an error that occurred for the Dataview.</p>
     */
    inline void SetErrorInfo(DataViewErrorInfo&& value) { m_errorInfo = std::move(value); }

    /**
     * <p>Information about an error that occurred for the Dataview.</p>
     */
    inline GetDataViewResult& WithErrorInfo(const DataViewErrorInfo& value) { SetErrorInfo(value); return *this;}

    /**
     * <p>Information about an error that occurred for the Dataview.</p>
     */
    inline GetDataViewResult& WithErrorInfo(DataViewErrorInfo&& value) { SetErrorInfo(std::move(value)); return *this;}


    /**
     * <p>The last time that a Dataview was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last time that a Dataview was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTime = value; }

    /**
     * <p>The last time that a Dataview was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetDataViewResult& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}


    /**
     * <p>The timestamp at which the Dataview was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline long long GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The timestamp at which the Dataview was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreateTime(long long value) { m_createTime = value; }

    /**
     * <p>The timestamp at which the Dataview was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetDataViewResult& WithCreateTime(long long value) { SetCreateTime(value); return *this;}


    /**
     * <p>Columns to be used for sorting the data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSortColumns() const{ return m_sortColumns; }

    /**
     * <p>Columns to be used for sorting the data.</p>
     */
    inline void SetSortColumns(const Aws::Vector<Aws::String>& value) { m_sortColumns = value; }

    /**
     * <p>Columns to be used for sorting the data.</p>
     */
    inline void SetSortColumns(Aws::Vector<Aws::String>&& value) { m_sortColumns = std::move(value); }

    /**
     * <p>Columns to be used for sorting the data.</p>
     */
    inline GetDataViewResult& WithSortColumns(const Aws::Vector<Aws::String>& value) { SetSortColumns(value); return *this;}

    /**
     * <p>Columns to be used for sorting the data.</p>
     */
    inline GetDataViewResult& WithSortColumns(Aws::Vector<Aws::String>&& value) { SetSortColumns(std::move(value)); return *this;}

    /**
     * <p>Columns to be used for sorting the data.</p>
     */
    inline GetDataViewResult& AddSortColumns(const Aws::String& value) { m_sortColumns.push_back(value); return *this; }

    /**
     * <p>Columns to be used for sorting the data.</p>
     */
    inline GetDataViewResult& AddSortColumns(Aws::String&& value) { m_sortColumns.push_back(std::move(value)); return *this; }

    /**
     * <p>Columns to be used for sorting the data.</p>
     */
    inline GetDataViewResult& AddSortColumns(const char* value) { m_sortColumns.push_back(value); return *this; }


    /**
     * <p>The unique identifier for the Dataview.</p>
     */
    inline const Aws::String& GetDataViewId() const{ return m_dataViewId; }

    /**
     * <p>The unique identifier for the Dataview.</p>
     */
    inline void SetDataViewId(const Aws::String& value) { m_dataViewId = value; }

    /**
     * <p>The unique identifier for the Dataview.</p>
     */
    inline void SetDataViewId(Aws::String&& value) { m_dataViewId = std::move(value); }

    /**
     * <p>The unique identifier for the Dataview.</p>
     */
    inline void SetDataViewId(const char* value) { m_dataViewId.assign(value); }

    /**
     * <p>The unique identifier for the Dataview.</p>
     */
    inline GetDataViewResult& WithDataViewId(const Aws::String& value) { SetDataViewId(value); return *this;}

    /**
     * <p>The unique identifier for the Dataview.</p>
     */
    inline GetDataViewResult& WithDataViewId(Aws::String&& value) { SetDataViewId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Dataview.</p>
     */
    inline GetDataViewResult& WithDataViewId(const char* value) { SetDataViewId(value); return *this;}


    /**
     * <p>The ARN identifier of the Dataview.</p>
     */
    inline const Aws::String& GetDataViewArn() const{ return m_dataViewArn; }

    /**
     * <p>The ARN identifier of the Dataview.</p>
     */
    inline void SetDataViewArn(const Aws::String& value) { m_dataViewArn = value; }

    /**
     * <p>The ARN identifier of the Dataview.</p>
     */
    inline void SetDataViewArn(Aws::String&& value) { m_dataViewArn = std::move(value); }

    /**
     * <p>The ARN identifier of the Dataview.</p>
     */
    inline void SetDataViewArn(const char* value) { m_dataViewArn.assign(value); }

    /**
     * <p>The ARN identifier of the Dataview.</p>
     */
    inline GetDataViewResult& WithDataViewArn(const Aws::String& value) { SetDataViewArn(value); return *this;}

    /**
     * <p>The ARN identifier of the Dataview.</p>
     */
    inline GetDataViewResult& WithDataViewArn(Aws::String&& value) { SetDataViewArn(std::move(value)); return *this;}

    /**
     * <p>The ARN identifier of the Dataview.</p>
     */
    inline GetDataViewResult& WithDataViewArn(const char* value) { SetDataViewArn(value); return *this;}


    /**
     * <p>Options that define the destination type for the Dataview.</p>
     */
    inline const DataViewDestinationTypeParams& GetDestinationTypeParams() const{ return m_destinationTypeParams; }

    /**
     * <p>Options that define the destination type for the Dataview.</p>
     */
    inline void SetDestinationTypeParams(const DataViewDestinationTypeParams& value) { m_destinationTypeParams = value; }

    /**
     * <p>Options that define the destination type for the Dataview.</p>
     */
    inline void SetDestinationTypeParams(DataViewDestinationTypeParams&& value) { m_destinationTypeParams = std::move(value); }

    /**
     * <p>Options that define the destination type for the Dataview.</p>
     */
    inline GetDataViewResult& WithDestinationTypeParams(const DataViewDestinationTypeParams& value) { SetDestinationTypeParams(value); return *this;}

    /**
     * <p>Options that define the destination type for the Dataview.</p>
     */
    inline GetDataViewResult& WithDestinationTypeParams(DataViewDestinationTypeParams&& value) { SetDestinationTypeParams(std::move(value)); return *this;}


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
    inline void SetStatus(const DataViewStatus& value) { m_status = value; }

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
    inline void SetStatus(DataViewStatus&& value) { m_status = std::move(value); }

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
    inline GetDataViewResult& WithStatus(const DataViewStatus& value) { SetStatus(value); return *this;}

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
    inline GetDataViewResult& WithStatus(DataViewStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    bool m_autoUpdate;

    Aws::Vector<Aws::String> m_partitionColumns;

    Aws::String m_datasetId;

    long long m_asOfTimestamp;

    DataViewErrorInfo m_errorInfo;

    long long m_lastModifiedTime;

    long long m_createTime;

    Aws::Vector<Aws::String> m_sortColumns;

    Aws::String m_dataViewId;

    Aws::String m_dataViewArn;

    DataViewDestinationTypeParams m_destinationTypeParams;

    DataViewStatus m_status;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
