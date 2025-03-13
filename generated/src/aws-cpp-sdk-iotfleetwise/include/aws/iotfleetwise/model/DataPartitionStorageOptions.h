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
    AWS_IOTFLEETWISE_API DataPartitionStorageOptions() = default;
    AWS_IOTFLEETWISE_API DataPartitionStorageOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API DataPartitionStorageOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum storage size of the data stored in the data partition.</p> 
     * <p>Newer data overwrites older data when the partition reaches the maximum
     * size.</p> 
     */
    inline const StorageMaximumSize& GetMaximumSize() const { return m_maximumSize; }
    inline bool MaximumSizeHasBeenSet() const { return m_maximumSizeHasBeenSet; }
    template<typename MaximumSizeT = StorageMaximumSize>
    void SetMaximumSize(MaximumSizeT&& value) { m_maximumSizeHasBeenSet = true; m_maximumSize = std::forward<MaximumSizeT>(value); }
    template<typename MaximumSizeT = StorageMaximumSize>
    DataPartitionStorageOptions& WithMaximumSize(MaximumSizeT&& value) { SetMaximumSize(std::forward<MaximumSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The folder name for the data partition under the campaign storage folder.</p>
     */
    inline const Aws::String& GetStorageLocation() const { return m_storageLocation; }
    inline bool StorageLocationHasBeenSet() const { return m_storageLocationHasBeenSet; }
    template<typename StorageLocationT = Aws::String>
    void SetStorageLocation(StorageLocationT&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::forward<StorageLocationT>(value); }
    template<typename StorageLocationT = Aws::String>
    DataPartitionStorageOptions& WithStorageLocation(StorageLocationT&& value) { SetStorageLocation(std::forward<StorageLocationT>(value)); return *this;}
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
    inline const StorageMinimumTimeToLive& GetMinimumTimeToLive() const { return m_minimumTimeToLive; }
    inline bool MinimumTimeToLiveHasBeenSet() const { return m_minimumTimeToLiveHasBeenSet; }
    template<typename MinimumTimeToLiveT = StorageMinimumTimeToLive>
    void SetMinimumTimeToLive(MinimumTimeToLiveT&& value) { m_minimumTimeToLiveHasBeenSet = true; m_minimumTimeToLive = std::forward<MinimumTimeToLiveT>(value); }
    template<typename MinimumTimeToLiveT = StorageMinimumTimeToLive>
    DataPartitionStorageOptions& WithMinimumTimeToLive(MinimumTimeToLiveT&& value) { SetMinimumTimeToLive(std::forward<MinimumTimeToLiveT>(value)); return *this;}
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
