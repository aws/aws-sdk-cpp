/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/RedshiftQueryEngineType.h>
#include <aws/bedrock-agent/model/RedshiftServerlessConfiguration.h>
#include <aws/bedrock-agent/model/RedshiftProvisionedConfiguration.h>
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
   * <p>Contains configurations for an Amazon Redshift query engine. Specify the type
   * of query engine in <code>type</code> and include the corresponding field. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-build-structured.html">Build
   * a knowledge base by connecting to a structured data source</a> in the Amazon
   * Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RedshiftQueryEngineConfiguration">AWS
   * API Reference</a></p>
   */
  class RedshiftQueryEngineConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API RedshiftQueryEngineConfiguration() = default;
    AWS_BEDROCKAGENT_API RedshiftQueryEngineConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RedshiftQueryEngineConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of query engine.</p>
     */
    inline RedshiftQueryEngineType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RedshiftQueryEngineType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RedshiftQueryEngineConfiguration& WithType(RedshiftQueryEngineType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configurations for a serverless Amazon Redshift query engine.</p>
     */
    inline const RedshiftServerlessConfiguration& GetServerlessConfiguration() const { return m_serverlessConfiguration; }
    inline bool ServerlessConfigurationHasBeenSet() const { return m_serverlessConfigurationHasBeenSet; }
    template<typename ServerlessConfigurationT = RedshiftServerlessConfiguration>
    void SetServerlessConfiguration(ServerlessConfigurationT&& value) { m_serverlessConfigurationHasBeenSet = true; m_serverlessConfiguration = std::forward<ServerlessConfigurationT>(value); }
    template<typename ServerlessConfigurationT = RedshiftServerlessConfiguration>
    RedshiftQueryEngineConfiguration& WithServerlessConfiguration(ServerlessConfigurationT&& value) { SetServerlessConfiguration(std::forward<ServerlessConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configurations for a provisioned Amazon Redshift query engine.</p>
     */
    inline const RedshiftProvisionedConfiguration& GetProvisionedConfiguration() const { return m_provisionedConfiguration; }
    inline bool ProvisionedConfigurationHasBeenSet() const { return m_provisionedConfigurationHasBeenSet; }
    template<typename ProvisionedConfigurationT = RedshiftProvisionedConfiguration>
    void SetProvisionedConfiguration(ProvisionedConfigurationT&& value) { m_provisionedConfigurationHasBeenSet = true; m_provisionedConfiguration = std::forward<ProvisionedConfigurationT>(value); }
    template<typename ProvisionedConfigurationT = RedshiftProvisionedConfiguration>
    RedshiftQueryEngineConfiguration& WithProvisionedConfiguration(ProvisionedConfigurationT&& value) { SetProvisionedConfiguration(std::forward<ProvisionedConfigurationT>(value)); return *this;}
    ///@}
  private:

    RedshiftQueryEngineType m_type{RedshiftQueryEngineType::NOT_SET};
    bool m_typeHasBeenSet = false;

    RedshiftServerlessConfiguration m_serverlessConfiguration;
    bool m_serverlessConfigurationHasBeenSet = false;

    RedshiftProvisionedConfiguration m_provisionedConfiguration;
    bool m_provisionedConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
