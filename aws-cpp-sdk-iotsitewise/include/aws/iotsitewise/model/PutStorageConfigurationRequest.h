/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/model/StorageType.h>
#include <aws/iotsitewise/model/MultiLayerStorage.h>
#include <utility>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class AWS_IOTSITEWISE_API PutStorageConfigurationRequest : public IoTSiteWiseRequest
  {
  public:
    PutStorageConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutStorageConfiguration"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The type of storage that you specified for your data. The storage type can be
     * one of the following values:</p> <ul> <li> <p>
     * <code>SITEWISE_DEFAULT_STORAGE</code> – IoT SiteWise replicates your data into a
     * service managed database.</p> </li> <li> <p> <code>MULTI_LAYER_STORAGE</code> –
     * IoT SiteWise replicates your data into a service managed database and saves a
     * copy of your raw data and metadata in an Amazon S3 object that you
     * specified.</p> </li> </ul>
     */
    inline const StorageType& GetStorageType() const{ return m_storageType; }

    /**
     * <p>The type of storage that you specified for your data. The storage type can be
     * one of the following values:</p> <ul> <li> <p>
     * <code>SITEWISE_DEFAULT_STORAGE</code> – IoT SiteWise replicates your data into a
     * service managed database.</p> </li> <li> <p> <code>MULTI_LAYER_STORAGE</code> –
     * IoT SiteWise replicates your data into a service managed database and saves a
     * copy of your raw data and metadata in an Amazon S3 object that you
     * specified.</p> </li> </ul>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>The type of storage that you specified for your data. The storage type can be
     * one of the following values:</p> <ul> <li> <p>
     * <code>SITEWISE_DEFAULT_STORAGE</code> – IoT SiteWise replicates your data into a
     * service managed database.</p> </li> <li> <p> <code>MULTI_LAYER_STORAGE</code> –
     * IoT SiteWise replicates your data into a service managed database and saves a
     * copy of your raw data and metadata in an Amazon S3 object that you
     * specified.</p> </li> </ul>
     */
    inline void SetStorageType(const StorageType& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>The type of storage that you specified for your data. The storage type can be
     * one of the following values:</p> <ul> <li> <p>
     * <code>SITEWISE_DEFAULT_STORAGE</code> – IoT SiteWise replicates your data into a
     * service managed database.</p> </li> <li> <p> <code>MULTI_LAYER_STORAGE</code> –
     * IoT SiteWise replicates your data into a service managed database and saves a
     * copy of your raw data and metadata in an Amazon S3 object that you
     * specified.</p> </li> </ul>
     */
    inline void SetStorageType(StorageType&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>The type of storage that you specified for your data. The storage type can be
     * one of the following values:</p> <ul> <li> <p>
     * <code>SITEWISE_DEFAULT_STORAGE</code> – IoT SiteWise replicates your data into a
     * service managed database.</p> </li> <li> <p> <code>MULTI_LAYER_STORAGE</code> –
     * IoT SiteWise replicates your data into a service managed database and saves a
     * copy of your raw data and metadata in an Amazon S3 object that you
     * specified.</p> </li> </ul>
     */
    inline PutStorageConfigurationRequest& WithStorageType(const StorageType& value) { SetStorageType(value); return *this;}

    /**
     * <p>The type of storage that you specified for your data. The storage type can be
     * one of the following values:</p> <ul> <li> <p>
     * <code>SITEWISE_DEFAULT_STORAGE</code> – IoT SiteWise replicates your data into a
     * service managed database.</p> </li> <li> <p> <code>MULTI_LAYER_STORAGE</code> –
     * IoT SiteWise replicates your data into a service managed database and saves a
     * copy of your raw data and metadata in an Amazon S3 object that you
     * specified.</p> </li> </ul>
     */
    inline PutStorageConfigurationRequest& WithStorageType(StorageType&& value) { SetStorageType(std::move(value)); return *this;}


    /**
     * <p>Identifies a storage destination. If you specified
     * <code>MULTI_LAYER_STORAGE</code> for the storage type, you must specify a
     * <code>MultiLayerStorage</code> object.</p>
     */
    inline const MultiLayerStorage& GetMultiLayerStorage() const{ return m_multiLayerStorage; }

    /**
     * <p>Identifies a storage destination. If you specified
     * <code>MULTI_LAYER_STORAGE</code> for the storage type, you must specify a
     * <code>MultiLayerStorage</code> object.</p>
     */
    inline bool MultiLayerStorageHasBeenSet() const { return m_multiLayerStorageHasBeenSet; }

    /**
     * <p>Identifies a storage destination. If you specified
     * <code>MULTI_LAYER_STORAGE</code> for the storage type, you must specify a
     * <code>MultiLayerStorage</code> object.</p>
     */
    inline void SetMultiLayerStorage(const MultiLayerStorage& value) { m_multiLayerStorageHasBeenSet = true; m_multiLayerStorage = value; }

    /**
     * <p>Identifies a storage destination. If you specified
     * <code>MULTI_LAYER_STORAGE</code> for the storage type, you must specify a
     * <code>MultiLayerStorage</code> object.</p>
     */
    inline void SetMultiLayerStorage(MultiLayerStorage&& value) { m_multiLayerStorageHasBeenSet = true; m_multiLayerStorage = std::move(value); }

    /**
     * <p>Identifies a storage destination. If you specified
     * <code>MULTI_LAYER_STORAGE</code> for the storage type, you must specify a
     * <code>MultiLayerStorage</code> object.</p>
     */
    inline PutStorageConfigurationRequest& WithMultiLayerStorage(const MultiLayerStorage& value) { SetMultiLayerStorage(value); return *this;}

    /**
     * <p>Identifies a storage destination. If you specified
     * <code>MULTI_LAYER_STORAGE</code> for the storage type, you must specify a
     * <code>MultiLayerStorage</code> object.</p>
     */
    inline PutStorageConfigurationRequest& WithMultiLayerStorage(MultiLayerStorage&& value) { SetMultiLayerStorage(std::move(value)); return *this;}

  private:

    StorageType m_storageType;
    bool m_storageTypeHasBeenSet;

    MultiLayerStorage m_multiLayerStorage;
    bool m_multiLayerStorageHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
