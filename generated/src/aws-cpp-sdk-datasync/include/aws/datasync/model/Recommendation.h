/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>The details about an Amazon Web Services storage service that DataSync
   * Discovery recommends for a resource in your on-premises storage system.</p>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
   * provided by DataSync Discovery</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/Recommendation">AWS
   * API Reference</a></p>
   */
  class Recommendation
  {
  public:
    AWS_DATASYNC_API Recommendation();
    AWS_DATASYNC_API Recommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A recommended Amazon Web Services storage service that you can migrate data
     * to based on information that DataSync Discovery collects about your on-premises
     * storage system.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>A recommended Amazon Web Services storage service that you can migrate data
     * to based on information that DataSync Discovery collects about your on-premises
     * storage system.</p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>A recommended Amazon Web Services storage service that you can migrate data
     * to based on information that DataSync Discovery collects about your on-premises
     * storage system.</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>A recommended Amazon Web Services storage service that you can migrate data
     * to based on information that DataSync Discovery collects about your on-premises
     * storage system.</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>A recommended Amazon Web Services storage service that you can migrate data
     * to based on information that DataSync Discovery collects about your on-premises
     * storage system.</p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>A recommended Amazon Web Services storage service that you can migrate data
     * to based on information that DataSync Discovery collects about your on-premises
     * storage system.</p>
     */
    inline Recommendation& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>A recommended Amazon Web Services storage service that you can migrate data
     * to based on information that DataSync Discovery collects about your on-premises
     * storage system.</p>
     */
    inline Recommendation& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>A recommended Amazon Web Services storage service that you can migrate data
     * to based on information that DataSync Discovery collects about your on-premises
     * storage system.</p>
     */
    inline Recommendation& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>Information about how you can set up a recommended Amazon Web Services
     * storage service.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStorageConfiguration() const{ return m_storageConfiguration; }

    /**
     * <p>Information about how you can set up a recommended Amazon Web Services
     * storage service.</p>
     */
    inline bool StorageConfigurationHasBeenSet() const { return m_storageConfigurationHasBeenSet; }

    /**
     * <p>Information about how you can set up a recommended Amazon Web Services
     * storage service.</p>
     */
    inline void SetStorageConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration = value; }

    /**
     * <p>Information about how you can set up a recommended Amazon Web Services
     * storage service.</p>
     */
    inline void SetStorageConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration = std::move(value); }

    /**
     * <p>Information about how you can set up a recommended Amazon Web Services
     * storage service.</p>
     */
    inline Recommendation& WithStorageConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetStorageConfiguration(value); return *this;}

    /**
     * <p>Information about how you can set up a recommended Amazon Web Services
     * storage service.</p>
     */
    inline Recommendation& WithStorageConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetStorageConfiguration(std::move(value)); return *this;}

    /**
     * <p>Information about how you can set up a recommended Amazon Web Services
     * storage service.</p>
     */
    inline Recommendation& AddStorageConfiguration(const Aws::String& key, const Aws::String& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration.emplace(key, value); return *this; }

    /**
     * <p>Information about how you can set up a recommended Amazon Web Services
     * storage service.</p>
     */
    inline Recommendation& AddStorageConfiguration(Aws::String&& key, const Aws::String& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration.emplace(std::move(key), value); return *this; }

    /**
     * <p>Information about how you can set up a recommended Amazon Web Services
     * storage service.</p>
     */
    inline Recommendation& AddStorageConfiguration(const Aws::String& key, Aws::String&& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Information about how you can set up a recommended Amazon Web Services
     * storage service.</p>
     */
    inline Recommendation& AddStorageConfiguration(Aws::String&& key, Aws::String&& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Information about how you can set up a recommended Amazon Web Services
     * storage service.</p>
     */
    inline Recommendation& AddStorageConfiguration(const char* key, Aws::String&& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Information about how you can set up a recommended Amazon Web Services
     * storage service.</p>
     */
    inline Recommendation& AddStorageConfiguration(Aws::String&& key, const char* value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration.emplace(std::move(key), value); return *this; }

    /**
     * <p>Information about how you can set up a recommended Amazon Web Services
     * storage service.</p>
     */
    inline Recommendation& AddStorageConfiguration(const char* key, const char* value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration.emplace(key, value); return *this; }


    /**
     * <p>The estimated monthly cost of the recommended Amazon Web Services storage
     * service.</p>
     */
    inline const Aws::String& GetEstimatedMonthlyStorageCost() const{ return m_estimatedMonthlyStorageCost; }

    /**
     * <p>The estimated monthly cost of the recommended Amazon Web Services storage
     * service.</p>
     */
    inline bool EstimatedMonthlyStorageCostHasBeenSet() const { return m_estimatedMonthlyStorageCostHasBeenSet; }

    /**
     * <p>The estimated monthly cost of the recommended Amazon Web Services storage
     * service.</p>
     */
    inline void SetEstimatedMonthlyStorageCost(const Aws::String& value) { m_estimatedMonthlyStorageCostHasBeenSet = true; m_estimatedMonthlyStorageCost = value; }

    /**
     * <p>The estimated monthly cost of the recommended Amazon Web Services storage
     * service.</p>
     */
    inline void SetEstimatedMonthlyStorageCost(Aws::String&& value) { m_estimatedMonthlyStorageCostHasBeenSet = true; m_estimatedMonthlyStorageCost = std::move(value); }

    /**
     * <p>The estimated monthly cost of the recommended Amazon Web Services storage
     * service.</p>
     */
    inline void SetEstimatedMonthlyStorageCost(const char* value) { m_estimatedMonthlyStorageCostHasBeenSet = true; m_estimatedMonthlyStorageCost.assign(value); }

    /**
     * <p>The estimated monthly cost of the recommended Amazon Web Services storage
     * service.</p>
     */
    inline Recommendation& WithEstimatedMonthlyStorageCost(const Aws::String& value) { SetEstimatedMonthlyStorageCost(value); return *this;}

    /**
     * <p>The estimated monthly cost of the recommended Amazon Web Services storage
     * service.</p>
     */
    inline Recommendation& WithEstimatedMonthlyStorageCost(Aws::String&& value) { SetEstimatedMonthlyStorageCost(std::move(value)); return *this;}

    /**
     * <p>The estimated monthly cost of the recommended Amazon Web Services storage
     * service.</p>
     */
    inline Recommendation& WithEstimatedMonthlyStorageCost(const char* value) { SetEstimatedMonthlyStorageCost(value); return *this;}

  private:

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_storageConfiguration;
    bool m_storageConfigurationHasBeenSet = false;

    Aws::String m_estimatedMonthlyStorageCost;
    bool m_estimatedMonthlyStorageCostHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
