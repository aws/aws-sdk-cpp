/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>ModifyCacheSubnetGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyCacheSubnetGroupMessage">AWS
   * API Reference</a></p>
   */
  class ModifyCacheSubnetGroupRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API ModifyCacheSubnetGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCacheSubnetGroup"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name for the cache subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters or hyphens.</p> <p>Example: <code>mysubnetgroup</code> </p>
     */
    inline const Aws::String& GetCacheSubnetGroupName() const { return m_cacheSubnetGroupName; }
    inline bool CacheSubnetGroupNameHasBeenSet() const { return m_cacheSubnetGroupNameHasBeenSet; }
    template<typename CacheSubnetGroupNameT = Aws::String>
    void SetCacheSubnetGroupName(CacheSubnetGroupNameT&& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = std::forward<CacheSubnetGroupNameT>(value); }
    template<typename CacheSubnetGroupNameT = Aws::String>
    ModifyCacheSubnetGroupRequest& WithCacheSubnetGroupName(CacheSubnetGroupNameT&& value) { SetCacheSubnetGroupName(std::forward<CacheSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the cache subnet group.</p>
     */
    inline const Aws::String& GetCacheSubnetGroupDescription() const { return m_cacheSubnetGroupDescription; }
    inline bool CacheSubnetGroupDescriptionHasBeenSet() const { return m_cacheSubnetGroupDescriptionHasBeenSet; }
    template<typename CacheSubnetGroupDescriptionT = Aws::String>
    void SetCacheSubnetGroupDescription(CacheSubnetGroupDescriptionT&& value) { m_cacheSubnetGroupDescriptionHasBeenSet = true; m_cacheSubnetGroupDescription = std::forward<CacheSubnetGroupDescriptionT>(value); }
    template<typename CacheSubnetGroupDescriptionT = Aws::String>
    ModifyCacheSubnetGroupRequest& WithCacheSubnetGroupDescription(CacheSubnetGroupDescriptionT&& value) { SetCacheSubnetGroupDescription(std::forward<CacheSubnetGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 subnet IDs for the cache subnet group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    ModifyCacheSubnetGroupRequest& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    ModifyCacheSubnetGroupRequest& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_cacheSubnetGroupName;
    bool m_cacheSubnetGroupNameHasBeenSet = false;

    Aws::String m_cacheSubnetGroupDescription;
    bool m_cacheSubnetGroupDescriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
