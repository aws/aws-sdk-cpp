/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/StorageMaximumSize.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/StorageMinimumTimeToLive.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Size, time, and location options for the data partition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/DataPartitionStorageOptions">AWS
   * API Reference</a></p>
   */
  class DataPartitionStorageOptions
  {
  public:
    AWS_IOTFLEETWISE_API DataPartitionStorageOptions();
    AWS_IOTFLEETWISE_API DataPartitionStorageOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API DataPartitionStorageOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum storage size of the data stored in the data partition.</p> 
     * <p>Newer data overwrites older data when the partition reaches the maximum
     * size.</p> 
     */
    inline const StorageMaximumSize& GetMaximumSize() const{ return m_maximumSize; }
    inline bool MaximumSizeHasBeenSet() const { return m_maximumSizeHasBeenSet; }
    inline void SetMaximumSize(const StorageMaximumSize& value) { m_maximumSizeHasBeenSet = true; m_maximumSize = value; }
    inline void SetMaximumSize(StorageMaximumSize&& value) { m_maximumSizeHasBeenSet = true; m_maximumSize = std::move(value); }
    inline DataPartitionStorageOptions& WithMaximumSize(const StorageMaximumSize& value) { SetMaximumSize(value); return *this;}
    inline DataPartitionStorageOptions& WithMaximumSize(StorageMaximumSize&& value) { SetMaximumSize(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The folder name for the data partition under the campaign storage folder.</p>
     */
    inline const Aws::String& GetStorageLocation() const{ return m_storageLocation; }
    inline bool StorageLocationHasBeenSet() const { return m_storageLocationHasBeenSet; }
    inline void SetStorageLocation(const Aws::String& value) { m_storageLocationHasBeenSet = true; m_storageLocation = value; }
    inline void SetStorageLocation(Aws::String&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::move(value); }
    inline void SetStorageLocation(const char* value) { m_storageLocationHasBeenSet = true; m_storageLocation.assign(value); }
    inline DataPartitionStorageOptions& WithStorageLocation(const Aws::String& value) { SetStorageLocation(value); return *this;}
    inline DataPartitionStorageOptions& WithStorageLocation(Aws::String&& value) { SetStorageLocation(std::move(value)); return *this;}
    inline DataPartitionStorageOptions& WithStorageLocation(const char* value) { SetStorageLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that data in this partition will be kept on disk.</p> <ul>
     * <li> <p>After the designated amount of time passes, the data can be removed, but
     * it's not guaranteed to be removed.</p> </li> <li> <p>Before the time expires,
     * data in this partition can still be deleted if the partition reaches its
     * configured maximum size.</p> </li> <li> <p>Newer data will overwrite older data
     * when the partition reaches the maximum size.</p> </li> </ul>
     */
    inline const StorageMinimumTimeToLive& GetMinimumTimeToLive() const{ return m_minimumTimeToLive; }
    inline bool MinimumTimeToLiveHasBeenSet() const { return m_minimumTimeToLiveHasBeenSet; }
    inline void SetMinimumTimeToLive(const StorageMinimumTimeToLive& value) { m_minimumTimeToLiveHasBeenSet = true; m_minimumTimeToLive = value; }
    inline void SetMinimumTimeToLive(StorageMinimumTimeToLive&& value) { m_minimumTimeToLiveHasBeenSet = true; m_minimumTimeToLive = std::move(value); }
    inline DataPartitionStorageOptions& WithMinimumTimeToLive(const StorageMinimumTimeToLive& value) { SetMinimumTimeToLive(value); return *this;}
    inline DataPartitionStorageOptions& WithMinimumTimeToLive(StorageMinimumTimeToLive&& value) { SetMinimumTimeToLive(std::move(value)); return *this;}
    ///@}
  private:

    StorageMaximumSize m_maximumSize;
    bool m_maximumSizeHasBeenSet = false;

    Aws::String m_storageLocation;
    bool m_storageLocationHasBeenSet = false;

    StorageMinimumTimeToLive m_minimumTimeToLive;
    bool m_minimumTimeToLiveHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
