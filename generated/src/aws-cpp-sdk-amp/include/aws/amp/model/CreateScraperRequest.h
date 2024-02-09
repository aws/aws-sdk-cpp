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
#include <aws/amp/model/Source.h>
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
    AWS_PROMETHEUSSERVICE_API CreateScraperRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateScraper"; }

    AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>(optional) a name to associate with the scraper. This is for your use, and
     * does not need to be unique.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>(optional) a name to associate with the scraper. This is for your use, and
     * does not need to be unique.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>(optional) a name to associate with the scraper. This is for your use, and
     * does not need to be unique.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>(optional) a name to associate with the scraper. This is for your use, and
     * does not need to be unique.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>(optional) a name to associate with the scraper. This is for your use, and
     * does not need to be unique.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>(optional) a name to associate with the scraper. This is for your use, and
     * does not need to be unique.</p>
     */
    inline CreateScraperRequest& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>(optional) a name to associate with the scraper. This is for your use, and
     * does not need to be unique.</p>
     */
    inline CreateScraperRequest& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>(optional) a name to associate with the scraper. This is for your use, and
     * does not need to be unique.</p>
     */
    inline CreateScraperRequest& WithAlias(const char* value) { SetAlias(value); return *this;}


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
    inline CreateScraperRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>(Optional) A unique, case-sensitive identifier that you can provide to ensure
     * the idempotency of the request.</p>
     */
    inline CreateScraperRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) A unique, case-sensitive identifier that you can provide to ensure
     * the idempotency of the request.</p>
     */
    inline CreateScraperRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The Amazon Managed Service for Prometheus workspace to send metrics to.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }

    /**
     * <p>The Amazon Managed Service for Prometheus workspace to send metrics to.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The Amazon Managed Service for Prometheus workspace to send metrics to.</p>
     */
    inline void SetDestination(const Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The Amazon Managed Service for Prometheus workspace to send metrics to.</p>
     */
    inline void SetDestination(Destination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The Amazon Managed Service for Prometheus workspace to send metrics to.</p>
     */
    inline CreateScraperRequest& WithDestination(const Destination& value) { SetDestination(value); return *this;}

    /**
     * <p>The Amazon Managed Service for Prometheus workspace to send metrics to.</p>
     */
    inline CreateScraperRequest& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>The configuration file to use in the new scraper. For more information, see
     * <a
     * href="prometheus/latest/userguide/AMP-collector-how-to.html#AMP-collector-configuration">Scraper
     * configuration</a> in the <i>Amazon Managed Service for Prometheus User
     * Guide</i>.</p>
     */
    inline const ScrapeConfiguration& GetScrapeConfiguration() const{ return m_scrapeConfiguration; }

    /**
     * <p>The configuration file to use in the new scraper. For more information, see
     * <a
     * href="prometheus/latest/userguide/AMP-collector-how-to.html#AMP-collector-configuration">Scraper
     * configuration</a> in the <i>Amazon Managed Service for Prometheus User
     * Guide</i>.</p>
     */
    inline bool ScrapeConfigurationHasBeenSet() const { return m_scrapeConfigurationHasBeenSet; }

    /**
     * <p>The configuration file to use in the new scraper. For more information, see
     * <a
     * href="prometheus/latest/userguide/AMP-collector-how-to.html#AMP-collector-configuration">Scraper
     * configuration</a> in the <i>Amazon Managed Service for Prometheus User
     * Guide</i>.</p>
     */
    inline void SetScrapeConfiguration(const ScrapeConfiguration& value) { m_scrapeConfigurationHasBeenSet = true; m_scrapeConfiguration = value; }

    /**
     * <p>The configuration file to use in the new scraper. For more information, see
     * <a
     * href="prometheus/latest/userguide/AMP-collector-how-to.html#AMP-collector-configuration">Scraper
     * configuration</a> in the <i>Amazon Managed Service for Prometheus User
     * Guide</i>.</p>
     */
    inline void SetScrapeConfiguration(ScrapeConfiguration&& value) { m_scrapeConfigurationHasBeenSet = true; m_scrapeConfiguration = std::move(value); }

    /**
     * <p>The configuration file to use in the new scraper. For more information, see
     * <a
     * href="prometheus/latest/userguide/AMP-collector-how-to.html#AMP-collector-configuration">Scraper
     * configuration</a> in the <i>Amazon Managed Service for Prometheus User
     * Guide</i>.</p>
     */
    inline CreateScraperRequest& WithScrapeConfiguration(const ScrapeConfiguration& value) { SetScrapeConfiguration(value); return *this;}

    /**
     * <p>The configuration file to use in the new scraper. For more information, see
     * <a
     * href="prometheus/latest/userguide/AMP-collector-how-to.html#AMP-collector-configuration">Scraper
     * configuration</a> in the <i>Amazon Managed Service for Prometheus User
     * Guide</i>.</p>
     */
    inline CreateScraperRequest& WithScrapeConfiguration(ScrapeConfiguration&& value) { SetScrapeConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Amazon EKS cluster from which the scraper will collect metrics.</p>
     */
    inline const Source& GetSource() const{ return m_source; }

    /**
     * <p>The Amazon EKS cluster from which the scraper will collect metrics.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The Amazon EKS cluster from which the scraper will collect metrics.</p>
     */
    inline void SetSource(const Source& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The Amazon EKS cluster from which the scraper will collect metrics.</p>
     */
    inline void SetSource(Source&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The Amazon EKS cluster from which the scraper will collect metrics.</p>
     */
    inline CreateScraperRequest& WithSource(const Source& value) { SetSource(value); return *this;}

    /**
     * <p>The Amazon EKS cluster from which the scraper will collect metrics.</p>
     */
    inline CreateScraperRequest& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>(Optional) The list of tag keys and values to associate with the scraper.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>(Optional) The list of tag keys and values to associate with the scraper.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>(Optional) The list of tag keys and values to associate with the scraper.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>(Optional) The list of tag keys and values to associate with the scraper.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>(Optional) The list of tag keys and values to associate with the scraper.</p>
     */
    inline CreateScraperRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>(Optional) The list of tag keys and values to associate with the scraper.</p>
     */
    inline CreateScraperRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>(Optional) The list of tag keys and values to associate with the scraper.</p>
     */
    inline CreateScraperRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>(Optional) The list of tag keys and values to associate with the scraper.</p>
     */
    inline CreateScraperRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>(Optional) The list of tag keys and values to associate with the scraper.</p>
     */
    inline CreateScraperRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>(Optional) The list of tag keys and values to associate with the scraper.</p>
     */
    inline CreateScraperRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>(Optional) The list of tag keys and values to associate with the scraper.</p>
     */
    inline CreateScraperRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>(Optional) The list of tag keys and values to associate with the scraper.</p>
     */
    inline CreateScraperRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>(Optional) The list of tag keys and values to associate with the scraper.</p>
     */
    inline CreateScraperRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Destination m_destination;
    bool m_destinationHasBeenSet = false;

    ScrapeConfiguration m_scrapeConfiguration;
    bool m_scrapeConfigurationHasBeenSet = false;

    Source m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
