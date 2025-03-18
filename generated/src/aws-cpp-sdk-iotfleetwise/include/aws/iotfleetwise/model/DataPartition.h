/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/DataPartitionStorageOptions.h>
#include <aws/iotfleetwise/model/DataPartitionUploadOptions.h>
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
   * <p>The configuration for signal data storage and upload options. You can only
   * specify these options when the campaign's spooling mode is
   * <code>TO_DISK</code>.</p>  <p>Access to certain Amazon Web Services
   * IoT FleetWise features is currently gated. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/fleetwise-regions.html">Amazon
   * Web Services Region and feature availability</a> in the <i>Amazon Web Services
   * IoT FleetWise Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/DataPartition">AWS
   * API Reference</a></p>
   */
  class DataPartition
  {
  public:
    AWS_IOTFLEETWISE_API DataPartition() = default;
    AWS_IOTFLEETWISE_API DataPartition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API DataPartition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the data partition. The data partition ID must be unique within a
     * campaign. You can establish a data partition as the default partition for a
     * campaign by using <code>default</code> as the ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DataPartition& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage options for a data partition.</p>
     */
    inline const DataPartitionStorageOptions& GetStorageOptions() const { return m_storageOptions; }
    inline bool StorageOptionsHasBeenSet() const { return m_storageOptionsHasBeenSet; }
    template<typename StorageOptionsT = DataPartitionStorageOptions>
    void SetStorageOptions(StorageOptionsT&& value) { m_storageOptionsHasBeenSet = true; m_storageOptions = std::forward<StorageOptionsT>(value); }
    template<typename StorageOptionsT = DataPartitionStorageOptions>
    DataPartition& WithStorageOptions(StorageOptionsT&& value) { SetStorageOptions(std::forward<StorageOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload options for the data partition.</p>
     */
    inline const DataPartitionUploadOptions& GetUploadOptions() const { return m_uploadOptions; }
    inline bool UploadOptionsHasBeenSet() const { return m_uploadOptionsHasBeenSet; }
    template<typename UploadOptionsT = DataPartitionUploadOptions>
    void SetUploadOptions(UploadOptionsT&& value) { m_uploadOptionsHasBeenSet = true; m_uploadOptions = std::forward<UploadOptionsT>(value); }
    template<typename UploadOptionsT = DataPartitionUploadOptions>
    DataPartition& WithUploadOptions(UploadOptionsT&& value) { SetUploadOptions(std::forward<UploadOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    DataPartitionStorageOptions m_storageOptions;
    bool m_storageOptionsHasBeenSet = false;

    DataPartitionUploadOptions m_uploadOptions;
    bool m_uploadOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
