/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/DatastoreStorage.h>
#include <aws/iotanalytics/model/RetentionPeriod.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotanalytics/model/FileFormatConfiguration.h>
#include <aws/iotanalytics/model/DatastorePartitions.h>
#include <aws/iotanalytics/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class CreateDatastoreRequest : public IoTAnalyticsRequest
  {
  public:
    AWS_IOTANALYTICS_API CreateDatastoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDatastore"; }

    AWS_IOTANALYTICS_API Aws::String SerializePayload() const override;


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
    inline CreateDatastoreRequest& WithDatastoreName(const Aws::String& value) { SetDatastoreName(value); return *this;}

    /**
     * <p>The name of the data store.</p>
     */
    inline CreateDatastoreRequest& WithDatastoreName(Aws::String&& value) { SetDatastoreName(std::move(value)); return *this;}

    /**
     * <p>The name of the data store.</p>
     */
    inline CreateDatastoreRequest& WithDatastoreName(const char* value) { SetDatastoreName(value); return *this;}


    /**
     * <p>Where data in a data store is stored.. You can choose
     * <code>serviceManagedS3</code> storage, <code>customerManagedS3</code> storage,
     * or <code>iotSiteWiseMultiLayerStorage</code> storage. The default is
     * <code>serviceManagedS3</code>. You can't change the choice of Amazon S3 storage
     * after your data store is created. </p>
     */
    inline const DatastoreStorage& GetDatastoreStorage() const{ return m_datastoreStorage; }

    /**
     * <p>Where data in a data store is stored.. You can choose
     * <code>serviceManagedS3</code> storage, <code>customerManagedS3</code> storage,
     * or <code>iotSiteWiseMultiLayerStorage</code> storage. The default is
     * <code>serviceManagedS3</code>. You can't change the choice of Amazon S3 storage
     * after your data store is created. </p>
     */
    inline bool DatastoreStorageHasBeenSet() const { return m_datastoreStorageHasBeenSet; }

    /**
     * <p>Where data in a data store is stored.. You can choose
     * <code>serviceManagedS3</code> storage, <code>customerManagedS3</code> storage,
     * or <code>iotSiteWiseMultiLayerStorage</code> storage. The default is
     * <code>serviceManagedS3</code>. You can't change the choice of Amazon S3 storage
     * after your data store is created. </p>
     */
    inline void SetDatastoreStorage(const DatastoreStorage& value) { m_datastoreStorageHasBeenSet = true; m_datastoreStorage = value; }

    /**
     * <p>Where data in a data store is stored.. You can choose
     * <code>serviceManagedS3</code> storage, <code>customerManagedS3</code> storage,
     * or <code>iotSiteWiseMultiLayerStorage</code> storage. The default is
     * <code>serviceManagedS3</code>. You can't change the choice of Amazon S3 storage
     * after your data store is created. </p>
     */
    inline void SetDatastoreStorage(DatastoreStorage&& value) { m_datastoreStorageHasBeenSet = true; m_datastoreStorage = std::move(value); }

    /**
     * <p>Where data in a data store is stored.. You can choose
     * <code>serviceManagedS3</code> storage, <code>customerManagedS3</code> storage,
     * or <code>iotSiteWiseMultiLayerStorage</code> storage. The default is
     * <code>serviceManagedS3</code>. You can't change the choice of Amazon S3 storage
     * after your data store is created. </p>
     */
    inline CreateDatastoreRequest& WithDatastoreStorage(const DatastoreStorage& value) { SetDatastoreStorage(value); return *this;}

    /**
     * <p>Where data in a data store is stored.. You can choose
     * <code>serviceManagedS3</code> storage, <code>customerManagedS3</code> storage,
     * or <code>iotSiteWiseMultiLayerStorage</code> storage. The default is
     * <code>serviceManagedS3</code>. You can't change the choice of Amazon S3 storage
     * after your data store is created. </p>
     */
    inline CreateDatastoreRequest& WithDatastoreStorage(DatastoreStorage&& value) { SetDatastoreStorage(std::move(value)); return *this;}


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
    inline CreateDatastoreRequest& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>How long, in days, message data is kept for the data store. When
     * <code>customerManagedS3</code> storage is selected, this parameter is
     * ignored.</p>
     */
    inline CreateDatastoreRequest& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}


    /**
     * <p>Metadata which can be used to manage the data store.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata which can be used to manage the data store.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata which can be used to manage the data store.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata which can be used to manage the data store.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata which can be used to manage the data store.</p>
     */
    inline CreateDatastoreRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata which can be used to manage the data store.</p>
     */
    inline CreateDatastoreRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata which can be used to manage the data store.</p>
     */
    inline CreateDatastoreRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata which can be used to manage the data store.</p>
     */
    inline CreateDatastoreRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


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
    inline CreateDatastoreRequest& WithFileFormatConfiguration(const FileFormatConfiguration& value) { SetFileFormatConfiguration(value); return *this;}

    /**
     * <p>Contains the configuration information of file formats. IoT Analytics data
     * stores support JSON and <a href="https://parquet.apache.org/">Parquet</a>.</p>
     * <p>The default file format is JSON. You can specify only one format.</p> <p>You
     * can't change the file format after you create the data store.</p>
     */
    inline CreateDatastoreRequest& WithFileFormatConfiguration(FileFormatConfiguration&& value) { SetFileFormatConfiguration(std::move(value)); return *this;}


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
    inline CreateDatastoreRequest& WithDatastorePartitions(const DatastorePartitions& value) { SetDatastorePartitions(value); return *this;}

    /**
     * <p> Contains information about the partition dimensions in a data store. </p>
     */
    inline CreateDatastoreRequest& WithDatastorePartitions(DatastorePartitions&& value) { SetDatastorePartitions(std::move(value)); return *this;}

  private:

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet = false;

    DatastoreStorage m_datastoreStorage;
    bool m_datastoreStorageHasBeenSet = false;

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    FileFormatConfiguration m_fileFormatConfiguration;
    bool m_fileFormatConfigurationHasBeenSet = false;

    DatastorePartitions m_datastorePartitions;
    bool m_datastorePartitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
