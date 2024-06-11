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
    AWS_INSPECTOR_API DescribeResourceGroupsResult();
    AWS_INSPECTOR_API DescribeResourceGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API DescribeResourceGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about a resource group.</p>
     */
    inline const Aws::Vector<ResourceGroup>& GetResourceGroups() const{ return m_resourceGroups; }
    inline void SetResourceGroups(const Aws::Vector<ResourceGroup>& value) { m_resourceGroups = value; }
    inline void SetResourceGroups(Aws::Vector<ResourceGroup>&& value) { m_resourceGroups = std::move(value); }
    inline DescribeResourceGroupsResult& WithResourceGroups(const Aws::Vector<ResourceGroup>& value) { SetResourceGroups(value); return *this;}
    inline DescribeResourceGroupsResult& WithResourceGroups(Aws::Vector<ResourceGroup>&& value) { SetResourceGroups(std::move(value)); return *this;}
    inline DescribeResourceGroupsResult& AddResourceGroups(const ResourceGroup& value) { m_resourceGroups.push_back(value); return *this; }
    inline DescribeResourceGroupsResult& AddResourceGroups(ResourceGroup&& value) { m_resourceGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Resource group details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline const Aws::Map<Aws::String, FailedItemDetails>& GetFailedItems() const{ return m_failedItems; }
    inline void SetFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { m_failedItems = value; }
    inline void SetFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { m_failedItems = std::move(value); }
    inline DescribeResourceGroupsResult& WithFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { SetFailedItems(value); return *this;}
    inline DescribeResourceGroupsResult& WithFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { SetFailedItems(std::move(value)); return *this;}
    inline DescribeResourceGroupsResult& AddFailedItems(const Aws::String& key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }
    inline DescribeResourceGroupsResult& AddFailedItems(Aws::String&& key, const FailedItemDetails& value) { m_failedItems.emplace(std::move(key), value); return *this; }
    inline DescribeResourceGroupsResult& AddFailedItems(const Aws::String& key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }
    inline DescribeResourceGroupsResult& AddFailedItems(Aws::String&& key, FailedItemDetails&& value) { m_failedItems.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeResourceGroupsResult& AddFailedItems(const char* key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }
    inline DescribeResourceGroupsResult& AddFailedItems(const char* key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeResourceGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeResourceGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeResourceGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceGroup> m_resourceGroups;

    Aws::Map<Aws::String, FailedItemDetails> m_failedItems;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
