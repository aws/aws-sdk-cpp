﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/SearchCasesResponseItem.h>
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
  class SearchCasesResult
  {
  public:
    AWS_CONNECTCASES_API SearchCasesResult();
    AWS_CONNECTCASES_API SearchCasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API SearchCasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of case documents where each case contains the properties
     * <code>CaseId</code> and <code>Fields</code> where each field is a complex union
     * structure. </p>
     */
    inline const Aws::Vector<SearchCasesResponseItem>& GetCases() const{ return m_cases; }
    inline void SetCases(const Aws::Vector<SearchCasesResponseItem>& value) { m_cases = value; }
    inline void SetCases(Aws::Vector<SearchCasesResponseItem>&& value) { m_cases = std::move(value); }
    inline SearchCasesResult& WithCases(const Aws::Vector<SearchCasesResponseItem>& value) { SetCases(value); return *this;}
    inline SearchCasesResult& WithCases(Aws::Vector<SearchCasesResponseItem>&& value) { SetCases(std::move(value)); return *this;}
    inline SearchCasesResult& AddCases(const SearchCasesResponseItem& value) { m_cases.push_back(value); return *this; }
    inline SearchCasesResult& AddCases(SearchCasesResponseItem&& value) { m_cases.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchCasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchCasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchCasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchCasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchCasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchCasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SearchCasesResponseItem> m_cases;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
