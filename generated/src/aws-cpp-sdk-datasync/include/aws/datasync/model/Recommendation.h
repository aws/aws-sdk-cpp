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
    AWS_DATASYNC_API Recommendation() = default;
    AWS_DATASYNC_API Recommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A recommended Amazon Web Services storage service that you can migrate data
     * to based on information that DataSync Discovery collects about your on-premises
     * storage system.</p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    Recommendation& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about how you can set up a recommended Amazon Web Services
     * storage service.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStorageConfiguration() const { return m_storageConfiguration; }
    inline bool StorageConfigurationHasBeenSet() const { return m_storageConfigurationHasBeenSet; }
    template<typename StorageConfigurationT = Aws::Map<Aws::String, Aws::String>>
    void SetStorageConfiguration(StorageConfigurationT&& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration = std::forward<StorageConfigurationT>(value); }
    template<typename StorageConfigurationT = Aws::Map<Aws::String, Aws::String>>
    Recommendation& WithStorageConfiguration(StorageConfigurationT&& value) { SetStorageConfiguration(std::forward<StorageConfigurationT>(value)); return *this;}
    template<typename StorageConfigurationKeyT = Aws::String, typename StorageConfigurationValueT = Aws::String>
    Recommendation& AddStorageConfiguration(StorageConfigurationKeyT&& key, StorageConfigurationValueT&& value) {
      m_storageConfigurationHasBeenSet = true; m_storageConfiguration.emplace(std::forward<StorageConfigurationKeyT>(key), std::forward<StorageConfigurationValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The estimated monthly cost of the recommended Amazon Web Services storage
     * service.</p>
     */
    inline const Aws::String& GetEstimatedMonthlyStorageCost() const { return m_estimatedMonthlyStorageCost; }
    inline bool EstimatedMonthlyStorageCostHasBeenSet() const { return m_estimatedMonthlyStorageCostHasBeenSet; }
    template<typename EstimatedMonthlyStorageCostT = Aws::String>
    void SetEstimatedMonthlyStorageCost(EstimatedMonthlyStorageCostT&& value) { m_estimatedMonthlyStorageCostHasBeenSet = true; m_estimatedMonthlyStorageCost = std::forward<EstimatedMonthlyStorageCostT>(value); }
    template<typename EstimatedMonthlyStorageCostT = Aws::String>
    Recommendation& WithEstimatedMonthlyStorageCost(EstimatedMonthlyStorageCostT&& value) { SetEstimatedMonthlyStorageCost(std::forward<EstimatedMonthlyStorageCostT>(value)); return *this;}
    ///@}
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
