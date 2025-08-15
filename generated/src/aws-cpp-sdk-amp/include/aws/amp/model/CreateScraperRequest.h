/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amp/model/ScrapeConfiguration.h>
#include <aws/amp/model/Source.h>
#include <aws/amp/model/Destination.h>
#include <aws/amp/model/RoleConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>CreateScraper</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateScraperRequest">AWS
   * API Reference</a></p>
   */
  class CreateScraperRequest : public PrometheusServiceRequest
  {
  public:
    AWS_PROMETHEUSSERVICE_API CreateScraperRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateScraper"; }

    AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>(optional) An alias to associate with the scraper. This is for your use, and
     * does not need to be unique.</p>
     */
    inline const Aws::String& GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    CreateScraperRequest& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration file to use in the new scraper. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/prometheus/latest/userguide/AMP-collector-how-to.html#AMP-collector-configuration">Scraper
     * configuration</a> in the <i>Amazon Managed Service for Prometheus User
     * Guide</i>.</p>
     */
    inline const ScrapeConfiguration& GetScrapeConfiguration() const { return m_scrapeConfiguration; }
    inline bool ScrapeConfigurationHasBeenSet() const { return m_scrapeConfigurationHasBeenSet; }
    template<typename ScrapeConfigurationT = ScrapeConfiguration>
    void SetScrapeConfiguration(ScrapeConfigurationT&& value) { m_scrapeConfigurationHasBeenSet = true; m_scrapeConfiguration = std::forward<ScrapeConfigurationT>(value); }
    template<typename ScrapeConfigurationT = ScrapeConfiguration>
    CreateScraperRequest& WithScrapeConfiguration(ScrapeConfigurationT&& value) { SetScrapeConfiguration(std::forward<ScrapeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EKS cluster from which the scraper will collect metrics.</p>
     */
    inline const Source& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Source>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Source>
    CreateScraperRequest& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Managed Service for Prometheus workspace to send metrics to.</p>
     */
    inline const Destination& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Destination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Destination>
    CreateScraperRequest& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
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
    CreateScraperRequest& WithRoleConfiguration(RoleConfigurationT&& value) { SetRoleConfiguration(std::forward<RoleConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) A unique, case-sensitive identifier that you can provide to ensure
     * the idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateScraperRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The list of tag keys and values to associate with the scraper.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateScraperRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateScraperRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    ScrapeConfiguration m_scrapeConfiguration;
    bool m_scrapeConfigurationHasBeenSet = false;

    Source m_source;
    bool m_sourceHasBeenSet = false;

    Destination m_destination;
    bool m_destinationHasBeenSet = false;

    RoleConfiguration m_roleConfiguration;
    bool m_roleConfigurationHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
