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
  class AWS_ELASTICACHE_API CacheParameterGroup
  {
  public:
    CacheParameterGroup();
    CacheParameterGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    CacheParameterGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline CacheParameterGroup& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline CacheParameterGroup& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline CacheParameterGroup& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}


    /**
     * <p>The name of the cache parameter group family that this cache parameter group
     * is compatible with.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     */
    inline const Aws::String& GetCacheParameterGroupFamily() const{ return m_cacheParameterGroupFamily; }

    /**
     * <p>The name of the cache parameter group family that this cache parameter group
     * is compatible with.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     */
    inline bool CacheParameterGroupFamilyHasBeenSet() const { return m_cacheParameterGroupFamilyHasBeenSet; }

    /**
     * <p>The name of the cache parameter group family that this cache parameter group
     * is compatible with.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     */
    inline void SetCacheParameterGroupFamily(const Aws::String& value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily = value; }

    /**
     * <p>The name of the cache parameter group family that this cache parameter group
     * is compatible with.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     */
    inline void SetCacheParameterGroupFamily(Aws::String&& value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily = std::move(value); }

    /**
     * <p>The name of the cache parameter group family that this cache parameter group
     * is compatible with.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     */
    inline void SetCacheParameterGroupFamily(const char* value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily.assign(value); }

    /**
     * <p>The name of the cache parameter group family that this cache parameter group
     * is compatible with.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     */
    inline CacheParameterGroup& WithCacheParameterGroupFamily(const Aws::String& value) { SetCacheParameterGroupFamily(value); return *this;}

    /**
     * <p>The name of the cache parameter group family that this cache parameter group
     * is compatible with.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     */
    inline CacheParameterGroup& WithCacheParameterGroupFamily(Aws::String&& value) { SetCacheParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>The name of the cache parameter group family that this cache parameter group
     * is compatible with.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     */
    inline CacheParameterGroup& WithCacheParameterGroupFamily(const char* value) { SetCacheParameterGroupFamily(value); return *this;}


    /**
     * <p>The description for this cache parameter group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for this cache parameter group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for this cache parameter group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for this cache parameter group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for this cache parameter group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for this cache parameter group.</p>
     */
    inline CacheParameterGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for this cache parameter group.</p>
     */
    inline CacheParameterGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for this cache parameter group.</p>
     */
    inline CacheParameterGroup& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet;

    Aws::String m_cacheParameterGroupFamily;
    bool m_cacheParameterGroupFamilyHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
