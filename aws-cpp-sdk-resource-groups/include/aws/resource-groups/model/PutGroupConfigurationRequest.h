/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/ResourceGroupsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class PutGroupConfigurationRequest : public ResourceGroupsRequest
  {
  public:
    AWS_RESOURCEGROUPS_API PutGroupConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutGroupConfiguration"; }

    AWS_RESOURCEGROUPS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name or ARN of the resource group with the configuration that you want to
     * update.</p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }

    /**
     * <p>The name or ARN of the resource group with the configuration that you want to
     * update.</p>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>The name or ARN of the resource group with the configuration that you want to
     * update.</p>
     */
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The name or ARN of the resource group with the configuration that you want to
     * update.</p>
     */
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The name or ARN of the resource group with the configuration that you want to
     * update.</p>
     */
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }

    /**
     * <p>The name or ARN of the resource group with the configuration that you want to
     * update.</p>
     */
    inline PutGroupConfigurationRequest& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}

    /**
     * <p>The name or ARN of the resource group with the configuration that you want to
     * update.</p>
     */
    inline PutGroupConfigurationRequest& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the resource group with the configuration that you want to
     * update.</p>
     */
    inline PutGroupConfigurationRequest& WithGroup(const char* value) { SetGroup(value); return *this;}


    /**
     * <p>The new configuration to associate with the specified group. A configuration
     * associates the resource group with an AWS service and specifies how the service
     * can interact with the resources in the group. A configuration is an array of
     * <a>GroupConfigurationItem</a> elements.</p> <p>For information about the syntax
     * of a service configuration, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
     * configurations for resource groups</a>.</p>  <p>A resource group can
     * contain either a <code>Configuration</code> or a <code>ResourceQuery</code>, but
     * not both.</p> 
     */
    inline const Aws::Vector<GroupConfigurationItem>& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The new configuration to associate with the specified group. A configuration
     * associates the resource group with an AWS service and specifies how the service
     * can interact with the resources in the group. A configuration is an array of
     * <a>GroupConfigurationItem</a> elements.</p> <p>For information about the syntax
     * of a service configuration, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
     * configurations for resource groups</a>.</p>  <p>A resource group can
     * contain either a <code>Configuration</code> or a <code>ResourceQuery</code>, but
     * not both.</p> 
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The new configuration to associate with the specified group. A configuration
     * associates the resource group with an AWS service and specifies how the service
     * can interact with the resources in the group. A configuration is an array of
     * <a>GroupConfigurationItem</a> elements.</p> <p>For information about the syntax
     * of a service configuration, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
     * configurations for resource groups</a>.</p>  <p>A resource group can
     * contain either a <code>Configuration</code> or a <code>ResourceQuery</code>, but
     * not both.</p> 
     */
    inline void SetConfiguration(const Aws::Vector<GroupConfigurationItem>& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The new configuration to associate with the specified group. A configuration
     * associates the resource group with an AWS service and specifies how the service
     * can interact with the resources in the group. A configuration is an array of
     * <a>GroupConfigurationItem</a> elements.</p> <p>For information about the syntax
     * of a service configuration, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
     * configurations for resource groups</a>.</p>  <p>A resource group can
     * contain either a <code>Configuration</code> or a <code>ResourceQuery</code>, but
     * not both.</p> 
     */
    inline void SetConfiguration(Aws::Vector<GroupConfigurationItem>&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The new configuration to associate with the specified group. A configuration
     * associates the resource group with an AWS service and specifies how the service
     * can interact with the resources in the group. A configuration is an array of
     * <a>GroupConfigurationItem</a> elements.</p> <p>For information about the syntax
     * of a service configuration, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
     * configurations for resource groups</a>.</p>  <p>A resource group can
     * contain either a <code>Configuration</code> or a <code>ResourceQuery</code>, but
     * not both.</p> 
     */
    inline PutGroupConfigurationRequest& WithConfiguration(const Aws::Vector<GroupConfigurationItem>& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The new configuration to associate with the specified group. A configuration
     * associates the resource group with an AWS service and specifies how the service
     * can interact with the resources in the group. A configuration is an array of
     * <a>GroupConfigurationItem</a> elements.</p> <p>For information about the syntax
     * of a service configuration, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
     * configurations for resource groups</a>.</p>  <p>A resource group can
     * contain either a <code>Configuration</code> or a <code>ResourceQuery</code>, but
     * not both.</p> 
     */
    inline PutGroupConfigurationRequest& WithConfiguration(Aws::Vector<GroupConfigurationItem>&& value) { SetConfiguration(std::move(value)); return *this;}

    /**
     * <p>The new configuration to associate with the specified group. A configuration
     * associates the resource group with an AWS service and specifies how the service
     * can interact with the resources in the group. A configuration is an array of
     * <a>GroupConfigurationItem</a> elements.</p> <p>For information about the syntax
     * of a service configuration, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
     * configurations for resource groups</a>.</p>  <p>A resource group can
     * contain either a <code>Configuration</code> or a <code>ResourceQuery</code>, but
     * not both.</p> 
     */
    inline PutGroupConfigurationRequest& AddConfiguration(const GroupConfigurationItem& value) { m_configurationHasBeenSet = true; m_configuration.push_back(value); return *this; }

    /**
     * <p>The new configuration to associate with the specified group. A configuration
     * associates the resource group with an AWS service and specifies how the service
     * can interact with the resources in the group. A configuration is an array of
     * <a>GroupConfigurationItem</a> elements.</p> <p>For information about the syntax
     * of a service configuration, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
     * configurations for resource groups</a>.</p>  <p>A resource group can
     * contain either a <code>Configuration</code> or a <code>ResourceQuery</code>, but
     * not both.</p> 
     */
    inline PutGroupConfigurationRequest& AddConfiguration(GroupConfigurationItem&& value) { m_configurationHasBeenSet = true; m_configuration.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    Aws::Vector<GroupConfigurationItem> m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
