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
#include <utility>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class AWS_IOTANALYTICS_API UpdateDatastoreRequest : public IoTAnalyticsRequest
  {
  public:
    UpdateDatastoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDatastore"; }

    Aws::String SerializePayload() const override;


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
     * period cannot be updated if the data store's S3 storage is customer-managed.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>How long, in days, message data is kept for the data store. The retention
     * period cannot be updated if the data store's S3 storage is customer-managed.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>How long, in days, message data is kept for the data store. The retention
     * period cannot be updated if the data store's S3 storage is customer-managed.</p>
     */
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>How long, in days, message data is kept for the data store. The retention
     * period cannot be updated if the data store's S3 storage is customer-managed.</p>
     */
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::move(value); }

    /**
     * <p>How long, in days, message data is kept for the data store. The retention
     * period cannot be updated if the data store's S3 storage is customer-managed.</p>
     */
    inline UpdateDatastoreRequest& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>How long, in days, message data is kept for the data store. The retention
     * period cannot be updated if the data store's S3 storage is customer-managed.</p>
     */
    inline UpdateDatastoreRequest& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}


    /**
     * <p>Where data store data is stored. You can choose one of
     * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
     * specified, the default is<code>serviceManagedS3</code>. You cannot change this
     * storage option after the data store is created.</p>
     */
    inline const DatastoreStorage& GetDatastoreStorage() const{ return m_datastoreStorage; }

    /**
     * <p>Where data store data is stored. You can choose one of
     * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
     * specified, the default is<code>serviceManagedS3</code>. You cannot change this
     * storage option after the data store is created.</p>
     */
    inline bool DatastoreStorageHasBeenSet() const { return m_datastoreStorageHasBeenSet; }

    /**
     * <p>Where data store data is stored. You can choose one of
     * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
     * specified, the default is<code>serviceManagedS3</code>. You cannot change this
     * storage option after the data store is created.</p>
     */
    inline void SetDatastoreStorage(const DatastoreStorage& value) { m_datastoreStorageHasBeenSet = true; m_datastoreStorage = value; }

    /**
     * <p>Where data store data is stored. You can choose one of
     * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
     * specified, the default is<code>serviceManagedS3</code>. You cannot change this
     * storage option after the data store is created.</p>
     */
    inline void SetDatastoreStorage(DatastoreStorage&& value) { m_datastoreStorageHasBeenSet = true; m_datastoreStorage = std::move(value); }

    /**
     * <p>Where data store data is stored. You can choose one of
     * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
     * specified, the default is<code>serviceManagedS3</code>. You cannot change this
     * storage option after the data store is created.</p>
     */
    inline UpdateDatastoreRequest& WithDatastoreStorage(const DatastoreStorage& value) { SetDatastoreStorage(value); return *this;}

    /**
     * <p>Where data store data is stored. You can choose one of
     * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
     * specified, the default is<code>serviceManagedS3</code>. You cannot change this
     * storage option after the data store is created.</p>
     */
    inline UpdateDatastoreRequest& WithDatastoreStorage(DatastoreStorage&& value) { SetDatastoreStorage(std::move(value)); return *this;}

  private:

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet;

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet;

    DatastoreStorage m_datastoreStorage;
    bool m_datastoreStorageHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
