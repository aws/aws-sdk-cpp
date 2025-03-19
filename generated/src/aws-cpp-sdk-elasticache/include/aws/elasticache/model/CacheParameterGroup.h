/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Represents the output of a <code>CreateCacheParameterGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CacheParameterGroup">AWS
   * API Reference</a></p>
   */
  class CacheParameterGroup
  {
  public:
    AWS_ELASTICACHE_API CacheParameterGroup() = default;
    AWS_ELASTICACHE_API CacheParameterGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API CacheParameterGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    CacheParameterGroup& WithCacheParameterGroupName(CacheParameterGroupNameT&& value) { SetCacheParameterGroupName(std::forward<CacheParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cache parameter group family that this cache parameter group
     * is compatible with.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>memcached1.6</code> | <code>redis2.6</code> |
     * <code>redis2.8</code> | <code>redis3.2</code> | <code>redis4.0</code> |
     * <code>redis5.0</code> | <code>redis6.x</code> | <code>redis7</code> </p>
     */
    inline const Aws::String& GetCacheParameterGroupFamily() const { return m_cacheParameterGroupFamily; }
    inline bool CacheParameterGroupFamilyHasBeenSet() const { return m_cacheParameterGroupFamilyHasBeenSet; }
    template<typename CacheParameterGroupFamilyT = Aws::String>
    void SetCacheParameterGroupFamily(CacheParameterGroupFamilyT&& value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily = std::forward<CacheParameterGroupFamilyT>(value); }
    template<typename CacheParameterGroupFamilyT = Aws::String>
    CacheParameterGroup& WithCacheParameterGroupFamily(CacheParameterGroupFamilyT&& value) { SetCacheParameterGroupFamily(std::forward<CacheParameterGroupFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for this cache parameter group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CacheParameterGroup& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the parameter group is associated with a Global
     * datastore</p>
     */
    inline bool GetIsGlobal() const { return m_isGlobal; }
    inline bool IsGlobalHasBeenSet() const { return m_isGlobalHasBeenSet; }
    inline void SetIsGlobal(bool value) { m_isGlobalHasBeenSet = true; m_isGlobal = value; }
    inline CacheParameterGroup& WithIsGlobal(bool value) { SetIsGlobal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the cache parameter group.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    CacheParameterGroup& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet = false;

    Aws::String m_cacheParameterGroupFamily;
    bool m_cacheParameterGroupFamilyHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_isGlobal{false};
    bool m_isGlobalHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
