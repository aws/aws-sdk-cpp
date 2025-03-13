/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>CreateCacheSubnetGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheSubnetGroupMessage">AWS
   * API Reference</a></p>
   */
  class CreateCacheSubnetGroupRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API CreateCacheSubnetGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCacheSubnetGroup"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A name for the cache subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters or hyphens.</p> <p>Example: <code>mysubnetgroup</code> </p>
     */
    inline const Aws::String& GetCacheSubnetGroupName() const { return m_cacheSubnetGroupName; }
    inline bool CacheSubnetGroupNameHasBeenSet() const { return m_cacheSubnetGroupNameHasBeenSet; }
    template<typename CacheSubnetGroupNameT = Aws::String>
    void SetCacheSubnetGroupName(CacheSubnetGroupNameT&& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = std::forward<CacheSubnetGroupNameT>(value); }
    template<typename CacheSubnetGroupNameT = Aws::String>
    CreateCacheSubnetGroupRequest& WithCacheSubnetGroupName(CacheSubnetGroupNameT&& value) { SetCacheSubnetGroupName(std::forward<CacheSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the cache subnet group.</p>
     */
    inline const Aws::String& GetCacheSubnetGroupDescription() const { return m_cacheSubnetGroupDescription; }
    inline bool CacheSubnetGroupDescriptionHasBeenSet() const { return m_cacheSubnetGroupDescriptionHasBeenSet; }
    template<typename CacheSubnetGroupDescriptionT = Aws::String>
    void SetCacheSubnetGroupDescription(CacheSubnetGroupDescriptionT&& value) { m_cacheSubnetGroupDescriptionHasBeenSet = true; m_cacheSubnetGroupDescription = std::forward<CacheSubnetGroupDescriptionT>(value); }
    template<typename CacheSubnetGroupDescriptionT = Aws::String>
    CreateCacheSubnetGroupRequest& WithCacheSubnetGroupDescription(CacheSubnetGroupDescriptionT&& value) { SetCacheSubnetGroupDescription(std::forward<CacheSubnetGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of VPC subnet IDs for the cache subnet group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    CreateCacheSubnetGroupRequest& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    CreateCacheSubnetGroupRequest& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateCacheSubnetGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateCacheSubnetGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_cacheSubnetGroupName;
    bool m_cacheSubnetGroupNameHasBeenSet = false;

    Aws::String m_cacheSubnetGroupDescription;
    bool m_cacheSubnetGroupDescriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
