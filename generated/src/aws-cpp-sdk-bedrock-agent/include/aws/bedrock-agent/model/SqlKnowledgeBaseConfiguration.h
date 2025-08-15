/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/QueryEngineType.h>
#include <aws/bedrock-agent/model/RedshiftConfiguration.h>
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
   * <p>Contains configurations for a knowledge base connected to an SQL database.
   * Specify the SQL database type in the <code>type</code> field and include the
   * corresponding field. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-build-structured.html">Build
   * a knowledge base by connecting to a structured data source</a> in the Amazon
   * Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/SqlKnowledgeBaseConfiguration">AWS
   * API Reference</a></p>
   */
  class SqlKnowledgeBaseConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API SqlKnowledgeBaseConfiguration() = default;
    AWS_BEDROCKAGENT_API SqlKnowledgeBaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API SqlKnowledgeBaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of SQL database to connect to the knowledge base.</p>
     */
    inline QueryEngineType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(QueryEngineType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SqlKnowledgeBaseConfiguration& WithType(QueryEngineType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configurations for a knowledge base connected to an Amazon Redshift
     * database.</p>
     */
    inline const RedshiftConfiguration& GetRedshiftConfiguration() const { return m_redshiftConfiguration; }
    inline bool RedshiftConfigurationHasBeenSet() const { return m_redshiftConfigurationHasBeenSet; }
    template<typename RedshiftConfigurationT = RedshiftConfiguration>
    void SetRedshiftConfiguration(RedshiftConfigurationT&& value) { m_redshiftConfigurationHasBeenSet = true; m_redshiftConfiguration = std::forward<RedshiftConfigurationT>(value); }
    template<typename RedshiftConfigurationT = RedshiftConfiguration>
    SqlKnowledgeBaseConfiguration& WithRedshiftConfiguration(RedshiftConfigurationT&& value) { SetRedshiftConfiguration(std::forward<RedshiftConfigurationT>(value)); return *this;}
    ///@}
  private:

    QueryEngineType m_type{QueryEngineType::NOT_SET};
    bool m_typeHasBeenSet = false;

    RedshiftConfiguration m_redshiftConfiguration;
    bool m_redshiftConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
