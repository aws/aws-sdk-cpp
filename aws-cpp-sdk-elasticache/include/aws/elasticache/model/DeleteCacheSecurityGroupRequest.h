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
   * <p>Represents the input of a <code>DeleteCacheSecurityGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteCacheSecurityGroupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API DeleteCacheSecurityGroupRequest : public ElastiCacheRequest
  {
  public:
    DeleteCacheSecurityGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the cache security group to delete.</p> <note> <p>You cannot
     * delete the default security group.</p> </note>
     */
    inline const Aws::String& GetCacheSecurityGroupName() const{ return m_cacheSecurityGroupName; }

    /**
     * <p>The name of the cache security group to delete.</p> <note> <p>You cannot
     * delete the default security group.</p> </note>
     */
    inline void SetCacheSecurityGroupName(const Aws::String& value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName = value; }

    /**
     * <p>The name of the cache security group to delete.</p> <note> <p>You cannot
     * delete the default security group.</p> </note>
     */
    inline void SetCacheSecurityGroupName(Aws::String&& value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName = value; }

    /**
     * <p>The name of the cache security group to delete.</p> <note> <p>You cannot
     * delete the default security group.</p> </note>
     */
    inline void SetCacheSecurityGroupName(const char* value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName.assign(value); }

    /**
     * <p>The name of the cache security group to delete.</p> <note> <p>You cannot
     * delete the default security group.</p> </note>
     */
    inline DeleteCacheSecurityGroupRequest& WithCacheSecurityGroupName(const Aws::String& value) { SetCacheSecurityGroupName(value); return *this;}

    /**
     * <p>The name of the cache security group to delete.</p> <note> <p>You cannot
     * delete the default security group.</p> </note>
     */
    inline DeleteCacheSecurityGroupRequest& WithCacheSecurityGroupName(Aws::String&& value) { SetCacheSecurityGroupName(value); return *this;}

    /**
     * <p>The name of the cache security group to delete.</p> <note> <p>You cannot
     * delete the default security group.</p> </note>
     */
    inline DeleteCacheSecurityGroupRequest& WithCacheSecurityGroupName(const char* value) { SetCacheSecurityGroupName(value); return *this;}

  private:
    Aws::String m_cacheSecurityGroupName;
    bool m_cacheSecurityGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
