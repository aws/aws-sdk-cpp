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
    AWS_ELASTICACHE_API CacheUsageLimits();
    AWS_ELASTICACHE_API CacheUsageLimits(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API CacheUsageLimits& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p> The maximum data storage limit in the cache, expressed in Gigabytes. </p>
     */
    inline const DataStorage& GetDataStorage() const{ return m_dataStorage; }

    /**
     * <p> The maximum data storage limit in the cache, expressed in Gigabytes. </p>
     */
    inline bool DataStorageHasBeenSet() const { return m_dataStorageHasBeenSet; }

    /**
     * <p> The maximum data storage limit in the cache, expressed in Gigabytes. </p>
     */
    inline void SetDataStorage(const DataStorage& value) { m_dataStorageHasBeenSet = true; m_dataStorage = value; }

    /**
     * <p> The maximum data storage limit in the cache, expressed in Gigabytes. </p>
     */
    inline void SetDataStorage(DataStorage&& value) { m_dataStorageHasBeenSet = true; m_dataStorage = std::move(value); }

    /**
     * <p> The maximum data storage limit in the cache, expressed in Gigabytes. </p>
     */
    inline CacheUsageLimits& WithDataStorage(const DataStorage& value) { SetDataStorage(value); return *this;}

    /**
     * <p> The maximum data storage limit in the cache, expressed in Gigabytes. </p>
     */
    inline CacheUsageLimits& WithDataStorage(DataStorage&& value) { SetDataStorage(std::move(value)); return *this;}


    
    inline const ECPUPerSecond& GetECPUPerSecond() const{ return m_eCPUPerSecond; }

    
    inline bool ECPUPerSecondHasBeenSet() const { return m_eCPUPerSecondHasBeenSet; }

    
    inline void SetECPUPerSecond(const ECPUPerSecond& value) { m_eCPUPerSecondHasBeenSet = true; m_eCPUPerSecond = value; }

    
    inline void SetECPUPerSecond(ECPUPerSecond&& value) { m_eCPUPerSecondHasBeenSet = true; m_eCPUPerSecond = std::move(value); }

    
    inline CacheUsageLimits& WithECPUPerSecond(const ECPUPerSecond& value) { SetECPUPerSecond(value); return *this;}

    
    inline CacheUsageLimits& WithECPUPerSecond(ECPUPerSecond&& value) { SetECPUPerSecond(std::move(value)); return *this;}

  private:

    DataStorage m_dataStorage;
    bool m_dataStorageHasBeenSet = false;

    ECPUPerSecond m_eCPUPerSecond;
    bool m_eCPUPerSecondHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
