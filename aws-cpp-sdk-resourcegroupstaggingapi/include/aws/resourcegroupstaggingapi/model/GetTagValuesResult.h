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
  class AWS_RESOURCEGROUPSTAGGINGAPI_API GetTagValuesResult
  {
  public:
    GetTagValuesResult();
    GetTagValuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetTagValuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetTagValuesResult& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}

    /**
     * <p>A string that indicates that the response contains more data than can be
     * returned in a single response. To receive additional data, specify this string
     * for the <code>PaginationToken</code> value in a subsequent request.</p>
     */
    inline GetTagValuesResult& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}

    /**
     * <p>A string that indicates that the response contains more data than can be
     * returned in a single response. To receive additional data, specify this string
     * for the <code>PaginationToken</code> value in a subsequent request.</p>
     */
    inline GetTagValuesResult& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}


    /**
     * <p>A list of all tag values for the specified key in the AWS account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValues() const{ return m_tagValues; }

    /**
     * <p>A list of all tag values for the specified key in the AWS account.</p>
     */
    inline void SetTagValues(const Aws::Vector<Aws::String>& value) { m_tagValues = value; }

    /**
     * <p>A list of all tag values for the specified key in the AWS account.</p>
     */
    inline void SetTagValues(Aws::Vector<Aws::String>&& value) { m_tagValues = std::move(value); }

    /**
     * <p>A list of all tag values for the specified key in the AWS account.</p>
     */
    inline GetTagValuesResult& WithTagValues(const Aws::Vector<Aws::String>& value) { SetTagValues(value); return *this;}

    /**
     * <p>A list of all tag values for the specified key in the AWS account.</p>
     */
    inline GetTagValuesResult& WithTagValues(Aws::Vector<Aws::String>&& value) { SetTagValues(std::move(value)); return *this;}

    /**
     * <p>A list of all tag values for the specified key in the AWS account.</p>
     */
    inline GetTagValuesResult& AddTagValues(const Aws::String& value) { m_tagValues.push_back(value); return *this; }

    /**
     * <p>A list of all tag values for the specified key in the AWS account.</p>
     */
    inline GetTagValuesResult& AddTagValues(Aws::String&& value) { m_tagValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of all tag values for the specified key in the AWS account.</p>
     */
    inline GetTagValuesResult& AddTagValues(const char* value) { m_tagValues.push_back(value); return *this; }

  private:

    Aws::String m_paginationToken;

    Aws::Vector<Aws::String> m_tagValues;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
