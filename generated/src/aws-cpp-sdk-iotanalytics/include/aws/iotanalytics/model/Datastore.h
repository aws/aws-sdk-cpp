/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/DatastoreStorage.h>
#include <aws/iotanalytics/model/DatastoreStatus.h>
#include <aws/iotanalytics/model/RetentionPeriod.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotanalytics/model/FileFormatConfiguration.h>
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
   * <p>Information about a data store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/Datastore">AWS
   * API Reference</a></p>
   */
  class Datastore
  {
  public:
    AWS_IOTANALYTICS_API Datastore() = default;
    AWS_IOTANALYTICS_API Datastore(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Datastore& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data store.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Datastore& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Where data in a data store is stored.. You can choose
     * <code>serviceManagedS3</code> storage, <code>customerManagedS3</code> storage,
     * or <code>iotSiteWiseMultiLayerStorage</code> storage. The default is
     * <code>serviceManagedS3</code>. You can't change the choice of Amazon S3 storage
     * after your data store is created. </p>
     */
    inline const DatastoreStorage& GetStorage() const { return m_storage; }
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
    template<typename StorageT = DatastoreStorage>
    void SetStorage(StorageT&& value) { m_storageHasBeenSet = true; m_storage = std::forward<StorageT>(value); }
    template<typename StorageT = DatastoreStorage>
    Datastore& WithStorage(StorageT&& value) { SetStorage(std::forward<StorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the data store.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Datastore& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a data store:</p> <dl> <dt>CREATING</dt> <dd> <p>The data store
     * is being created.</p> </dd> <dt>ACTIVE</dt> <dd> <p>The data store has been
     * created and can be used.</p> </dd> <dt>DELETING</dt> <dd> <p>The data store is
     * being deleted.</p> </dd> </dl>
     */
    inline DatastoreStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DatastoreStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Datastore& WithStatus(DatastoreStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long, in days, message data is kept for the data store. When
     * <code>customerManagedS3</code> storage is selected, this parameter is
     * ignored.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const { return m_retentionPeriod; }
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }
    template<typename RetentionPeriodT = RetentionPeriod>
    void SetRetentionPeriod(RetentionPeriodT&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::forward<RetentionPeriodT>(value); }
    template<typename RetentionPeriodT = RetentionPeriod>
    Datastore& WithRetentionPeriod(RetentionPeriodT&& value) { SetRetentionPeriod(std::forward<RetentionPeriodT>(value)); return *this;}
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
    Datastore& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    Datastore& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
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
    Datastore& WithLastMessageArrivalTime(LastMessageArrivalTimeT&& value) { SetLastMessageArrivalTime(std::forward<LastMessageArrivalTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information of file formats. IoT Analytics data
     * stores support JSON and <a href="https://parquet.apache.org/">Parquet</a>.</p>
     * <p>The default file format is JSON. You can specify only one format.</p> <p>You
     * can't change the file format after you create the data store.</p>
     */
    inline const FileFormatConfiguration& GetFileFormatConfiguration() const { return m_fileFormatConfiguration; }
    inline bool FileFormatConfigurationHasBeenSet() const { return m_fileFormatConfigurationHasBeenSet; }
    template<typename FileFormatConfigurationT = FileFormatConfiguration>
    void SetFileFormatConfiguration(FileFormatConfigurationT&& value) { m_fileFormatConfigurationHasBeenSet = true; m_fileFormatConfiguration = std::forward<FileFormatConfigurationT>(value); }
    template<typename FileFormatConfigurationT = FileFormatConfiguration>
    Datastore& WithFileFormatConfiguration(FileFormatConfigurationT&& value) { SetFileFormatConfiguration(std::forward<FileFormatConfigurationT>(value)); return *this;}
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
    Datastore& WithDatastorePartitions(DatastorePartitionsT&& value) { SetDatastorePartitions(std::forward<DatastorePartitionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DatastoreStorage m_storage;
    bool m_storageHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    DatastoreStatus m_status{DatastoreStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastMessageArrivalTime{};
    bool m_lastMessageArrivalTimeHasBeenSet = false;

    FileFormatConfiguration m_fileFormatConfiguration;
    bool m_fileFormatConfigurationHasBeenSet = false;

    DatastorePartitions m_datastorePartitions;
    bool m_datastorePartitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
