/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amp/model/ScraperStatus.h>
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
   * <p>Represents the output of a <code>DeleteScraper</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteScraperResponse">AWS
   * API Reference</a></p>
   */
  class DeleteScraperResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API DeleteScraperResult();
    AWS_PROMETHEUSSERVICE_API DeleteScraperResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API DeleteScraperResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the scraper to delete.</p>
     */
    inline const Aws::String& GetScraperId() const{ return m_scraperId; }

    /**
     * <p>The ID of the scraper to delete.</p>
     */
    inline void SetScraperId(const Aws::String& value) { m_scraperId = value; }

    /**
     * <p>The ID of the scraper to delete.</p>
     */
    inline void SetScraperId(Aws::String&& value) { m_scraperId = std::move(value); }

    /**
     * <p>The ID of the scraper to delete.</p>
     */
    inline void SetScraperId(const char* value) { m_scraperId.assign(value); }

    /**
     * <p>The ID of the scraper to delete.</p>
     */
    inline DeleteScraperResult& WithScraperId(const Aws::String& value) { SetScraperId(value); return *this;}

    /**
     * <p>The ID of the scraper to delete.</p>
     */
    inline DeleteScraperResult& WithScraperId(Aws::String&& value) { SetScraperId(std::move(value)); return *this;}

    /**
     * <p>The ID of the scraper to delete.</p>
     */
    inline DeleteScraperResult& WithScraperId(const char* value) { SetScraperId(value); return *this;}


    /**
     * <p>The current status of the scraper.</p>
     */
    inline const ScraperStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the scraper.</p>
     */
    inline void SetStatus(const ScraperStatus& value) { m_status = value; }

    /**
     * <p>The current status of the scraper.</p>
     */
    inline void SetStatus(ScraperStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the scraper.</p>
     */
    inline DeleteScraperResult& WithStatus(const ScraperStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the scraper.</p>
     */
    inline DeleteScraperResult& WithStatus(ScraperStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteScraperResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteScraperResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteScraperResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_scraperId;

    ScraperStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
