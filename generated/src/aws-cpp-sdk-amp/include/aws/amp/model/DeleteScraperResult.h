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
    AWS_PROMETHEUSSERVICE_API DeleteScraperResult() = default;
    AWS_PROMETHEUSSERVICE_API DeleteScraperResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API DeleteScraperResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the scraper to delete.</p>
     */
    inline const Aws::String& GetScraperId() const { return m_scraperId; }
    template<typename ScraperIdT = Aws::String>
    void SetScraperId(ScraperIdT&& value) { m_scraperIdHasBeenSet = true; m_scraperId = std::forward<ScraperIdT>(value); }
    template<typename ScraperIdT = Aws::String>
    DeleteScraperResult& WithScraperId(ScraperIdT&& value) { SetScraperId(std::forward<ScraperIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the scraper.</p>
     */
    inline const ScraperStatus& GetStatus() const { return m_status; }
    template<typename StatusT = ScraperStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = ScraperStatus>
    DeleteScraperResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteScraperResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scraperId;
    bool m_scraperIdHasBeenSet = false;

    ScraperStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
