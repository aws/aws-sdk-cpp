/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_PROMETHEUSSERVICE_API ListScrapersResult();
    AWS_PROMETHEUSSERVICE_API ListScrapersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API ListScrapersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token indicating that there are more results to retrieve. You can use this
     * token as part of your next <code>ListScrapers</code> operation to retrieve those
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token indicating that there are more results to retrieve. You can use this
     * token as part of your next <code>ListScrapers</code> operation to retrieve those
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token indicating that there are more results to retrieve. You can use this
     * token as part of your next <code>ListScrapers</code> operation to retrieve those
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token indicating that there are more results to retrieve. You can use this
     * token as part of your next <code>ListScrapers</code> operation to retrieve those
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token indicating that there are more results to retrieve. You can use this
     * token as part of your next <code>ListScrapers</code> operation to retrieve those
     * results.</p>
     */
    inline ListScrapersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token indicating that there are more results to retrieve. You can use this
     * token as part of your next <code>ListScrapers</code> operation to retrieve those
     * results.</p>
     */
    inline ListScrapersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token indicating that there are more results to retrieve. You can use this
     * token as part of your next <code>ListScrapers</code> operation to retrieve those
     * results.</p>
     */
    inline ListScrapersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of <code>ScraperSummary</code> structures giving information about
     * scrapers in the account that match the filters provided.</p>
     */
    inline const Aws::Vector<ScraperSummary>& GetScrapers() const{ return m_scrapers; }

    /**
     * <p>A list of <code>ScraperSummary</code> structures giving information about
     * scrapers in the account that match the filters provided.</p>
     */
    inline void SetScrapers(const Aws::Vector<ScraperSummary>& value) { m_scrapers = value; }

    /**
     * <p>A list of <code>ScraperSummary</code> structures giving information about
     * scrapers in the account that match the filters provided.</p>
     */
    inline void SetScrapers(Aws::Vector<ScraperSummary>&& value) { m_scrapers = std::move(value); }

    /**
     * <p>A list of <code>ScraperSummary</code> structures giving information about
     * scrapers in the account that match the filters provided.</p>
     */
    inline ListScrapersResult& WithScrapers(const Aws::Vector<ScraperSummary>& value) { SetScrapers(value); return *this;}

    /**
     * <p>A list of <code>ScraperSummary</code> structures giving information about
     * scrapers in the account that match the filters provided.</p>
     */
    inline ListScrapersResult& WithScrapers(Aws::Vector<ScraperSummary>&& value) { SetScrapers(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ScraperSummary</code> structures giving information about
     * scrapers in the account that match the filters provided.</p>
     */
    inline ListScrapersResult& AddScrapers(const ScraperSummary& value) { m_scrapers.push_back(value); return *this; }

    /**
     * <p>A list of <code>ScraperSummary</code> structures giving information about
     * scrapers in the account that match the filters provided.</p>
     */
    inline ListScrapersResult& AddScrapers(ScraperSummary&& value) { m_scrapers.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListScrapersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListScrapersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListScrapersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ScraperSummary> m_scrapers;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
