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
    AWS_INSPECTOR_API DescribeResourceGroupsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeResourceGroups"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN that specifies the resource group that you want to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceGroupArns() const { return m_resourceGroupArns; }
    inline bool ResourceGroupArnsHasBeenSet() const { return m_resourceGroupArnsHasBeenSet; }
    template<typename ResourceGroupArnsT = Aws::Vector<Aws::String>>
    void SetResourceGroupArns(ResourceGroupArnsT&& value) { m_resourceGroupArnsHasBeenSet = true; m_resourceGroupArns = std::forward<ResourceGroupArnsT>(value); }
    template<typename ResourceGroupArnsT = Aws::Vector<Aws::String>>
    DescribeResourceGroupsRequest& WithResourceGroupArns(ResourceGroupArnsT&& value) { SetResourceGroupArns(std::forward<ResourceGroupArnsT>(value)); return *this;}
    template<typename ResourceGroupArnsT = Aws::String>
    DescribeResourceGroupsRequest& AddResourceGroupArns(ResourceGroupArnsT&& value) { m_resourceGroupArnsHasBeenSet = true; m_resourceGroupArns.emplace_back(std::forward<ResourceGroupArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_resourceGroupArns;
    bool m_resourceGroupArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
