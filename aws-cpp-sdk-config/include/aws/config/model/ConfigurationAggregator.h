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
    AWS_CONFIGSERVICE_API ConfigurationAggregator();
    AWS_CONFIGSERVICE_API ConfigurationAggregator(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConfigurationAggregator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the aggregator.</p>
     */
    inline const Aws::String& GetConfigurationAggregatorName() const{ return m_configurationAggregatorName; }

    /**
     * <p>The name of the aggregator.</p>
     */
    inline bool ConfigurationAggregatorNameHasBeenSet() const { return m_configurationAggregatorNameHasBeenSet; }

    /**
     * <p>The name of the aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(const Aws::String& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = value; }

    /**
     * <p>The name of the aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(Aws::String&& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = std::move(value); }

    /**
     * <p>The name of the aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(const char* value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName.assign(value); }

    /**
     * <p>The name of the aggregator.</p>
     */
    inline ConfigurationAggregator& WithConfigurationAggregatorName(const Aws::String& value) { SetConfigurationAggregatorName(value); return *this;}

    /**
     * <p>The name of the aggregator.</p>
     */
    inline ConfigurationAggregator& WithConfigurationAggregatorName(Aws::String&& value) { SetConfigurationAggregatorName(std::move(value)); return *this;}

    /**
     * <p>The name of the aggregator.</p>
     */
    inline ConfigurationAggregator& WithConfigurationAggregatorName(const char* value) { SetConfigurationAggregatorName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the aggregator.</p>
     */
    inline const Aws::String& GetConfigurationAggregatorArn() const{ return m_configurationAggregatorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the aggregator.</p>
     */
    inline bool ConfigurationAggregatorArnHasBeenSet() const { return m_configurationAggregatorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the aggregator.</p>
     */
    inline void SetConfigurationAggregatorArn(const Aws::String& value) { m_configurationAggregatorArnHasBeenSet = true; m_configurationAggregatorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the aggregator.</p>
     */
    inline void SetConfigurationAggregatorArn(Aws::String&& value) { m_configurationAggregatorArnHasBeenSet = true; m_configurationAggregatorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the aggregator.</p>
     */
    inline void SetConfigurationAggregatorArn(const char* value) { m_configurationAggregatorArnHasBeenSet = true; m_configurationAggregatorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the aggregator.</p>
     */
    inline ConfigurationAggregator& WithConfigurationAggregatorArn(const Aws::String& value) { SetConfigurationAggregatorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the aggregator.</p>
     */
    inline ConfigurationAggregator& WithConfigurationAggregatorArn(Aws::String&& value) { SetConfigurationAggregatorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the aggregator.</p>
     */
    inline ConfigurationAggregator& WithConfigurationAggregatorArn(const char* value) { SetConfigurationAggregatorArn(value); return *this;}


    /**
     * <p>Provides a list of source accounts and regions to be aggregated.</p>
     */
    inline const Aws::Vector<AccountAggregationSource>& GetAccountAggregationSources() const{ return m_accountAggregationSources; }

    /**
     * <p>Provides a list of source accounts and regions to be aggregated.</p>
     */
    inline bool AccountAggregationSourcesHasBeenSet() const { return m_accountAggregationSourcesHasBeenSet; }

    /**
     * <p>Provides a list of source accounts and regions to be aggregated.</p>
     */
    inline void SetAccountAggregationSources(const Aws::Vector<AccountAggregationSource>& value) { m_accountAggregationSourcesHasBeenSet = true; m_accountAggregationSources = value; }

    /**
     * <p>Provides a list of source accounts and regions to be aggregated.</p>
     */
    inline void SetAccountAggregationSources(Aws::Vector<AccountAggregationSource>&& value) { m_accountAggregationSourcesHasBeenSet = true; m_accountAggregationSources = std::move(value); }

    /**
     * <p>Provides a list of source accounts and regions to be aggregated.</p>
     */
    inline ConfigurationAggregator& WithAccountAggregationSources(const Aws::Vector<AccountAggregationSource>& value) { SetAccountAggregationSources(value); return *this;}

    /**
     * <p>Provides a list of source accounts and regions to be aggregated.</p>
     */
    inline ConfigurationAggregator& WithAccountAggregationSources(Aws::Vector<AccountAggregationSource>&& value) { SetAccountAggregationSources(std::move(value)); return *this;}

    /**
     * <p>Provides a list of source accounts and regions to be aggregated.</p>
     */
    inline ConfigurationAggregator& AddAccountAggregationSources(const AccountAggregationSource& value) { m_accountAggregationSourcesHasBeenSet = true; m_accountAggregationSources.push_back(value); return *this; }

    /**
     * <p>Provides a list of source accounts and regions to be aggregated.</p>
     */
    inline ConfigurationAggregator& AddAccountAggregationSources(AccountAggregationSource&& value) { m_accountAggregationSourcesHasBeenSet = true; m_accountAggregationSources.push_back(std::move(value)); return *this; }


    /**
     * <p>Provides an organization and list of regions to be aggregated.</p>
     */
    inline const OrganizationAggregationSource& GetOrganizationAggregationSource() const{ return m_organizationAggregationSource; }

    /**
     * <p>Provides an organization and list of regions to be aggregated.</p>
     */
    inline bool OrganizationAggregationSourceHasBeenSet() const { return m_organizationAggregationSourceHasBeenSet; }

    /**
     * <p>Provides an organization and list of regions to be aggregated.</p>
     */
    inline void SetOrganizationAggregationSource(const OrganizationAggregationSource& value) { m_organizationAggregationSourceHasBeenSet = true; m_organizationAggregationSource = value; }

    /**
     * <p>Provides an organization and list of regions to be aggregated.</p>
     */
    inline void SetOrganizationAggregationSource(OrganizationAggregationSource&& value) { m_organizationAggregationSourceHasBeenSet = true; m_organizationAggregationSource = std::move(value); }

    /**
     * <p>Provides an organization and list of regions to be aggregated.</p>
     */
    inline ConfigurationAggregator& WithOrganizationAggregationSource(const OrganizationAggregationSource& value) { SetOrganizationAggregationSource(value); return *this;}

    /**
     * <p>Provides an organization and list of regions to be aggregated.</p>
     */
    inline ConfigurationAggregator& WithOrganizationAggregationSource(OrganizationAggregationSource&& value) { SetOrganizationAggregationSource(std::move(value)); return *this;}


    /**
     * <p>The time stamp when the configuration aggregator was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time stamp when the configuration aggregator was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time stamp when the configuration aggregator was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time stamp when the configuration aggregator was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time stamp when the configuration aggregator was created.</p>
     */
    inline ConfigurationAggregator& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time stamp when the configuration aggregator was created.</p>
     */
    inline ConfigurationAggregator& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time of the last update.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time of the last update.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time of the last update.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time of the last update.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time of the last update.</p>
     */
    inline ConfigurationAggregator& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time of the last update.</p>
     */
    inline ConfigurationAggregator& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>Amazon Web Services service that created the configuration aggregator.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>Amazon Web Services service that created the configuration aggregator.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>Amazon Web Services service that created the configuration aggregator.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>Amazon Web Services service that created the configuration aggregator.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>Amazon Web Services service that created the configuration aggregator.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>Amazon Web Services service that created the configuration aggregator.</p>
     */
    inline ConfigurationAggregator& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>Amazon Web Services service that created the configuration aggregator.</p>
     */
    inline ConfigurationAggregator& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>Amazon Web Services service that created the configuration aggregator.</p>
     */
    inline ConfigurationAggregator& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}

  private:

    Aws::String m_configurationAggregatorName;
    bool m_configurationAggregatorNameHasBeenSet = false;

    Aws::String m_configurationAggregatorArn;
    bool m_configurationAggregatorArnHasBeenSet = false;

    Aws::Vector<AccountAggregationSource> m_accountAggregationSources;
    bool m_accountAggregationSourcesHasBeenSet = false;

    OrganizationAggregationSource m_organizationAggregationSource;
    bool m_organizationAggregationSourceHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
