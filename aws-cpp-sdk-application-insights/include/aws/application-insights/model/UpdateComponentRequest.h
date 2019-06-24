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
  class AWS_APPLICATIONINSIGHTS_API UpdateComponentRequest : public ApplicationInsightsRequest
  {
  public:
    UpdateComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateComponent"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the resource group.</p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }

    /**
     * <p>The name of the resource group.</p>
     */
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }

    /**
     * <p>The name of the resource group.</p>
     */
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = value; }

    /**
     * <p>The name of the resource group.</p>
     */
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::move(value); }

    /**
     * <p>The name of the resource group.</p>
     */
    inline void SetResourceGroupName(const char* value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName.assign(value); }

    /**
     * <p>The name of the resource group.</p>
     */
    inline UpdateComponentRequest& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline UpdateComponentRequest& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline UpdateComponentRequest& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}


    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }

    /**
     * <p>The name of the component.</p>
     */
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline UpdateComponentRequest& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline UpdateComponentRequest& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline UpdateComponentRequest& WithComponentName(const char* value) { SetComponentName(value); return *this;}


    /**
     * <p>The new name of the component.</p>
     */
    inline const Aws::String& GetNewComponentName() const{ return m_newComponentName; }

    /**
     * <p>The new name of the component.</p>
     */
    inline bool NewComponentNameHasBeenSet() const { return m_newComponentNameHasBeenSet; }

    /**
     * <p>The new name of the component.</p>
     */
    inline void SetNewComponentName(const Aws::String& value) { m_newComponentNameHasBeenSet = true; m_newComponentName = value; }

    /**
     * <p>The new name of the component.</p>
     */
    inline void SetNewComponentName(Aws::String&& value) { m_newComponentNameHasBeenSet = true; m_newComponentName = std::move(value); }

    /**
     * <p>The new name of the component.</p>
     */
    inline void SetNewComponentName(const char* value) { m_newComponentNameHasBeenSet = true; m_newComponentName.assign(value); }

    /**
     * <p>The new name of the component.</p>
     */
    inline UpdateComponentRequest& WithNewComponentName(const Aws::String& value) { SetNewComponentName(value); return *this;}

    /**
     * <p>The new name of the component.</p>
     */
    inline UpdateComponentRequest& WithNewComponentName(Aws::String&& value) { SetNewComponentName(std::move(value)); return *this;}

    /**
     * <p>The new name of the component.</p>
     */
    inline UpdateComponentRequest& WithNewComponentName(const char* value) { SetNewComponentName(value); return *this;}


    /**
     * <p>The list of resource ARNs that belong to the component.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceList() const{ return m_resourceList; }

    /**
     * <p>The list of resource ARNs that belong to the component.</p>
     */
    inline bool ResourceListHasBeenSet() const { return m_resourceListHasBeenSet; }

    /**
     * <p>The list of resource ARNs that belong to the component.</p>
     */
    inline void SetResourceList(const Aws::Vector<Aws::String>& value) { m_resourceListHasBeenSet = true; m_resourceList = value; }

    /**
     * <p>The list of resource ARNs that belong to the component.</p>
     */
    inline void SetResourceList(Aws::Vector<Aws::String>&& value) { m_resourceListHasBeenSet = true; m_resourceList = std::move(value); }

    /**
     * <p>The list of resource ARNs that belong to the component.</p>
     */
    inline UpdateComponentRequest& WithResourceList(const Aws::Vector<Aws::String>& value) { SetResourceList(value); return *this;}

    /**
     * <p>The list of resource ARNs that belong to the component.</p>
     */
    inline UpdateComponentRequest& WithResourceList(Aws::Vector<Aws::String>&& value) { SetResourceList(std::move(value)); return *this;}

    /**
     * <p>The list of resource ARNs that belong to the component.</p>
     */
    inline UpdateComponentRequest& AddResourceList(const Aws::String& value) { m_resourceListHasBeenSet = true; m_resourceList.push_back(value); return *this; }

    /**
     * <p>The list of resource ARNs that belong to the component.</p>
     */
    inline UpdateComponentRequest& AddResourceList(Aws::String&& value) { m_resourceListHasBeenSet = true; m_resourceList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of resource ARNs that belong to the component.</p>
     */
    inline UpdateComponentRequest& AddResourceList(const char* value) { m_resourceListHasBeenSet = true; m_resourceList.push_back(value); return *this; }

  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet;

    Aws::String m_newComponentName;
    bool m_newComponentNameHasBeenSet;

    Aws::Vector<Aws::String> m_resourceList;
    bool m_resourceListHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
