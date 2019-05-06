/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/OrganizationAggregationSource.h>
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
  class AWS_CONFIGSERVICE_API PutConfigurationAggregatorRequest : public ConfigServiceRequest
  {
  public:
    PutConfigurationAggregatorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfigurationAggregator"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline const Aws::String& GetConfigurationAggregatorName() const{ return m_configurationAggregatorName; }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline bool ConfigurationAggregatorNameHasBeenSet() const { return m_configurationAggregatorNameHasBeenSet; }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(const Aws::String& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = value; }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(Aws::String&& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = std::move(value); }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(const char* value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName.assign(value); }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline PutConfigurationAggregatorRequest& WithConfigurationAggregatorName(const Aws::String& value) { SetConfigurationAggregatorName(value); return *this;}

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline PutConfigurationAggregatorRequest& WithConfigurationAggregatorName(Aws::String&& value) { SetConfigurationAggregatorName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline PutConfigurationAggregatorRequest& WithConfigurationAggregatorName(const char* value) { SetConfigurationAggregatorName(value); return *this;}


    /**
     * <p>A list of AccountAggregationSource object. </p>
     */
    inline const Aws::Vector<AccountAggregationSource>& GetAccountAggregationSources() const{ return m_accountAggregationSources; }

    /**
     * <p>A list of AccountAggregationSource object. </p>
     */
    inline bool AccountAggregationSourcesHasBeenSet() const { return m_accountAggregationSourcesHasBeenSet; }

    /**
     * <p>A list of AccountAggregationSource object. </p>
     */
    inline void SetAccountAggregationSources(const Aws::Vector<AccountAggregationSource>& value) { m_accountAggregationSourcesHasBeenSet = true; m_accountAggregationSources = value; }

    /**
     * <p>A list of AccountAggregationSource object. </p>
     */
    inline void SetAccountAggregationSources(Aws::Vector<AccountAggregationSource>&& value) { m_accountAggregationSourcesHasBeenSet = true; m_accountAggregationSources = std::move(value); }

    /**
     * <p>A list of AccountAggregationSource object. </p>
     */
    inline PutConfigurationAggregatorRequest& WithAccountAggregationSources(const Aws::Vector<AccountAggregationSource>& value) { SetAccountAggregationSources(value); return *this;}

    /**
     * <p>A list of AccountAggregationSource object. </p>
     */
    inline PutConfigurationAggregatorRequest& WithAccountAggregationSources(Aws::Vector<AccountAggregationSource>&& value) { SetAccountAggregationSources(std::move(value)); return *this;}

    /**
     * <p>A list of AccountAggregationSource object. </p>
     */
    inline PutConfigurationAggregatorRequest& AddAccountAggregationSources(const AccountAggregationSource& value) { m_accountAggregationSourcesHasBeenSet = true; m_accountAggregationSources.push_back(value); return *this; }

    /**
     * <p>A list of AccountAggregationSource object. </p>
     */
    inline PutConfigurationAggregatorRequest& AddAccountAggregationSources(AccountAggregationSource&& value) { m_accountAggregationSourcesHasBeenSet = true; m_accountAggregationSources.push_back(std::move(value)); return *this; }


    /**
     * <p>An OrganizationAggregationSource object.</p>
     */
    inline const OrganizationAggregationSource& GetOrganizationAggregationSource() const{ return m_organizationAggregationSource; }

    /**
     * <p>An OrganizationAggregationSource object.</p>
     */
    inline bool OrganizationAggregationSourceHasBeenSet() const { return m_organizationAggregationSourceHasBeenSet; }

    /**
     * <p>An OrganizationAggregationSource object.</p>
     */
    inline void SetOrganizationAggregationSource(const OrganizationAggregationSource& value) { m_organizationAggregationSourceHasBeenSet = true; m_organizationAggregationSource = value; }

    /**
     * <p>An OrganizationAggregationSource object.</p>
     */
    inline void SetOrganizationAggregationSource(OrganizationAggregationSource&& value) { m_organizationAggregationSourceHasBeenSet = true; m_organizationAggregationSource = std::move(value); }

    /**
     * <p>An OrganizationAggregationSource object.</p>
     */
    inline PutConfigurationAggregatorRequest& WithOrganizationAggregationSource(const OrganizationAggregationSource& value) { SetOrganizationAggregationSource(value); return *this;}

    /**
     * <p>An OrganizationAggregationSource object.</p>
     */
    inline PutConfigurationAggregatorRequest& WithOrganizationAggregationSource(OrganizationAggregationSource&& value) { SetOrganizationAggregationSource(std::move(value)); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline PutConfigurationAggregatorRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline PutConfigurationAggregatorRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline PutConfigurationAggregatorRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline PutConfigurationAggregatorRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_configurationAggregatorName;
    bool m_configurationAggregatorNameHasBeenSet;

    Aws::Vector<AccountAggregationSource> m_accountAggregationSources;
    bool m_accountAggregationSourcesHasBeenSet;

    OrganizationAggregationSource m_organizationAggregationSource;
    bool m_organizationAggregationSourceHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
