﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>CreateCacheParameterGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheParameterGroupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API CreateCacheParameterGroupRequest : public ElastiCacheRequest
  {
  public:
    CreateCacheParameterGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A user-specified name for the cache parameter group.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }

    /**
     * <p>A user-specified name for the cache parameter group.</p>
     */
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>A user-specified name for the cache parameter group.</p>
     */
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>A user-specified name for the cache parameter group.</p>
     */
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName.assign(value); }

    /**
     * <p>A user-specified name for the cache parameter group.</p>
     */
    inline CreateCacheParameterGroupRequest& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>A user-specified name for the cache parameter group.</p>
     */
    inline CreateCacheParameterGroupRequest& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>A user-specified name for the cache parameter group.</p>
     */
    inline CreateCacheParameterGroupRequest& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cache parameter group family that the cache parameter group
     * can be used with.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>redis2.6</code> | <code>redis2.8</code> | <code>redis3.2</code> </p>
     */
    inline const Aws::String& GetCacheParameterGroupFamily() const{ return m_cacheParameterGroupFamily; }

    /**
     * <p>The name of the cache parameter group family that the cache parameter group
     * can be used with.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>redis2.6</code> | <code>redis2.8</code> | <code>redis3.2</code> </p>
     */
    inline void SetCacheParameterGroupFamily(const Aws::String& value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily = value; }

    /**
     * <p>The name of the cache parameter group family that the cache parameter group
     * can be used with.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>redis2.6</code> | <code>redis2.8</code> | <code>redis3.2</code> </p>
     */
    inline void SetCacheParameterGroupFamily(Aws::String&& value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily = value; }

    /**
     * <p>The name of the cache parameter group family that the cache parameter group
     * can be used with.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>redis2.6</code> | <code>redis2.8</code> | <code>redis3.2</code> </p>
     */
    inline void SetCacheParameterGroupFamily(const char* value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily.assign(value); }

    /**
     * <p>The name of the cache parameter group family that the cache parameter group
     * can be used with.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>redis2.6</code> | <code>redis2.8</code> | <code>redis3.2</code> </p>
     */
    inline CreateCacheParameterGroupRequest& WithCacheParameterGroupFamily(const Aws::String& value) { SetCacheParameterGroupFamily(value); return *this;}

    /**
     * <p>The name of the cache parameter group family that the cache parameter group
     * can be used with.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>redis2.6</code> | <code>redis2.8</code> | <code>redis3.2</code> </p>
     */
    inline CreateCacheParameterGroupRequest& WithCacheParameterGroupFamily(Aws::String&& value) { SetCacheParameterGroupFamily(value); return *this;}

    /**
     * <p>The name of the cache parameter group family that the cache parameter group
     * can be used with.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>redis2.6</code> | <code>redis2.8</code> | <code>redis3.2</code> </p>
     */
    inline CreateCacheParameterGroupRequest& WithCacheParameterGroupFamily(const char* value) { SetCacheParameterGroupFamily(value); return *this;}

    /**
     * <p>A user-specified description for the cache parameter group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A user-specified description for the cache parameter group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A user-specified description for the cache parameter group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A user-specified description for the cache parameter group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A user-specified description for the cache parameter group.</p>
     */
    inline CreateCacheParameterGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A user-specified description for the cache parameter group.</p>
     */
    inline CreateCacheParameterGroupRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A user-specified description for the cache parameter group.</p>
     */
    inline CreateCacheParameterGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

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
