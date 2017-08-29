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
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resourcegroupstaggingapi/model/ResourceTagMapping.h>
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
namespace ResourceGroupsTaggingAPI
{
namespace Model
{
  class AWS_RESOURCEGROUPSTAGGINGAPI_API GetResourcesResult
  {
  public:
    GetResourcesResult();
    GetResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A string that indicates that the response contains more data than can be
     * returned in a single response. To receive additional data, specify this string
     * for the <code>PaginationToken</code> value in a subsequent request.</p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }

    /**
     * <p>A string that indicates that the response contains more data than can be
     * returned in a single response. To receive additional data, specify this string
     * for the <code>PaginationToken</code> value in a subsequent request.</p>
     */
    inline void SetPaginationToken(const Aws::String& value) { m_paginationToken = value; }

    /**
     * <p>A string that indicates that the response contains more data than can be
     * returned in a single response. To receive additional data, specify this string
     * for the <code>PaginationToken</code> value in a subsequent request.</p>
     */
    inline void SetPaginationToken(Aws::String&& value) { m_paginationToken = std::move(value); }

    /**
     * <p>A string that indicates that the response contains more data than can be
     * returned in a single response. To receive additional data, specify this string
     * for the <code>PaginationToken</code> value in a subsequent request.</p>
     */
    inline void SetPaginationToken(const char* value) { m_paginationToken.assign(value); }

    /**
     * <p>A string that indicates that the response contains more data than can be
     * returned in a single response. To receive additional data, specify this string
     * for the <code>PaginationToken</code> value in a subsequent request.</p>
     */
    inline GetResourcesResult& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}

    /**
     * <p>A string that indicates that the response contains more data than can be
     * returned in a single response. To receive additional data, specify this string
     * for the <code>PaginationToken</code> value in a subsequent request.</p>
     */
    inline GetResourcesResult& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}

    /**
     * <p>A string that indicates that the response contains more data than can be
     * returned in a single response. To receive additional data, specify this string
     * for the <code>PaginationToken</code> value in a subsequent request.</p>
     */
    inline GetResourcesResult& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}


    /**
     * <p>A list of resource ARNs and the tags (keys and values) associated with
     * each.</p>
     */
    inline const Aws::Vector<ResourceTagMapping>& GetResourceTagMappingList() const{ return m_resourceTagMappingList; }

    /**
     * <p>A list of resource ARNs and the tags (keys and values) associated with
     * each.</p>
     */
    inline void SetResourceTagMappingList(const Aws::Vector<ResourceTagMapping>& value) { m_resourceTagMappingList = value; }

    /**
     * <p>A list of resource ARNs and the tags (keys and values) associated with
     * each.</p>
     */
    inline void SetResourceTagMappingList(Aws::Vector<ResourceTagMapping>&& value) { m_resourceTagMappingList = std::move(value); }

    /**
     * <p>A list of resource ARNs and the tags (keys and values) associated with
     * each.</p>
     */
    inline GetResourcesResult& WithResourceTagMappingList(const Aws::Vector<ResourceTagMapping>& value) { SetResourceTagMappingList(value); return *this;}

    /**
     * <p>A list of resource ARNs and the tags (keys and values) associated with
     * each.</p>
     */
    inline GetResourcesResult& WithResourceTagMappingList(Aws::Vector<ResourceTagMapping>&& value) { SetResourceTagMappingList(std::move(value)); return *this;}

    /**
     * <p>A list of resource ARNs and the tags (keys and values) associated with
     * each.</p>
     */
    inline GetResourcesResult& AddResourceTagMappingList(const ResourceTagMapping& value) { m_resourceTagMappingList.push_back(value); return *this; }

    /**
     * <p>A list of resource ARNs and the tags (keys and values) associated with
     * each.</p>
     */
    inline GetResourcesResult& AddResourceTagMappingList(ResourceTagMapping&& value) { m_resourceTagMappingList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_paginationToken;

    Aws::Vector<ResourceTagMapping> m_resourceTagMappingList;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
