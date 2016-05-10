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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/model/TagResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/Tag.h>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type containing information about a request to add, change, or
   * delete the tags that are associated with a resource.</p>
   */
  class AWS_ROUTE53_API ChangeTagsForResourceRequest : public Route53Request
  {
  public:
    ChangeTagsForResourceRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The type of the resource.</p> <p>- The resource type for health checks is
     * <code>healthcheck</code>.</p> <p>- The resource type for hosted zones is
     * <code>hostedzone</code>.</p>
     */
    inline const TagResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the resource.</p> <p>- The resource type for health checks is
     * <code>healthcheck</code>.</p> <p>- The resource type for hosted zones is
     * <code>hostedzone</code>.</p>
     */
    inline void SetResourceType(const TagResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the resource.</p> <p>- The resource type for health checks is
     * <code>healthcheck</code>.</p> <p>- The resource type for hosted zones is
     * <code>hostedzone</code>.</p>
     */
    inline void SetResourceType(TagResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the resource.</p> <p>- The resource type for health checks is
     * <code>healthcheck</code>.</p> <p>- The resource type for hosted zones is
     * <code>hostedzone</code>.</p>
     */
    inline ChangeTagsForResourceRequest& WithResourceType(const TagResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the resource.</p> <p>- The resource type for health checks is
     * <code>healthcheck</code>.</p> <p>- The resource type for hosted zones is
     * <code>hostedzone</code>.</p>
     */
    inline ChangeTagsForResourceRequest& WithResourceType(TagResourceType&& value) { SetResourceType(value); return *this;}

    /**
     * <p>The ID of the resource for which you want to add, change, or delete tags.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource for which you want to add, change, or delete tags.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource for which you want to add, change, or delete tags.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource for which you want to add, change, or delete tags.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource for which you want to add, change, or delete tags.</p>
     */
    inline ChangeTagsForResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource for which you want to add, change, or delete tags.</p>
     */
    inline ChangeTagsForResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource for which you want to add, change, or delete tags.</p>
     */
    inline ChangeTagsForResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>A complex type that contains a list of <code>Tag</code> elements. Each
     * <code>Tag</code> element identifies a tag that you want to add or update for the
     * specified resource.</p>
     */
    inline const Aws::Vector<Tag>& GetAddTags() const{ return m_addTags; }

    /**
     * <p>A complex type that contains a list of <code>Tag</code> elements. Each
     * <code>Tag</code> element identifies a tag that you want to add or update for the
     * specified resource.</p>
     */
    inline void SetAddTags(const Aws::Vector<Tag>& value) { m_addTagsHasBeenSet = true; m_addTags = value; }

    /**
     * <p>A complex type that contains a list of <code>Tag</code> elements. Each
     * <code>Tag</code> element identifies a tag that you want to add or update for the
     * specified resource.</p>
     */
    inline void SetAddTags(Aws::Vector<Tag>&& value) { m_addTagsHasBeenSet = true; m_addTags = value; }

    /**
     * <p>A complex type that contains a list of <code>Tag</code> elements. Each
     * <code>Tag</code> element identifies a tag that you want to add or update for the
     * specified resource.</p>
     */
    inline ChangeTagsForResourceRequest& WithAddTags(const Aws::Vector<Tag>& value) { SetAddTags(value); return *this;}

    /**
     * <p>A complex type that contains a list of <code>Tag</code> elements. Each
     * <code>Tag</code> element identifies a tag that you want to add or update for the
     * specified resource.</p>
     */
    inline ChangeTagsForResourceRequest& WithAddTags(Aws::Vector<Tag>&& value) { SetAddTags(value); return *this;}

    /**
     * <p>A complex type that contains a list of <code>Tag</code> elements. Each
     * <code>Tag</code> element identifies a tag that you want to add or update for the
     * specified resource.</p>
     */
    inline ChangeTagsForResourceRequest& AddAddTags(const Tag& value) { m_addTagsHasBeenSet = true; m_addTags.push_back(value); return *this; }

    /**
     * <p>A complex type that contains a list of <code>Tag</code> elements. Each
     * <code>Tag</code> element identifies a tag that you want to add or update for the
     * specified resource.</p>
     */
    inline ChangeTagsForResourceRequest& AddAddTags(Tag&& value) { m_addTagsHasBeenSet = true; m_addTags.push_back(value); return *this; }

    /**
     * <p>A list of <code>Tag</code> keys that you want to remove from the specified
     * resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveTagKeys() const{ return m_removeTagKeys; }

    /**
     * <p>A list of <code>Tag</code> keys that you want to remove from the specified
     * resource.</p>
     */
    inline void SetRemoveTagKeys(const Aws::Vector<Aws::String>& value) { m_removeTagKeysHasBeenSet = true; m_removeTagKeys = value; }

    /**
     * <p>A list of <code>Tag</code> keys that you want to remove from the specified
     * resource.</p>
     */
    inline void SetRemoveTagKeys(Aws::Vector<Aws::String>&& value) { m_removeTagKeysHasBeenSet = true; m_removeTagKeys = value; }

    /**
     * <p>A list of <code>Tag</code> keys that you want to remove from the specified
     * resource.</p>
     */
    inline ChangeTagsForResourceRequest& WithRemoveTagKeys(const Aws::Vector<Aws::String>& value) { SetRemoveTagKeys(value); return *this;}

    /**
     * <p>A list of <code>Tag</code> keys that you want to remove from the specified
     * resource.</p>
     */
    inline ChangeTagsForResourceRequest& WithRemoveTagKeys(Aws::Vector<Aws::String>&& value) { SetRemoveTagKeys(value); return *this;}

    /**
     * <p>A list of <code>Tag</code> keys that you want to remove from the specified
     * resource.</p>
     */
    inline ChangeTagsForResourceRequest& AddRemoveTagKeys(const Aws::String& value) { m_removeTagKeysHasBeenSet = true; m_removeTagKeys.push_back(value); return *this; }

    /**
     * <p>A list of <code>Tag</code> keys that you want to remove from the specified
     * resource.</p>
     */
    inline ChangeTagsForResourceRequest& AddRemoveTagKeys(Aws::String&& value) { m_removeTagKeysHasBeenSet = true; m_removeTagKeys.push_back(value); return *this; }

    /**
     * <p>A list of <code>Tag</code> keys that you want to remove from the specified
     * resource.</p>
     */
    inline ChangeTagsForResourceRequest& AddRemoveTagKeys(const char* value) { m_removeTagKeysHasBeenSet = true; m_removeTagKeys.push_back(value); return *this; }

  private:
    TagResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    Aws::Vector<Tag> m_addTags;
    bool m_addTagsHasBeenSet;
    Aws::Vector<Aws::String> m_removeTagKeys;
    bool m_removeTagKeysHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
