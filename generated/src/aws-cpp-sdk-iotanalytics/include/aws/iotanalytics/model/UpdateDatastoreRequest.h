/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/RetentionPeriod.h>
#include <aws/iotanalytics/model/DatastoreStorage.h>
#include <aws/iotanalytics/model/FileFormatConfiguration.h>
#include <utility>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class UpdateDatastoreRequest : public IoTAnalyticsRequest
  {
  public:
    AWS_IOTANALYTICS_API UpdateDatastoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDatastore"; }

    AWS_IOTANALYTICS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the data store to be updated.</p>
     */
    inline const Aws::String& GetDatastoreName() const{ return m_datastoreName; }

    /**
     * <p>The name of the data store to be updated.</p>
     */
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }

    /**
     * <p>The name of the data store to be updated.</p>
     */
    inline void SetDatastoreName(const Aws::String& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = value; }

    /**
     * <p>The name of the data store to be updated.</p>
     */
    inline void SetDatastoreName(Aws::String&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::move(value); }

    /**
     * <p>The name of the data store to be updated.</p>
     */
    inline void SetDatastoreName(const char* value) { m_datastoreNameHasBeenSet = true; m_datastoreName.assign(value); }

    /**
     * <p>The name of the data store to be updated.</p>
     */
    inline UpdateDatastoreRequest& WithDatastoreName(const Aws::String& value) { SetDatastoreName(value); return *this;}

    /**
     * <p>The name of the data store to be updated.</p>
     */
    inline UpdateDatastoreRequest& WithDatastoreName(Aws::String&& value) { SetDatastoreName(std::move(value)); return *this;}

    /**
     * <p>The name of the data store to be updated.</p>
     */
    inline UpdateDatastoreRequest& WithDatastoreName(const char* value) { SetDatastoreName(value); return *this;}


    /**
     * <p>How long, in days, message data is kept for the data store. The retention
     * period can't be updated if the data store's Amazon S3 storage is
     * customer-managed.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>How long, in days, message data is kept for the data store. The retention
     * period can't be updated if the data store's Amazon S3 storage is
     * customer-managed.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>How long, in days, message data is kept for the data store. The retention
     * period can't be updated if the data store's Amazon S3 storage is
     * customer-managed.</p>
     */
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>How long, in days, message data is kept for the data store. The retention
     * period can't be updated if the data store's Amazon S3 storage is
     * customer-managed.</p>
     */
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::move(value); }

    /**
     * <p>How long, in days, message data is kept for the data store. The retention
     * period can't be updated if the data store's Amazon S3 storage is
     * customer-managed.</p>
     */
    inline UpdateDatastoreRequest& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>How long, in days, message data is kept for the data store. The retention
     * period can't be updated if the data store's Amazon S3 storage is
     * customer-managed.</p>
     */
    inline UpdateDatastoreRequest& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}


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
    inline UpdateDatastoreRequest& WithDatastoreStorage(const DatastoreStorage& value) { SetDatastoreStorage(value); return *this;}

    /**
     * <p>Where data in a data store is stored.. You can choose
     * <code>serviceManagedS3</code> storage, <code>customerManagedS3</code> storage,
     * or <code>iotSiteWiseMultiLayerStorage</code> storage. The default is
     * <code>serviceManagedS3</code>. You can't change the choice of Amazon S3 storage
     * after your data store is created. </p>
     */
    inline UpdateDatastoreRequest& WithDatastoreStorage(DatastoreStorage&& value) { SetDatastoreStorage(std::move(value)); return *this;}


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
    inline UpdateDatastoreRequest& WithFileFormatConfiguration(const FileFormatConfiguration& value) { SetFileFormatConfiguration(value); return *this;}

    /**
     * <p>Contains the configuration information of file formats. IoT Analytics data
     * stores support JSON and <a href="https://parquet.apache.org/">Parquet</a>.</p>
     * <p>The default file format is JSON. You can specify only one format.</p> <p>You
     * can't change the file format after you create the data store.</p>
     */
    inline UpdateDatastoreRequest& WithFileFormatConfiguration(FileFormatConfiguration&& value) { SetFileFormatConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet = false;

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    DatastoreStorage m_datastoreStorage;
    bool m_datastoreStorageHasBeenSet = false;

    FileFormatConfiguration m_fileFormatConfiguration;
    bool m_fileFormatConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
