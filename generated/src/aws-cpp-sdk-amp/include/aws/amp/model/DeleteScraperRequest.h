/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>DeleteScraper</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteScraperRequest">AWS
   * API Reference</a></p>
   */
  class DeleteScraperRequest : public PrometheusServiceRequest
  {
  public:
    AWS_PROMETHEUSSERVICE_API DeleteScraperRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteScraper"; }

    AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;

    AWS_PROMETHEUSSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>(Optional) A unique, case-sensitive identifier that you can provide to ensure
     * the idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>(Optional) A unique, case-sensitive identifier that you can provide to ensure
     * the idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>(Optional) A unique, case-sensitive identifier that you can provide to ensure
     * the idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>(Optional) A unique, case-sensitive identifier that you can provide to ensure
     * the idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>(Optional) A unique, case-sensitive identifier that you can provide to ensure
     * the idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>(Optional) A unique, case-sensitive identifier that you can provide to ensure
     * the idempotency of the request.</p>
     */
    inline DeleteScraperRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>(Optional) A unique, case-sensitive identifier that you can provide to ensure
     * the idempotency of the request.</p>
     */
    inline DeleteScraperRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) A unique, case-sensitive identifier that you can provide to ensure
     * the idempotency of the request.</p>
     */
    inline DeleteScraperRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ID of the scraper to delete.</p>
     */
    inline const Aws::String& GetScraperId() const{ return m_scraperId; }

    /**
     * <p>The ID of the scraper to delete.</p>
     */
    inline bool ScraperIdHasBeenSet() const { return m_scraperIdHasBeenSet; }

    /**
     * <p>The ID of the scraper to delete.</p>
     */
    inline void SetScraperId(const Aws::String& value) { m_scraperIdHasBeenSet = true; m_scraperId = value; }

    /**
     * <p>The ID of the scraper to delete.</p>
     */
    inline void SetScraperId(Aws::String&& value) { m_scraperIdHasBeenSet = true; m_scraperId = std::move(value); }

    /**
     * <p>The ID of the scraper to delete.</p>
     */
    inline void SetScraperId(const char* value) { m_scraperIdHasBeenSet = true; m_scraperId.assign(value); }

    /**
     * <p>The ID of the scraper to delete.</p>
     */
    inline DeleteScraperRequest& WithScraperId(const Aws::String& value) { SetScraperId(value); return *this;}

    /**
     * <p>The ID of the scraper to delete.</p>
     */
    inline DeleteScraperRequest& WithScraperId(Aws::String&& value) { SetScraperId(std::move(value)); return *this;}

    /**
     * <p>The ID of the scraper to delete.</p>
     */
    inline DeleteScraperRequest& WithScraperId(const char* value) { SetScraperId(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_scraperId;
    bool m_scraperIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
