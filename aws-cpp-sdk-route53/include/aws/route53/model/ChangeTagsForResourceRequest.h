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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/model/TagResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the tags that you want to add,
   * edit, or delete.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ChangeTagsForResourceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ChangeTagsForResourceRequest : public Route53Request
  {
  public:
    ChangeTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ChangeTagsForResource"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The type of the resource.</p> <ul> <li> <p>The resource type for health
     * checks is <code>healthcheck</code>.</p> </li> <li> <p>The resource type for
     * hosted zones is <code>hostedzone</code>.</p> </li> </ul>
     */
    inline const TagResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the resource.</p> <ul> <li> <p>The resource type for health
     * checks is <code>healthcheck</code>.</p> </li> <li> <p>The resource type for
     * hosted zones is <code>hostedzone</code>.</p> </li> </ul>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the resource.</p> <ul> <li> <p>The resource type for health
     * checks is <code>healthcheck</code>.</p> </li> <li> <p>The resource type for
     * hosted zones is <code>hostedzone</code>.</p> </li> </ul>
     */
    inline void SetResourceType(const TagResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the resource.</p> <ul> <li> <p>The resource type for health
     * checks is <code>healthcheck</code>.</p> </li> <li> <p>The resource type for
     * hosted zones is <code>hostedzone</code>.</p> </li> </ul>
     */
    inline void SetResourceType(TagResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the resource.</p> <ul> <li> <p>The resource type for health
     * checks is <code>healthcheck</code>.</p> </li> <li> <p>The resource type for
     * hosted zones is <code>hostedzone</code>.</p> </li> </ul>
     */
    inline ChangeTagsForResourceRequest& WithResourceType(const TagResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the resource.</p> <ul> <li> <p>The resource type for health
     * checks is <code>healthcheck</code>.</p> </li> <li> <p>The resource type for
     * hosted zones is <code>hostedzone</code>.</p> </li> </ul>
     */
    inline ChangeTagsForResourceRequest& WithResourceType(TagResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The ID of the resource for which you want to add, change, or delete tags.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource for which you want to add, change, or delete tags.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource for which you want to add, change, or delete tags.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource for which you want to add, change, or delete tags.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

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
    inline ChangeTagsForResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource for which you want to add, change, or delete tags.</p>
     */
    inline ChangeTagsForResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>A complex type that contains a list of the tags that you want to add to the
     * specified health check or hosted zone and/or the tags that you want to edit
     * <code>Value</code> for.</p> <p>You can add a maximum of 10 tags to a health
     * check or a hosted zone.</p>
     */
    inline const Aws::Vector<Tag>& GetAddTags() const{ return m_addTags; }

    /**
     * <p>A complex type that contains a list of the tags that you want to add to the
     * specified health check or hosted zone and/or the tags that you want to edit
     * <code>Value</code> for.</p> <p>You can add a maximum of 10 tags to a health
     * check or a hosted zone.</p>
     */
    inline bool AddTagsHasBeenSet() const { return m_addTagsHasBeenSet; }

    /**
     * <p>A complex type that contains a list of the tags that you want to add to the
     * specified health check or hosted zone and/or the tags that you want to edit
     * <code>Value</code> for.</p> <p>You can add a maximum of 10 tags to a health
     * check or a hosted zone.</p>
     */
    inline void SetAddTags(const Aws::Vector<Tag>& value) { m_addTagsHasBeenSet = true; m_addTags = value; }

    /**
     * <p>A complex type that contains a list of the tags that you want to add to the
     * specified health check or hosted zone and/or the tags that you want to edit
     * <code>Value</code> for.</p> <p>You can add a maximum of 10 tags to a health
     * check or a hosted zone.</p>
     */
    inline void SetAddTags(Aws::Vector<Tag>&& value) { m_addTagsHasBeenSet = true; m_addTags = std::move(value); }

    /**
     * <p>A complex type that contains a list of the tags that you want to add to the
     * specified health check or hosted zone and/or the tags that you want to edit
     * <code>Value</code> for.</p> <p>You can add a maximum of 10 tags to a health
     * check or a hosted zone.</p>
     */
    inline ChangeTagsForResourceRequest& WithAddTags(const Aws::Vector<Tag>& value) { SetAddTags(value); return *this;}

    /**
     * <p>A complex type that contains a list of the tags that you want to add to the
     * specified health check or hosted zone and/or the tags that you want to edit
     * <code>Value</code> for.</p> <p>You can add a maximum of 10 tags to a health
     * check or a hosted zone.</p>
     */
    inline ChangeTagsForResourceRequest& WithAddTags(Aws::Vector<Tag>&& value) { SetAddTags(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains a list of the tags that you want to add to the
     * specified health check or hosted zone and/or the tags that you want to edit
     * <code>Value</code> for.</p> <p>You can add a maximum of 10 tags to a health
     * check or a hosted zone.</p>
     */
    inline ChangeTagsForResourceRequest& AddAddTags(const Tag& value) { m_addTagsHasBeenSet = true; m_addTags.push_back(value); return *this; }

    /**
     * <p>A complex type that contains a list of the tags that you want to add to the
     * specified health check or hosted zone and/or the tags that you want to edit
     * <code>Value</code> for.</p> <p>You can add a maximum of 10 tags to a health
     * check or a hosted zone.</p>
     */
    inline ChangeTagsForResourceRequest& AddAddTags(Tag&& value) { m_addTagsHasBeenSet = true; m_addTags.push_back(std::move(value)); return *this; }


    /**
     * <p>A complex type that contains a list of the tags that you want to delete from
     * the specified health check or hosted zone. You can specify up to 10 keys.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveTagKeys() const{ return m_removeTagKeys; }

    /**
     * <p>A complex type that contains a list of the tags that you want to delete from
     * the specified health check or hosted zone. You can specify up to 10 keys.</p>
     */
    inline bool RemoveTagKeysHasBeenSet() const { return m_removeTagKeysHasBeenSet; }

    /**
     * <p>A complex type that contains a list of the tags that you want to delete from
     * the specified health check or hosted zone. You can specify up to 10 keys.</p>
     */
    inline void SetRemoveTagKeys(const Aws::Vector<Aws::String>& value) { m_removeTagKeysHasBeenSet = true; m_removeTagKeys = value; }

    /**
     * <p>A complex type that contains a list of the tags that you want to delete from
     * the specified health check or hosted zone. You can specify up to 10 keys.</p>
     */
    inline void SetRemoveTagKeys(Aws::Vector<Aws::String>&& value) { m_removeTagKeysHasBeenSet = true; m_removeTagKeys = std::move(value); }

    /**
     * <p>A complex type that contains a list of the tags that you want to delete from
     * the specified health check or hosted zone. You can specify up to 10 keys.</p>
     */
    inline ChangeTagsForResourceRequest& WithRemoveTagKeys(const Aws::Vector<Aws::String>& value) { SetRemoveTagKeys(value); return *this;}

    /**
     * <p>A complex type that contains a list of the tags that you want to delete from
     * the specified health check or hosted zone. You can specify up to 10 keys.</p>
     */
    inline ChangeTagsForResourceRequest& WithRemoveTagKeys(Aws::Vector<Aws::String>&& value) { SetRemoveTagKeys(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains a list of the tags that you want to delete from
     * the specified health check or hosted zone. You can specify up to 10 keys.</p>
     */
    inline ChangeTagsForResourceRequest& AddRemoveTagKeys(const Aws::String& value) { m_removeTagKeysHasBeenSet = true; m_removeTagKeys.push_back(value); return *this; }

    /**
     * <p>A complex type that contains a list of the tags that you want to delete from
     * the specified health check or hosted zone. You can specify up to 10 keys.</p>
     */
    inline ChangeTagsForResourceRequest& AddRemoveTagKeys(Aws::String&& value) { m_removeTagKeysHasBeenSet = true; m_removeTagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A complex type that contains a list of the tags that you want to delete from
     * the specified health check or hosted zone. You can specify up to 10 keys.</p>
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
