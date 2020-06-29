/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/SalesforceStandardKnowledgeArticleTypeConfiguration.h>
#include <aws/kendra/model/SalesforceKnowledgeArticleState.h>
#include <aws/kendra/model/SalesforceCustomKnowledgeArticleTypeConfiguration.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Specifies configuration information for the knowlege article types that
   * Amazon Kendra indexes. Amazon Kendra indexes standard knowledge articles and the
   * standard fields of knowledge articles, or the custom fields of custom knowledge
   * articles, but not both </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SalesforceKnowledgeArticleConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API SalesforceKnowledgeArticleConfiguration
  {
  public:
    SalesforceKnowledgeArticleConfiguration();
    SalesforceKnowledgeArticleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    SalesforceKnowledgeArticleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the document states that should be included when Amazon Kendra
     * indexes knowledge articles. You must specify at least one state.</p>
     */
    inline const Aws::Vector<SalesforceKnowledgeArticleState>& GetIncludedStates() const{ return m_includedStates; }

    /**
     * <p>Specifies the document states that should be included when Amazon Kendra
     * indexes knowledge articles. You must specify at least one state.</p>
     */
    inline bool IncludedStatesHasBeenSet() const { return m_includedStatesHasBeenSet; }

    /**
     * <p>Specifies the document states that should be included when Amazon Kendra
     * indexes knowledge articles. You must specify at least one state.</p>
     */
    inline void SetIncludedStates(const Aws::Vector<SalesforceKnowledgeArticleState>& value) { m_includedStatesHasBeenSet = true; m_includedStates = value; }

    /**
     * <p>Specifies the document states that should be included when Amazon Kendra
     * indexes knowledge articles. You must specify at least one state.</p>
     */
    inline void SetIncludedStates(Aws::Vector<SalesforceKnowledgeArticleState>&& value) { m_includedStatesHasBeenSet = true; m_includedStates = std::move(value); }

    /**
     * <p>Specifies the document states that should be included when Amazon Kendra
     * indexes knowledge articles. You must specify at least one state.</p>
     */
    inline SalesforceKnowledgeArticleConfiguration& WithIncludedStates(const Aws::Vector<SalesforceKnowledgeArticleState>& value) { SetIncludedStates(value); return *this;}

    /**
     * <p>Specifies the document states that should be included when Amazon Kendra
     * indexes knowledge articles. You must specify at least one state.</p>
     */
    inline SalesforceKnowledgeArticleConfiguration& WithIncludedStates(Aws::Vector<SalesforceKnowledgeArticleState>&& value) { SetIncludedStates(std::move(value)); return *this;}

    /**
     * <p>Specifies the document states that should be included when Amazon Kendra
     * indexes knowledge articles. You must specify at least one state.</p>
     */
    inline SalesforceKnowledgeArticleConfiguration& AddIncludedStates(const SalesforceKnowledgeArticleState& value) { m_includedStatesHasBeenSet = true; m_includedStates.push_back(value); return *this; }

    /**
     * <p>Specifies the document states that should be included when Amazon Kendra
     * indexes knowledge articles. You must specify at least one state.</p>
     */
    inline SalesforceKnowledgeArticleConfiguration& AddIncludedStates(SalesforceKnowledgeArticleState&& value) { m_includedStatesHasBeenSet = true; m_includedStates.push_back(std::move(value)); return *this; }


    /**
     * <p>Provides configuration information for standard Salesforce knowledge
     * articles.</p>
     */
    inline const SalesforceStandardKnowledgeArticleTypeConfiguration& GetStandardKnowledgeArticleTypeConfiguration() const{ return m_standardKnowledgeArticleTypeConfiguration; }

    /**
     * <p>Provides configuration information for standard Salesforce knowledge
     * articles.</p>
     */
    inline bool StandardKnowledgeArticleTypeConfigurationHasBeenSet() const { return m_standardKnowledgeArticleTypeConfigurationHasBeenSet; }

    /**
     * <p>Provides configuration information for standard Salesforce knowledge
     * articles.</p>
     */
    inline void SetStandardKnowledgeArticleTypeConfiguration(const SalesforceStandardKnowledgeArticleTypeConfiguration& value) { m_standardKnowledgeArticleTypeConfigurationHasBeenSet = true; m_standardKnowledgeArticleTypeConfiguration = value; }

    /**
     * <p>Provides configuration information for standard Salesforce knowledge
     * articles.</p>
     */
    inline void SetStandardKnowledgeArticleTypeConfiguration(SalesforceStandardKnowledgeArticleTypeConfiguration&& value) { m_standardKnowledgeArticleTypeConfigurationHasBeenSet = true; m_standardKnowledgeArticleTypeConfiguration = std::move(value); }

    /**
     * <p>Provides configuration information for standard Salesforce knowledge
     * articles.</p>
     */
    inline SalesforceKnowledgeArticleConfiguration& WithStandardKnowledgeArticleTypeConfiguration(const SalesforceStandardKnowledgeArticleTypeConfiguration& value) { SetStandardKnowledgeArticleTypeConfiguration(value); return *this;}

    /**
     * <p>Provides configuration information for standard Salesforce knowledge
     * articles.</p>
     */
    inline SalesforceKnowledgeArticleConfiguration& WithStandardKnowledgeArticleTypeConfiguration(SalesforceStandardKnowledgeArticleTypeConfiguration&& value) { SetStandardKnowledgeArticleTypeConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides configuration information for custom Salesforce knowledge
     * articles.</p>
     */
    inline const Aws::Vector<SalesforceCustomKnowledgeArticleTypeConfiguration>& GetCustomKnowledgeArticleTypeConfigurations() const{ return m_customKnowledgeArticleTypeConfigurations; }

    /**
     * <p>Provides configuration information for custom Salesforce knowledge
     * articles.</p>
     */
    inline bool CustomKnowledgeArticleTypeConfigurationsHasBeenSet() const { return m_customKnowledgeArticleTypeConfigurationsHasBeenSet; }

    /**
     * <p>Provides configuration information for custom Salesforce knowledge
     * articles.</p>
     */
    inline void SetCustomKnowledgeArticleTypeConfigurations(const Aws::Vector<SalesforceCustomKnowledgeArticleTypeConfiguration>& value) { m_customKnowledgeArticleTypeConfigurationsHasBeenSet = true; m_customKnowledgeArticleTypeConfigurations = value; }

    /**
     * <p>Provides configuration information for custom Salesforce knowledge
     * articles.</p>
     */
    inline void SetCustomKnowledgeArticleTypeConfigurations(Aws::Vector<SalesforceCustomKnowledgeArticleTypeConfiguration>&& value) { m_customKnowledgeArticleTypeConfigurationsHasBeenSet = true; m_customKnowledgeArticleTypeConfigurations = std::move(value); }

    /**
     * <p>Provides configuration information for custom Salesforce knowledge
     * articles.</p>
     */
    inline SalesforceKnowledgeArticleConfiguration& WithCustomKnowledgeArticleTypeConfigurations(const Aws::Vector<SalesforceCustomKnowledgeArticleTypeConfiguration>& value) { SetCustomKnowledgeArticleTypeConfigurations(value); return *this;}

    /**
     * <p>Provides configuration information for custom Salesforce knowledge
     * articles.</p>
     */
    inline SalesforceKnowledgeArticleConfiguration& WithCustomKnowledgeArticleTypeConfigurations(Aws::Vector<SalesforceCustomKnowledgeArticleTypeConfiguration>&& value) { SetCustomKnowledgeArticleTypeConfigurations(std::move(value)); return *this;}

    /**
     * <p>Provides configuration information for custom Salesforce knowledge
     * articles.</p>
     */
    inline SalesforceKnowledgeArticleConfiguration& AddCustomKnowledgeArticleTypeConfigurations(const SalesforceCustomKnowledgeArticleTypeConfiguration& value) { m_customKnowledgeArticleTypeConfigurationsHasBeenSet = true; m_customKnowledgeArticleTypeConfigurations.push_back(value); return *this; }

    /**
     * <p>Provides configuration information for custom Salesforce knowledge
     * articles.</p>
     */
    inline SalesforceKnowledgeArticleConfiguration& AddCustomKnowledgeArticleTypeConfigurations(SalesforceCustomKnowledgeArticleTypeConfiguration&& value) { m_customKnowledgeArticleTypeConfigurationsHasBeenSet = true; m_customKnowledgeArticleTypeConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SalesforceKnowledgeArticleState> m_includedStates;
    bool m_includedStatesHasBeenSet;

    SalesforceStandardKnowledgeArticleTypeConfiguration m_standardKnowledgeArticleTypeConfiguration;
    bool m_standardKnowledgeArticleTypeConfigurationHasBeenSet;

    Aws::Vector<SalesforceCustomKnowledgeArticleTypeConfiguration> m_customKnowledgeArticleTypeConfigurations;
    bool m_customKnowledgeArticleTypeConfigurationsHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
