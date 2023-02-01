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
   * <p>Represents the input of an AuthorizeCacheSecurityGroupIngress
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/AuthorizeCacheSecurityGroupIngressMessage">AWS
   * API Reference</a></p>
   */
  class AuthorizeCacheSecurityGroupIngressRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API AuthorizeCacheSecurityGroupIngressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AuthorizeCacheSecurityGroupIngress"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The cache security group that allows network ingress.</p>
     */
    inline const Aws::String& GetCacheSecurityGroupName() const{ return m_cacheSecurityGroupName; }

    /**
     * <p>The cache security group that allows network ingress.</p>
     */
    inline bool CacheSecurityGroupNameHasBeenSet() const { return m_cacheSecurityGroupNameHasBeenSet; }

    /**
     * <p>The cache security group that allows network ingress.</p>
     */
    inline void SetCacheSecurityGroupName(const Aws::String& value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName = value; }

    /**
     * <p>The cache security group that allows network ingress.</p>
     */
    inline void SetCacheSecurityGroupName(Aws::String&& value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName = std::move(value); }

    /**
     * <p>The cache security group that allows network ingress.</p>
     */
    inline void SetCacheSecurityGroupName(const char* value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName.assign(value); }

    /**
     * <p>The cache security group that allows network ingress.</p>
     */
    inline AuthorizeCacheSecurityGroupIngressRequest& WithCacheSecurityGroupName(const Aws::String& value) { SetCacheSecurityGroupName(value); return *this;}

    /**
     * <p>The cache security group that allows network ingress.</p>
     */
    inline AuthorizeCacheSecurityGroupIngressRequest& WithCacheSecurityGroupName(Aws::String&& value) { SetCacheSecurityGroupName(std::move(value)); return *this;}

    /**
     * <p>The cache security group that allows network ingress.</p>
     */
    inline AuthorizeCacheSecurityGroupIngressRequest& WithCacheSecurityGroupName(const char* value) { SetCacheSecurityGroupName(value); return *this;}


    /**
     * <p>The Amazon EC2 security group to be authorized for ingress to the cache
     * security group.</p>
     */
    inline const Aws::String& GetEC2SecurityGroupName() const{ return m_eC2SecurityGroupName; }

    /**
     * <p>The Amazon EC2 security group to be authorized for ingress to the cache
     * security group.</p>
     */
    inline bool EC2SecurityGroupNameHasBeenSet() const { return m_eC2SecurityGroupNameHasBeenSet; }

    /**
     * <p>The Amazon EC2 security group to be authorized for ingress to the cache
     * security group.</p>
     */
    inline void SetEC2SecurityGroupName(const Aws::String& value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName = value; }

    /**
     * <p>The Amazon EC2 security group to be authorized for ingress to the cache
     * security group.</p>
     */
    inline void SetEC2SecurityGroupName(Aws::String&& value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName = std::move(value); }

    /**
     * <p>The Amazon EC2 security group to be authorized for ingress to the cache
     * security group.</p>
     */
    inline void SetEC2SecurityGroupName(const char* value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName.assign(value); }

    /**
     * <p>The Amazon EC2 security group to be authorized for ingress to the cache
     * security group.</p>
     */
    inline AuthorizeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupName(const Aws::String& value) { SetEC2SecurityGroupName(value); return *this;}

    /**
     * <p>The Amazon EC2 security group to be authorized for ingress to the cache
     * security group.</p>
     */
    inline AuthorizeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupName(Aws::String&& value) { SetEC2SecurityGroupName(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 security group to be authorized for ingress to the cache
     * security group.</p>
     */
    inline AuthorizeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupName(const char* value) { SetEC2SecurityGroupName(value); return *this;}


    /**
     * <p>The Amazon account number of the Amazon EC2 security group owner. Note that
     * this is not the same thing as an Amazon access key ID - you must provide a valid
     * Amazon account number for this parameter.</p>
     */
    inline const Aws::String& GetEC2SecurityGroupOwnerId() const{ return m_eC2SecurityGroupOwnerId; }

    /**
     * <p>The Amazon account number of the Amazon EC2 security group owner. Note that
     * this is not the same thing as an Amazon access key ID - you must provide a valid
     * Amazon account number for this parameter.</p>
     */
    inline bool EC2SecurityGroupOwnerIdHasBeenSet() const { return m_eC2SecurityGroupOwnerIdHasBeenSet; }

    /**
     * <p>The Amazon account number of the Amazon EC2 security group owner. Note that
     * this is not the same thing as an Amazon access key ID - you must provide a valid
     * Amazon account number for this parameter.</p>
     */
    inline void SetEC2SecurityGroupOwnerId(const Aws::String& value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId = value; }

    /**
     * <p>The Amazon account number of the Amazon EC2 security group owner. Note that
     * this is not the same thing as an Amazon access key ID - you must provide a valid
     * Amazon account number for this parameter.</p>
     */
    inline void SetEC2SecurityGroupOwnerId(Aws::String&& value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId = std::move(value); }

    /**
     * <p>The Amazon account number of the Amazon EC2 security group owner. Note that
     * this is not the same thing as an Amazon access key ID - you must provide a valid
     * Amazon account number for this parameter.</p>
     */
    inline void SetEC2SecurityGroupOwnerId(const char* value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId.assign(value); }

    /**
     * <p>The Amazon account number of the Amazon EC2 security group owner. Note that
     * this is not the same thing as an Amazon access key ID - you must provide a valid
     * Amazon account number for this parameter.</p>
     */
    inline AuthorizeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(const Aws::String& value) { SetEC2SecurityGroupOwnerId(value); return *this;}

    /**
     * <p>The Amazon account number of the Amazon EC2 security group owner. Note that
     * this is not the same thing as an Amazon access key ID - you must provide a valid
     * Amazon account number for this parameter.</p>
     */
    inline AuthorizeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(Aws::String&& value) { SetEC2SecurityGroupOwnerId(std::move(value)); return *this;}

    /**
     * <p>The Amazon account number of the Amazon EC2 security group owner. Note that
     * this is not the same thing as an Amazon access key ID - you must provide a valid
     * Amazon account number for this parameter.</p>
     */
    inline AuthorizeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(const char* value) { SetEC2SecurityGroupOwnerId(value); return *this;}

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
