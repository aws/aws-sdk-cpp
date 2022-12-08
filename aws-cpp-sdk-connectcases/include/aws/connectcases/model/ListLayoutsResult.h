/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/LayoutSummary.h>
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
namespace ConnectCases
{
namespace Model
{
  class ListLayoutsResult
  {
  public:
    AWS_CONNECTCASES_API ListLayoutsResult();
    AWS_CONNECTCASES_API ListLayoutsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API ListLayoutsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The layouts for the domain.</p>
     */
    inline const Aws::Vector<LayoutSummary>& GetLayouts() const{ return m_layouts; }

    /**
     * <p>The layouts for the domain.</p>
     */
    inline void SetLayouts(const Aws::Vector<LayoutSummary>& value) { m_layouts = value; }

    /**
     * <p>The layouts for the domain.</p>
     */
    inline void SetLayouts(Aws::Vector<LayoutSummary>&& value) { m_layouts = std::move(value); }

    /**
     * <p>The layouts for the domain.</p>
     */
    inline ListLayoutsResult& WithLayouts(const Aws::Vector<LayoutSummary>& value) { SetLayouts(value); return *this;}

    /**
     * <p>The layouts for the domain.</p>
     */
    inline ListLayoutsResult& WithLayouts(Aws::Vector<LayoutSummary>&& value) { SetLayouts(std::move(value)); return *this;}

    /**
     * <p>The layouts for the domain.</p>
     */
    inline ListLayoutsResult& AddLayouts(const LayoutSummary& value) { m_layouts.push_back(value); return *this; }

    /**
     * <p>The layouts for the domain.</p>
     */
    inline ListLayoutsResult& AddLayouts(LayoutSummary&& value) { m_layouts.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline ListLayoutsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline ListLayoutsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline ListLayoutsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LayoutSummary> m_layouts;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
