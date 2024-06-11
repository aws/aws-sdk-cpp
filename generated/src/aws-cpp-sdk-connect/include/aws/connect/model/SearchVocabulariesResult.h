﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/VocabularySummary.h>
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
  class SearchVocabulariesResult
  {
  public:
    AWS_CONNECT_API SearchVocabulariesResult();
    AWS_CONNECT_API SearchVocabulariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchVocabulariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of the available custom vocabularies.</p>
     */
    inline const Aws::Vector<VocabularySummary>& GetVocabularySummaryList() const{ return m_vocabularySummaryList; }
    inline void SetVocabularySummaryList(const Aws::Vector<VocabularySummary>& value) { m_vocabularySummaryList = value; }
    inline void SetVocabularySummaryList(Aws::Vector<VocabularySummary>&& value) { m_vocabularySummaryList = std::move(value); }
    inline SearchVocabulariesResult& WithVocabularySummaryList(const Aws::Vector<VocabularySummary>& value) { SetVocabularySummaryList(value); return *this;}
    inline SearchVocabulariesResult& WithVocabularySummaryList(Aws::Vector<VocabularySummary>&& value) { SetVocabularySummaryList(std::move(value)); return *this;}
    inline SearchVocabulariesResult& AddVocabularySummaryList(const VocabularySummary& value) { m_vocabularySummaryList.push_back(value); return *this; }
    inline SearchVocabulariesResult& AddVocabularySummaryList(VocabularySummary&& value) { m_vocabularySummaryList.push_back(std::move(value)); return *this; }
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
    inline SearchVocabulariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchVocabulariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchVocabulariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchVocabulariesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchVocabulariesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchVocabulariesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<VocabularySummary> m_vocabularySummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
