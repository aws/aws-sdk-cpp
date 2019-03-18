/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ELASTICACHE_API CacheParameterGroupStatus
  {
  public:
    CacheParameterGroupStatus();
    CacheParameterGroupStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    CacheParameterGroupStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline bool CacheParameterGroupNameHasBeenSet() const { return m_cacheParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = std::move(value); }

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName.assign(value); }

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline CacheParameterGroupStatus& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline CacheParameterGroupStatus& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline CacheParameterGroupStatus& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}


    /**
     * <p>The status of parameter updates.</p>
     */
    inline const Aws::String& GetParameterApplyStatus() const{ return m_parameterApplyStatus; }

    /**
     * <p>The status of parameter updates.</p>
     */
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }

    /**
     * <p>The status of parameter updates.</p>
     */
    inline void SetParameterApplyStatus(const Aws::String& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = value; }

    /**
     * <p>The status of parameter updates.</p>
     */
    inline void SetParameterApplyStatus(Aws::String&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::move(value); }

    /**
     * <p>The status of parameter updates.</p>
     */
    inline void SetParameterApplyStatus(const char* value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus.assign(value); }

    /**
     * <p>The status of parameter updates.</p>
     */
    inline CacheParameterGroupStatus& WithParameterApplyStatus(const Aws::String& value) { SetParameterApplyStatus(value); return *this;}

    /**
     * <p>The status of parameter updates.</p>
     */
    inline CacheParameterGroupStatus& WithParameterApplyStatus(Aws::String&& value) { SetParameterApplyStatus(std::move(value)); return *this;}

    /**
     * <p>The status of parameter updates.</p>
     */
    inline CacheParameterGroupStatus& WithParameterApplyStatus(const char* value) { SetParameterApplyStatus(value); return *this;}


    /**
     * <p>A list of the cache node IDs which need to be rebooted for parameter changes
     * to be applied. A node ID is a numeric identifier (0001, 0002, etc.).</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheNodeIdsToReboot() const{ return m_cacheNodeIdsToReboot; }

    /**
     * <p>A list of the cache node IDs which need to be rebooted for parameter changes
     * to be applied. A node ID is a numeric identifier (0001, 0002, etc.).</p>
     */
    inline bool CacheNodeIdsToRebootHasBeenSet() const { return m_cacheNodeIdsToRebootHasBeenSet; }

    /**
     * <p>A list of the cache node IDs which need to be rebooted for parameter changes
     * to be applied. A node ID is a numeric identifier (0001, 0002, etc.).</p>
     */
    inline void SetCacheNodeIdsToReboot(const Aws::Vector<Aws::String>& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot = value; }

    /**
     * <p>A list of the cache node IDs which need to be rebooted for parameter changes
     * to be applied. A node ID is a numeric identifier (0001, 0002, etc.).</p>
     */
    inline void SetCacheNodeIdsToReboot(Aws::Vector<Aws::String>&& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot = std::move(value); }

    /**
     * <p>A list of the cache node IDs which need to be rebooted for parameter changes
     * to be applied. A node ID is a numeric identifier (0001, 0002, etc.).</p>
     */
    inline CacheParameterGroupStatus& WithCacheNodeIdsToReboot(const Aws::Vector<Aws::String>& value) { SetCacheNodeIdsToReboot(value); return *this;}

    /**
     * <p>A list of the cache node IDs which need to be rebooted for parameter changes
     * to be applied. A node ID is a numeric identifier (0001, 0002, etc.).</p>
     */
    inline CacheParameterGroupStatus& WithCacheNodeIdsToReboot(Aws::Vector<Aws::String>&& value) { SetCacheNodeIdsToReboot(std::move(value)); return *this;}

    /**
     * <p>A list of the cache node IDs which need to be rebooted for parameter changes
     * to be applied. A node ID is a numeric identifier (0001, 0002, etc.).</p>
     */
    inline CacheParameterGroupStatus& AddCacheNodeIdsToReboot(const Aws::String& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot.push_back(value); return *this; }

    /**
     * <p>A list of the cache node IDs which need to be rebooted for parameter changes
     * to be applied. A node ID is a numeric identifier (0001, 0002, etc.).</p>
     */
    inline CacheParameterGroupStatus& AddCacheNodeIdsToReboot(Aws::String&& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the cache node IDs which need to be rebooted for parameter changes
     * to be applied. A node ID is a numeric identifier (0001, 0002, etc.).</p>
     */
    inline CacheParameterGroupStatus& AddCacheNodeIdsToReboot(const char* value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot.push_back(value); return *this; }

  private:

    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet;

    Aws::String m_parameterApplyStatus;
    bool m_parameterApplyStatusHasBeenSet;

    Aws::Vector<Aws::String> m_cacheNodeIdsToReboot;
    bool m_cacheNodeIdsToRebootHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
