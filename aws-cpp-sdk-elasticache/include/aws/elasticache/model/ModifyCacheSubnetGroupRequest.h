/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_ELASTICACHE_API ModifyCacheSubnetGroupRequest : public ElastiCacheRequest
  {
  public:
    ModifyCacheSubnetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCacheSubnetGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name for the cache subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters or hyphens.</p> <p>Example: <code>mysubnetgroup</code> </p>
     */
    inline const Aws::String& GetCacheSubnetGroupName() const{ return m_cacheSubnetGroupName; }

    /**
     * <p>The name for the cache subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters or hyphens.</p> <p>Example: <code>mysubnetgroup</code> </p>
     */
    inline bool CacheSubnetGroupNameHasBeenSet() const { return m_cacheSubnetGroupNameHasBeenSet; }

    /**
     * <p>The name for the cache subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters or hyphens.</p> <p>Example: <code>mysubnetgroup</code> </p>
     */
    inline void SetCacheSubnetGroupName(const Aws::String& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = value; }

    /**
     * <p>The name for the cache subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters or hyphens.</p> <p>Example: <code>mysubnetgroup</code> </p>
     */
    inline void SetCacheSubnetGroupName(Aws::String&& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = std::move(value); }

    /**
     * <p>The name for the cache subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters or hyphens.</p> <p>Example: <code>mysubnetgroup</code> </p>
     */
    inline void SetCacheSubnetGroupName(const char* value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName.assign(value); }

    /**
     * <p>The name for the cache subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters or hyphens.</p> <p>Example: <code>mysubnetgroup</code> </p>
     */
    inline ModifyCacheSubnetGroupRequest& WithCacheSubnetGroupName(const Aws::String& value) { SetCacheSubnetGroupName(value); return *this;}

    /**
     * <p>The name for the cache subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters or hyphens.</p> <p>Example: <code>mysubnetgroup</code> </p>
     */
    inline ModifyCacheSubnetGroupRequest& WithCacheSubnetGroupName(Aws::String&& value) { SetCacheSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name for the cache subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters or hyphens.</p> <p>Example: <code>mysubnetgroup</code> </p>
     */
    inline ModifyCacheSubnetGroupRequest& WithCacheSubnetGroupName(const char* value) { SetCacheSubnetGroupName(value); return *this;}


    /**
     * <p>A description of the cache subnet group.</p>
     */
    inline const Aws::String& GetCacheSubnetGroupDescription() const{ return m_cacheSubnetGroupDescription; }

    /**
     * <p>A description of the cache subnet group.</p>
     */
    inline bool CacheSubnetGroupDescriptionHasBeenSet() const { return m_cacheSubnetGroupDescriptionHasBeenSet; }

    /**
     * <p>A description of the cache subnet group.</p>
     */
    inline void SetCacheSubnetGroupDescription(const Aws::String& value) { m_cacheSubnetGroupDescriptionHasBeenSet = true; m_cacheSubnetGroupDescription = value; }

    /**
     * <p>A description of the cache subnet group.</p>
     */
    inline void SetCacheSubnetGroupDescription(Aws::String&& value) { m_cacheSubnetGroupDescriptionHasBeenSet = true; m_cacheSubnetGroupDescription = std::move(value); }

    /**
     * <p>A description of the cache subnet group.</p>
     */
    inline void SetCacheSubnetGroupDescription(const char* value) { m_cacheSubnetGroupDescriptionHasBeenSet = true; m_cacheSubnetGroupDescription.assign(value); }

    /**
     * <p>A description of the cache subnet group.</p>
     */
    inline ModifyCacheSubnetGroupRequest& WithCacheSubnetGroupDescription(const Aws::String& value) { SetCacheSubnetGroupDescription(value); return *this;}

    /**
     * <p>A description of the cache subnet group.</p>
     */
    inline ModifyCacheSubnetGroupRequest& WithCacheSubnetGroupDescription(Aws::String&& value) { SetCacheSubnetGroupDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the cache subnet group.</p>
     */
    inline ModifyCacheSubnetGroupRequest& WithCacheSubnetGroupDescription(const char* value) { SetCacheSubnetGroupDescription(value); return *this;}


    /**
     * <p>The EC2 subnet IDs for the cache subnet group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The EC2 subnet IDs for the cache subnet group.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The EC2 subnet IDs for the cache subnet group.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The EC2 subnet IDs for the cache subnet group.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The EC2 subnet IDs for the cache subnet group.</p>
     */
    inline ModifyCacheSubnetGroupRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The EC2 subnet IDs for the cache subnet group.</p>
     */
    inline ModifyCacheSubnetGroupRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The EC2 subnet IDs for the cache subnet group.</p>
     */
    inline ModifyCacheSubnetGroupRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The EC2 subnet IDs for the cache subnet group.</p>
     */
    inline ModifyCacheSubnetGroupRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The EC2 subnet IDs for the cache subnet group.</p>
     */
    inline ModifyCacheSubnetGroupRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

  private:

    Aws::String m_cacheSubnetGroupName;
    bool m_cacheSubnetGroupNameHasBeenSet;

    Aws::String m_cacheSubnetGroupDescription;
    bool m_cacheSubnetGroupDescriptionHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
