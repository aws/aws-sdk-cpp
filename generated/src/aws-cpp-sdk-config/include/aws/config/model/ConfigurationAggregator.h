/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/OrganizationAggregationSource.h>
#include <aws/core/utils/DateTime.h>
#include <aws/config/model/AggregatorFilters.h>
#include <aws/config/model/AccountAggregationSource.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The details about the configuration aggregator, including information about
   * source accounts, regions, and metadata of the aggregator. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConfigurationAggregator">AWS
   * API Reference</a></p>
   */
  class ConfigurationAggregator
  {
  public:
    AWS_CONFIGSERVICE_API ConfigurationAggregator() = default;
    AWS_CONFIGSERVICE_API ConfigurationAggregator(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConfigurationAggregator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the aggregator.</p>
     */
    inline const Aws::String& GetConfigurationAggregatorName() const { return m_configurationAggregatorName; }
    inline bool ConfigurationAggregatorNameHasBeenSet() const { return m_configurationAggregatorNameHasBeenSet; }
    template<typename ConfigurationAggregatorNameT = Aws::String>
    void SetConfigurationAggregatorName(ConfigurationAggregatorNameT&& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = std::forward<ConfigurationAggregatorNameT>(value); }
    template<typename ConfigurationAggregatorNameT = Aws::String>
    ConfigurationAggregator& WithConfigurationAggregatorName(ConfigurationAggregatorNameT&& value) { SetConfigurationAggregatorName(std::forward<ConfigurationAggregatorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the aggregator.</p>
     */
    inline const Aws::String& GetConfigurationAggregatorArn() const { return m_configurationAggregatorArn; }
    inline bool ConfigurationAggregatorArnHasBeenSet() const { return m_configurationAggregatorArnHasBeenSet; }
    template<typename ConfigurationAggregatorArnT = Aws::String>
    void SetConfigurationAggregatorArn(ConfigurationAggregatorArnT&& value) { m_configurationAggregatorArnHasBeenSet = true; m_configurationAggregatorArn = std::forward<ConfigurationAggregatorArnT>(value); }
    template<typename ConfigurationAggregatorArnT = Aws::String>
    ConfigurationAggregator& WithConfigurationAggregatorArn(ConfigurationAggregatorArnT&& value) { SetConfigurationAggregatorArn(std::forward<ConfigurationAggregatorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a list of source accounts and regions to be aggregated.</p>
     */
    inline const Aws::Vector<AccountAggregationSource>& GetAccountAggregationSources() const { return m_accountAggregationSources; }
    inline bool AccountAggregationSourcesHasBeenSet() const { return m_accountAggregationSourcesHasBeenSet; }
    template<typename AccountAggregationSourcesT = Aws::Vector<AccountAggregationSource>>
    void SetAccountAggregationSources(AccountAggregationSourcesT&& value) { m_accountAggregationSourcesHasBeenSet = true; m_accountAggregationSources = std::forward<AccountAggregationSourcesT>(value); }
    template<typename AccountAggregationSourcesT = Aws::Vector<AccountAggregationSource>>
    ConfigurationAggregator& WithAccountAggregationSources(AccountAggregationSourcesT&& value) { SetAccountAggregationSources(std::forward<AccountAggregationSourcesT>(value)); return *this;}
    template<typename AccountAggregationSourcesT = AccountAggregationSource>
    ConfigurationAggregator& AddAccountAggregationSources(AccountAggregationSourcesT&& value) { m_accountAggregationSourcesHasBeenSet = true; m_accountAggregationSources.emplace_back(std::forward<AccountAggregationSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides an organization and list of regions to be aggregated.</p>
     */
    inline const OrganizationAggregationSource& GetOrganizationAggregationSource() const { return m_organizationAggregationSource; }
    inline bool OrganizationAggregationSourceHasBeenSet() const { return m_organizationAggregationSourceHasBeenSet; }
    template<typename OrganizationAggregationSourceT = OrganizationAggregationSource>
    void SetOrganizationAggregationSource(OrganizationAggregationSourceT&& value) { m_organizationAggregationSourceHasBeenSet = true; m_organizationAggregationSource = std::forward<OrganizationAggregationSourceT>(value); }
    template<typename OrganizationAggregationSourceT = OrganizationAggregationSource>
    ConfigurationAggregator& WithOrganizationAggregationSource(OrganizationAggregationSourceT&& value) { SetOrganizationAggregationSource(std::forward<OrganizationAggregationSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when the configuration aggregator was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ConfigurationAggregator& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the last update.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    ConfigurationAggregator& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services service that created the configuration aggregator.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    ConfigurationAggregator& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object to filter the data you specify for an aggregator.</p>
     */
    inline const AggregatorFilters& GetAggregatorFilters() const { return m_aggregatorFilters; }
    inline bool AggregatorFiltersHasBeenSet() const { return m_aggregatorFiltersHasBeenSet; }
    template<typename AggregatorFiltersT = AggregatorFilters>
    void SetAggregatorFilters(AggregatorFiltersT&& value) { m_aggregatorFiltersHasBeenSet = true; m_aggregatorFilters = std::forward<AggregatorFiltersT>(value); }
    template<typename AggregatorFiltersT = AggregatorFilters>
    ConfigurationAggregator& WithAggregatorFilters(AggregatorFiltersT&& value) { SetAggregatorFilters(std::forward<AggregatorFiltersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationAggregatorName;
    bool m_configurationAggregatorNameHasBeenSet = false;

    Aws::String m_configurationAggregatorArn;
    bool m_configurationAggregatorArnHasBeenSet = false;

    Aws::Vector<AccountAggregationSource> m_accountAggregationSources;
    bool m_accountAggregationSourcesHasBeenSet = false;

    OrganizationAggregationSource m_organizationAggregationSource;
    bool m_organizationAggregationSourceHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    AggregatorFilters m_aggregatorFilters;
    bool m_aggregatorFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
