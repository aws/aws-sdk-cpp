﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/ResourceGroup.h>
#include <aws/inspector/model/FailedItemDetails.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Inspector
{
namespace Model
{
  class DescribeResourceGroupsResult
  {
  public:
    AWS_INSPECTOR_API DescribeResourceGroupsResult() = default;
    AWS_INSPECTOR_API DescribeResourceGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API DescribeResourceGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about a resource group.</p>
     */
    inline const Aws::Vector<ResourceGroup>& GetResourceGroups() const { return m_resourceGroups; }
    template<typename ResourceGroupsT = Aws::Vector<ResourceGroup>>
    void SetResourceGroups(ResourceGroupsT&& value) { m_resourceGroupsHasBeenSet = true; m_resourceGroups = std::forward<ResourceGroupsT>(value); }
    template<typename ResourceGroupsT = Aws::Vector<ResourceGroup>>
    DescribeResourceGroupsResult& WithResourceGroups(ResourceGroupsT&& value) { SetResourceGroups(std::forward<ResourceGroupsT>(value)); return *this;}
    template<typename ResourceGroupsT = ResourceGroup>
    DescribeResourceGroupsResult& AddResourceGroups(ResourceGroupsT&& value) { m_resourceGroupsHasBeenSet = true; m_resourceGroups.emplace_back(std::forward<ResourceGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Resource group details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline const Aws::Map<Aws::String, FailedItemDetails>& GetFailedItems() const { return m_failedItems; }
    template<typename FailedItemsT = Aws::Map<Aws::String, FailedItemDetails>>
    void SetFailedItems(FailedItemsT&& value) { m_failedItemsHasBeenSet = true; m_failedItems = std::forward<FailedItemsT>(value); }
    template<typename FailedItemsT = Aws::Map<Aws::String, FailedItemDetails>>
    DescribeResourceGroupsResult& WithFailedItems(FailedItemsT&& value) { SetFailedItems(std::forward<FailedItemsT>(value)); return *this;}
    template<typename FailedItemsKeyT = Aws::String, typename FailedItemsValueT = FailedItemDetails>
    DescribeResourceGroupsResult& AddFailedItems(FailedItemsKeyT&& key, FailedItemsValueT&& value) {
      m_failedItemsHasBeenSet = true; m_failedItems.emplace(std::forward<FailedItemsKeyT>(key), std::forward<FailedItemsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeResourceGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceGroup> m_resourceGroups;
    bool m_resourceGroupsHasBeenSet = false;

    Aws::Map<Aws::String, FailedItemDetails> m_failedItems;
    bool m_failedItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
