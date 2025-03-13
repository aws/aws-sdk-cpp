/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appfabric/model/IngestionDestinationSummary.h>
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
namespace AppFabric
{
namespace Model
{
  class ListIngestionDestinationsResult
  {
  public:
    AWS_APPFABRIC_API ListIngestionDestinationsResult() = default;
    AWS_APPFABRIC_API ListIngestionDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFABRIC_API ListIngestionDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains a list of ingestion destination summaries.</p>
     */
    inline const Aws::Vector<IngestionDestinationSummary>& GetIngestionDestinations() const { return m_ingestionDestinations; }
    template<typename IngestionDestinationsT = Aws::Vector<IngestionDestinationSummary>>
    void SetIngestionDestinations(IngestionDestinationsT&& value) { m_ingestionDestinationsHasBeenSet = true; m_ingestionDestinations = std::forward<IngestionDestinationsT>(value); }
    template<typename IngestionDestinationsT = Aws::Vector<IngestionDestinationSummary>>
    ListIngestionDestinationsResult& WithIngestionDestinations(IngestionDestinationsT&& value) { SetIngestionDestinations(std::forward<IngestionDestinationsT>(value)); return *this;}
    template<typename IngestionDestinationsT = IngestionDestinationSummary>
    ListIngestionDestinationsResult& AddIngestionDestinations(IngestionDestinationsT&& value) { m_ingestionDestinationsHasBeenSet = true; m_ingestionDestinations.emplace_back(std::forward<IngestionDestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken
     * error</i>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIngestionDestinationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIngestionDestinationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IngestionDestinationSummary> m_ingestionDestinations;
    bool m_ingestionDestinationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
