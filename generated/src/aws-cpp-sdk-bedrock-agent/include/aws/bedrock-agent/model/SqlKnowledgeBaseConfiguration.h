/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/RedshiftConfiguration.h>
#include <aws/bedrock-agent/model/QueryEngineType.h>
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
    AWS_BEDROCKAGENT_API SqlKnowledgeBaseConfiguration();
    AWS_BEDROCKAGENT_API SqlKnowledgeBaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API SqlKnowledgeBaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies configurations for a knowledge base connected to an Amazon Redshift
     * database.</p>
     */
    inline const RedshiftConfiguration& GetRedshiftConfiguration() const{ return m_redshiftConfiguration; }
    inline bool RedshiftConfigurationHasBeenSet() const { return m_redshiftConfigurationHasBeenSet; }
    inline void SetRedshiftConfiguration(const RedshiftConfiguration& value) { m_redshiftConfigurationHasBeenSet = true; m_redshiftConfiguration = value; }
    inline void SetRedshiftConfiguration(RedshiftConfiguration&& value) { m_redshiftConfigurationHasBeenSet = true; m_redshiftConfiguration = std::move(value); }
    inline SqlKnowledgeBaseConfiguration& WithRedshiftConfiguration(const RedshiftConfiguration& value) { SetRedshiftConfiguration(value); return *this;}
    inline SqlKnowledgeBaseConfiguration& WithRedshiftConfiguration(RedshiftConfiguration&& value) { SetRedshiftConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of SQL database to connect to the knowledge base.</p>
     */
    inline const QueryEngineType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const QueryEngineType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(QueryEngineType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline SqlKnowledgeBaseConfiguration& WithType(const QueryEngineType& value) { SetType(value); return *this;}
    inline SqlKnowledgeBaseConfiguration& WithType(QueryEngineType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    RedshiftConfiguration m_redshiftConfiguration;
    bool m_redshiftConfigurationHasBeenSet = false;

    QueryEngineType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
