/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/DatastoreStorageSummary.h>
#include <aws/iotanalytics/model/DatastoreStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotanalytics/model/FileFormatType.h>
#include <aws/iotanalytics/model/DatastorePartitions.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>A summary of information about a data store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatastoreSummary">AWS
   * API Reference</a></p>
   */
  class DatastoreSummary
  {
  public:
    AWS_IOTANALYTICS_API DatastoreSummary() = default;
    AWS_IOTANALYTICS_API DatastoreSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatastoreSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data store.</p>
     */
    inline const Aws::String& GetDatastoreName() const { return m_datastoreName; }
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }
    template<typename DatastoreNameT = Aws::String>
    void SetDatastoreName(DatastoreNameT&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::forward<DatastoreNameT>(value); }
    template<typename DatastoreNameT = Aws::String>
    DatastoreSummary& WithDatastoreName(DatastoreNameT&& value) { SetDatastoreName(std::forward<DatastoreNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Where data in a data store is stored.</p>
     */
    inline const DatastoreStorageSummary& GetDatastoreStorage() const { return m_datastoreStorage; }
    inline bool DatastoreStorageHasBeenSet() const { return m_datastoreStorageHasBeenSet; }
    template<typename DatastoreStorageT = DatastoreStorageSummary>
    void SetDatastoreStorage(DatastoreStorageT&& value) { m_datastoreStorageHasBeenSet = true; m_datastoreStorage = std::forward<DatastoreStorageT>(value); }
    template<typename DatastoreStorageT = DatastoreStorageSummary>
    DatastoreSummary& WithDatastoreStorage(DatastoreStorageT&& value) { SetDatastoreStorage(std::forward<DatastoreStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the data store.</p>
     */
    inline DatastoreStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DatastoreStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DatastoreSummary& WithStatus(DatastoreStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the data store was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DatastoreSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the data store was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    DatastoreSummary& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time when a new message arrived in the data store.</p> <p>IoT
     * Analytics updates this value at most once per minute for Amazon Simple Storage
     * Service one data store. Hence, the <code>lastMessageArrivalTime</code> value is
     * an approximation.</p> <p>This feature only applies to messages that arrived in
     * the data store after October 23, 2020. </p>
     */
    inline const Aws::Utils::DateTime& GetLastMessageArrivalTime() const { return m_lastMessageArrivalTime; }
    inline bool LastMessageArrivalTimeHasBeenSet() const { return m_lastMessageArrivalTimeHasBeenSet; }
    template<typename LastMessageArrivalTimeT = Aws::Utils::DateTime>
    void SetLastMessageArrivalTime(LastMessageArrivalTimeT&& value) { m_lastMessageArrivalTimeHasBeenSet = true; m_lastMessageArrivalTime = std::forward<LastMessageArrivalTimeT>(value); }
    template<typename LastMessageArrivalTimeT = Aws::Utils::DateTime>
    DatastoreSummary& WithLastMessageArrivalTime(LastMessageArrivalTimeT&& value) { SetLastMessageArrivalTime(std::forward<LastMessageArrivalTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file format of the data in the data store.</p>
     */
    inline FileFormatType GetFileFormatType() const { return m_fileFormatType; }
    inline bool FileFormatTypeHasBeenSet() const { return m_fileFormatTypeHasBeenSet; }
    inline void SetFileFormatType(FileFormatType value) { m_fileFormatTypeHasBeenSet = true; m_fileFormatType = value; }
    inline DatastoreSummary& WithFileFormatType(FileFormatType value) { SetFileFormatType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains information about the partition dimensions in a data store. </p>
     */
    inline const DatastorePartitions& GetDatastorePartitions() const { return m_datastorePartitions; }
    inline bool DatastorePartitionsHasBeenSet() const { return m_datastorePartitionsHasBeenSet; }
    template<typename DatastorePartitionsT = DatastorePartitions>
    void SetDatastorePartitions(DatastorePartitionsT&& value) { m_datastorePartitionsHasBeenSet = true; m_datastorePartitions = std::forward<DatastorePartitionsT>(value); }
    template<typename DatastorePartitionsT = DatastorePartitions>
    DatastoreSummary& WithDatastorePartitions(DatastorePartitionsT&& value) { SetDatastorePartitions(std::forward<DatastorePartitionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet = false;

    DatastoreStorageSummary m_datastoreStorage;
    bool m_datastoreStorageHasBeenSet = false;

    DatastoreStatus m_status{DatastoreStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastMessageArrivalTime{};
    bool m_lastMessageArrivalTimeHasBeenSet = false;

    FileFormatType m_fileFormatType{FileFormatType::NOT_SET};
    bool m_fileFormatTypeHasBeenSet = false;

    DatastorePartitions m_datastorePartitions;
    bool m_datastorePartitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
