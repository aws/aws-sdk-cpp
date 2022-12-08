/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/CaseSummary.h>
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
  class ListCasesForContactResult
  {
  public:
    AWS_CONNECTCASES_API ListCasesForContactResult();
    AWS_CONNECTCASES_API ListCasesForContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API ListCasesForContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of Case summary information.</p>
     */
    inline const Aws::Vector<CaseSummary>& GetCases() const{ return m_cases; }

    /**
     * <p>A list of Case summary information.</p>
     */
    inline void SetCases(const Aws::Vector<CaseSummary>& value) { m_cases = value; }

    /**
     * <p>A list of Case summary information.</p>
     */
    inline void SetCases(Aws::Vector<CaseSummary>&& value) { m_cases = std::move(value); }

    /**
     * <p>A list of Case summary information.</p>
     */
    inline ListCasesForContactResult& WithCases(const Aws::Vector<CaseSummary>& value) { SetCases(value); return *this;}

    /**
     * <p>A list of Case summary information.</p>
     */
    inline ListCasesForContactResult& WithCases(Aws::Vector<CaseSummary>&& value) { SetCases(std::move(value)); return *this;}

    /**
     * <p>A list of Case summary information.</p>
     */
    inline ListCasesForContactResult& AddCases(const CaseSummary& value) { m_cases.push_back(value); return *this; }

    /**
     * <p>A list of Case summary information.</p>
     */
    inline ListCasesForContactResult& AddCases(CaseSummary&& value) { m_cases.push_back(std::move(value)); return *this; }


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
    inline ListCasesForContactResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline ListCasesForContactResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline ListCasesForContactResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CaseSummary> m_cases;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
