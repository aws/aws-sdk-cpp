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
    AWS_DATAEXCHANGE_API ListReceivedDataGrantsResult() = default;
    AWS_DATAEXCHANGE_API ListReceivedDataGrantsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAEXCHANGE_API ListReceivedDataGrantsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains a list of received data grant information.</p>
     */
    inline const Aws::Vector<ReceivedDataGrantSummariesEntry>& GetDataGrantSummaries() const { return m_dataGrantSummaries; }
    template<typename DataGrantSummariesT = Aws::Vector<ReceivedDataGrantSummariesEntry>>
    void SetDataGrantSummaries(DataGrantSummariesT&& value) { m_dataGrantSummariesHasBeenSet = true; m_dataGrantSummaries = std::forward<DataGrantSummariesT>(value); }
    template<typename DataGrantSummariesT = Aws::Vector<ReceivedDataGrantSummariesEntry>>
    ListReceivedDataGrantsResult& WithDataGrantSummaries(DataGrantSummariesT&& value) { SetDataGrantSummaries(std::forward<DataGrantSummariesT>(value)); return *this;}
    template<typename DataGrantSummariesT = ReceivedDataGrantSummariesEntry>
    ListReceivedDataGrantsResult& AddDataGrantSummaries(DataGrantSummariesT&& value) { m_dataGrantSummariesHasBeenSet = true; m_dataGrantSummaries.emplace_back(std::forward<DataGrantSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReceivedDataGrantsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReceivedDataGrantsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReceivedDataGrantSummariesEntry> m_dataGrantSummaries;
    bool m_dataGrantSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
