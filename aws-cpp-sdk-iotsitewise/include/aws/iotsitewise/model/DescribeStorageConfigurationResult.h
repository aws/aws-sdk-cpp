/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/StorageType.h>
#include <aws/iotsitewise/model/MultiLayerStorage.h>
#include <aws/iotsitewise/model/ConfigurationStatus.h>
#include <aws/core/utils/DateTime.h>
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
  class AWS_IOTSITEWISE_API DescribeStorageConfigurationResult
  {
  public:
    DescribeStorageConfigurationResult();
    DescribeStorageConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeStorageConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetStorageType(const StorageType& value) { m_storageType = value; }

    /**
     * <p>The type of storage that you specified for your data. The storage type can be
     * one of the following values:</p> <ul> <li> <p>
     * <code>SITEWISE_DEFAULT_STORAGE</code> – IoT SiteWise replicates your data into a
     * service managed database.</p> </li> <li> <p> <code>MULTI_LAYER_STORAGE</code> –
     * IoT SiteWise replicates your data into a service managed database and saves a
     * copy of your raw data and metadata in an Amazon S3 object that you
     * specified.</p> </li> </ul>
     */
    inline void SetStorageType(StorageType&& value) { m_storageType = std::move(value); }

    /**
     * <p>The type of storage that you specified for your data. The storage type can be
     * one of the following values:</p> <ul> <li> <p>
     * <code>SITEWISE_DEFAULT_STORAGE</code> – IoT SiteWise replicates your data into a
     * service managed database.</p> </li> <li> <p> <code>MULTI_LAYER_STORAGE</code> –
     * IoT SiteWise replicates your data into a service managed database and saves a
     * copy of your raw data and metadata in an Amazon S3 object that you
     * specified.</p> </li> </ul>
     */
    inline DescribeStorageConfigurationResult& WithStorageType(const StorageType& value) { SetStorageType(value); return *this;}

    /**
     * <p>The type of storage that you specified for your data. The storage type can be
     * one of the following values:</p> <ul> <li> <p>
     * <code>SITEWISE_DEFAULT_STORAGE</code> – IoT SiteWise replicates your data into a
     * service managed database.</p> </li> <li> <p> <code>MULTI_LAYER_STORAGE</code> –
     * IoT SiteWise replicates your data into a service managed database and saves a
     * copy of your raw data and metadata in an Amazon S3 object that you
     * specified.</p> </li> </ul>
     */
    inline DescribeStorageConfigurationResult& WithStorageType(StorageType&& value) { SetStorageType(std::move(value)); return *this;}


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
    inline DescribeStorageConfigurationResult& WithMultiLayerStorage(const MultiLayerStorage& value) { SetMultiLayerStorage(value); return *this;}

    /**
     * <p>Contains information about the storage destination.</p>
     */
    inline DescribeStorageConfigurationResult& WithMultiLayerStorage(MultiLayerStorage&& value) { SetMultiLayerStorage(std::move(value)); return *this;}


    
    inline const ConfigurationStatus& GetConfigurationStatus() const{ return m_configurationStatus; }

    
    inline void SetConfigurationStatus(const ConfigurationStatus& value) { m_configurationStatus = value; }

    
    inline void SetConfigurationStatus(ConfigurationStatus&& value) { m_configurationStatus = std::move(value); }

    
    inline DescribeStorageConfigurationResult& WithConfigurationStatus(const ConfigurationStatus& value) { SetConfigurationStatus(value); return *this;}

    
    inline DescribeStorageConfigurationResult& WithConfigurationStatus(ConfigurationStatus&& value) { SetConfigurationStatus(std::move(value)); return *this;}


    /**
     * <p>The date the storage configuration was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDate() const{ return m_lastUpdateDate; }

    /**
     * <p>The date the storage configuration was last updated, in Unix epoch time.</p>
     */
    inline void SetLastUpdateDate(const Aws::Utils::DateTime& value) { m_lastUpdateDate = value; }

    /**
     * <p>The date the storage configuration was last updated, in Unix epoch time.</p>
     */
    inline void SetLastUpdateDate(Aws::Utils::DateTime&& value) { m_lastUpdateDate = std::move(value); }

    /**
     * <p>The date the storage configuration was last updated, in Unix epoch time.</p>
     */
    inline DescribeStorageConfigurationResult& WithLastUpdateDate(const Aws::Utils::DateTime& value) { SetLastUpdateDate(value); return *this;}

    /**
     * <p>The date the storage configuration was last updated, in Unix epoch time.</p>
     */
    inline DescribeStorageConfigurationResult& WithLastUpdateDate(Aws::Utils::DateTime&& value) { SetLastUpdateDate(std::move(value)); return *this;}

  private:

    StorageType m_storageType;

    MultiLayerStorage m_multiLayerStorage;

    ConfigurationStatus m_configurationStatus;

    Aws::Utils::DateTime m_lastUpdateDate;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
