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
    AWS_IOTANALYTICS_API Datastore();
    AWS_IOTANALYTICS_API Datastore(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Datastore& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data store.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data store.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data store.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data store.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data store.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data store.</p>
     */
    inline Datastore& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data store.</p>
     */
    inline Datastore& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data store.</p>
     */
    inline Datastore& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Where data in a data store is stored.. You can choose
     * <code>serviceManagedS3</code> storage, <code>customerManagedS3</code> storage,
     * or <code>iotSiteWiseMultiLayerStorage</code> storage. The default is
     * <code>serviceManagedS3</code>. You can't change the choice of Amazon S3 storage
     * after your data store is created. </p>
     */
    inline const DatastoreStorage& GetStorage() const{ return m_storage; }

    /**
     * <p>Where data in a data store is stored.. You can choose
     * <code>serviceManagedS3</code> storage, <code>customerManagedS3</code> storage,
     * or <code>iotSiteWiseMultiLayerStorage</code> storage. The default is
     * <code>serviceManagedS3</code>. You can't change the choice of Amazon S3 storage
     * after your data store is created. </p>
     */
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }

    /**
     * <p>Where data in a data store is stored.. You can choose
     * <code>serviceManagedS3</code> storage, <code>customerManagedS3</code> storage,
     * or <code>iotSiteWiseMultiLayerStorage</code> storage. The default is
     * <code>serviceManagedS3</code>. You can't change the choice of Amazon S3 storage
     * after your data store is created. </p>
     */
    inline void SetStorage(const DatastoreStorage& value) { m_storageHasBeenSet = true; m_storage = value; }

    /**
     * <p>Where data in a data store is stored.. You can choose
     * <code>serviceManagedS3</code> storage, <code>customerManagedS3</code> storage,
     * or <code>iotSiteWiseMultiLayerStorage</code> storage. The default is
     * <code>serviceManagedS3</code>. You can't change the choice of Amazon S3 storage
     * after your data store is created. </p>
     */
    inline void SetStorage(DatastoreStorage&& value) { m_storageHasBeenSet = true; m_storage = std::move(value); }

    /**
     * <p>Where data in a data store is stored.. You can choose
     * <code>serviceManagedS3</code> storage, <code>customerManagedS3</code> storage,
     * or <code>iotSiteWiseMultiLayerStorage</code> storage. The default is
     * <code>serviceManagedS3</code>. You can't change the choice of Amazon S3 storage
     * after your data store is created. </p>
     */
    inline Datastore& WithStorage(const DatastoreStorage& value) { SetStorage(value); return *this;}

    /**
     * <p>Where data in a data store is stored.. You can choose
     * <code>serviceManagedS3</code> storage, <code>customerManagedS3</code> storage,
     * or <code>iotSiteWiseMultiLayerStorage</code> storage. The default is
     * <code>serviceManagedS3</code>. You can't change the choice of Amazon S3 storage
     * after your data store is created. </p>
     */
    inline Datastore& WithStorage(DatastoreStorage&& value) { SetStorage(std::move(value)); return *this;}


    /**
     * <p>The ARN of the data store.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the data store.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the data store.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the data store.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the data store.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the data store.</p>
     */
    inline Datastore& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the data store.</p>
     */
    inline Datastore& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the data store.</p>
     */
    inline Datastore& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The status of a data store:</p> <dl> <dt>CREATING</dt> <dd> <p>The data store
     * is being created.</p> </dd> <dt>ACTIVE</dt> <dd> <p>The data store has been
     * created and can be used.</p> </dd> <dt>DELETING</dt> <dd> <p>The data store is
     * being deleted.</p> </dd> </dl>
     */
    inline const DatastoreStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a data store:</p> <dl> <dt>CREATING</dt> <dd> <p>The data store
     * is being created.</p> </dd> <dt>ACTIVE</dt> <dd> <p>The data store has been
     * created and can be used.</p> </dd> <dt>DELETING</dt> <dd> <p>The data store is
     * being deleted.</p> </dd> </dl>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a data store:</p> <dl> <dt>CREATING</dt> <dd> <p>The data store
     * is being created.</p> </dd> <dt>ACTIVE</dt> <dd> <p>The data store has been
     * created and can be used.</p> </dd> <dt>DELETING</dt> <dd> <p>The data store is
     * being deleted.</p> </dd> </dl>
     */
    inline void SetStatus(const DatastoreStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a data store:</p> <dl> <dt>CREATING</dt> <dd> <p>The data store
     * is being created.</p> </dd> <dt>ACTIVE</dt> <dd> <p>The data store has been
     * created and can be used.</p> </dd> <dt>DELETING</dt> <dd> <p>The data store is
     * being deleted.</p> </dd> </dl>
     */
    inline void SetStatus(DatastoreStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a data store:</p> <dl> <dt>CREATING</dt> <dd> <p>The data store
     * is being created.</p> </dd> <dt>ACTIVE</dt> <dd> <p>The data store has been
     * created and can be used.</p> </dd> <dt>DELETING</dt> <dd> <p>The data store is
     * being deleted.</p> </dd> </dl>
     */
    inline Datastore& WithStatus(const DatastoreStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a data store:</p> <dl> <dt>CREATING</dt> <dd> <p>The data store
     * is being created.</p> </dd> <dt>ACTIVE</dt> <dd> <p>The data store has been
     * created and can be used.</p> </dd> <dt>DELETING</dt> <dd> <p>The data store is
     * being deleted.</p> </dd> </dl>
     */
    inline Datastore& WithStatus(DatastoreStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>How long, in days, message data is kept for the data store. When
     * <code>customerManagedS3</code> storage is selected, this parameter is
     * ignored.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>How long, in days, message data is kept for the data store. When
     * <code>customerManagedS3</code> storage is selected, this parameter is
     * ignored.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>How long, in days, message data is kept for the data store. When
     * <code>customerManagedS3</code> storage is selected, this parameter is
     * ignored.</p>
     */
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>How long, in days, message data is kept for the data store. When
     * <code>customerManagedS3</code> storage is selected, this parameter is
     * ignored.</p>
     */
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::move(value); }

    /**
     * <p>How long, in days, message data is kept for the data store. When
     * <code>customerManagedS3</code> storage is selected, this parameter is
     * ignored.</p>
     */
    inline Datastore& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>How long, in days, message data is kept for the data store. When
     * <code>customerManagedS3</code> storage is selected, this parameter is
     * ignored.</p>
     */
    inline Datastore& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}


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
    inline Datastore& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the data store was created.</p>
     */
    inline Datastore& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline Datastore& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The last time the data store was updated.</p>
     */
    inline Datastore& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The last time when a new message arrived in the data store.</p> <p>IoT
     * Analytics updates this value at most once per minute for Amazon Simple Storage
     * Service one data store. Hence, the <code>lastMessageArrivalTime</code> value is
     * an approximation.</p> <p>This feature only applies to messages that arrived in
     * the data store after October 23, 2020. </p>
     */
    inline const Aws::Utils::DateTime& GetLastMessageArrivalTime() const{ return m_lastMessageArrivalTime; }

    /**
     * <p>The last time when a new message arrived in the data store.</p> <p>IoT
     * Analytics updates this value at most once per minute for Amazon Simple Storage
     * Service one data store. Hence, the <code>lastMessageArrivalTime</code> value is
     * an approximation.</p> <p>This feature only applies to messages that arrived in
     * the data store after October 23, 2020. </p>
     */
    inline bool LastMessageArrivalTimeHasBeenSet() const { return m_lastMessageArrivalTimeHasBeenSet; }

    /**
     * <p>The last time when a new message arrived in the data store.</p> <p>IoT
     * Analytics updates this value at most once per minute for Amazon Simple Storage
     * Service one data store. Hence, the <code>lastMessageArrivalTime</code> value is
     * an approximation.</p> <p>This feature only applies to messages that arrived in
     * the data store after October 23, 2020. </p>
     */
    inline void SetLastMessageArrivalTime(const Aws::Utils::DateTime& value) { m_lastMessageArrivalTimeHasBeenSet = true; m_lastMessageArrivalTime = value; }

    /**
     * <p>The last time when a new message arrived in the data store.</p> <p>IoT
     * Analytics updates this value at most once per minute for Amazon Simple Storage
     * Service one data store. Hence, the <code>lastMessageArrivalTime</code> value is
     * an approximation.</p> <p>This feature only applies to messages that arrived in
     * the data store after October 23, 2020. </p>
     */
    inline void SetLastMessageArrivalTime(Aws::Utils::DateTime&& value) { m_lastMessageArrivalTimeHasBeenSet = true; m_lastMessageArrivalTime = std::move(value); }

    /**
     * <p>The last time when a new message arrived in the data store.</p> <p>IoT
     * Analytics updates this value at most once per minute for Amazon Simple Storage
     * Service one data store. Hence, the <code>lastMessageArrivalTime</code> value is
     * an approximation.</p> <p>This feature only applies to messages that arrived in
     * the data store after October 23, 2020. </p>
     */
    inline Datastore& WithLastMessageArrivalTime(const Aws::Utils::DateTime& value) { SetLastMessageArrivalTime(value); return *this;}

    /**
     * <p>The last time when a new message arrived in the data store.</p> <p>IoT
     * Analytics updates this value at most once per minute for Amazon Simple Storage
     * Service one data store. Hence, the <code>lastMessageArrivalTime</code> value is
     * an approximation.</p> <p>This feature only applies to messages that arrived in
     * the data store after October 23, 2020. </p>
     */
    inline Datastore& WithLastMessageArrivalTime(Aws::Utils::DateTime&& value) { SetLastMessageArrivalTime(std::move(value)); return *this;}


    /**
     * <p>Contains the configuration information of file formats. IoT Analytics data
     * stores support JSON and <a href="https://parquet.apache.org/">Parquet</a>.</p>
     * <p>The default file format is JSON. You can specify only one format.</p> <p>You
     * can't change the file format after you create the data store.</p>
     */
    inline const FileFormatConfiguration& GetFileFormatConfiguration() const{ return m_fileFormatConfiguration; }

    /**
     * <p>Contains the configuration information of file formats. IoT Analytics data
     * stores support JSON and <a href="https://parquet.apache.org/">Parquet</a>.</p>
     * <p>The default file format is JSON. You can specify only one format.</p> <p>You
     * can't change the file format after you create the data store.</p>
     */
    inline bool FileFormatConfigurationHasBeenSet() const { return m_fileFormatConfigurationHasBeenSet; }

    /**
     * <p>Contains the configuration information of file formats. IoT Analytics data
     * stores support JSON and <a href="https://parquet.apache.org/">Parquet</a>.</p>
     * <p>The default file format is JSON. You can specify only one format.</p> <p>You
     * can't change the file format after you create the data store.</p>
     */
    inline void SetFileFormatConfiguration(const FileFormatConfiguration& value) { m_fileFormatConfigurationHasBeenSet = true; m_fileFormatConfiguration = value; }

    /**
     * <p>Contains the configuration information of file formats. IoT Analytics data
     * stores support JSON and <a href="https://parquet.apache.org/">Parquet</a>.</p>
     * <p>The default file format is JSON. You can specify only one format.</p> <p>You
     * can't change the file format after you create the data store.</p>
     */
    inline void SetFileFormatConfiguration(FileFormatConfiguration&& value) { m_fileFormatConfigurationHasBeenSet = true; m_fileFormatConfiguration = std::move(value); }

    /**
     * <p>Contains the configuration information of file formats. IoT Analytics data
     * stores support JSON and <a href="https://parquet.apache.org/">Parquet</a>.</p>
     * <p>The default file format is JSON. You can specify only one format.</p> <p>You
     * can't change the file format after you create the data store.</p>
     */
    inline Datastore& WithFileFormatConfiguration(const FileFormatConfiguration& value) { SetFileFormatConfiguration(value); return *this;}

    /**
     * <p>Contains the configuration information of file formats. IoT Analytics data
     * stores support JSON and <a href="https://parquet.apache.org/">Parquet</a>.</p>
     * <p>The default file format is JSON. You can specify only one format.</p> <p>You
     * can't change the file format after you create the data store.</p>
     */
    inline Datastore& WithFileFormatConfiguration(FileFormatConfiguration&& value) { SetFileFormatConfiguration(std::move(value)); return *this;}


    /**
     * <p> Contains information about the partition dimensions in a data store. </p>
     */
    inline const DatastorePartitions& GetDatastorePartitions() const{ return m_datastorePartitions; }

    /**
     * <p> Contains information about the partition dimensions in a data store. </p>
     */
    inline bool DatastorePartitionsHasBeenSet() const { return m_datastorePartitionsHasBeenSet; }

    /**
     * <p> Contains information about the partition dimensions in a data store. </p>
     */
    inline void SetDatastorePartitions(const DatastorePartitions& value) { m_datastorePartitionsHasBeenSet = true; m_datastorePartitions = value; }

    /**
     * <p> Contains information about the partition dimensions in a data store. </p>
     */
    inline void SetDatastorePartitions(DatastorePartitions&& value) { m_datastorePartitionsHasBeenSet = true; m_datastorePartitions = std::move(value); }

    /**
     * <p> Contains information about the partition dimensions in a data store. </p>
     */
    inline Datastore& WithDatastorePartitions(const DatastorePartitions& value) { SetDatastorePartitions(value); return *this;}

    /**
     * <p> Contains information about the partition dimensions in a data store. </p>
     */
    inline Datastore& WithDatastorePartitions(DatastorePartitions&& value) { SetDatastorePartitions(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DatastoreStorage m_storage;
    bool m_storageHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    DatastoreStatus m_status;
    bool m_statusHasBeenSet = false;

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastMessageArrivalTime;
    bool m_lastMessageArrivalTimeHasBeenSet = false;

    FileFormatConfiguration m_fileFormatConfiguration;
    bool m_fileFormatConfigurationHasBeenSet = false;

    DatastorePartitions m_datastorePartitions;
    bool m_datastorePartitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
