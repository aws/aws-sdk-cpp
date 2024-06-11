﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/UseCase.h>
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
namespace Connect
{
namespace Model
{
  class ListUseCasesResult
  {
  public:
    AWS_CONNECT_API ListUseCasesResult();
    AWS_CONNECT_API ListUseCasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListUseCasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The use cases.</p>
     */
    inline const Aws::Vector<UseCase>& GetUseCaseSummaryList() const{ return m_useCaseSummaryList; }
    inline void SetUseCaseSummaryList(const Aws::Vector<UseCase>& value) { m_useCaseSummaryList = value; }
    inline void SetUseCaseSummaryList(Aws::Vector<UseCase>&& value) { m_useCaseSummaryList = std::move(value); }
    inline ListUseCasesResult& WithUseCaseSummaryList(const Aws::Vector<UseCase>& value) { SetUseCaseSummaryList(value); return *this;}
    inline ListUseCasesResult& WithUseCaseSummaryList(Aws::Vector<UseCase>&& value) { SetUseCaseSummaryList(std::move(value)); return *this;}
    inline ListUseCasesResult& AddUseCaseSummaryList(const UseCase& value) { m_useCaseSummaryList.push_back(value); return *this; }
    inline ListUseCasesResult& AddUseCaseSummaryList(UseCase&& value) { m_useCaseSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListUseCasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListUseCasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListUseCasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListUseCasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListUseCasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListUseCasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<UseCase> m_useCaseSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
