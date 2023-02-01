/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/ResourceInventory.h>
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
namespace LicenseManager
{
namespace Model
{
  class ListResourceInventoryResult
  {
  public:
    AWS_LICENSEMANAGER_API ListResourceInventoryResult();
    AWS_LICENSEMANAGER_API ListResourceInventoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API ListResourceInventoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the resources.</p>
     */
    inline const Aws::Vector<ResourceInventory>& GetResourceInventoryList() const{ return m_resourceInventoryList; }

    /**
     * <p>Information about the resources.</p>
     */
    inline void SetResourceInventoryList(const Aws::Vector<ResourceInventory>& value) { m_resourceInventoryList = value; }

    /**
     * <p>Information about the resources.</p>
     */
    inline void SetResourceInventoryList(Aws::Vector<ResourceInventory>&& value) { m_resourceInventoryList = std::move(value); }

    /**
     * <p>Information about the resources.</p>
     */
    inline ListResourceInventoryResult& WithResourceInventoryList(const Aws::Vector<ResourceInventory>& value) { SetResourceInventoryList(value); return *this;}

    /**
     * <p>Information about the resources.</p>
     */
    inline ListResourceInventoryResult& WithResourceInventoryList(Aws::Vector<ResourceInventory>&& value) { SetResourceInventoryList(std::move(value)); return *this;}

    /**
     * <p>Information about the resources.</p>
     */
    inline ListResourceInventoryResult& AddResourceInventoryList(const ResourceInventory& value) { m_resourceInventoryList.push_back(value); return *this; }

    /**
     * <p>Information about the resources.</p>
     */
    inline ListResourceInventoryResult& AddResourceInventoryList(ResourceInventory&& value) { m_resourceInventoryList.push_back(std::move(value)); return *this; }


    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListResourceInventoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListResourceInventoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListResourceInventoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ResourceInventory> m_resourceInventoryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
