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
   * <p>Represents the input of a <code>DeleteCacheSubnetGroup</code> operation.</p>
   */
  class AWS_ELASTICACHE_API DeleteCacheSubnetGroupRequest : public ElastiCacheRequest
  {
  public:
    DeleteCacheSubnetGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the cache subnet group to delete.</p> <p>Constraints: Must
     * contain no more than 255 alphanumeric characters or hyphens.</p>
     */
    inline const Aws::String& GetCacheSubnetGroupName() const{ return m_cacheSubnetGroupName; }

    /**
     * <p>The name of the cache subnet group to delete.</p> <p>Constraints: Must
     * contain no more than 255 alphanumeric characters or hyphens.</p>
     */
    inline void SetCacheSubnetGroupName(const Aws::String& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = value; }

    /**
     * <p>The name of the cache subnet group to delete.</p> <p>Constraints: Must
     * contain no more than 255 alphanumeric characters or hyphens.</p>
     */
    inline void SetCacheSubnetGroupName(Aws::String&& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = value; }

    /**
     * <p>The name of the cache subnet group to delete.</p> <p>Constraints: Must
     * contain no more than 255 alphanumeric characters or hyphens.</p>
     */
    inline void SetCacheSubnetGroupName(const char* value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName.assign(value); }

    /**
     * <p>The name of the cache subnet group to delete.</p> <p>Constraints: Must
     * contain no more than 255 alphanumeric characters or hyphens.</p>
     */
    inline DeleteCacheSubnetGroupRequest& WithCacheSubnetGroupName(const Aws::String& value) { SetCacheSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the cache subnet group to delete.</p> <p>Constraints: Must
     * contain no more than 255 alphanumeric characters or hyphens.</p>
     */
    inline DeleteCacheSubnetGroupRequest& WithCacheSubnetGroupName(Aws::String&& value) { SetCacheSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the cache subnet group to delete.</p> <p>Constraints: Must
     * contain no more than 255 alphanumeric characters or hyphens.</p>
     */
    inline DeleteCacheSubnetGroupRequest& WithCacheSubnetGroupName(const char* value) { SetCacheSubnetGroupName(value); return *this;}

  private:
    Aws::String m_cacheSubnetGroupName;
    bool m_cacheSubnetGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
