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
    AWS_IOTSITEWISE_API PutStorageConfigurationResult() = default;
    AWS_IOTSITEWISE_API PutStorageConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API PutStorageConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The storage tier that you specified for your data. The
     * <code>storageType</code> parameter can be one of the following values:</p> <ul>
     * <li> <p> <code>SITEWISE_DEFAULT_STORAGE</code> – IoT SiteWise saves your data
     * into the hot tier. The hot tier is a service-managed database.</p> </li> <li>
     * <p> <code>MULTI_LAYER_STORAGE</code> – IoT SiteWise saves your data in both the
     * cold tier and the hot tier. The cold tier is a customer-managed Amazon S3
     * bucket.</p> </li> </ul>
     */
    inline StorageType GetStorageType() const { return m_storageType; }
    inline void SetStorageType(StorageType value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline PutStorageConfigurationResult& WithStorageType(StorageType value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the storage destination.</p>
     */
    inline const MultiLayerStorage& GetMultiLayerStorage() const { return m_multiLayerStorage; }
    template<typename MultiLayerStorageT = MultiLayerStorage>
    void SetMultiLayerStorage(MultiLayerStorageT&& value) { m_multiLayerStorageHasBeenSet = true; m_multiLayerStorage = std::forward<MultiLayerStorageT>(value); }
    template<typename MultiLayerStorageT = MultiLayerStorage>
    PutStorageConfigurationResult& WithMultiLayerStorage(MultiLayerStorageT&& value) { SetMultiLayerStorage(std::forward<MultiLayerStorageT>(value)); return *this;}
    ///@}

    ///@{
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
    inline DisassociatedDataStorageState GetDisassociatedDataStorage() const { return m_disassociatedDataStorage; }
    inline void SetDisassociatedDataStorage(DisassociatedDataStorageState value) { m_disassociatedDataStorageHasBeenSet = true; m_disassociatedDataStorage = value; }
    inline PutStorageConfigurationResult& WithDisassociatedDataStorage(DisassociatedDataStorageState value) { SetDisassociatedDataStorage(value); return *this;}
    ///@}

    ///@{
    
    inline const RetentionPeriod& GetRetentionPeriod() const { return m_retentionPeriod; }
    template<typename RetentionPeriodT = RetentionPeriod>
    void SetRetentionPeriod(RetentionPeriodT&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::forward<RetentionPeriodT>(value); }
    template<typename RetentionPeriodT = RetentionPeriod>
    PutStorageConfigurationResult& WithRetentionPeriod(RetentionPeriodT&& value) { SetRetentionPeriod(std::forward<RetentionPeriodT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ConfigurationStatus& GetConfigurationStatus() const { return m_configurationStatus; }
    template<typename ConfigurationStatusT = ConfigurationStatus>
    void SetConfigurationStatus(ConfigurationStatusT&& value) { m_configurationStatusHasBeenSet = true; m_configurationStatus = std::forward<ConfigurationStatusT>(value); }
    template<typename ConfigurationStatusT = ConfigurationStatus>
    PutStorageConfigurationResult& WithConfigurationStatus(ConfigurationStatusT&& value) { SetConfigurationStatus(std::forward<ConfigurationStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A service managed storage tier optimized for analytical queries. It stores
     * periodically uploaded, buffered and historical data ingested with the
     * CreaeBulkImportJob API.</p>
     */
    inline WarmTierState GetWarmTier() const { return m_warmTier; }
    inline void SetWarmTier(WarmTierState value) { m_warmTierHasBeenSet = true; m_warmTier = value; }
    inline PutStorageConfigurationResult& WithWarmTier(WarmTierState value) { SetWarmTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this period to specify how long your data is stored in the warm tier
     * before it is deleted. You can set this only if cold tier is enabled.</p>
     */
    inline const WarmTierRetentionPeriod& GetWarmTierRetentionPeriod() const { return m_warmTierRetentionPeriod; }
    template<typename WarmTierRetentionPeriodT = WarmTierRetentionPeriod>
    void SetWarmTierRetentionPeriod(WarmTierRetentionPeriodT&& value) { m_warmTierRetentionPeriodHasBeenSet = true; m_warmTierRetentionPeriod = std::forward<WarmTierRetentionPeriodT>(value); }
    template<typename WarmTierRetentionPeriodT = WarmTierRetentionPeriod>
    PutStorageConfigurationResult& WithWarmTierRetentionPeriod(WarmTierRetentionPeriodT&& value) { SetWarmTierRetentionPeriod(std::forward<WarmTierRetentionPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the configuration for ingesting NULL and NaN data. By default the
     * feature is allowed. The feature is disallowed if the value is
     * <code>true</code>.</p>
     */
    inline bool GetDisallowIngestNullNaN() const { return m_disallowIngestNullNaN; }
    inline void SetDisallowIngestNullNaN(bool value) { m_disallowIngestNullNaNHasBeenSet = true; m_disallowIngestNullNaN = value; }
    inline PutStorageConfigurationResult& WithDisallowIngestNullNaN(bool value) { SetDisallowIngestNullNaN(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutStorageConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    StorageType m_storageType{StorageType::NOT_SET};
    bool m_storageTypeHasBeenSet = false;

    MultiLayerStorage m_multiLayerStorage;
    bool m_multiLayerStorageHasBeenSet = false;

    DisassociatedDataStorageState m_disassociatedDataStorage{DisassociatedDataStorageState::NOT_SET};
    bool m_disassociatedDataStorageHasBeenSet = false;

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    ConfigurationStatus m_configurationStatus;
    bool m_configurationStatusHasBeenSet = false;

    WarmTierState m_warmTier{WarmTierState::NOT_SET};
    bool m_warmTierHasBeenSet = false;

    WarmTierRetentionPeriod m_warmTierRetentionPeriod;
    bool m_warmTierRetentionPeriodHasBeenSet = false;

    bool m_disallowIngestNullNaN{false};
    bool m_disallowIngestNullNaNHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
