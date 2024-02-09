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
    AWS_PROMETHEUSSERVICE_API DescribeScraperResult();
    AWS_PROMETHEUSSERVICE_API DescribeScraperResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API DescribeScraperResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains details about the scraper.</p>
     */
    inline const ScraperDescription& GetScraper() const{ return m_scraper; }

    /**
     * <p>Contains details about the scraper.</p>
     */
    inline void SetScraper(const ScraperDescription& value) { m_scraper = value; }

    /**
     * <p>Contains details about the scraper.</p>
     */
    inline void SetScraper(ScraperDescription&& value) { m_scraper = std::move(value); }

    /**
     * <p>Contains details about the scraper.</p>
     */
    inline DescribeScraperResult& WithScraper(const ScraperDescription& value) { SetScraper(value); return *this;}

    /**
     * <p>Contains details about the scraper.</p>
     */
    inline DescribeScraperResult& WithScraper(ScraperDescription&& value) { SetScraper(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeScraperResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeScraperResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeScraperResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ScraperDescription m_scraper;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
