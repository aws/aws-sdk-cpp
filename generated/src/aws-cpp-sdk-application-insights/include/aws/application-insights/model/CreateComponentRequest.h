﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/ApplicationInsightsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

  /**
   */
  class CreateComponentRequest : public ApplicationInsightsRequest
  {
  public:
    AWS_APPLICATIONINSIGHTS_API CreateComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateComponent"; }

    AWS_APPLICATIONINSIGHTS_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONINSIGHTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the resource group.</p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = value; }
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::move(value); }
    inline void SetResourceGroupName(const char* value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName.assign(value); }
    inline CreateComponentRequest& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}
    inline CreateComponentRequest& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}
    inline CreateComponentRequest& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }
    inline CreateComponentRequest& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}
    inline CreateComponentRequest& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}
    inline CreateComponentRequest& WithComponentName(const char* value) { SetComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of resource ARNs that belong to the component.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceList() const{ return m_resourceList; }
    inline bool ResourceListHasBeenSet() const { return m_resourceListHasBeenSet; }
    inline void SetResourceList(const Aws::Vector<Aws::String>& value) { m_resourceListHasBeenSet = true; m_resourceList = value; }
    inline void SetResourceList(Aws::Vector<Aws::String>&& value) { m_resourceListHasBeenSet = true; m_resourceList = std::move(value); }
    inline CreateComponentRequest& WithResourceList(const Aws::Vector<Aws::String>& value) { SetResourceList(value); return *this;}
    inline CreateComponentRequest& WithResourceList(Aws::Vector<Aws::String>&& value) { SetResourceList(std::move(value)); return *this;}
    inline CreateComponentRequest& AddResourceList(const Aws::String& value) { m_resourceListHasBeenSet = true; m_resourceList.push_back(value); return *this; }
    inline CreateComponentRequest& AddResourceList(Aws::String&& value) { m_resourceListHasBeenSet = true; m_resourceList.push_back(std::move(value)); return *this; }
    inline CreateComponentRequest& AddResourceList(const char* value) { m_resourceListHasBeenSet = true; m_resourceList.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceList;
    bool m_resourceListHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
