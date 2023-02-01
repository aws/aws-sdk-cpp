/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
  class DeleteCacheSecurityGroupRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API DeleteCacheSecurityGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCacheSecurityGroup"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the cache security group to delete.</p>  <p>You cannot
     * delete the default security group.</p> 
     */
    inline const Aws::String& GetCacheSecurityGroupName() const{ return m_cacheSecurityGroupName; }

    /**
     * <p>The name of the cache security group to delete.</p>  <p>You cannot
     * delete the default security group.</p> 
     */
    inline bool CacheSecurityGroupNameHasBeenSet() const { return m_cacheSecurityGroupNameHasBeenSet; }

    /**
     * <p>The name of the cache security group to delete.</p>  <p>You cannot
     * delete the default security group.</p> 
     */
    inline void SetCacheSecurityGroupName(const Aws::String& value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName = value; }

    /**
     * <p>The name of the cache security group to delete.</p>  <p>You cannot
     * delete the default security group.</p> 
     */
    inline void SetCacheSecurityGroupName(Aws::String&& value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName = std::move(value); }

    /**
     * <p>The name of the cache security group to delete.</p>  <p>You cannot
     * delete the default security group.</p> 
     */
    inline void SetCacheSecurityGroupName(const char* value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName.assign(value); }

    /**
     * <p>The name of the cache security group to delete.</p>  <p>You cannot
     * delete the default security group.</p> 
     */
    inline DeleteCacheSecurityGroupRequest& WithCacheSecurityGroupName(const Aws::String& value) { SetCacheSecurityGroupName(value); return *this;}

    /**
     * <p>The name of the cache security group to delete.</p>  <p>You cannot
     * delete the default security group.</p> 
     */
    inline DeleteCacheSecurityGroupRequest& WithCacheSecurityGroupName(Aws::String&& value) { SetCacheSecurityGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cache security group to delete.</p>  <p>You cannot
     * delete the default security group.</p> 
     */
    inline DeleteCacheSecurityGroupRequest& WithCacheSecurityGroupName(const char* value) { SetCacheSecurityGroupName(value); return *this;}

  private:

    Aws::String m_cacheSecurityGroupName;
    bool m_cacheSecurityGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
