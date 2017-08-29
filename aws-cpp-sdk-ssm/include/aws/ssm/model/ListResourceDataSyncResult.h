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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ResourceDataSyncItem.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API ListResourceDataSyncResult
  {
  public:
    ListResourceDataSyncResult();
    ListResourceDataSyncResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListResourceDataSyncResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of your current Resource Data Sync configurations and their
     * statuses.</p>
     */
    inline const Aws::Vector<ResourceDataSyncItem>& GetResourceDataSyncItems() const{ return m_resourceDataSyncItems; }

    /**
     * <p>A list of your current Resource Data Sync configurations and their
     * statuses.</p>
     */
    inline void SetResourceDataSyncItems(const Aws::Vector<ResourceDataSyncItem>& value) { m_resourceDataSyncItems = value; }

    /**
     * <p>A list of your current Resource Data Sync configurations and their
     * statuses.</p>
     */
    inline void SetResourceDataSyncItems(Aws::Vector<ResourceDataSyncItem>&& value) { m_resourceDataSyncItems = std::move(value); }

    /**
     * <p>A list of your current Resource Data Sync configurations and their
     * statuses.</p>
     */
    inline ListResourceDataSyncResult& WithResourceDataSyncItems(const Aws::Vector<ResourceDataSyncItem>& value) { SetResourceDataSyncItems(value); return *this;}

    /**
     * <p>A list of your current Resource Data Sync configurations and their
     * statuses.</p>
     */
    inline ListResourceDataSyncResult& WithResourceDataSyncItems(Aws::Vector<ResourceDataSyncItem>&& value) { SetResourceDataSyncItems(std::move(value)); return *this;}

    /**
     * <p>A list of your current Resource Data Sync configurations and their
     * statuses.</p>
     */
    inline ListResourceDataSyncResult& AddResourceDataSyncItems(const ResourceDataSyncItem& value) { m_resourceDataSyncItems.push_back(value); return *this; }

    /**
     * <p>A list of your current Resource Data Sync configurations and their
     * statuses.</p>
     */
    inline ListResourceDataSyncResult& AddResourceDataSyncItems(ResourceDataSyncItem&& value) { m_resourceDataSyncItems.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListResourceDataSyncResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListResourceDataSyncResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListResourceDataSyncResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ResourceDataSyncItem> m_resourceDataSyncItems;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
