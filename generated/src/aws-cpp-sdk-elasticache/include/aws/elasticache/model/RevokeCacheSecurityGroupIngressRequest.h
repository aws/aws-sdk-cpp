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
   * <p>Represents the input of a <code>RevokeCacheSecurityGroupIngress</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/RevokeCacheSecurityGroupIngressMessage">AWS
   * API Reference</a></p>
   */
  class RevokeCacheSecurityGroupIngressRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API RevokeCacheSecurityGroupIngressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeCacheSecurityGroupIngress"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the cache security group to revoke ingress from.</p>
     */
    inline const Aws::String& GetCacheSecurityGroupName() const{ return m_cacheSecurityGroupName; }
    inline bool CacheSecurityGroupNameHasBeenSet() const { return m_cacheSecurityGroupNameHasBeenSet; }
    inline void SetCacheSecurityGroupName(const Aws::String& value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName = value; }
    inline void SetCacheSecurityGroupName(Aws::String&& value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName = std::move(value); }
    inline void SetCacheSecurityGroupName(const char* value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName.assign(value); }
    inline RevokeCacheSecurityGroupIngressRequest& WithCacheSecurityGroupName(const Aws::String& value) { SetCacheSecurityGroupName(value); return *this;}
    inline RevokeCacheSecurityGroupIngressRequest& WithCacheSecurityGroupName(Aws::String&& value) { SetCacheSecurityGroupName(std::move(value)); return *this;}
    inline RevokeCacheSecurityGroupIngressRequest& WithCacheSecurityGroupName(const char* value) { SetCacheSecurityGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon EC2 security group to revoke access from.</p>
     */
    inline const Aws::String& GetEC2SecurityGroupName() const{ return m_eC2SecurityGroupName; }
    inline bool EC2SecurityGroupNameHasBeenSet() const { return m_eC2SecurityGroupNameHasBeenSet; }
    inline void SetEC2SecurityGroupName(const Aws::String& value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName = value; }
    inline void SetEC2SecurityGroupName(Aws::String&& value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName = std::move(value); }
    inline void SetEC2SecurityGroupName(const char* value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName.assign(value); }
    inline RevokeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupName(const Aws::String& value) { SetEC2SecurityGroupName(value); return *this;}
    inline RevokeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupName(Aws::String&& value) { SetEC2SecurityGroupName(std::move(value)); return *this;}
    inline RevokeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupName(const char* value) { SetEC2SecurityGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon account number of the Amazon EC2 security group owner. Note that
     * this is not the same thing as an Amazon access key ID - you must provide a valid
     * Amazon account number for this parameter.</p>
     */
    inline const Aws::String& GetEC2SecurityGroupOwnerId() const{ return m_eC2SecurityGroupOwnerId; }
    inline bool EC2SecurityGroupOwnerIdHasBeenSet() const { return m_eC2SecurityGroupOwnerIdHasBeenSet; }
    inline void SetEC2SecurityGroupOwnerId(const Aws::String& value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId = value; }
    inline void SetEC2SecurityGroupOwnerId(Aws::String&& value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId = std::move(value); }
    inline void SetEC2SecurityGroupOwnerId(const char* value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId.assign(value); }
    inline RevokeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(const Aws::String& value) { SetEC2SecurityGroupOwnerId(value); return *this;}
    inline RevokeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(Aws::String&& value) { SetEC2SecurityGroupOwnerId(std::move(value)); return *this;}
    inline RevokeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(const char* value) { SetEC2SecurityGroupOwnerId(value); return *this;}
    ///@}
  private:

    Aws::String m_cacheSecurityGroupName;
    bool m_cacheSecurityGroupNameHasBeenSet = false;

    Aws::String m_eC2SecurityGroupName;
    bool m_eC2SecurityGroupNameHasBeenSet = false;

    Aws::String m_eC2SecurityGroupOwnerId;
    bool m_eC2SecurityGroupOwnerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
