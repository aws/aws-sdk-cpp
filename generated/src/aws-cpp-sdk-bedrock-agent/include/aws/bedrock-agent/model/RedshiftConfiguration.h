/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/RedshiftQueryEngineConfiguration.h>
#include <aws/bedrock-agent/model/QueryGenerationConfiguration.h>
#include <aws/bedrock-agent/model/RedshiftQueryEngineStorageConfiguration.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains configurations for an Amazon Redshift database. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-build-structured.html">Build
   * a knowledge base by connecting to a structured data source</a> in the Amazon
   * Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RedshiftConfiguration">AWS
   * API Reference</a></p>
   */
  class RedshiftConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API RedshiftConfiguration() = default;
    AWS_BEDROCKAGENT_API RedshiftConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RedshiftConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies configurations for Amazon Redshift database storage.</p>
     */
    inline const Aws::Vector<RedshiftQueryEngineStorageConfiguration>& GetStorageConfigurations() const { return m_storageConfigurations; }
    inline bool StorageConfigurationsHasBeenSet() const { return m_storageConfigurationsHasBeenSet; }
    template<typename StorageConfigurationsT = Aws::Vector<RedshiftQueryEngineStorageConfiguration>>
    void SetStorageConfigurations(StorageConfigurationsT&& value) { m_storageConfigurationsHasBeenSet = true; m_storageConfigurations = std::forward<StorageConfigurationsT>(value); }
    template<typename StorageConfigurationsT = Aws::Vector<RedshiftQueryEngineStorageConfiguration>>
    RedshiftConfiguration& WithStorageConfigurations(StorageConfigurationsT&& value) { SetStorageConfigurations(std::forward<StorageConfigurationsT>(value)); return *this;}
    template<typename StorageConfigurationsT = RedshiftQueryEngineStorageConfiguration>
    RedshiftConfiguration& AddStorageConfigurations(StorageConfigurationsT&& value) { m_storageConfigurationsHasBeenSet = true; m_storageConfigurations.emplace_back(std::forward<StorageConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies configurations for an Amazon Redshift query engine.</p>
     */
    inline const RedshiftQueryEngineConfiguration& GetQueryEngineConfiguration() const { return m_queryEngineConfiguration; }
    inline bool QueryEngineConfigurationHasBeenSet() const { return m_queryEngineConfigurationHasBeenSet; }
    template<typename QueryEngineConfigurationT = RedshiftQueryEngineConfiguration>
    void SetQueryEngineConfiguration(QueryEngineConfigurationT&& value) { m_queryEngineConfigurationHasBeenSet = true; m_queryEngineConfiguration = std::forward<QueryEngineConfigurationT>(value); }
    template<typename QueryEngineConfigurationT = RedshiftQueryEngineConfiguration>
    RedshiftConfiguration& WithQueryEngineConfiguration(QueryEngineConfigurationT&& value) { SetQueryEngineConfiguration(std::forward<QueryEngineConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configurations for generating queries.</p>
     */
    inline const QueryGenerationConfiguration& GetQueryGenerationConfiguration() const { return m_queryGenerationConfiguration; }
    inline bool QueryGenerationConfigurationHasBeenSet() const { return m_queryGenerationConfigurationHasBeenSet; }
    template<typename QueryGenerationConfigurationT = QueryGenerationConfiguration>
    void SetQueryGenerationConfiguration(QueryGenerationConfigurationT&& value) { m_queryGenerationConfigurationHasBeenSet = true; m_queryGenerationConfiguration = std::forward<QueryGenerationConfigurationT>(value); }
    template<typename QueryGenerationConfigurationT = QueryGenerationConfiguration>
    RedshiftConfiguration& WithQueryGenerationConfiguration(QueryGenerationConfigurationT&& value) { SetQueryGenerationConfiguration(std::forward<QueryGenerationConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RedshiftQueryEngineStorageConfiguration> m_storageConfigurations;
    bool m_storageConfigurationsHasBeenSet = false;

    RedshiftQueryEngineConfiguration m_queryEngineConfiguration;
    bool m_queryEngineConfigurationHasBeenSet = false;

    QueryGenerationConfiguration m_queryGenerationConfiguration;
    bool m_queryGenerationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
