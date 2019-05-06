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
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/ResourceGroupsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/ResourceQuery.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

  /**
   */
  class AWS_RESOURCEGROUPS_API CreateGroupRequest : public ResourceGroupsRequest
  {
  public:
    CreateGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGroup"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the group, which is the identifier of the group in other
     * operations. A resource group name cannot be updated after it is created. A
     * resource group name can have a maximum of 128 characters, including letters,
     * numbers, hyphens, dots, and underscores. The name cannot start with
     * <code>AWS</code> or <code>aws</code>; these are reserved. A resource group name
     * must be unique within your account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the group, which is the identifier of the group in other
     * operations. A resource group name cannot be updated after it is created. A
     * resource group name can have a maximum of 128 characters, including letters,
     * numbers, hyphens, dots, and underscores. The name cannot start with
     * <code>AWS</code> or <code>aws</code>; these are reserved. A resource group name
     * must be unique within your account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the group, which is the identifier of the group in other
     * operations. A resource group name cannot be updated after it is created. A
     * resource group name can have a maximum of 128 characters, including letters,
     * numbers, hyphens, dots, and underscores. The name cannot start with
     * <code>AWS</code> or <code>aws</code>; these are reserved. A resource group name
     * must be unique within your account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the group, which is the identifier of the group in other
     * operations. A resource group name cannot be updated after it is created. A
     * resource group name can have a maximum of 128 characters, including letters,
     * numbers, hyphens, dots, and underscores. The name cannot start with
     * <code>AWS</code> or <code>aws</code>; these are reserved. A resource group name
     * must be unique within your account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the group, which is the identifier of the group in other
     * operations. A resource group name cannot be updated after it is created. A
     * resource group name can have a maximum of 128 characters, including letters,
     * numbers, hyphens, dots, and underscores. The name cannot start with
     * <code>AWS</code> or <code>aws</code>; these are reserved. A resource group name
     * must be unique within your account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the group, which is the identifier of the group in other
     * operations. A resource group name cannot be updated after it is created. A
     * resource group name can have a maximum of 128 characters, including letters,
     * numbers, hyphens, dots, and underscores. The name cannot start with
     * <code>AWS</code> or <code>aws</code>; these are reserved. A resource group name
     * must be unique within your account.</p>
     */
    inline CreateGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the group, which is the identifier of the group in other
     * operations. A resource group name cannot be updated after it is created. A
     * resource group name can have a maximum of 128 characters, including letters,
     * numbers, hyphens, dots, and underscores. The name cannot start with
     * <code>AWS</code> or <code>aws</code>; these are reserved. A resource group name
     * must be unique within your account.</p>
     */
    inline CreateGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the group, which is the identifier of the group in other
     * operations. A resource group name cannot be updated after it is created. A
     * resource group name can have a maximum of 128 characters, including letters,
     * numbers, hyphens, dots, and underscores. The name cannot start with
     * <code>AWS</code> or <code>aws</code>; these are reserved. A resource group name
     * must be unique within your account.</p>
     */
    inline CreateGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the resource group. Descriptions can have a maximum of 511
     * characters, including letters, numbers, hyphens, underscores, punctuation, and
     * spaces.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the resource group. Descriptions can have a maximum of 511
     * characters, including letters, numbers, hyphens, underscores, punctuation, and
     * spaces.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the resource group. Descriptions can have a maximum of 511
     * characters, including letters, numbers, hyphens, underscores, punctuation, and
     * spaces.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the resource group. Descriptions can have a maximum of 511
     * characters, including letters, numbers, hyphens, underscores, punctuation, and
     * spaces.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the resource group. Descriptions can have a maximum of 511
     * characters, including letters, numbers, hyphens, underscores, punctuation, and
     * spaces.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the resource group. Descriptions can have a maximum of 511
     * characters, including letters, numbers, hyphens, underscores, punctuation, and
     * spaces.</p>
     */
    inline CreateGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the resource group. Descriptions can have a maximum of 511
     * characters, including letters, numbers, hyphens, underscores, punctuation, and
     * spaces.</p>
     */
    inline CreateGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the resource group. Descriptions can have a maximum of 511
     * characters, including letters, numbers, hyphens, underscores, punctuation, and
     * spaces.</p>
     */
    inline CreateGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The resource query that determines which AWS resources are members of this
     * group.</p>
     */
    inline const ResourceQuery& GetResourceQuery() const{ return m_resourceQuery; }

    /**
     * <p>The resource query that determines which AWS resources are members of this
     * group.</p>
     */
    inline bool ResourceQueryHasBeenSet() const { return m_resourceQueryHasBeenSet; }

    /**
     * <p>The resource query that determines which AWS resources are members of this
     * group.</p>
     */
    inline void SetResourceQuery(const ResourceQuery& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = value; }

    /**
     * <p>The resource query that determines which AWS resources are members of this
     * group.</p>
     */
    inline void SetResourceQuery(ResourceQuery&& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = std::move(value); }

    /**
     * <p>The resource query that determines which AWS resources are members of this
     * group.</p>
     */
    inline CreateGroupRequest& WithResourceQuery(const ResourceQuery& value) { SetResourceQuery(value); return *this;}

    /**
     * <p>The resource query that determines which AWS resources are members of this
     * group.</p>
     */
    inline CreateGroupRequest& WithResourceQuery(ResourceQuery&& value) { SetResourceQuery(std::move(value)); return *this;}


    /**
     * <p>The tags to add to the group. A tag is a string-to-string map of key-value
     * pairs. Tag keys can have a maximum character length of 128 characters, and tag
     * values can have a maximum length of 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to add to the group. A tag is a string-to-string map of key-value
     * pairs. Tag keys can have a maximum character length of 128 characters, and tag
     * values can have a maximum length of 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to add to the group. A tag is a string-to-string map of key-value
     * pairs. Tag keys can have a maximum character length of 128 characters, and tag
     * values can have a maximum length of 256 characters.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to add to the group. A tag is a string-to-string map of key-value
     * pairs. Tag keys can have a maximum character length of 128 characters, and tag
     * values can have a maximum length of 256 characters.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to add to the group. A tag is a string-to-string map of key-value
     * pairs. Tag keys can have a maximum character length of 128 characters, and tag
     * values can have a maximum length of 256 characters.</p>
     */
    inline CreateGroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to add to the group. A tag is a string-to-string map of key-value
     * pairs. Tag keys can have a maximum character length of 128 characters, and tag
     * values can have a maximum length of 256 characters.</p>
     */
    inline CreateGroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to add to the group. A tag is a string-to-string map of key-value
     * pairs. Tag keys can have a maximum character length of 128 characters, and tag
     * values can have a maximum length of 256 characters.</p>
     */
    inline CreateGroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to add to the group. A tag is a string-to-string map of key-value
     * pairs. Tag keys can have a maximum character length of 128 characters, and tag
     * values can have a maximum length of 256 characters.</p>
     */
    inline CreateGroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to add to the group. A tag is a string-to-string map of key-value
     * pairs. Tag keys can have a maximum character length of 128 characters, and tag
     * values can have a maximum length of 256 characters.</p>
     */
    inline CreateGroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to add to the group. A tag is a string-to-string map of key-value
     * pairs. Tag keys can have a maximum character length of 128 characters, and tag
     * values can have a maximum length of 256 characters.</p>
     */
    inline CreateGroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to add to the group. A tag is a string-to-string map of key-value
     * pairs. Tag keys can have a maximum character length of 128 characters, and tag
     * values can have a maximum length of 256 characters.</p>
     */
    inline CreateGroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to add to the group. A tag is a string-to-string map of key-value
     * pairs. Tag keys can have a maximum character length of 128 characters, and tag
     * values can have a maximum length of 256 characters.</p>
     */
    inline CreateGroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to add to the group. A tag is a string-to-string map of key-value
     * pairs. Tag keys can have a maximum character length of 128 characters, and tag
     * values can have a maximum length of 256 characters.</p>
     */
    inline CreateGroupRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ResourceQuery m_resourceQuery;
    bool m_resourceQueryHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
