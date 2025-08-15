/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amp/model/ScraperSummary.h>
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
namespace PrometheusService
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>ListScrapers</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListScrapersResponse">AWS
   * API Reference</a></p>
   */
  class ListScrapersResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API ListScrapersResult() = default;
    AWS_PROMETHEUSSERVICE_API ListScrapersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API ListScrapersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>ScraperSummary</code> structures giving information about
     * scrapers in the account that match the filters provided.</p>
     */
    inline const Aws::Vector<ScraperSummary>& GetScrapers() const { return m_scrapers; }
    template<typename ScrapersT = Aws::Vector<ScraperSummary>>
    void SetScrapers(ScrapersT&& value) { m_scrapersHasBeenSet = true; m_scrapers = std::forward<ScrapersT>(value); }
    template<typename ScrapersT = Aws::Vector<ScraperSummary>>
    ListScrapersResult& WithScrapers(ScrapersT&& value) { SetScrapers(std::forward<ScrapersT>(value)); return *this;}
    template<typename ScrapersT = ScraperSummary>
    ListScrapersResult& AddScrapers(ScrapersT&& value) { m_scrapersHasBeenSet = true; m_scrapers.emplace_back(std::forward<ScrapersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token indicating that there are more results to retrieve. You can use this
     * token as part of your next <code>ListScrapers</code> operation to retrieve those
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListScrapersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListScrapersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ScraperSummary> m_scrapers;
    bool m_scrapersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
