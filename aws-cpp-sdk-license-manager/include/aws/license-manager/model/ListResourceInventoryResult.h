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
  class AWS_LICENSEMANAGER_API ListResourceInventoryResult
  {
  public:
    ListResourceInventoryResult();
    ListResourceInventoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListResourceInventoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detailed list of resources.</p>
     */
    inline const Aws::Vector<ResourceInventory>& GetResourceInventoryList() const{ return m_resourceInventoryList; }

    /**
     * <p>The detailed list of resources.</p>
     */
    inline void SetResourceInventoryList(const Aws::Vector<ResourceInventory>& value) { m_resourceInventoryList = value; }

    /**
     * <p>The detailed list of resources.</p>
     */
    inline void SetResourceInventoryList(Aws::Vector<ResourceInventory>&& value) { m_resourceInventoryList = std::move(value); }

    /**
     * <p>The detailed list of resources.</p>
     */
    inline ListResourceInventoryResult& WithResourceInventoryList(const Aws::Vector<ResourceInventory>& value) { SetResourceInventoryList(value); return *this;}

    /**
     * <p>The detailed list of resources.</p>
     */
    inline ListResourceInventoryResult& WithResourceInventoryList(Aws::Vector<ResourceInventory>&& value) { SetResourceInventoryList(std::move(value)); return *this;}

    /**
     * <p>The detailed list of resources.</p>
     */
    inline ListResourceInventoryResult& AddResourceInventoryList(const ResourceInventory& value) { m_resourceInventoryList.push_back(value); return *this; }

    /**
     * <p>The detailed list of resources.</p>
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
