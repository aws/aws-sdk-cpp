/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/OrganizationAggregationSource.h>
#include <aws/config/model/AggregatorFilters.h>
#include <aws/config/model/AccountAggregationSource.h>
#include <aws/config/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class PutConfigurationAggregatorRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API PutConfigurationAggregatorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfigurationAggregator"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline const Aws::String& GetConfigurationAggregatorName() const { return m_configurationAggregatorName; }
    inline bool ConfigurationAggregatorNameHasBeenSet() const { return m_configurationAggregatorNameHasBeenSet; }
    template<typename ConfigurationAggregatorNameT = Aws::String>
    void SetConfigurationAggregatorName(ConfigurationAggregatorNameT&& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = std::forward<ConfigurationAggregatorNameT>(value); }
    template<typename ConfigurationAggregatorNameT = Aws::String>
    PutConfigurationAggregatorRequest& WithConfigurationAggregatorName(ConfigurationAggregatorNameT&& value) { SetConfigurationAggregatorName(std::forward<ConfigurationAggregatorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of AccountAggregationSource object. </p>
     */
    inline const Aws::Vector<AccountAggregationSource>& GetAccountAggregationSources() const { return m_accountAggregationSources; }
    inline bool AccountAggregationSourcesHasBeenSet() const { return m_accountAggregationSourcesHasBeenSet; }
    template<typename AccountAggregationSourcesT = Aws::Vector<AccountAggregationSource>>
    void SetAccountAggregationSources(AccountAggregationSourcesT&& value) { m_accountAggregationSourcesHasBeenSet = true; m_accountAggregationSources = std::forward<AccountAggregationSourcesT>(value); }
    template<typename AccountAggregationSourcesT = Aws::Vector<AccountAggregationSource>>
    PutConfigurationAggregatorRequest& WithAccountAggregationSources(AccountAggregationSourcesT&& value) { SetAccountAggregationSources(std::forward<AccountAggregationSourcesT>(value)); return *this;}
    template<typename AccountAggregationSourcesT = AccountAggregationSource>
    PutConfigurationAggregatorRequest& AddAccountAggregationSources(AccountAggregationSourcesT&& value) { m_accountAggregationSourcesHasBeenSet = true; m_accountAggregationSources.emplace_back(std::forward<AccountAggregationSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An OrganizationAggregationSource object.</p>
     */
    inline const OrganizationAggregationSource& GetOrganizationAggregationSource() const { return m_organizationAggregationSource; }
    inline bool OrganizationAggregationSourceHasBeenSet() const { return m_organizationAggregationSourceHasBeenSet; }
    template<typename OrganizationAggregationSourceT = OrganizationAggregationSource>
    void SetOrganizationAggregationSource(OrganizationAggregationSourceT&& value) { m_organizationAggregationSourceHasBeenSet = true; m_organizationAggregationSource = std::forward<OrganizationAggregationSourceT>(value); }
    template<typename OrganizationAggregationSourceT = OrganizationAggregationSource>
    PutConfigurationAggregatorRequest& WithOrganizationAggregationSource(OrganizationAggregationSourceT&& value) { SetOrganizationAggregationSource(std::forward<OrganizationAggregationSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of tag object.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    PutConfigurationAggregatorRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    PutConfigurationAggregatorRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object to filter configuration recorders in an aggregator. Either
     * <code>ResourceType</code> or <code>ServicePrincipal</code> is required.</p>
     */
    inline const AggregatorFilters& GetAggregatorFilters() const { return m_aggregatorFilters; }
    inline bool AggregatorFiltersHasBeenSet() const { return m_aggregatorFiltersHasBeenSet; }
    template<typename AggregatorFiltersT = AggregatorFilters>
    void SetAggregatorFilters(AggregatorFiltersT&& value) { m_aggregatorFiltersHasBeenSet = true; m_aggregatorFilters = std::forward<AggregatorFiltersT>(value); }
    template<typename AggregatorFiltersT = AggregatorFilters>
    PutConfigurationAggregatorRequest& WithAggregatorFilters(AggregatorFiltersT&& value) { SetAggregatorFilters(std::forward<AggregatorFiltersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationAggregatorName;
    bool m_configurationAggregatorNameHasBeenSet = false;

    Aws::Vector<AccountAggregationSource> m_accountAggregationSources;
    bool m_accountAggregationSourcesHasBeenSet = false;

    OrganizationAggregationSource m_organizationAggregationSource;
    bool m_organizationAggregationSourceHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    AggregatorFilters m_aggregatorFilters;
    bool m_aggregatorFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
