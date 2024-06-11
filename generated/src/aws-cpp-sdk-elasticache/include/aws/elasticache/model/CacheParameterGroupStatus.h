/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Status of the cache parameter group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CacheParameterGroupStatus">AWS
   * API Reference</a></p>
   */
  class CacheParameterGroupStatus
  {
  public:
    AWS_ELASTICACHE_API CacheParameterGroupStatus();
    AWS_ELASTICACHE_API CacheParameterGroupStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API CacheParameterGroupStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }
    inline bool CacheParameterGroupNameHasBeenSet() const { return m_cacheParameterGroupNameHasBeenSet; }
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = std::move(value); }
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName.assign(value); }
    inline CacheParameterGroupStatus& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}
    inline CacheParameterGroupStatus& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(std::move(value)); return *this;}
    inline CacheParameterGroupStatus& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of parameter updates.</p>
     */
    inline const Aws::String& GetParameterApplyStatus() const{ return m_parameterApplyStatus; }
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }
    inline void SetParameterApplyStatus(const Aws::String& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = value; }
    inline void SetParameterApplyStatus(Aws::String&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::move(value); }
    inline void SetParameterApplyStatus(const char* value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus.assign(value); }
    inline CacheParameterGroupStatus& WithParameterApplyStatus(const Aws::String& value) { SetParameterApplyStatus(value); return *this;}
    inline CacheParameterGroupStatus& WithParameterApplyStatus(Aws::String&& value) { SetParameterApplyStatus(std::move(value)); return *this;}
    inline CacheParameterGroupStatus& WithParameterApplyStatus(const char* value) { SetParameterApplyStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the cache node IDs which need to be rebooted for parameter changes
     * to be applied. A node ID is a numeric identifier (0001, 0002, etc.).</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheNodeIdsToReboot() const{ return m_cacheNodeIdsToReboot; }
    inline bool CacheNodeIdsToRebootHasBeenSet() const { return m_cacheNodeIdsToRebootHasBeenSet; }
    inline void SetCacheNodeIdsToReboot(const Aws::Vector<Aws::String>& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot = value; }
    inline void SetCacheNodeIdsToReboot(Aws::Vector<Aws::String>&& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot = std::move(value); }
    inline CacheParameterGroupStatus& WithCacheNodeIdsToReboot(const Aws::Vector<Aws::String>& value) { SetCacheNodeIdsToReboot(value); return *this;}
    inline CacheParameterGroupStatus& WithCacheNodeIdsToReboot(Aws::Vector<Aws::String>&& value) { SetCacheNodeIdsToReboot(std::move(value)); return *this;}
    inline CacheParameterGroupStatus& AddCacheNodeIdsToReboot(const Aws::String& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot.push_back(value); return *this; }
    inline CacheParameterGroupStatus& AddCacheNodeIdsToReboot(Aws::String&& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot.push_back(std::move(value)); return *this; }
    inline CacheParameterGroupStatus& AddCacheNodeIdsToReboot(const char* value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet = false;

    Aws::String m_parameterApplyStatus;
    bool m_parameterApplyStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_cacheNodeIdsToReboot;
    bool m_cacheNodeIdsToRebootHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
