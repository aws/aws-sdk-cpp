/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/KendraKnowledgeBaseConfiguration.h>
#include <aws/bedrock-agent/model/SqlKnowledgeBaseConfiguration.h>
#include <aws/bedrock-agent/model/KnowledgeBaseType.h>
#include <aws/bedrock-agent/model/VectorKnowledgeBaseConfiguration.h>
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
   * <p>Contains details about the vector embeddings configuration of the knowledge
   * base.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/KnowledgeBaseConfiguration">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API KnowledgeBaseConfiguration();
    AWS_BEDROCKAGENT_API KnowledgeBaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API KnowledgeBaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Settings for an Amazon Kendra knowledge base.</p>
     */
    inline const KendraKnowledgeBaseConfiguration& GetKendraKnowledgeBaseConfiguration() const{ return m_kendraKnowledgeBaseConfiguration; }
    inline bool KendraKnowledgeBaseConfigurationHasBeenSet() const { return m_kendraKnowledgeBaseConfigurationHasBeenSet; }
    inline void SetKendraKnowledgeBaseConfiguration(const KendraKnowledgeBaseConfiguration& value) { m_kendraKnowledgeBaseConfigurationHasBeenSet = true; m_kendraKnowledgeBaseConfiguration = value; }
    inline void SetKendraKnowledgeBaseConfiguration(KendraKnowledgeBaseConfiguration&& value) { m_kendraKnowledgeBaseConfigurationHasBeenSet = true; m_kendraKnowledgeBaseConfiguration = std::move(value); }
    inline KnowledgeBaseConfiguration& WithKendraKnowledgeBaseConfiguration(const KendraKnowledgeBaseConfiguration& value) { SetKendraKnowledgeBaseConfiguration(value); return *this;}
    inline KnowledgeBaseConfiguration& WithKendraKnowledgeBaseConfiguration(KendraKnowledgeBaseConfiguration&& value) { SetKendraKnowledgeBaseConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configurations for a knowledge base connected to an SQL
     * database.</p>
     */
    inline const SqlKnowledgeBaseConfiguration& GetSqlKnowledgeBaseConfiguration() const{ return m_sqlKnowledgeBaseConfiguration; }
    inline bool SqlKnowledgeBaseConfigurationHasBeenSet() const { return m_sqlKnowledgeBaseConfigurationHasBeenSet; }
    inline void SetSqlKnowledgeBaseConfiguration(const SqlKnowledgeBaseConfiguration& value) { m_sqlKnowledgeBaseConfigurationHasBeenSet = true; m_sqlKnowledgeBaseConfiguration = value; }
    inline void SetSqlKnowledgeBaseConfiguration(SqlKnowledgeBaseConfiguration&& value) { m_sqlKnowledgeBaseConfigurationHasBeenSet = true; m_sqlKnowledgeBaseConfiguration = std::move(value); }
    inline KnowledgeBaseConfiguration& WithSqlKnowledgeBaseConfiguration(const SqlKnowledgeBaseConfiguration& value) { SetSqlKnowledgeBaseConfiguration(value); return *this;}
    inline KnowledgeBaseConfiguration& WithSqlKnowledgeBaseConfiguration(SqlKnowledgeBaseConfiguration&& value) { SetSqlKnowledgeBaseConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data that the data source is converted into for the knowledge
     * base.</p>
     */
    inline const KnowledgeBaseType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const KnowledgeBaseType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(KnowledgeBaseType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline KnowledgeBaseConfiguration& WithType(const KnowledgeBaseType& value) { SetType(value); return *this;}
    inline KnowledgeBaseConfiguration& WithType(KnowledgeBaseType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the model that's used to convert the data source into
     * vector embeddings.</p>
     */
    inline const VectorKnowledgeBaseConfiguration& GetVectorKnowledgeBaseConfiguration() const{ return m_vectorKnowledgeBaseConfiguration; }
    inline bool VectorKnowledgeBaseConfigurationHasBeenSet() const { return m_vectorKnowledgeBaseConfigurationHasBeenSet; }
    inline void SetVectorKnowledgeBaseConfiguration(const VectorKnowledgeBaseConfiguration& value) { m_vectorKnowledgeBaseConfigurationHasBeenSet = true; m_vectorKnowledgeBaseConfiguration = value; }
    inline void SetVectorKnowledgeBaseConfiguration(VectorKnowledgeBaseConfiguration&& value) { m_vectorKnowledgeBaseConfigurationHasBeenSet = true; m_vectorKnowledgeBaseConfiguration = std::move(value); }
    inline KnowledgeBaseConfiguration& WithVectorKnowledgeBaseConfiguration(const VectorKnowledgeBaseConfiguration& value) { SetVectorKnowledgeBaseConfiguration(value); return *this;}
    inline KnowledgeBaseConfiguration& WithVectorKnowledgeBaseConfiguration(VectorKnowledgeBaseConfiguration&& value) { SetVectorKnowledgeBaseConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    KendraKnowledgeBaseConfiguration m_kendraKnowledgeBaseConfiguration;
    bool m_kendraKnowledgeBaseConfigurationHasBeenSet = false;

    SqlKnowledgeBaseConfiguration m_sqlKnowledgeBaseConfiguration;
    bool m_sqlKnowledgeBaseConfigurationHasBeenSet = false;

    KnowledgeBaseType m_type;
    bool m_typeHasBeenSet = false;

    VectorKnowledgeBaseConfiguration m_vectorKnowledgeBaseConfiguration;
    bool m_vectorKnowledgeBaseConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
