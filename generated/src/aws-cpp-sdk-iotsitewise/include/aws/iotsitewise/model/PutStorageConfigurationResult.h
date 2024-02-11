/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/StorageType.h>
#include <aws/iotsitewise/model/MultiLayerStorage.h>
#include <aws/iotsitewise/model/DisassociatedDataStorageState.h>
#include <aws/iotsitewise/model/RetentionPeriod.h>
#include <aws/iotsitewise/model/ConfigurationStatus.h>
#include <aws/iotsitewise/model/WarmTierState.h>
#include <aws/iotsitewise/model/WarmTierRetentionPeriod.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{
  class PutStorageConfigurationResult
  {
  public:
    AWS_IOTSITEWISE_API PutStorageConfigurationResult();
    AWS_IOTSITEWISE_API PutStorageConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API PutStorageConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetStorageType(const StorageType& value) { m_storageType = value; }

    /**
     * <p>The storage tier that you specified for your data. The
     * <code>storageType</code> parameter can be one of the following values:</p> <ul>
     * <li> <p> <code>SITEWISE_DEFAULT_STORAGE</code> – IoT SiteWise saves your data
     * into the hot tier. The hot tier is a service-managed database.</p> </li> <li>
     * <p> <code>MULTI_LAYER_STORAGE</code> – IoT SiteWise saves your data in both the
     * cold tier and the hot tier. The cold tier is a customer-managed Amazon S3
     * bucket.</p> </li> </ul>
     */
    inline void SetStorageType(StorageType&& value) { m_storageType = std::move(value); }

    /**
     * <p>The storage tier that you specified for your data. The
     * <code>storageType</code> parameter can be one of the following values:</p> <ul>
     * <li> <p> <code>SITEWISE_DEFAULT_STORAGE</code> – IoT SiteWise saves your data
     * into the hot tier. The hot tier is a service-managed database.</p> </li> <li>
     * <p> <code>MULTI_LAYER_STORAGE</code> – IoT SiteWise saves your data in both the
     * cold tier and the hot tier. The cold tier is a customer-managed Amazon S3
     * bucket.</p> </li> </ul>
     */
    inline PutStorageConfigurationResult& WithStorageType(const StorageType& value) { SetStorageType(value); return *this;}

    /**
     * <p>The storage tier that you specified for your data. The
     * <code>storageType</code> parameter can be one of the following values:</p> <ul>
     * <li> <p> <code>SITEWISE_DEFAULT_STORAGE</code> – IoT SiteWise saves your data
     * into the hot tier. The hot tier is a service-managed database.</p> </li> <li>
     * <p> <code>MULTI_LAYER_STORAGE</code> – IoT SiteWise saves your data in both the
     * cold tier and the hot tier. The cold tier is a customer-managed Amazon S3
     * bucket.</p> </li> </ul>
     */
    inline PutStorageConfigurationResult& WithStorageType(StorageType&& value) { SetStorageType(std::move(value)); return *this;}


    /**
     * <p>Contains information about the storage destination.</p>
     */
    inline const MultiLayerStorage& GetMultiLayerStorage() const{ return m_multiLayerStorage; }

    /**
     * <p>Contains information about the storage destination.</p>
     */
    inline void SetMultiLayerStorage(const MultiLayerStorage& value) { m_multiLayerStorage = value; }

    /**
     * <p>Contains information about the storage destination.</p>
     */
    inline void SetMultiLayerStorage(MultiLayerStorage&& value) { m_multiLayerStorage = std::move(value); }

    /**
     * <p>Contains information about the storage destination.</p>
     */
    inline PutStorageConfigurationResult& WithMultiLayerStorage(const MultiLayerStorage& value) { SetMultiLayerStorage(value); return *this;}

    /**
     * <p>Contains information about the storage destination.</p>
     */
    inline PutStorageConfigurationResult& WithMultiLayerStorage(MultiLayerStorage&& value) { SetMultiLayerStorage(std::move(value)); return *this;}


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
    inline void SetDisassociatedDataStorage(const DisassociatedDataStorageState& value) { m_disassociatedDataStorage = value; }

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
    inline void SetDisassociatedDataStorage(DisassociatedDataStorageState&& value) { m_disassociatedDataStorage = std::move(value); }

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
    inline PutStorageConfigurationResult& WithDisassociatedDataStorage(const DisassociatedDataStorageState& value) { SetDisassociatedDataStorage(value); return *this;}

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
    inline PutStorageConfigurationResult& WithDisassociatedDataStorage(DisassociatedDataStorageState&& value) { SetDisassociatedDataStorage(std::move(value)); return *this;}


    
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }

    
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriod = value; }

    
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriod = std::move(value); }

    
    inline PutStorageConfigurationResult& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    
    inline PutStorageConfigurationResult& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}


    
    inline const ConfigurationStatus& GetConfigurationStatus() const{ return m_configurationStatus; }

    
    inline void SetConfigurationStatus(const ConfigurationStatus& value) { m_configurationStatus = value; }

    
    inline void SetConfigurationStatus(ConfigurationStatus&& value) { m_configurationStatus = std::move(value); }

    
    inline PutStorageConfigurationResult& WithConfigurationStatus(const ConfigurationStatus& value) { SetConfigurationStatus(value); return *this;}

    
    inline PutStorageConfigurationResult& WithConfigurationStatus(ConfigurationStatus&& value) { SetConfigurationStatus(std::move(value)); return *this;}


    /**
     * <p>A service managed storage tier optimized for analytical queries. It stores
     * periodically uploaded, buffered and historical data ingested with the
     * CreaeBulkImportJob API.</p>
     */
    inline const WarmTierState& GetWarmTier() const{ return m_warmTier; }

    /**
     * <p>A service managed storage tier optimized for analytical queries. It stores
     * periodically uploaded, buffered and historical data ingested with the
     * CreaeBulkImportJob API.</p>
     */
    inline void SetWarmTier(const WarmTierState& value) { m_warmTier = value; }

    /**
     * <p>A service managed storage tier optimized for analytical queries. It stores
     * periodically uploaded, buffered and historical data ingested with the
     * CreaeBulkImportJob API.</p>
     */
    inline void SetWarmTier(WarmTierState&& value) { m_warmTier = std::move(value); }

    /**
     * <p>A service managed storage tier optimized for analytical queries. It stores
     * periodically uploaded, buffered and historical data ingested with the
     * CreaeBulkImportJob API.</p>
     */
    inline PutStorageConfigurationResult& WithWarmTier(const WarmTierState& value) { SetWarmTier(value); return *this;}

    /**
     * <p>A service managed storage tier optimized for analytical queries. It stores
     * periodically uploaded, buffered and historical data ingested with the
     * CreaeBulkImportJob API.</p>
     */
    inline PutStorageConfigurationResult& WithWarmTier(WarmTierState&& value) { SetWarmTier(std::move(value)); return *this;}


    /**
     * <p>Set this period to specify how long your data is stored in the warm tier
     * before it is deleted. You can set this only if cold tier is enabled.</p>
     */
    inline const WarmTierRetentionPeriod& GetWarmTierRetentionPeriod() const{ return m_warmTierRetentionPeriod; }

    /**
     * <p>Set this period to specify how long your data is stored in the warm tier
     * before it is deleted. You can set this only if cold tier is enabled.</p>
     */
    inline void SetWarmTierRetentionPeriod(const WarmTierRetentionPeriod& value) { m_warmTierRetentionPeriod = value; }

    /**
     * <p>Set this period to specify how long your data is stored in the warm tier
     * before it is deleted. You can set this only if cold tier is enabled.</p>
     */
    inline void SetWarmTierRetentionPeriod(WarmTierRetentionPeriod&& value) { m_warmTierRetentionPeriod = std::move(value); }

    /**
     * <p>Set this period to specify how long your data is stored in the warm tier
     * before it is deleted. You can set this only if cold tier is enabled.</p>
     */
    inline PutStorageConfigurationResult& WithWarmTierRetentionPeriod(const WarmTierRetentionPeriod& value) { SetWarmTierRetentionPeriod(value); return *this;}

    /**
     * <p>Set this period to specify how long your data is stored in the warm tier
     * before it is deleted. You can set this only if cold tier is enabled.</p>
     */
    inline PutStorageConfigurationResult& WithWarmTierRetentionPeriod(WarmTierRetentionPeriod&& value) { SetWarmTierRetentionPeriod(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutStorageConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutStorageConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutStorageConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    StorageType m_storageType;

    MultiLayerStorage m_multiLayerStorage;

    DisassociatedDataStorageState m_disassociatedDataStorage;

    RetentionPeriod m_retentionPeriod;

    ConfigurationStatus m_configurationStatus;

    WarmTierState m_warmTier;

    WarmTierRetentionPeriod m_warmTierRetentionPeriod;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
