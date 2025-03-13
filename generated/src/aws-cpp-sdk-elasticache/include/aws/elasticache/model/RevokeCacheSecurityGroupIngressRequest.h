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
    AWS_ELASTICACHE_API RevokeCacheSecurityGroupIngressRequest() = default;

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
    inline const Aws::String& GetCacheSecurityGroupName() const { return m_cacheSecurityGroupName; }
    inline bool CacheSecurityGroupNameHasBeenSet() const { return m_cacheSecurityGroupNameHasBeenSet; }
    template<typename CacheSecurityGroupNameT = Aws::String>
    void SetCacheSecurityGroupName(CacheSecurityGroupNameT&& value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName = std::forward<CacheSecurityGroupNameT>(value); }
    template<typename CacheSecurityGroupNameT = Aws::String>
    RevokeCacheSecurityGroupIngressRequest& WithCacheSecurityGroupName(CacheSecurityGroupNameT&& value) { SetCacheSecurityGroupName(std::forward<CacheSecurityGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon EC2 security group to revoke access from.</p>
     */
    inline const Aws::String& GetEC2SecurityGroupName() const { return m_eC2SecurityGroupName; }
    inline bool EC2SecurityGroupNameHasBeenSet() const { return m_eC2SecurityGroupNameHasBeenSet; }
    template<typename EC2SecurityGroupNameT = Aws::String>
    void SetEC2SecurityGroupName(EC2SecurityGroupNameT&& value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName = std::forward<EC2SecurityGroupNameT>(value); }
    template<typename EC2SecurityGroupNameT = Aws::String>
    RevokeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupName(EC2SecurityGroupNameT&& value) { SetEC2SecurityGroupName(std::forward<EC2SecurityGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon account number of the Amazon EC2 security group owner. Note that
     * this is not the same thing as an Amazon access key ID - you must provide a valid
     * Amazon account number for this parameter.</p>
     */
    inline const Aws::String& GetEC2SecurityGroupOwnerId() const { return m_eC2SecurityGroupOwnerId; }
    inline bool EC2SecurityGroupOwnerIdHasBeenSet() const { return m_eC2SecurityGroupOwnerIdHasBeenSet; }
    template<typename EC2SecurityGroupOwnerIdT = Aws::String>
    void SetEC2SecurityGroupOwnerId(EC2SecurityGroupOwnerIdT&& value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId = std::forward<EC2SecurityGroupOwnerIdT>(value); }
    template<typename EC2SecurityGroupOwnerIdT = Aws::String>
    RevokeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(EC2SecurityGroupOwnerIdT&& value) { SetEC2SecurityGroupOwnerId(std::forward<EC2SecurityGroupOwnerIdT>(value)); return *this;}
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
