/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amp/model/ScraperStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/amp/model/Source.h>
#include <aws/amp/model/Destination.h>
#include <aws/amp/model/RoleConfiguration.h>
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
   * <p>The <code>ScraperSummary</code> structure contains a summary of the details
   * about one scraper in your account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ScraperSummary">AWS
   * API Reference</a></p>
   */
  class ScraperSummary
  {
  public:
    AWS_PROMETHEUSSERVICE_API ScraperSummary() = default;
    AWS_PROMETHEUSSERVICE_API ScraperSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API ScraperSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>(Optional) A name associated with the scraper.</p>
     */
    inline const Aws::String& GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    ScraperSummary& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the scraper.</p>
     */
    inline const Aws::String& GetScraperId() const { return m_scraperId; }
    inline bool ScraperIdHasBeenSet() const { return m_scraperIdHasBeenSet; }
    template<typename ScraperIdT = Aws::String>
    void SetScraperId(ScraperIdT&& value) { m_scraperIdHasBeenSet = true; m_scraperId = std::forward<ScraperIdT>(value); }
    template<typename ScraperIdT = Aws::String>
    ScraperSummary& WithScraperId(ScraperIdT&& value) { SetScraperId(std::forward<ScraperIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scraper.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ScraperSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the scraper to discover and collect metrics on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    ScraperSummary& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the current status of the scraper.</p>
     */
    inline const ScraperStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = ScraperStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = ScraperStatus>
    ScraperSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the scraper was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ScraperSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the scraper was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    void SetLastModifiedAt(LastModifiedAtT&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::forward<LastModifiedAtT>(value); }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    ScraperSummary& WithLastModifiedAt(LastModifiedAtT&& value) { SetLastModifiedAt(std::forward<LastModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The list of tag keys and values associated with the scraper.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ScraperSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ScraperSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>If there is a failure, the reason for the failure.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    ScraperSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EKS cluster from which the scraper collects metrics.</p>
     */
    inline const Source& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Source>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Source>
    ScraperSummary& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Managed Service for Prometheus workspace the scraper sends metrics
     * to.</p>
     */
    inline const Destination& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Destination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Destination>
    ScraperSummary& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure displays information about the IAM roles used for
     * cross-account scraping configuration.</p>
     */
    inline const RoleConfiguration& GetRoleConfiguration() const { return m_roleConfiguration; }
    inline bool RoleConfigurationHasBeenSet() const { return m_roleConfigurationHasBeenSet; }
    template<typename RoleConfigurationT = RoleConfiguration>
    void SetRoleConfiguration(RoleConfigurationT&& value) { m_roleConfigurationHasBeenSet = true; m_roleConfiguration = std::forward<RoleConfigurationT>(value); }
    template<typename RoleConfigurationT = RoleConfiguration>
    ScraperSummary& WithRoleConfiguration(RoleConfigurationT&& value) { SetRoleConfiguration(std::forward<RoleConfigurationT>(value)); return *this;}
    ///@}
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

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt{};
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Source m_source;
    bool m_sourceHasBeenSet = false;

    Destination m_destination;
    bool m_destinationHasBeenSet = false;

    RoleConfiguration m_roleConfiguration;
    bool m_roleConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
