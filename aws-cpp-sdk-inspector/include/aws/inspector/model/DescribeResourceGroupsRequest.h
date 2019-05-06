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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API DescribeResourceGroupsRequest : public InspectorRequest
  {
  public:
    DescribeResourceGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeResourceGroups"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN that specifies the resource group that you want to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceGroupArns() const{ return m_resourceGroupArns; }

    /**
     * <p>The ARN that specifies the resource group that you want to describe.</p>
     */
    inline bool ResourceGroupArnsHasBeenSet() const { return m_resourceGroupArnsHasBeenSet; }

    /**
     * <p>The ARN that specifies the resource group that you want to describe.</p>
     */
    inline void SetResourceGroupArns(const Aws::Vector<Aws::String>& value) { m_resourceGroupArnsHasBeenSet = true; m_resourceGroupArns = value; }

    /**
     * <p>The ARN that specifies the resource group that you want to describe.</p>
     */
    inline void SetResourceGroupArns(Aws::Vector<Aws::String>&& value) { m_resourceGroupArnsHasBeenSet = true; m_resourceGroupArns = std::move(value); }

    /**
     * <p>The ARN that specifies the resource group that you want to describe.</p>
     */
    inline DescribeResourceGroupsRequest& WithResourceGroupArns(const Aws::Vector<Aws::String>& value) { SetResourceGroupArns(value); return *this;}

    /**
     * <p>The ARN that specifies the resource group that you want to describe.</p>
     */
    inline DescribeResourceGroupsRequest& WithResourceGroupArns(Aws::Vector<Aws::String>&& value) { SetResourceGroupArns(std::move(value)); return *this;}

    /**
     * <p>The ARN that specifies the resource group that you want to describe.</p>
     */
    inline DescribeResourceGroupsRequest& AddResourceGroupArns(const Aws::String& value) { m_resourceGroupArnsHasBeenSet = true; m_resourceGroupArns.push_back(value); return *this; }

    /**
     * <p>The ARN that specifies the resource group that you want to describe.</p>
     */
    inline DescribeResourceGroupsRequest& AddResourceGroupArns(Aws::String&& value) { m_resourceGroupArnsHasBeenSet = true; m_resourceGroupArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARN that specifies the resource group that you want to describe.</p>
     */
    inline DescribeResourceGroupsRequest& AddResourceGroupArns(const char* value) { m_resourceGroupArnsHasBeenSet = true; m_resourceGroupArns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_resourceGroupArns;
    bool m_resourceGroupArnsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
