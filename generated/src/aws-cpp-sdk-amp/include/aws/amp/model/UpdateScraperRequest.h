/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amp/model/ScrapeConfiguration.h>
#include <aws/amp/model/Destination.h>
#include <aws/amp/model/RoleConfiguration.h>
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
    AWS_PROMETHEUSSERVICE_API UpdateScraperRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateScraper"; }

    AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the scraper to update.</p>
     */
    inline const Aws::String& GetScraperId() const { return m_scraperId; }
    inline bool ScraperIdHasBeenSet() const { return m_scraperIdHasBeenSet; }
    template<typename ScraperIdT = Aws::String>
    void SetScraperId(ScraperIdT&& value) { m_scraperIdHasBeenSet = true; m_scraperId = std::forward<ScraperIdT>(value); }
    template<typename ScraperIdT = Aws::String>
    UpdateScraperRequest& WithScraperId(ScraperIdT&& value) { SetScraperId(std::forward<ScraperIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new alias of the scraper.</p>
     */
    inline const Aws::String& GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    UpdateScraperRequest& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the base-64 encoded YAML configuration for the scraper.</p> 
     * <p>For more information about configuring a scraper, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/userguide/AMP-collector-how-to.html">Using
     * an Amazon Web Services managed collector</a> in the <i>Amazon Managed Service
     * for Prometheus User Guide</i>.</p> 
     */
    inline const ScrapeConfiguration& GetScrapeConfiguration() const { return m_scrapeConfiguration; }
    inline bool ScrapeConfigurationHasBeenSet() const { return m_scrapeConfigurationHasBeenSet; }
    template<typename ScrapeConfigurationT = ScrapeConfiguration>
    void SetScrapeConfiguration(ScrapeConfigurationT&& value) { m_scrapeConfigurationHasBeenSet = true; m_scrapeConfiguration = std::forward<ScrapeConfigurationT>(value); }
    template<typename ScrapeConfigurationT = ScrapeConfiguration>
    UpdateScraperRequest& WithScrapeConfiguration(ScrapeConfigurationT&& value) { SetScrapeConfiguration(std::forward<ScrapeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new Amazon Managed Service for Prometheus workspace to send metrics
     * to.</p>
     */
    inline const Destination& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Destination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Destination>
    UpdateScraperRequest& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this structure to enable cross-account access, so that you can use a
     * target account to access Prometheus metrics from source accounts.</p>
     */
    inline const RoleConfiguration& GetRoleConfiguration() const { return m_roleConfiguration; }
    inline bool RoleConfigurationHasBeenSet() const { return m_roleConfigurationHasBeenSet; }
    template<typename RoleConfigurationT = RoleConfiguration>
    void SetRoleConfiguration(RoleConfigurationT&& value) { m_roleConfigurationHasBeenSet = true; m_roleConfiguration = std::forward<RoleConfigurationT>(value); }
    template<typename RoleConfigurationT = RoleConfiguration>
    UpdateScraperRequest& WithRoleConfiguration(RoleConfigurationT&& value) { SetRoleConfiguration(std::forward<RoleConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateScraperRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scraperId;
    bool m_scraperIdHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    ScrapeConfiguration m_scrapeConfiguration;
    bool m_scrapeConfigurationHasBeenSet = false;

    Destination m_destination;
    bool m_destinationHasBeenSet = false;

    RoleConfiguration m_roleConfiguration;
    bool m_roleConfigurationHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
