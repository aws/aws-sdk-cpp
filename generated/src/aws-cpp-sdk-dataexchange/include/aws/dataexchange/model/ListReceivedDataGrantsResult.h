/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/ReceivedDataGrantSummariesEntry.h>
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
namespace DataExchange
{
namespace Model
{
  class ListReceivedDataGrantsResult
  {
  public:
    AWS_DATAEXCHANGE_API ListReceivedDataGrantsResult();
    AWS_DATAEXCHANGE_API ListReceivedDataGrantsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAEXCHANGE_API ListReceivedDataGrantsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains a list of received data grant information.</p>
     */
    inline const Aws::Vector<ReceivedDataGrantSummariesEntry>& GetDataGrantSummaries() const{ return m_dataGrantSummaries; }
    inline void SetDataGrantSummaries(const Aws::Vector<ReceivedDataGrantSummariesEntry>& value) { m_dataGrantSummaries = value; }
    inline void SetDataGrantSummaries(Aws::Vector<ReceivedDataGrantSummariesEntry>&& value) { m_dataGrantSummaries = std::move(value); }
    inline ListReceivedDataGrantsResult& WithDataGrantSummaries(const Aws::Vector<ReceivedDataGrantSummariesEntry>& value) { SetDataGrantSummaries(value); return *this;}
    inline ListReceivedDataGrantsResult& WithDataGrantSummaries(Aws::Vector<ReceivedDataGrantSummariesEntry>&& value) { SetDataGrantSummaries(std::move(value)); return *this;}
    inline ListReceivedDataGrantsResult& AddDataGrantSummaries(const ReceivedDataGrantSummariesEntry& value) { m_dataGrantSummaries.push_back(value); return *this; }
    inline ListReceivedDataGrantsResult& AddDataGrantSummaries(ReceivedDataGrantSummariesEntry&& value) { m_dataGrantSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListReceivedDataGrantsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListReceivedDataGrantsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListReceivedDataGrantsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListReceivedDataGrantsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListReceivedDataGrantsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListReceivedDataGrantsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ReceivedDataGrantSummariesEntry> m_dataGrantSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
