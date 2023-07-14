﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/ResourceGroupsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

  /**
   */
  class AWS_RESOURCEGROUPS_API UngroupResourcesRequest : public ResourceGroupsRequest
  {
  public:
    UngroupResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UngroupResources"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name or the ARN of the resource group from which to remove the
     * resources.</p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }

    /**
     * <p>The name or the ARN of the resource group from which to remove the
     * resources.</p>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>The name or the ARN of the resource group from which to remove the
     * resources.</p>
     */
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The name or the ARN of the resource group from which to remove the
     * resources.</p>
     */
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The name or the ARN of the resource group from which to remove the
     * resources.</p>
     */
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }

    /**
     * <p>The name or the ARN of the resource group from which to remove the
     * resources.</p>
     */
    inline UngroupResourcesRequest& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}

    /**
     * <p>The name or the ARN of the resource group from which to remove the
     * resources.</p>
     */
    inline UngroupResourcesRequest& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}

    /**
     * <p>The name or the ARN of the resource group from which to remove the
     * resources.</p>
     */
    inline UngroupResourcesRequest& WithGroup(const char* value) { SetGroup(value); return *this;}


    /**
     * <p>The ARNs of the resources to be removed from the group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>The ARNs of the resources to be removed from the group.</p>
     */
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }

    /**
     * <p>The ARNs of the resources to be removed from the group.</p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p>The ARNs of the resources to be removed from the group.</p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }

    /**
     * <p>The ARNs of the resources to be removed from the group.</p>
     */
    inline UngroupResourcesRequest& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>The ARNs of the resources to be removed from the group.</p>
     */
    inline UngroupResourcesRequest& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the resources to be removed from the group.</p>
     */
    inline UngroupResourcesRequest& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of the resources to be removed from the group.</p>
     */
    inline UngroupResourcesRequest& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the resources to be removed from the group.</p>
     */
    inline UngroupResourcesRequest& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

  private:

    Aws::String m_group;
    bool m_groupHasBeenSet;

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
