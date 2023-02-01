/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/model/StorageType.h>
#include <aws/iotsitewise/model/MultiLayerStorage.h>
#include <aws/iotsitewise/model/DisassociatedDataStorageState.h>
#include <aws/iotsitewise/model/RetentionPeriod.h>
#include <utility>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class PutStorageConfigurationRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API PutStorageConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutStorageConfiguration"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    /**
     * <p>The storage tier that you specified for your data. The
     * <code>storageType</code> parameter can be one of the following values:</p> <ul>
     * <li> <p> <code>SITEWISE_DEFAULT_STORAGE</code> – IoT SiteWise saves your data
     * into the hot tier. The hot tier is a service-managed database.</p> </li> <li>
     * <p> <code>MULTI_LAYER_STORAGE</code> – IoT SiteWise saves your data in both the
     * cold tier and the hot tier. The cold tier is a customer-managed Amazon S3
     * bucket.</p> </li> </ul>
     */
    inline const StorageType& GetStorageType() const{ return m_storageType; }

    /**
     * <p>The storage tier that you specified for your data. The
     * <code>storageType</code> parameter can be one of the following values:</p> <ul>
     * <li> <p> <code>SITEWISE_DEFAULT_STORAGE</code> – IoT SiteWise saves your data
     * into the hot tier. The hot tier is a service-managed database.</p> </li> <li>
     * <p> <code>MULTI_LAYER_STORAGE</code> – IoT SiteWise saves your data in both the
     * cold tier and the hot tier. The cold tier is a customer-managed Amazon S3
     * bucket.</p> </li> </ul>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>The storage tier that you specified for your data. The
     * <code>storageType</code> parameter can be one of the following values:</p> <ul>
     * <li> <p> <code>SITEWISE_DEFAULT_STORAGE</code> – IoT SiteWise saves your data
     * into the hot tier. The hot tier is a service-managed database.</p> </li> <li>
     * <p> <code>MULTI_LAYER_STORAGE</code> – IoT SiteWise saves your data in both the
     * cold tier and the hot tier. The cold tier is a customer-managed Amazon S3
     * bucket.</p> </li> </ul>
     */
    inline void SetStorageType(const StorageType& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>The storage tier that you specified for your data. The
     * <code>storageType</code> parameter can be one of the following values:</p> <ul>
     * <li> <p> <code>SITEWISE_DEFAULT_STORAGE</code> – IoT SiteWise saves your data
     * into the hot tier. The hot tier is a service-managed database.</p> </li> <li>
     * <p> <code>MULTI_LAYER_STORAGE</code> – IoT SiteWise saves your data in both the
     * cold tier and the hot tier. The cold tier is a customer-managed Amazon S3
     * bucket.</p> </li> </ul>
     */
    inline void SetStorageType(StorageType&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>The storage tier that you specified for your data. The
     * <code>storageType</code> parameter can be one of the following values:</p> <ul>
     * <li> <p> <code>SITEWISE_DEFAULT_STORAGE</code> – IoT SiteWise saves your data
     * into the hot tier. The hot tier is a service-managed database.</p> </li> <li>
     * <p> <code>MULTI_LAYER_STORAGE</code> – IoT SiteWise saves your data in both the
     * cold tier and the hot tier. The cold tier is a customer-managed Amazon S3
     * bucket.</p> </li> </ul>
     */
    inline PutStorageConfigurationRequest& WithStorageType(const StorageType& value) { SetStorageType(value); return *this;}

    /**
     * <p>The storage tier that you specified for your data. The
     * <code>storageType</code> parameter can be one of the following values:</p> <ul>
     * <li> <p> <code>SITEWISE_DEFAULT_STORAGE</code> – IoT SiteWise saves your data
     * into the hot tier. The hot tier is a service-managed database.</p> </li> <li>
     * <p> <code>MULTI_LAYER_STORAGE</code> – IoT SiteWise saves your data in both the
     * cold tier and the hot tier. The cold tier is a customer-managed Amazon S3
     * bucket.</p> </li> </ul>
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


    /**
     * <p>Contains the storage configuration for time series (data streams) that aren't
     * associated with asset properties. The <code>disassociatedDataStorage</code> can
     * be one of the following values:</p> <ul> <li> <p> <code>ENABLED</code> – IoT
     * SiteWise accepts time series that aren't associated with asset properties.</p>
     *  <p>After the <code>disassociatedDataStorage</code> is enabled, you
     * can't disable it.</p>  </li> <li> <p> <code>DISABLED</code> – IoT
     * SiteWise doesn't accept time series (data streams) that aren't associated with
     * asset properties.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/data-streams.html">Data
     * streams</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const DisassociatedDataStorageState& GetDisassociatedDataStorage() const{ return m_disassociatedDataStorage; }

    /**
     * <p>Contains the storage configuration for time series (data streams) that aren't
     * associated with asset properties. The <code>disassociatedDataStorage</code> can
     * be one of the following values:</p> <ul> <li> <p> <code>ENABLED</code> – IoT
     * SiteWise accepts time series that aren't associated with asset properties.</p>
     *  <p>After the <code>disassociatedDataStorage</code> is enabled, you
     * can't disable it.</p>  </li> <li> <p> <code>DISABLED</code> – IoT
     * SiteWise doesn't accept time series (data streams) that aren't associated with
     * asset properties.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/data-streams.html">Data
     * streams</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline bool DisassociatedDataStorageHasBeenSet() const { return m_disassociatedDataStorageHasBeenSet; }

    /**
     * <p>Contains the storage configuration for time series (data streams) that aren't
     * associated with asset properties. The <code>disassociatedDataStorage</code> can
     * be one of the following values:</p> <ul> <li> <p> <code>ENABLED</code> – IoT
     * SiteWise accepts time series that aren't associated with asset properties.</p>
     *  <p>After the <code>disassociatedDataStorage</code> is enabled, you
     * can't disable it.</p>  </li> <li> <p> <code>DISABLED</code> – IoT
     * SiteWise doesn't accept time series (data streams) that aren't associated with
     * asset properties.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/data-streams.html">Data
     * streams</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetDisassociatedDataStorage(const DisassociatedDataStorageState& value) { m_disassociatedDataStorageHasBeenSet = true; m_disassociatedDataStorage = value; }

    /**
     * <p>Contains the storage configuration for time series (data streams) that aren't
     * associated with asset properties. The <code>disassociatedDataStorage</code> can
     * be one of the following values:</p> <ul> <li> <p> <code>ENABLED</code> – IoT
     * SiteWise accepts time series that aren't associated with asset properties.</p>
     *  <p>After the <code>disassociatedDataStorage</code> is enabled, you
     * can't disable it.</p>  </li> <li> <p> <code>DISABLED</code> – IoT
     * SiteWise doesn't accept time series (data streams) that aren't associated with
     * asset properties.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/data-streams.html">Data
     * streams</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetDisassociatedDataStorage(DisassociatedDataStorageState&& value) { m_disassociatedDataStorageHasBeenSet = true; m_disassociatedDataStorage = std::move(value); }

    /**
     * <p>Contains the storage configuration for time series (data streams) that aren't
     * associated with asset properties. The <code>disassociatedDataStorage</code> can
     * be one of the following values:</p> <ul> <li> <p> <code>ENABLED</code> – IoT
     * SiteWise accepts time series that aren't associated with asset properties.</p>
     *  <p>After the <code>disassociatedDataStorage</code> is enabled, you
     * can't disable it.</p>  </li> <li> <p> <code>DISABLED</code> – IoT
     * SiteWise doesn't accept time series (data streams) that aren't associated with
     * asset properties.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/data-streams.html">Data
     * streams</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline PutStorageConfigurationRequest& WithDisassociatedDataStorage(const DisassociatedDataStorageState& value) { SetDisassociatedDataStorage(value); return *this;}

    /**
     * <p>Contains the storage configuration for time series (data streams) that aren't
     * associated with asset properties. The <code>disassociatedDataStorage</code> can
     * be one of the following values:</p> <ul> <li> <p> <code>ENABLED</code> – IoT
     * SiteWise accepts time series that aren't associated with asset properties.</p>
     *  <p>After the <code>disassociatedDataStorage</code> is enabled, you
     * can't disable it.</p>  </li> <li> <p> <code>DISABLED</code> – IoT
     * SiteWise doesn't accept time series (data streams) that aren't associated with
     * asset properties.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/data-streams.html">Data
     * streams</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline PutStorageConfigurationRequest& WithDisassociatedDataStorage(DisassociatedDataStorageState&& value) { SetDisassociatedDataStorage(std::move(value)); return *this;}


    
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }

    
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::move(value); }

    
    inline PutStorageConfigurationRequest& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    
    inline PutStorageConfigurationRequest& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}

  private:

    StorageType m_storageType;
    bool m_storageTypeHasBeenSet = false;

    MultiLayerStorage m_multiLayerStorage;
    bool m_multiLayerStorageHasBeenSet = false;

    DisassociatedDataStorageState m_disassociatedDataStorage;
    bool m_disassociatedDataStorageHasBeenSet = false;

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
