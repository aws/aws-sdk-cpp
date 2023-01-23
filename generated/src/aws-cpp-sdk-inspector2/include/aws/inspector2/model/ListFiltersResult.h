/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/Filter.h>
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
namespace Inspector2
{
namespace Model
{
  class ListFiltersResult
  {
  public:
    AWS_INSPECTOR2_API ListFiltersResult();
    AWS_INSPECTOR2_API ListFiltersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListFiltersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains details on the filters associated with your account.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Contains details on the filters associated with your account.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filters = value; }

    /**
     * <p>Contains details on the filters associated with your account.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filters = std::move(value); }

    /**
     * <p>Contains details on the filters associated with your account.</p>
     */
    inline ListFiltersResult& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Contains details on the filters associated with your account.</p>
     */
    inline ListFiltersResult& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Contains details on the filters associated with your account.</p>
     */
    inline ListFiltersResult& AddFilters(const Filter& value) { m_filters.push_back(value); return *this; }

    /**
     * <p>Contains details on the filters associated with your account.</p>
     */
    inline ListFiltersResult& AddFilters(Filter&& value) { m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline ListFiltersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline ListFiltersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline ListFiltersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
