/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/FinSpaceDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace-data/model/DataViewDestinationTypeParams.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

  /**
   * Request for creating a data view.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/CreateDataViewRequest">AWS
   * API Reference</a></p>
   */
  class CreateDataViewRequest : public FinSpaceDataRequest
  {
  public:
    AWS_FINSPACEDATA_API CreateDataViewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataView"; }

    AWS_FINSPACEDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline CreateDataViewRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline CreateDataViewRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline CreateDataViewRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The unique Dataset identifier that is used to create a Dataview.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }

    /**
     * <p>The unique Dataset identifier that is used to create a Dataview.</p>
     */
    inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }

    /**
     * <p>The unique Dataset identifier that is used to create a Dataview.</p>
     */
    inline void SetDatasetId(const Aws::String& value) { m_datasetIdHasBeenSet = true; m_datasetId = value; }

    /**
     * <p>The unique Dataset identifier that is used to create a Dataview.</p>
     */
    inline void SetDatasetId(Aws::String&& value) { m_datasetIdHasBeenSet = true; m_datasetId = std::move(value); }

    /**
     * <p>The unique Dataset identifier that is used to create a Dataview.</p>
     */
    inline void SetDatasetId(const char* value) { m_datasetIdHasBeenSet = true; m_datasetId.assign(value); }

    /**
     * <p>The unique Dataset identifier that is used to create a Dataview.</p>
     */
    inline CreateDataViewRequest& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}

    /**
     * <p>The unique Dataset identifier that is used to create a Dataview.</p>
     */
    inline CreateDataViewRequest& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}

    /**
     * <p>The unique Dataset identifier that is used to create a Dataview.</p>
     */
    inline CreateDataViewRequest& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}


    /**
     * <p>Flag to indicate Dataview should be updated automatically.</p>
     */
    inline bool GetAutoUpdate() const{ return m_autoUpdate; }

    /**
     * <p>Flag to indicate Dataview should be updated automatically.</p>
     */
    inline bool AutoUpdateHasBeenSet() const { return m_autoUpdateHasBeenSet; }

    /**
     * <p>Flag to indicate Dataview should be updated automatically.</p>
     */
    inline void SetAutoUpdate(bool value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }

    /**
     * <p>Flag to indicate Dataview should be updated automatically.</p>
     */
    inline CreateDataViewRequest& WithAutoUpdate(bool value) { SetAutoUpdate(value); return *this;}


    /**
     * <p>Columns to be used for sorting the data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSortColumns() const{ return m_sortColumns; }

    /**
     * <p>Columns to be used for sorting the data.</p>
     */
    inline bool SortColumnsHasBeenSet() const { return m_sortColumnsHasBeenSet; }

    /**
     * <p>Columns to be used for sorting the data.</p>
     */
    inline void SetSortColumns(const Aws::Vector<Aws::String>& value) { m_sortColumnsHasBeenSet = true; m_sortColumns = value; }

    /**
     * <p>Columns to be used for sorting the data.</p>
     */
    inline void SetSortColumns(Aws::Vector<Aws::String>&& value) { m_sortColumnsHasBeenSet = true; m_sortColumns = std::move(value); }

    /**
     * <p>Columns to be used for sorting the data.</p>
     */
    inline CreateDataViewRequest& WithSortColumns(const Aws::Vector<Aws::String>& value) { SetSortColumns(value); return *this;}

    /**
     * <p>Columns to be used for sorting the data.</p>
     */
    inline CreateDataViewRequest& WithSortColumns(Aws::Vector<Aws::String>&& value) { SetSortColumns(std::move(value)); return *this;}

    /**
     * <p>Columns to be used for sorting the data.</p>
     */
    inline CreateDataViewRequest& AddSortColumns(const Aws::String& value) { m_sortColumnsHasBeenSet = true; m_sortColumns.push_back(value); return *this; }

    /**
     * <p>Columns to be used for sorting the data.</p>
     */
    inline CreateDataViewRequest& AddSortColumns(Aws::String&& value) { m_sortColumnsHasBeenSet = true; m_sortColumns.push_back(std::move(value)); return *this; }

    /**
     * <p>Columns to be used for sorting the data.</p>
     */
    inline CreateDataViewRequest& AddSortColumns(const char* value) { m_sortColumnsHasBeenSet = true; m_sortColumns.push_back(value); return *this; }


    /**
     * <p>Ordered set of column names used to partition data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionColumns() const{ return m_partitionColumns; }

    /**
     * <p>Ordered set of column names used to partition data.</p>
     */
    inline bool PartitionColumnsHasBeenSet() const { return m_partitionColumnsHasBeenSet; }

    /**
     * <p>Ordered set of column names used to partition data.</p>
     */
    inline void SetPartitionColumns(const Aws::Vector<Aws::String>& value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns = value; }

    /**
     * <p>Ordered set of column names used to partition data.</p>
     */
    inline void SetPartitionColumns(Aws::Vector<Aws::String>&& value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns = std::move(value); }

    /**
     * <p>Ordered set of column names used to partition data.</p>
     */
    inline CreateDataViewRequest& WithPartitionColumns(const Aws::Vector<Aws::String>& value) { SetPartitionColumns(value); return *this;}

    /**
     * <p>Ordered set of column names used to partition data.</p>
     */
    inline CreateDataViewRequest& WithPartitionColumns(Aws::Vector<Aws::String>&& value) { SetPartitionColumns(std::move(value)); return *this;}

    /**
     * <p>Ordered set of column names used to partition data.</p>
     */
    inline CreateDataViewRequest& AddPartitionColumns(const Aws::String& value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns.push_back(value); return *this; }

    /**
     * <p>Ordered set of column names used to partition data.</p>
     */
    inline CreateDataViewRequest& AddPartitionColumns(Aws::String&& value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns.push_back(std::move(value)); return *this; }

    /**
     * <p>Ordered set of column names used to partition data.</p>
     */
    inline CreateDataViewRequest& AddPartitionColumns(const char* value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns.push_back(value); return *this; }


    /**
     * <p>Beginning time to use for the Dataview. The value is determined as epoch time
     * in milliseconds. For example, the value for Monday, November 1, 2021 12:00:00 PM
     * UTC is specified as 1635768000000.</p>
     */
    inline long long GetAsOfTimestamp() const{ return m_asOfTimestamp; }

    /**
     * <p>Beginning time to use for the Dataview. The value is determined as epoch time
     * in milliseconds. For example, the value for Monday, November 1, 2021 12:00:00 PM
     * UTC is specified as 1635768000000.</p>
     */
    inline bool AsOfTimestampHasBeenSet() const { return m_asOfTimestampHasBeenSet; }

    /**
     * <p>Beginning time to use for the Dataview. The value is determined as epoch time
     * in milliseconds. For example, the value for Monday, November 1, 2021 12:00:00 PM
     * UTC is specified as 1635768000000.</p>
     */
    inline void SetAsOfTimestamp(long long value) { m_asOfTimestampHasBeenSet = true; m_asOfTimestamp = value; }

    /**
     * <p>Beginning time to use for the Dataview. The value is determined as epoch time
     * in milliseconds. For example, the value for Monday, November 1, 2021 12:00:00 PM
     * UTC is specified as 1635768000000.</p>
     */
    inline CreateDataViewRequest& WithAsOfTimestamp(long long value) { SetAsOfTimestamp(value); return *this;}


    /**
     * <p>Options that define the destination type for the Dataview.</p>
     */
    inline const DataViewDestinationTypeParams& GetDestinationTypeParams() const{ return m_destinationTypeParams; }

    /**
     * <p>Options that define the destination type for the Dataview.</p>
     */
    inline bool DestinationTypeParamsHasBeenSet() const { return m_destinationTypeParamsHasBeenSet; }

    /**
     * <p>Options that define the destination type for the Dataview.</p>
     */
    inline void SetDestinationTypeParams(const DataViewDestinationTypeParams& value) { m_destinationTypeParamsHasBeenSet = true; m_destinationTypeParams = value; }

    /**
     * <p>Options that define the destination type for the Dataview.</p>
     */
    inline void SetDestinationTypeParams(DataViewDestinationTypeParams&& value) { m_destinationTypeParamsHasBeenSet = true; m_destinationTypeParams = std::move(value); }

    /**
     * <p>Options that define the destination type for the Dataview.</p>
     */
    inline CreateDataViewRequest& WithDestinationTypeParams(const DataViewDestinationTypeParams& value) { SetDestinationTypeParams(value); return *this;}

    /**
     * <p>Options that define the destination type for the Dataview.</p>
     */
    inline CreateDataViewRequest& WithDestinationTypeParams(DataViewDestinationTypeParams&& value) { SetDestinationTypeParams(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_datasetId;
    bool m_datasetIdHasBeenSet = false;

    bool m_autoUpdate;
    bool m_autoUpdateHasBeenSet = false;

    Aws::Vector<Aws::String> m_sortColumns;
    bool m_sortColumnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_partitionColumns;
    bool m_partitionColumnsHasBeenSet = false;

    long long m_asOfTimestamp;
    bool m_asOfTimestampHasBeenSet = false;

    DataViewDestinationTypeParams m_destinationTypeParams;
    bool m_destinationTypeParamsHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
