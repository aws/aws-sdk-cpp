/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amp/model/Destination.h>
#include <aws/amp/model/ScrapeConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

  /**
   */
  class UpdateScraperRequest : public PrometheusServiceRequest
  {
  public:
    AWS_PROMETHEUSSERVICE_API UpdateScraperRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateScraper"; }

    AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The new alias of the scraper.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }
    inline UpdateScraperRequest& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}
    inline UpdateScraperRequest& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}
    inline UpdateScraperRequest& WithAlias(const char* value) { SetAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateScraperRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateScraperRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateScraperRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new Amazon Managed Service for Prometheus workspace to send metrics
     * to.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Destination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline UpdateScraperRequest& WithDestination(const Destination& value) { SetDestination(value); return *this;}
    inline UpdateScraperRequest& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the base-64 encoded YAML configuration for the scraper.</p> 
     * <p>For more information about configuring a scraper, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/userguide/AMP-collector-how-to.html">Using
     * an Amazon Web Services managed collector</a> in the <i>Amazon Managed Service
     * for Prometheus User Guide</i>.</p> 
     */
    inline const ScrapeConfiguration& GetScrapeConfiguration() const{ return m_scrapeConfiguration; }
    inline bool ScrapeConfigurationHasBeenSet() const { return m_scrapeConfigurationHasBeenSet; }
    inline void SetScrapeConfiguration(const ScrapeConfiguration& value) { m_scrapeConfigurationHasBeenSet = true; m_scrapeConfiguration = value; }
    inline void SetScrapeConfiguration(ScrapeConfiguration&& value) { m_scrapeConfigurationHasBeenSet = true; m_scrapeConfiguration = std::move(value); }
    inline UpdateScraperRequest& WithScrapeConfiguration(const ScrapeConfiguration& value) { SetScrapeConfiguration(value); return *this;}
    inline UpdateScraperRequest& WithScrapeConfiguration(ScrapeConfiguration&& value) { SetScrapeConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the scraper to update.</p>
     */
    inline const Aws::String& GetScraperId() const{ return m_scraperId; }
    inline bool ScraperIdHasBeenSet() const { return m_scraperIdHasBeenSet; }
    inline void SetScraperId(const Aws::String& value) { m_scraperIdHasBeenSet = true; m_scraperId = value; }
    inline void SetScraperId(Aws::String&& value) { m_scraperIdHasBeenSet = true; m_scraperId = std::move(value); }
    inline void SetScraperId(const char* value) { m_scraperIdHasBeenSet = true; m_scraperId.assign(value); }
    inline UpdateScraperRequest& WithScraperId(const Aws::String& value) { SetScraperId(value); return *this;}
    inline UpdateScraperRequest& WithScraperId(Aws::String&& value) { SetScraperId(std::move(value)); return *this;}
    inline UpdateScraperRequest& WithScraperId(const char* value) { SetScraperId(value); return *this;}
    ///@}
  private:

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Destination m_destination;
    bool m_destinationHasBeenSet = false;

    ScrapeConfiguration m_scrapeConfiguration;
    bool m_scrapeConfigurationHasBeenSet = false;

    Aws::String m_scraperId;
    bool m_scraperIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
