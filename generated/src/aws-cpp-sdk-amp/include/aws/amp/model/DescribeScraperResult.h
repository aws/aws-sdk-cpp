/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/ScraperDescription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Represents the output of a <code>DescribeScraper</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeScraperResponse">AWS
   * API Reference</a></p>
   */
  class DescribeScraperResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API DescribeScraperResult() = default;
    AWS_PROMETHEUSSERVICE_API DescribeScraperResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API DescribeScraperResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains details about the scraper.</p>
     */
    inline const ScraperDescription& GetScraper() const { return m_scraper; }
    template<typename ScraperT = ScraperDescription>
    void SetScraper(ScraperT&& value) { m_scraperHasBeenSet = true; m_scraper = std::forward<ScraperT>(value); }
    template<typename ScraperT = ScraperDescription>
    DescribeScraperResult& WithScraper(ScraperT&& value) { SetScraper(std::forward<ScraperT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeScraperResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ScraperDescription m_scraper;
    bool m_scraperHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
