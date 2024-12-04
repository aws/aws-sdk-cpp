/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/RedshiftQueryEngineConfiguration.h>
#include <aws/bedrock-agent/model/QueryGenerationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_BEDROCKAGENT_API RedshiftConfiguration();
    AWS_BEDROCKAGENT_API RedshiftConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RedshiftConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies configurations for an Amazon Redshift query engine.</p>
     */
    inline const RedshiftQueryEngineConfiguration& GetQueryEngineConfiguration() const{ return m_queryEngineConfiguration; }
    inline bool QueryEngineConfigurationHasBeenSet() const { return m_queryEngineConfigurationHasBeenSet; }
    inline void SetQueryEngineConfiguration(const RedshiftQueryEngineConfiguration& value) { m_queryEngineConfigurationHasBeenSet = true; m_queryEngineConfiguration = value; }
    inline void SetQueryEngineConfiguration(RedshiftQueryEngineConfiguration&& value) { m_queryEngineConfigurationHasBeenSet = true; m_queryEngineConfiguration = std::move(value); }
    inline RedshiftConfiguration& WithQueryEngineConfiguration(const RedshiftQueryEngineConfiguration& value) { SetQueryEngineConfiguration(value); return *this;}
    inline RedshiftConfiguration& WithQueryEngineConfiguration(RedshiftQueryEngineConfiguration&& value) { SetQueryEngineConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configurations for generating queries.</p>
     */
    inline const QueryGenerationConfiguration& GetQueryGenerationConfiguration() const{ return m_queryGenerationConfiguration; }
    inline bool QueryGenerationConfigurationHasBeenSet() const { return m_queryGenerationConfigurationHasBeenSet; }
    inline void SetQueryGenerationConfiguration(const QueryGenerationConfiguration& value) { m_queryGenerationConfigurationHasBeenSet = true; m_queryGenerationConfiguration = value; }
    inline void SetQueryGenerationConfiguration(QueryGenerationConfiguration&& value) { m_queryGenerationConfigurationHasBeenSet = true; m_queryGenerationConfiguration = std::move(value); }
    inline RedshiftConfiguration& WithQueryGenerationConfiguration(const QueryGenerationConfiguration& value) { SetQueryGenerationConfiguration(value); return *this;}
    inline RedshiftConfiguration& WithQueryGenerationConfiguration(QueryGenerationConfiguration&& value) { SetQueryGenerationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configurations for Amazon Redshift database storage.</p>
     */
    inline const Aws::Vector<RedshiftQueryEngineStorageConfiguration>& GetStorageConfigurations() const{ return m_storageConfigurations; }
    inline bool StorageConfigurationsHasBeenSet() const { return m_storageConfigurationsHasBeenSet; }
    inline void SetStorageConfigurations(const Aws::Vector<RedshiftQueryEngineStorageConfiguration>& value) { m_storageConfigurationsHasBeenSet = true; m_storageConfigurations = value; }
    inline void SetStorageConfigurations(Aws::Vector<RedshiftQueryEngineStorageConfiguration>&& value) { m_storageConfigurationsHasBeenSet = true; m_storageConfigurations = std::move(value); }
    inline RedshiftConfiguration& WithStorageConfigurations(const Aws::Vector<RedshiftQueryEngineStorageConfiguration>& value) { SetStorageConfigurations(value); return *this;}
    inline RedshiftConfiguration& WithStorageConfigurations(Aws::Vector<RedshiftQueryEngineStorageConfiguration>&& value) { SetStorageConfigurations(std::move(value)); return *this;}
    inline RedshiftConfiguration& AddStorageConfigurations(const RedshiftQueryEngineStorageConfiguration& value) { m_storageConfigurationsHasBeenSet = true; m_storageConfigurations.push_back(value); return *this; }
    inline RedshiftConfiguration& AddStorageConfigurations(RedshiftQueryEngineStorageConfiguration&& value) { m_storageConfigurationsHasBeenSet = true; m_storageConfigurations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    RedshiftQueryEngineConfiguration m_queryEngineConfiguration;
    bool m_queryEngineConfigurationHasBeenSet = false;

    QueryGenerationConfiguration m_queryGenerationConfiguration;
    bool m_queryGenerationConfigurationHasBeenSet = false;

    Aws::Vector<RedshiftQueryEngineStorageConfiguration> m_storageConfigurations;
    bool m_storageConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
