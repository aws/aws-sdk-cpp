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
   * <p>Provides the configuration information for the knowledge article types that
   * Amazon Kendra indexes. Amazon Kendra indexes standard knowledge articles and the
   * standard fields of knowledge articles, or the custom fields of custom knowledge
   * articles, but not both </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SalesforceKnowledgeArticleConfiguration">AWS
   * API Reference</a></p>
   */
  class SalesforceKnowledgeArticleConfiguration
  {
  public:
    AWS_KENDRA_API SalesforceKnowledgeArticleConfiguration() = default;
    AWS_KENDRA_API SalesforceKnowledgeArticleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SalesforceKnowledgeArticleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the document states that should be included when Amazon Kendra
     * indexes knowledge articles. You must specify at least one state.</p>
     */
    inline const Aws::Vector<SalesforceKnowledgeArticleState>& GetIncludedStates() const { return m_includedStates; }
    inline bool IncludedStatesHasBeenSet() const { return m_includedStatesHasBeenSet; }
    template<typename IncludedStatesT = Aws::Vector<SalesforceKnowledgeArticleState>>
    void SetIncludedStates(IncludedStatesT&& value) { m_includedStatesHasBeenSet = true; m_includedStates = std::forward<IncludedStatesT>(value); }
    template<typename IncludedStatesT = Aws::Vector<SalesforceKnowledgeArticleState>>
    SalesforceKnowledgeArticleConfiguration& WithIncludedStates(IncludedStatesT&& value) { SetIncludedStates(std::forward<IncludedStatesT>(value)); return *this;}
    inline SalesforceKnowledgeArticleConfiguration& AddIncludedStates(SalesforceKnowledgeArticleState value) { m_includedStatesHasBeenSet = true; m_includedStates.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information for standard Salesforce knowledge articles.</p>
     */
    inline const SalesforceStandardKnowledgeArticleTypeConfiguration& GetStandardKnowledgeArticleTypeConfiguration() const { return m_standardKnowledgeArticleTypeConfiguration; }
    inline bool StandardKnowledgeArticleTypeConfigurationHasBeenSet() const { return m_standardKnowledgeArticleTypeConfigurationHasBeenSet; }
    template<typename StandardKnowledgeArticleTypeConfigurationT = SalesforceStandardKnowledgeArticleTypeConfiguration>
    void SetStandardKnowledgeArticleTypeConfiguration(StandardKnowledgeArticleTypeConfigurationT&& value) { m_standardKnowledgeArticleTypeConfigurationHasBeenSet = true; m_standardKnowledgeArticleTypeConfiguration = std::forward<StandardKnowledgeArticleTypeConfigurationT>(value); }
    template<typename StandardKnowledgeArticleTypeConfigurationT = SalesforceStandardKnowledgeArticleTypeConfiguration>
    SalesforceKnowledgeArticleConfiguration& WithStandardKnowledgeArticleTypeConfiguration(StandardKnowledgeArticleTypeConfigurationT&& value) { SetStandardKnowledgeArticleTypeConfiguration(std::forward<StandardKnowledgeArticleTypeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for custom Salesforce knowledge articles.</p>
     */
    inline const Aws::Vector<SalesforceCustomKnowledgeArticleTypeConfiguration>& GetCustomKnowledgeArticleTypeConfigurations() const { return m_customKnowledgeArticleTypeConfigurations; }
    inline bool CustomKnowledgeArticleTypeConfigurationsHasBeenSet() const { return m_customKnowledgeArticleTypeConfigurationsHasBeenSet; }
    template<typename CustomKnowledgeArticleTypeConfigurationsT = Aws::Vector<SalesforceCustomKnowledgeArticleTypeConfiguration>>
    void SetCustomKnowledgeArticleTypeConfigurations(CustomKnowledgeArticleTypeConfigurationsT&& value) { m_customKnowledgeArticleTypeConfigurationsHasBeenSet = true; m_customKnowledgeArticleTypeConfigurations = std::forward<CustomKnowledgeArticleTypeConfigurationsT>(value); }
    template<typename CustomKnowledgeArticleTypeConfigurationsT = Aws::Vector<SalesforceCustomKnowledgeArticleTypeConfiguration>>
    SalesforceKnowledgeArticleConfiguration& WithCustomKnowledgeArticleTypeConfigurations(CustomKnowledgeArticleTypeConfigurationsT&& value) { SetCustomKnowledgeArticleTypeConfigurations(std::forward<CustomKnowledgeArticleTypeConfigurationsT>(value)); return *this;}
    template<typename CustomKnowledgeArticleTypeConfigurationsT = SalesforceCustomKnowledgeArticleTypeConfiguration>
    SalesforceKnowledgeArticleConfiguration& AddCustomKnowledgeArticleTypeConfigurations(CustomKnowledgeArticleTypeConfigurationsT&& value) { m_customKnowledgeArticleTypeConfigurationsHasBeenSet = true; m_customKnowledgeArticleTypeConfigurations.emplace_back(std::forward<CustomKnowledgeArticleTypeConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SalesforceKnowledgeArticleState> m_includedStates;
    bool m_includedStatesHasBeenSet = false;

    SalesforceStandardKnowledgeArticleTypeConfiguration m_standardKnowledgeArticleTypeConfiguration;
    bool m_standardKnowledgeArticleTypeConfigurationHasBeenSet = false;

    Aws::Vector<SalesforceCustomKnowledgeArticleTypeConfiguration> m_customKnowledgeArticleTypeConfigurations;
    bool m_customKnowledgeArticleTypeConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
