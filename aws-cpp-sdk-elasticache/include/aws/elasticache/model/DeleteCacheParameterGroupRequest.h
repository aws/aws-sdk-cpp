/*
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
   * <p>Represents the input of a <code>DeleteCacheParameterGroup</code>
   * operation.</p>
   */
  class AWS_ELASTICACHE_API DeleteCacheParameterGroupRequest : public ElastiCacheRequest
  {
  public:
    DeleteCacheParameterGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the cache parameter group to delete.</p> <note> <p>The specified
     * cache security group must not be associated with any cache clusters.</p> </note>
     */
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }

    /**
     * <p>The name of the cache parameter group to delete.</p> <note> <p>The specified
     * cache security group must not be associated with any cache clusters.</p> </note>
     */
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>The name of the cache parameter group to delete.</p> <note> <p>The specified
     * cache security group must not be associated with any cache clusters.</p> </note>
     */
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>The name of the cache parameter group to delete.</p> <note> <p>The specified
     * cache security group must not be associated with any cache clusters.</p> </note>
     */
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName.assign(value); }

    /**
     * <p>The name of the cache parameter group to delete.</p> <note> <p>The specified
     * cache security group must not be associated with any cache clusters.</p> </note>
     */
    inline DeleteCacheParameterGroupRequest& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cache parameter group to delete.</p> <note> <p>The specified
     * cache security group must not be associated with any cache clusters.</p> </note>
     */
    inline DeleteCacheParameterGroupRequest& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cache parameter group to delete.</p> <note> <p>The specified
     * cache security group must not be associated with any cache clusters.</p> </note>
     */
    inline DeleteCacheParameterGroupRequest& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}

  private:
    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
