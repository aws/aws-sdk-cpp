/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/ResourceGroupsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/ResourceQuery.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-groups/model/GroupConfigurationItem.h>
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
     * operations. You can't change the name of a resource group after you create it. A
     * resource group name can consist of letters, numbers, hyphens, periods, and
     * underscores. The name cannot start with <code>AWS</code> or <code>aws</code>;
     * these are reserved. A resource group name must be unique within each AWS Region
     * in your AWS account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the group, which is the identifier of the group in other
     * operations. You can't change the name of a resource group after you create it. A
     * resource group name can consist of letters, numbers, hyphens, periods, and
     * underscores. The name cannot start with <code>AWS</code> or <code>aws</code>;
     * these are reserved. A resource group name must be unique within each AWS Region
     * in your AWS account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the group, which is the identifier of the group in other
     * operations. You can't change the name of a resource group after you create it. A
     * resource group name can consist of letters, numbers, hyphens, periods, and
     * underscores. The name cannot start with <code>AWS</code> or <code>aws</code>;
     * these are reserved. A resource group name must be unique within each AWS Region
     * in your AWS account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the group, which is the identifier of the group in other
     * operations. You can't change the name of a resource group after you create it. A
     * resource group name can consist of letters, numbers, hyphens, periods, and
     * underscores. The name cannot start with <code>AWS</code> or <code>aws</code>;
     * these are reserved. A resource group name must be unique within each AWS Region
     * in your AWS account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the group, which is the identifier of the group in other
     * operations. You can't change the name of a resource group after you create it. A
     * resource group name can consist of letters, numbers, hyphens, periods, and
     * underscores. The name cannot start with <code>AWS</code> or <code>aws</code>;
     * these are reserved. A resource group name must be unique within each AWS Region
     * in your AWS account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the group, which is the identifier of the group in other
     * operations. You can't change the name of a resource group after you create it. A
     * resource group name can consist of letters, numbers, hyphens, periods, and
     * underscores. The name cannot start with <code>AWS</code> or <code>aws</code>;
     * these are reserved. A resource group name must be unique within each AWS Region
     * in your AWS account.</p>
     */
    inline CreateGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the group, which is the identifier of the group in other
     * operations. You can't change the name of a resource group after you create it. A
     * resource group name can consist of letters, numbers, hyphens, periods, and
     * underscores. The name cannot start with <code>AWS</code> or <code>aws</code>;
     * these are reserved. A resource group name must be unique within each AWS Region
     * in your AWS account.</p>
     */
    inline CreateGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the group, which is the identifier of the group in other
     * operations. You can't change the name of a resource group after you create it. A
     * resource group name can consist of letters, numbers, hyphens, periods, and
     * underscores. The name cannot start with <code>AWS</code> or <code>aws</code>;
     * these are reserved. A resource group name must be unique within each AWS Region
     * in your AWS account.</p>
     */
    inline CreateGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the resource group. Descriptions can consist of letters,
     * numbers, hyphens, underscores, periods, and spaces.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the resource group. Descriptions can consist of letters,
     * numbers, hyphens, underscores, periods, and spaces.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the resource group. Descriptions can consist of letters,
     * numbers, hyphens, underscores, periods, and spaces.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the resource group. Descriptions can consist of letters,
     * numbers, hyphens, underscores, periods, and spaces.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the resource group. Descriptions can consist of letters,
     * numbers, hyphens, underscores, periods, and spaces.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the resource group. Descriptions can consist of letters,
     * numbers, hyphens, underscores, periods, and spaces.</p>
     */
    inline CreateGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the resource group. Descriptions can consist of letters,
     * numbers, hyphens, underscores, periods, and spaces.</p>
     */
    inline CreateGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the resource group. Descriptions can consist of letters,
     * numbers, hyphens, underscores, periods, and spaces.</p>
     */
    inline CreateGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The resource query that determines which AWS resources are members of this
     * group.</p>  <p>You can specify either a <code>ResourceQuery</code> or a
     * <code>Configuration</code>, but not both.</p> 
     */
    inline const ResourceQuery& GetResourceQuery() const{ return m_resourceQuery; }

    /**
     * <p>The resource query that determines which AWS resources are members of this
     * group.</p>  <p>You can specify either a <code>ResourceQuery</code> or a
     * <code>Configuration</code>, but not both.</p> 
     */
    inline bool ResourceQueryHasBeenSet() const { return m_resourceQueryHasBeenSet; }

    /**
     * <p>The resource query that determines which AWS resources are members of this
     * group.</p>  <p>You can specify either a <code>ResourceQuery</code> or a
     * <code>Configuration</code>, but not both.</p> 
     */
    inline void SetResourceQuery(const ResourceQuery& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = value; }

    /**
     * <p>The resource query that determines which AWS resources are members of this
     * group.</p>  <p>You can specify either a <code>ResourceQuery</code> or a
     * <code>Configuration</code>, but not both.</p> 
     */
    inline void SetResourceQuery(ResourceQuery&& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = std::move(value); }

    /**
     * <p>The resource query that determines which AWS resources are members of this
     * group.</p>  <p>You can specify either a <code>ResourceQuery</code> or a
     * <code>Configuration</code>, but not both.</p> 
     */
    inline CreateGroupRequest& WithResourceQuery(const ResourceQuery& value) { SetResourceQuery(value); return *this;}

    /**
     * <p>The resource query that determines which AWS resources are members of this
     * group.</p>  <p>You can specify either a <code>ResourceQuery</code> or a
     * <code>Configuration</code>, but not both.</p> 
     */
    inline CreateGroupRequest& WithResourceQuery(ResourceQuery&& value) { SetResourceQuery(std::move(value)); return *this;}


    /**
     * <p>The tags to add to the group. A tag is key-value pair string.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to add to the group. A tag is key-value pair string.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to add to the group. A tag is key-value pair string.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to add to the group. A tag is key-value pair string.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to add to the group. A tag is key-value pair string.</p>
     */
    inline CreateGroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to add to the group. A tag is key-value pair string.</p>
     */
    inline CreateGroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to add to the group. A tag is key-value pair string.</p>
     */
    inline CreateGroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to add to the group. A tag is key-value pair string.</p>
     */
    inline CreateGroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to add to the group. A tag is key-value pair string.</p>
     */
    inline CreateGroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to add to the group. A tag is key-value pair string.</p>
     */
    inline CreateGroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to add to the group. A tag is key-value pair string.</p>
     */
    inline CreateGroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to add to the group. A tag is key-value pair string.</p>
     */
    inline CreateGroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to add to the group. A tag is key-value pair string.</p>
     */
    inline CreateGroupRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A configuration associates the resource group with an AWS service and
     * specifies how the service can interact with the resources in the group. A
     * configuration is an array of <a>GroupConfigurationItem</a> elements.</p> 
     * <p>You can specify either a <code>Configuration</code> or a
     * <code>ResourceQuery</code> in a group, but not both.</p> 
     */
    inline const Aws::Vector<GroupConfigurationItem>& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>A configuration associates the resource group with an AWS service and
     * specifies how the service can interact with the resources in the group. A
     * configuration is an array of <a>GroupConfigurationItem</a> elements.</p> 
     * <p>You can specify either a <code>Configuration</code> or a
     * <code>ResourceQuery</code> in a group, but not both.</p> 
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>A configuration associates the resource group with an AWS service and
     * specifies how the service can interact with the resources in the group. A
     * configuration is an array of <a>GroupConfigurationItem</a> elements.</p> 
     * <p>You can specify either a <code>Configuration</code> or a
     * <code>ResourceQuery</code> in a group, but not both.</p> 
     */
    inline void SetConfiguration(const Aws::Vector<GroupConfigurationItem>& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>A configuration associates the resource group with an AWS service and
     * specifies how the service can interact with the resources in the group. A
     * configuration is an array of <a>GroupConfigurationItem</a> elements.</p> 
     * <p>You can specify either a <code>Configuration</code> or a
     * <code>ResourceQuery</code> in a group, but not both.</p> 
     */
    inline void SetConfiguration(Aws::Vector<GroupConfigurationItem>&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>A configuration associates the resource group with an AWS service and
     * specifies how the service can interact with the resources in the group. A
     * configuration is an array of <a>GroupConfigurationItem</a> elements.</p> 
     * <p>You can specify either a <code>Configuration</code> or a
     * <code>ResourceQuery</code> in a group, but not both.</p> 
     */
    inline CreateGroupRequest& WithConfiguration(const Aws::Vector<GroupConfigurationItem>& value) { SetConfiguration(value); return *this;}

    /**
     * <p>A configuration associates the resource group with an AWS service and
     * specifies how the service can interact with the resources in the group. A
     * configuration is an array of <a>GroupConfigurationItem</a> elements.</p> 
     * <p>You can specify either a <code>Configuration</code> or a
     * <code>ResourceQuery</code> in a group, but not both.</p> 
     */
    inline CreateGroupRequest& WithConfiguration(Aws::Vector<GroupConfigurationItem>&& value) { SetConfiguration(std::move(value)); return *this;}

    /**
     * <p>A configuration associates the resource group with an AWS service and
     * specifies how the service can interact with the resources in the group. A
     * configuration is an array of <a>GroupConfigurationItem</a> elements.</p> 
     * <p>You can specify either a <code>Configuration</code> or a
     * <code>ResourceQuery</code> in a group, but not both.</p> 
     */
    inline CreateGroupRequest& AddConfiguration(const GroupConfigurationItem& value) { m_configurationHasBeenSet = true; m_configuration.push_back(value); return *this; }

    /**
     * <p>A configuration associates the resource group with an AWS service and
     * specifies how the service can interact with the resources in the group. A
     * configuration is an array of <a>GroupConfigurationItem</a> elements.</p> 
     * <p>You can specify either a <code>Configuration</code> or a
     * <code>ResourceQuery</code> in a group, but not both.</p> 
     */
    inline CreateGroupRequest& AddConfiguration(GroupConfigurationItem&& value) { m_configurationHasBeenSet = true; m_configuration.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ResourceQuery m_resourceQuery;
    bool m_resourceQueryHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Vector<GroupConfigurationItem> m_configuration;
    bool m_configurationHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
