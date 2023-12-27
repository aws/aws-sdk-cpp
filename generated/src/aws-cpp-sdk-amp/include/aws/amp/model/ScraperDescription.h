﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amp/model/ScraperStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/amp/model/ScrapeConfiguration.h>
#include <aws/amp/model/Source.h>
#include <aws/amp/model/Destination.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>Represents the properties of a scraper.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ScraperDescription">AWS
   * API Reference</a></p>
   */
  class ScraperDescription
  {
  public:
    AWS_PROMETHEUSSERVICE_API ScraperDescription();
    AWS_PROMETHEUSSERVICE_API ScraperDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API ScraperDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Alias of this scraper.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>Alias of this scraper.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>Alias of this scraper.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>Alias of this scraper.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>Alias of this scraper.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>Alias of this scraper.</p>
     */
    inline ScraperDescription& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>Alias of this scraper.</p>
     */
    inline ScraperDescription& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>Alias of this scraper.</p>
     */
    inline ScraperDescription& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>Unique string identifying this scraper.</p>
     */
    inline const Aws::String& GetScraperId() const{ return m_scraperId; }

    /**
     * <p>Unique string identifying this scraper.</p>
     */
    inline bool ScraperIdHasBeenSet() const { return m_scraperIdHasBeenSet; }

    /**
     * <p>Unique string identifying this scraper.</p>
     */
    inline void SetScraperId(const Aws::String& value) { m_scraperIdHasBeenSet = true; m_scraperId = value; }

    /**
     * <p>Unique string identifying this scraper.</p>
     */
    inline void SetScraperId(Aws::String&& value) { m_scraperIdHasBeenSet = true; m_scraperId = std::move(value); }

    /**
     * <p>Unique string identifying this scraper.</p>
     */
    inline void SetScraperId(const char* value) { m_scraperIdHasBeenSet = true; m_scraperId.assign(value); }

    /**
     * <p>Unique string identifying this scraper.</p>
     */
    inline ScraperDescription& WithScraperId(const Aws::String& value) { SetScraperId(value); return *this;}

    /**
     * <p>Unique string identifying this scraper.</p>
     */
    inline ScraperDescription& WithScraperId(Aws::String&& value) { SetScraperId(std::move(value)); return *this;}

    /**
     * <p>Unique string identifying this scraper.</p>
     */
    inline ScraperDescription& WithScraperId(const char* value) { SetScraperId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of this scraper.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of this scraper.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of this scraper.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of this scraper.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this scraper.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this scraper.</p>
     */
    inline ScraperDescription& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this scraper.</p>
     */
    inline ScraperDescription& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this scraper.</p>
     */
    inline ScraperDescription& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the scraper to dsicover, collect, and produce metrics on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the scraper to dsicover, collect, and produce metrics on your behalf.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the scraper to dsicover, collect, and produce metrics on your behalf.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the scraper to dsicover, collect, and produce metrics on your behalf.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the scraper to dsicover, collect, and produce metrics on your behalf.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the scraper to dsicover, collect, and produce metrics on your behalf.</p>
     */
    inline ScraperDescription& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the scraper to dsicover, collect, and produce metrics on your behalf.</p>
     */
    inline ScraperDescription& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the scraper to dsicover, collect, and produce metrics on your behalf.</p>
     */
    inline ScraperDescription& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The status of this scraper.</p>
     */
    inline const ScraperStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of this scraper.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of this scraper.</p>
     */
    inline void SetStatus(const ScraperStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of this scraper.</p>
     */
    inline void SetStatus(ScraperStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of this scraper.</p>
     */
    inline ScraperDescription& WithStatus(const ScraperStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of this scraper.</p>
     */
    inline ScraperDescription& WithStatus(ScraperStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time when the scraper was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the scraper was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time when the scraper was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time when the scraper was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time when the scraper was created.</p>
     */
    inline ScraperDescription& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the scraper was created.</p>
     */
    inline ScraperDescription& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time when the scraper was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }

    /**
     * <p>The time when the scraper was last modified.</p>
     */
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }

    /**
     * <p>The time when the scraper was last modified.</p>
     */
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = value; }

    /**
     * <p>The time when the scraper was last modified.</p>
     */
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::move(value); }

    /**
     * <p>The time when the scraper was last modified.</p>
     */
    inline ScraperDescription& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}

    /**
     * <p>The time when the scraper was last modified.</p>
     */
    inline ScraperDescription& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}


    /**
     * <p>The tags of this scraper.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of this scraper.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags of this scraper.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags of this scraper.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags of this scraper.</p>
     */
    inline ScraperDescription& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of this scraper.</p>
     */
    inline ScraperDescription& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of this scraper.</p>
     */
    inline ScraperDescription& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags of this scraper.</p>
     */
    inline ScraperDescription& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of this scraper.</p>
     */
    inline ScraperDescription& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of this scraper.</p>
     */
    inline ScraperDescription& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags of this scraper.</p>
     */
    inline ScraperDescription& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of this scraper.</p>
     */
    inline ScraperDescription& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of this scraper.</p>
     */
    inline ScraperDescription& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The reason for failure if any.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for failure if any.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The reason for failure if any.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The reason for failure if any.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The reason for failure if any.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The reason for failure if any.</p>
     */
    inline ScraperDescription& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for failure if any.</p>
     */
    inline ScraperDescription& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for failure if any.</p>
     */
    inline ScraperDescription& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The configuration used to create the scraper.</p>
     */
    inline const ScrapeConfiguration& GetScrapeConfiguration() const{ return m_scrapeConfiguration; }

    /**
     * <p>The configuration used to create the scraper.</p>
     */
    inline bool ScrapeConfigurationHasBeenSet() const { return m_scrapeConfigurationHasBeenSet; }

    /**
     * <p>The configuration used to create the scraper.</p>
     */
    inline void SetScrapeConfiguration(const ScrapeConfiguration& value) { m_scrapeConfigurationHasBeenSet = true; m_scrapeConfiguration = value; }

    /**
     * <p>The configuration used to create the scraper.</p>
     */
    inline void SetScrapeConfiguration(ScrapeConfiguration&& value) { m_scrapeConfigurationHasBeenSet = true; m_scrapeConfiguration = std::move(value); }

    /**
     * <p>The configuration used to create the scraper.</p>
     */
    inline ScraperDescription& WithScrapeConfiguration(const ScrapeConfiguration& value) { SetScrapeConfiguration(value); return *this;}

    /**
     * <p>The configuration used to create the scraper.</p>
     */
    inline ScraperDescription& WithScrapeConfiguration(ScrapeConfiguration&& value) { SetScrapeConfiguration(std::move(value)); return *this;}


    /**
     * <p>The source that the scraper is discovering and collecting metrics from.</p>
     */
    inline const Source& GetSource() const{ return m_source; }

    /**
     * <p>The source that the scraper is discovering and collecting metrics from.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source that the scraper is discovering and collecting metrics from.</p>
     */
    inline void SetSource(const Source& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source that the scraper is discovering and collecting metrics from.</p>
     */
    inline void SetSource(Source&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source that the scraper is discovering and collecting metrics from.</p>
     */
    inline ScraperDescription& WithSource(const Source& value) { SetSource(value); return *this;}

    /**
     * <p>The source that the scraper is discovering and collecting metrics from.</p>
     */
    inline ScraperDescription& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The destination that the scraper is producing metrics to.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }

    /**
     * <p>The destination that the scraper is producing metrics to.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The destination that the scraper is producing metrics to.</p>
     */
    inline void SetDestination(const Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The destination that the scraper is producing metrics to.</p>
     */
    inline void SetDestination(Destination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The destination that the scraper is producing metrics to.</p>
     */
    inline ScraperDescription& WithDestination(const Destination& value) { SetDestination(value); return *this;}

    /**
     * <p>The destination that the scraper is producing metrics to.</p>
     */
    inline ScraperDescription& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}

  private:

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_scraperId;
    bool m_scraperIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ScraperStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt;
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    ScrapeConfiguration m_scrapeConfiguration;
    bool m_scrapeConfigurationHasBeenSet = false;

    Source m_source;
    bool m_sourceHasBeenSet = false;

    Destination m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
