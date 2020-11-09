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
  class AWS_IOTANALYTICS_API DatastoreSummary
  {
  public:
    DatastoreSummary();
    DatastoreSummary(Aws::Utils::Json::JsonView jsonValue);
    DatastoreSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data store.</p>
     */
    inline const Aws::String& GetDatastoreName() const{ return m_datastoreName; }

    /**
     * <p>The name of the data store.</p>
     */
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }

    /**
     * <p>The name of the data store.</p>
     */
    inline void SetDatastoreName(const Aws::String& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = value; }

    /**
     * <p>The name of the data store.</p>
     */
    inline void SetDatastoreName(Aws::String&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::move(value); }

    /**
     * <p>The name of the data store.</p>
     */
    inline void SetDatastoreName(const char* value) { m_datastoreNameHasBeenSet = true; m_datastoreName.assign(value); }

    /**
     * <p>The name of the data store.</p>
     */
    inline DatastoreSummary& WithDatastoreName(const Aws::String& value) { SetDatastoreName(value); return *this;}

    /**
     * <p>The name of the data store.</p>
     */
    inline DatastoreSummary& WithDatastoreName(Aws::String&& value) { SetDatastoreName(std::move(value)); return *this;}

    /**
     * <p>The name of the data store.</p>
     */
    inline DatastoreSummary& WithDatastoreName(const char* value) { SetDatastoreName(value); return *this;}


    /**
     * <p>Where data store data is stored.</p>
     */
    inline const DatastoreStorageSummary& GetDatastoreStorage() const{ return m_datastoreStorage; }

    /**
     * <p>Where data store data is stored.</p>
     */
    inline bool DatastoreStorageHasBeenSet() const { return m_datastoreStorageHasBeenSet; }

    /**
     * <p>Where data store data is stored.</p>
     */
    inline void SetDatastoreStorage(const DatastoreStorageSummary& value) { m_datastoreStorageHasBeenSet = true; m_datastoreStorage = value; }

    /**
     * <p>Where data store data is stored.</p>
     */
    inline void SetDatastoreStorage(DatastoreStorageSummary&& value) { m_datastoreStorageHasBeenSet = true; m_datastoreStorage = std::move(value); }

    /**
     * <p>Where data store data is stored.</p>
     */
    inline DatastoreSummary& WithDatastoreStorage(const DatastoreStorageSummary& value) { SetDatastoreStorage(value); return *this;}

    /**
     * <p>Where data store data is stored.</p>
     */
    inline DatastoreSummary& WithDatastoreStorage(DatastoreStorageSummary&& value) { SetDatastoreStorage(std::move(value)); return *this;}


    /**
     * <p>The status of the data store.</p>
     */
    inline const DatastoreStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the data store.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the data store.</p>
     */
    inline void SetStatus(const DatastoreStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the data store.</p>
     */
    inline void SetStatus(DatastoreStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the data store.</p>
     */
    inline DatastoreSummary& WithStatus(const DatastoreStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the data store.</p>
     */
    inline DatastoreSummary& WithStatus(DatastoreStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>When the data store was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the data store was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the data store was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the data store was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the data store was created.</p>
     */
    inline DatastoreSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the data store was created.</p>
     */
    inline DatastoreSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last time the data store was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The last time the data store was updated.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The last time the data store was updated.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The last time the data store was updated.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The last time the data store was updated.</p>
     */
    inline DatastoreSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The last time the data store was updated.</p>
     */
    inline DatastoreSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The last time when a new message arrived in the data store.</p> <p>AWS IoT
     * Analytics updates this value at most once per minute for one data store. Hence,
     * the <code>lastMessageArrivalTime</code> value is an approximation.</p> <p>This
     * feature only applies to messages that arrived in the data store after October
     * 23, 2020. </p>
     */
    inline const Aws::Utils::DateTime& GetLastMessageArrivalTime() const{ return m_lastMessageArrivalTime; }

    /**
     * <p>The last time when a new message arrived in the data store.</p> <p>AWS IoT
     * Analytics updates this value at most once per minute for one data store. Hence,
     * the <code>lastMessageArrivalTime</code> value is an approximation.</p> <p>This
     * feature only applies to messages that arrived in the data store after October
     * 23, 2020. </p>
     */
    inline bool LastMessageArrivalTimeHasBeenSet() const { return m_lastMessageArrivalTimeHasBeenSet; }

    /**
     * <p>The last time when a new message arrived in the data store.</p> <p>AWS IoT
     * Analytics updates this value at most once per minute for one data store. Hence,
     * the <code>lastMessageArrivalTime</code> value is an approximation.</p> <p>This
     * feature only applies to messages that arrived in the data store after October
     * 23, 2020. </p>
     */
    inline void SetLastMessageArrivalTime(const Aws::Utils::DateTime& value) { m_lastMessageArrivalTimeHasBeenSet = true; m_lastMessageArrivalTime = value; }

    /**
     * <p>The last time when a new message arrived in the data store.</p> <p>AWS IoT
     * Analytics updates this value at most once per minute for one data store. Hence,
     * the <code>lastMessageArrivalTime</code> value is an approximation.</p> <p>This
     * feature only applies to messages that arrived in the data store after October
     * 23, 2020. </p>
     */
    inline void SetLastMessageArrivalTime(Aws::Utils::DateTime&& value) { m_lastMessageArrivalTimeHasBeenSet = true; m_lastMessageArrivalTime = std::move(value); }

    /**
     * <p>The last time when a new message arrived in the data store.</p> <p>AWS IoT
     * Analytics updates this value at most once per minute for one data store. Hence,
     * the <code>lastMessageArrivalTime</code> value is an approximation.</p> <p>This
     * feature only applies to messages that arrived in the data store after October
     * 23, 2020. </p>
     */
    inline DatastoreSummary& WithLastMessageArrivalTime(const Aws::Utils::DateTime& value) { SetLastMessageArrivalTime(value); return *this;}

    /**
     * <p>The last time when a new message arrived in the data store.</p> <p>AWS IoT
     * Analytics updates this value at most once per minute for one data store. Hence,
     * the <code>lastMessageArrivalTime</code> value is an approximation.</p> <p>This
     * feature only applies to messages that arrived in the data store after October
     * 23, 2020. </p>
     */
    inline DatastoreSummary& WithLastMessageArrivalTime(Aws::Utils::DateTime&& value) { SetLastMessageArrivalTime(std::move(value)); return *this;}

  private:

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet;

    DatastoreStorageSummary m_datastoreStorage;
    bool m_datastoreStorageHasBeenSet;

    DatastoreStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet;

    Aws::Utils::DateTime m_lastMessageArrivalTime;
    bool m_lastMessageArrivalTimeHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
