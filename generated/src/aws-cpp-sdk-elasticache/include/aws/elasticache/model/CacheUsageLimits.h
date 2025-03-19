/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticache/model/DataStorage.h>
#include <aws/elasticache/model/ECPUPerSecond.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>The usage limits for storage and ElastiCache Processing Units for the
   * cache.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CacheUsageLimits">AWS
   * API Reference</a></p>
   */
  class CacheUsageLimits
  {
  public:
    AWS_ELASTICACHE_API CacheUsageLimits() = default;
    AWS_ELASTICACHE_API CacheUsageLimits(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API CacheUsageLimits& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> The maximum data storage limit in the cache, expressed in Gigabytes. </p>
     */
    inline const DataStorage& GetDataStorage() const { return m_dataStorage; }
    inline bool DataStorageHasBeenSet() const { return m_dataStorageHasBeenSet; }
    template<typename DataStorageT = DataStorage>
    void SetDataStorage(DataStorageT&& value) { m_dataStorageHasBeenSet = true; m_dataStorage = std::forward<DataStorageT>(value); }
    template<typename DataStorageT = DataStorage>
    CacheUsageLimits& WithDataStorage(DataStorageT&& value) { SetDataStorage(std::forward<DataStorageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ECPUPerSecond& GetECPUPerSecond() const { return m_eCPUPerSecond; }
    inline bool ECPUPerSecondHasBeenSet() const { return m_eCPUPerSecondHasBeenSet; }
    template<typename ECPUPerSecondT = ECPUPerSecond>
    void SetECPUPerSecond(ECPUPerSecondT&& value) { m_eCPUPerSecondHasBeenSet = true; m_eCPUPerSecond = std::forward<ECPUPerSecondT>(value); }
    template<typename ECPUPerSecondT = ECPUPerSecond>
    CacheUsageLimits& WithECPUPerSecond(ECPUPerSecondT&& value) { SetECPUPerSecond(std::forward<ECPUPerSecondT>(value)); return *this;}
    ///@}
  private:

    DataStorage m_dataStorage;
    bool m_dataStorageHasBeenSet = false;

    ECPUPerSecond m_eCPUPerSecond;
    bool m_eCPUPerSecondHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
