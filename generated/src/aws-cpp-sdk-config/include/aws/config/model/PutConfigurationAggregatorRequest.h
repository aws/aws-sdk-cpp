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
    AWS_CONFIGSERVICE_API PutConfigurationAggregatorRequest();

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
    inline const Aws::String& GetConfigurationAggregatorName() const{ return m_configurationAggregatorName; }
    inline bool ConfigurationAggregatorNameHasBeenSet() const { return m_configurationAggregatorNameHasBeenSet; }
    inline void SetConfigurationAggregatorName(const Aws::String& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = value; }
    inline void SetConfigurationAggregatorName(Aws::String&& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = std::move(value); }
    inline void SetConfigurationAggregatorName(const char* value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName.assign(value); }
    inline PutConfigurationAggregatorRequest& WithConfigurationAggregatorName(const Aws::String& value) { SetConfigurationAggregatorName(value); return *this;}
    inline PutConfigurationAggregatorRequest& WithConfigurationAggregatorName(Aws::String&& value) { SetConfigurationAggregatorName(std::move(value)); return *this;}
    inline PutConfigurationAggregatorRequest& WithConfigurationAggregatorName(const char* value) { SetConfigurationAggregatorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of AccountAggregationSource object. </p>
     */
    inline const Aws::Vector<AccountAggregationSource>& GetAccountAggregationSources() const{ return m_accountAggregationSources; }
    inline bool AccountAggregationSourcesHasBeenSet() const { return m_accountAggregationSourcesHasBeenSet; }
    inline void SetAccountAggregationSources(const Aws::Vector<AccountAggregationSource>& value) { m_accountAggregationSourcesHasBeenSet = true; m_accountAggregationSources = value; }
    inline void SetAccountAggregationSources(Aws::Vector<AccountAggregationSource>&& value) { m_accountAggregationSourcesHasBeenSet = true; m_accountAggregationSources = std::move(value); }
    inline PutConfigurationAggregatorRequest& WithAccountAggregationSources(const Aws::Vector<AccountAggregationSource>& value) { SetAccountAggregationSources(value); return *this;}
    inline PutConfigurationAggregatorRequest& WithAccountAggregationSources(Aws::Vector<AccountAggregationSource>&& value) { SetAccountAggregationSources(std::move(value)); return *this;}
    inline PutConfigurationAggregatorRequest& AddAccountAggregationSources(const AccountAggregationSource& value) { m_accountAggregationSourcesHasBeenSet = true; m_accountAggregationSources.push_back(value); return *this; }
    inline PutConfigurationAggregatorRequest& AddAccountAggregationSources(AccountAggregationSource&& value) { m_accountAggregationSourcesHasBeenSet = true; m_accountAggregationSources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An OrganizationAggregationSource object.</p>
     */
    inline const OrganizationAggregationSource& GetOrganizationAggregationSource() const{ return m_organizationAggregationSource; }
    inline bool OrganizationAggregationSourceHasBeenSet() const { return m_organizationAggregationSourceHasBeenSet; }
    inline void SetOrganizationAggregationSource(const OrganizationAggregationSource& value) { m_organizationAggregationSourceHasBeenSet = true; m_organizationAggregationSource = value; }
    inline void SetOrganizationAggregationSource(OrganizationAggregationSource&& value) { m_organizationAggregationSourceHasBeenSet = true; m_organizationAggregationSource = std::move(value); }
    inline PutConfigurationAggregatorRequest& WithOrganizationAggregationSource(const OrganizationAggregationSource& value) { SetOrganizationAggregationSource(value); return *this;}
    inline PutConfigurationAggregatorRequest& WithOrganizationAggregationSource(OrganizationAggregationSource&& value) { SetOrganizationAggregationSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of tag object.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PutConfigurationAggregatorRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline PutConfigurationAggregatorRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline PutConfigurationAggregatorRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline PutConfigurationAggregatorRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object to filter configuration recorders in an aggregator. Either
     * <code>ResourceType</code> or <code>ServicePrincipal</code> is required.</p>
     */
    inline const AggregatorFilters& GetAggregatorFilters() const{ return m_aggregatorFilters; }
    inline bool AggregatorFiltersHasBeenSet() const { return m_aggregatorFiltersHasBeenSet; }
    inline void SetAggregatorFilters(const AggregatorFilters& value) { m_aggregatorFiltersHasBeenSet = true; m_aggregatorFilters = value; }
    inline void SetAggregatorFilters(AggregatorFilters&& value) { m_aggregatorFiltersHasBeenSet = true; m_aggregatorFilters = std::move(value); }
    inline PutConfigurationAggregatorRequest& WithAggregatorFilters(const AggregatorFilters& value) { SetAggregatorFilters(value); return *this;}
    inline PutConfigurationAggregatorRequest& WithAggregatorFilters(AggregatorFilters&& value) { SetAggregatorFilters(std::move(value)); return *this;}
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
