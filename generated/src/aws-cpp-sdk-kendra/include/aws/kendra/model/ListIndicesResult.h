/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/IndexConfigurationSummary.h>
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
namespace kendra
{
namespace Model
{
  class ListIndicesResult
  {
  public:
    AWS_KENDRA_API ListIndicesResult();
    AWS_KENDRA_API ListIndicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListIndicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of summary information on the configuration of one or more
     * indexes.</p>
     */
    inline const Aws::Vector<IndexConfigurationSummary>& GetIndexConfigurationSummaryItems() const{ return m_indexConfigurationSummaryItems; }
    inline void SetIndexConfigurationSummaryItems(const Aws::Vector<IndexConfigurationSummary>& value) { m_indexConfigurationSummaryItems = value; }
    inline void SetIndexConfigurationSummaryItems(Aws::Vector<IndexConfigurationSummary>&& value) { m_indexConfigurationSummaryItems = std::move(value); }
    inline ListIndicesResult& WithIndexConfigurationSummaryItems(const Aws::Vector<IndexConfigurationSummary>& value) { SetIndexConfigurationSummaryItems(value); return *this;}
    inline ListIndicesResult& WithIndexConfigurationSummaryItems(Aws::Vector<IndexConfigurationSummary>&& value) { SetIndexConfigurationSummaryItems(std::move(value)); return *this;}
    inline ListIndicesResult& AddIndexConfigurationSummaryItems(const IndexConfigurationSummary& value) { m_indexConfigurationSummaryItems.push_back(value); return *this; }
    inline ListIndicesResult& AddIndexConfigurationSummaryItems(IndexConfigurationSummary&& value) { m_indexConfigurationSummaryItems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of indexes.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListIndicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIndicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIndicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIndicesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIndicesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIndicesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<IndexConfigurationSummary> m_indexConfigurationSummaryItems;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
