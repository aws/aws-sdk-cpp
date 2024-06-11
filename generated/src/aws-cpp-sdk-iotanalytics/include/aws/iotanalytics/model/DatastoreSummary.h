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
    AWS_IOTANALYTICS_API DatastoreSummary();
    AWS_IOTANALYTICS_API DatastoreSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatastoreSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data store.</p>
     */
    inline const Aws::String& GetDatastoreName() const{ return m_datastoreName; }
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }
    inline void SetDatastoreName(const Aws::String& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = value; }
    inline void SetDatastoreName(Aws::String&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::move(value); }
    inline void SetDatastoreName(const char* value) { m_datastoreNameHasBeenSet = true; m_datastoreName.assign(value); }
    inline DatastoreSummary& WithDatastoreName(const Aws::String& value) { SetDatastoreName(value); return *this;}
    inline DatastoreSummary& WithDatastoreName(Aws::String&& value) { SetDatastoreName(std::move(value)); return *this;}
    inline DatastoreSummary& WithDatastoreName(const char* value) { SetDatastoreName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Where data in a data store is stored.</p>
     */
    inline const DatastoreStorageSummary& GetDatastoreStorage() const{ return m_datastoreStorage; }
    inline bool DatastoreStorageHasBeenSet() const { return m_datastoreStorageHasBeenSet; }
    inline void SetDatastoreStorage(const DatastoreStorageSummary& value) { m_datastoreStorageHasBeenSet = true; m_datastoreStorage = value; }
    inline void SetDatastoreStorage(DatastoreStorageSummary&& value) { m_datastoreStorageHasBeenSet = true; m_datastoreStorage = std::move(value); }
    inline DatastoreSummary& WithDatastoreStorage(const DatastoreStorageSummary& value) { SetDatastoreStorage(value); return *this;}
    inline DatastoreSummary& WithDatastoreStorage(DatastoreStorageSummary&& value) { SetDatastoreStorage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the data store.</p>
     */
    inline const DatastoreStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DatastoreStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DatastoreStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DatastoreSummary& WithStatus(const DatastoreStatus& value) { SetStatus(value); return *this;}
    inline DatastoreSummary& WithStatus(DatastoreStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the data store was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline DatastoreSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DatastoreSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the data store was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline DatastoreSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline DatastoreSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time when a new message arrived in the data store.</p> <p>IoT
     * Analytics updates this value at most once per minute for Amazon Simple Storage
     * Service one data store. Hence, the <code>lastMessageArrivalTime</code> value is
     * an approximation.</p> <p>This feature only applies to messages that arrived in
     * the data store after October 23, 2020. </p>
     */
    inline const Aws::Utils::DateTime& GetLastMessageArrivalTime() const{ return m_lastMessageArrivalTime; }
    inline bool LastMessageArrivalTimeHasBeenSet() const { return m_lastMessageArrivalTimeHasBeenSet; }
    inline void SetLastMessageArrivalTime(const Aws::Utils::DateTime& value) { m_lastMessageArrivalTimeHasBeenSet = true; m_lastMessageArrivalTime = value; }
    inline void SetLastMessageArrivalTime(Aws::Utils::DateTime&& value) { m_lastMessageArrivalTimeHasBeenSet = true; m_lastMessageArrivalTime = std::move(value); }
    inline DatastoreSummary& WithLastMessageArrivalTime(const Aws::Utils::DateTime& value) { SetLastMessageArrivalTime(value); return *this;}
    inline DatastoreSummary& WithLastMessageArrivalTime(Aws::Utils::DateTime&& value) { SetLastMessageArrivalTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file format of the data in the data store.</p>
     */
    inline const FileFormatType& GetFileFormatType() const{ return m_fileFormatType; }
    inline bool FileFormatTypeHasBeenSet() const { return m_fileFormatTypeHasBeenSet; }
    inline void SetFileFormatType(const FileFormatType& value) { m_fileFormatTypeHasBeenSet = true; m_fileFormatType = value; }
    inline void SetFileFormatType(FileFormatType&& value) { m_fileFormatTypeHasBeenSet = true; m_fileFormatType = std::move(value); }
    inline DatastoreSummary& WithFileFormatType(const FileFormatType& value) { SetFileFormatType(value); return *this;}
    inline DatastoreSummary& WithFileFormatType(FileFormatType&& value) { SetFileFormatType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains information about the partition dimensions in a data store. </p>
     */
    inline const DatastorePartitions& GetDatastorePartitions() const{ return m_datastorePartitions; }
    inline bool DatastorePartitionsHasBeenSet() const { return m_datastorePartitionsHasBeenSet; }
    inline void SetDatastorePartitions(const DatastorePartitions& value) { m_datastorePartitionsHasBeenSet = true; m_datastorePartitions = value; }
    inline void SetDatastorePartitions(DatastorePartitions&& value) { m_datastorePartitionsHasBeenSet = true; m_datastorePartitions = std::move(value); }
    inline DatastoreSummary& WithDatastorePartitions(const DatastorePartitions& value) { SetDatastorePartitions(value); return *this;}
    inline DatastoreSummary& WithDatastorePartitions(DatastorePartitions&& value) { SetDatastorePartitions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet = false;

    DatastoreStorageSummary m_datastoreStorage;
    bool m_datastoreStorageHasBeenSet = false;

    DatastoreStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastMessageArrivalTime;
    bool m_lastMessageArrivalTimeHasBeenSet = false;

    FileFormatType m_fileFormatType;
    bool m_fileFormatTypeHasBeenSet = false;

    DatastorePartitions m_datastorePartitions;
    bool m_datastorePartitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
