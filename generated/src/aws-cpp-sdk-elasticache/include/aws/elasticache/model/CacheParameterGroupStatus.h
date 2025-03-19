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
    AWS_ELASTICACHE_API CacheParameterGroupStatus() = default;
    AWS_ELASTICACHE_API CacheParameterGroupStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API CacheParameterGroupStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const { return m_cacheParameterGroupName; }
    inline bool CacheParameterGroupNameHasBeenSet() const { return m_cacheParameterGroupNameHasBeenSet; }
    template<typename CacheParameterGroupNameT = Aws::String>
    void SetCacheParameterGroupName(CacheParameterGroupNameT&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = std::forward<CacheParameterGroupNameT>(value); }
    template<typename CacheParameterGroupNameT = Aws::String>
    CacheParameterGroupStatus& WithCacheParameterGroupName(CacheParameterGroupNameT&& value) { SetCacheParameterGroupName(std::forward<CacheParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of parameter updates.</p>
     */
    inline const Aws::String& GetParameterApplyStatus() const { return m_parameterApplyStatus; }
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }
    template<typename ParameterApplyStatusT = Aws::String>
    void SetParameterApplyStatus(ParameterApplyStatusT&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::forward<ParameterApplyStatusT>(value); }
    template<typename ParameterApplyStatusT = Aws::String>
    CacheParameterGroupStatus& WithParameterApplyStatus(ParameterApplyStatusT&& value) { SetParameterApplyStatus(std::forward<ParameterApplyStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the cache node IDs which need to be rebooted for parameter changes
     * to be applied. A node ID is a numeric identifier (0001, 0002, etc.).</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheNodeIdsToReboot() const { return m_cacheNodeIdsToReboot; }
    inline bool CacheNodeIdsToRebootHasBeenSet() const { return m_cacheNodeIdsToRebootHasBeenSet; }
    template<typename CacheNodeIdsToRebootT = Aws::Vector<Aws::String>>
    void SetCacheNodeIdsToReboot(CacheNodeIdsToRebootT&& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot = std::forward<CacheNodeIdsToRebootT>(value); }
    template<typename CacheNodeIdsToRebootT = Aws::Vector<Aws::String>>
    CacheParameterGroupStatus& WithCacheNodeIdsToReboot(CacheNodeIdsToRebootT&& value) { SetCacheNodeIdsToReboot(std::forward<CacheNodeIdsToRebootT>(value)); return *this;}
    template<typename CacheNodeIdsToRebootT = Aws::String>
    CacheParameterGroupStatus& AddCacheNodeIdsToReboot(CacheNodeIdsToRebootT&& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot.emplace_back(std::forward<CacheNodeIdsToRebootT>(value)); return *this; }
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
