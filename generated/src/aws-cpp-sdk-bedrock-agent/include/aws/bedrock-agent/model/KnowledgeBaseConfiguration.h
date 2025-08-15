/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/KnowledgeBaseType.h>
#include <aws/bedrock-agent/model/VectorKnowledgeBaseConfiguration.h>
#include <aws/bedrock-agent/model/KendraKnowledgeBaseConfiguration.h>
#include <aws/bedrock-agent/model/SqlKnowledgeBaseConfiguration.h>
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
    AWS_BEDROCKAGENT_API KnowledgeBaseConfiguration() = default;
    AWS_BEDROCKAGENT_API KnowledgeBaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API KnowledgeBaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of data that the data source is converted into for the knowledge
     * base.</p>
     */
    inline KnowledgeBaseType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(KnowledgeBaseType value) { m_typeHasBeenSet = true; m_type = value; }
    inline KnowledgeBaseConfiguration& WithType(KnowledgeBaseType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the model that's used to convert the data source into
     * vector embeddings.</p>
     */
    inline const VectorKnowledgeBaseConfiguration& GetVectorKnowledgeBaseConfiguration() const { return m_vectorKnowledgeBaseConfiguration; }
    inline bool VectorKnowledgeBaseConfigurationHasBeenSet() const { return m_vectorKnowledgeBaseConfigurationHasBeenSet; }
    template<typename VectorKnowledgeBaseConfigurationT = VectorKnowledgeBaseConfiguration>
    void SetVectorKnowledgeBaseConfiguration(VectorKnowledgeBaseConfigurationT&& value) { m_vectorKnowledgeBaseConfigurationHasBeenSet = true; m_vectorKnowledgeBaseConfiguration = std::forward<VectorKnowledgeBaseConfigurationT>(value); }
    template<typename VectorKnowledgeBaseConfigurationT = VectorKnowledgeBaseConfiguration>
    KnowledgeBaseConfiguration& WithVectorKnowledgeBaseConfiguration(VectorKnowledgeBaseConfigurationT&& value) { SetVectorKnowledgeBaseConfiguration(std::forward<VectorKnowledgeBaseConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for an Amazon Kendra knowledge base.</p>
     */
    inline const KendraKnowledgeBaseConfiguration& GetKendraKnowledgeBaseConfiguration() const { return m_kendraKnowledgeBaseConfiguration; }
    inline bool KendraKnowledgeBaseConfigurationHasBeenSet() const { return m_kendraKnowledgeBaseConfigurationHasBeenSet; }
    template<typename KendraKnowledgeBaseConfigurationT = KendraKnowledgeBaseConfiguration>
    void SetKendraKnowledgeBaseConfiguration(KendraKnowledgeBaseConfigurationT&& value) { m_kendraKnowledgeBaseConfigurationHasBeenSet = true; m_kendraKnowledgeBaseConfiguration = std::forward<KendraKnowledgeBaseConfigurationT>(value); }
    template<typename KendraKnowledgeBaseConfigurationT = KendraKnowledgeBaseConfiguration>
    KnowledgeBaseConfiguration& WithKendraKnowledgeBaseConfiguration(KendraKnowledgeBaseConfigurationT&& value) { SetKendraKnowledgeBaseConfiguration(std::forward<KendraKnowledgeBaseConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configurations for a knowledge base connected to an SQL
     * database.</p>
     */
    inline const SqlKnowledgeBaseConfiguration& GetSqlKnowledgeBaseConfiguration() const { return m_sqlKnowledgeBaseConfiguration; }
    inline bool SqlKnowledgeBaseConfigurationHasBeenSet() const { return m_sqlKnowledgeBaseConfigurationHasBeenSet; }
    template<typename SqlKnowledgeBaseConfigurationT = SqlKnowledgeBaseConfiguration>
    void SetSqlKnowledgeBaseConfiguration(SqlKnowledgeBaseConfigurationT&& value) { m_sqlKnowledgeBaseConfigurationHasBeenSet = true; m_sqlKnowledgeBaseConfiguration = std::forward<SqlKnowledgeBaseConfigurationT>(value); }
    template<typename SqlKnowledgeBaseConfigurationT = SqlKnowledgeBaseConfiguration>
    KnowledgeBaseConfiguration& WithSqlKnowledgeBaseConfiguration(SqlKnowledgeBaseConfigurationT&& value) { SetSqlKnowledgeBaseConfiguration(std::forward<SqlKnowledgeBaseConfigurationT>(value)); return *this;}
    ///@}
  private:

    KnowledgeBaseType m_type{KnowledgeBaseType::NOT_SET};
    bool m_typeHasBeenSet = false;

    VectorKnowledgeBaseConfiguration m_vectorKnowledgeBaseConfiguration;
    bool m_vectorKnowledgeBaseConfigurationHasBeenSet = false;

    KendraKnowledgeBaseConfiguration m_kendraKnowledgeBaseConfiguration;
    bool m_kendraKnowledgeBaseConfigurationHasBeenSet = false;

    SqlKnowledgeBaseConfiguration m_sqlKnowledgeBaseConfiguration;
    bool m_sqlKnowledgeBaseConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
