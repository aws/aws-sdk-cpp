/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeResourceGroupsRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API DescribeResourceGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeResourceGroups"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    bool m_resourceGroupArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
