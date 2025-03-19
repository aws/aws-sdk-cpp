/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/OpensearchConfiguration.h>
#include <aws/lexv2-models/model/QnAKendraConfiguration.h>
#include <aws/lexv2-models/model/BedrockKnowledgeStoreConfiguration.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains details about the configuration of the knowledge store used for the
   * <code>AMAZON.QnAIntent</code>. You must have already created the knowledge store
   * and indexed the documents within it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DataSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class DataSourceConfiguration
  {
  public:
    AWS_LEXMODELSV2_API DataSourceConfiguration() = default;
    AWS_LEXMODELSV2_API DataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API DataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains details about the configuration of the Amazon OpenSearch Service
     * database used for the <code>AMAZON.QnAIntent</code>. To create a domain, follow
     * the steps at <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html">Creating
     * and managing Amazon OpenSearch Service domains</a>.</p>
     */
    inline const OpensearchConfiguration& GetOpensearchConfiguration() const { return m_opensearchConfiguration; }
    inline bool OpensearchConfigurationHasBeenSet() const { return m_opensearchConfigurationHasBeenSet; }
    template<typename OpensearchConfigurationT = OpensearchConfiguration>
    void SetOpensearchConfiguration(OpensearchConfigurationT&& value) { m_opensearchConfigurationHasBeenSet = true; m_opensearchConfiguration = std::forward<OpensearchConfigurationT>(value); }
    template<typename OpensearchConfigurationT = OpensearchConfiguration>
    DataSourceConfiguration& WithOpensearchConfiguration(OpensearchConfigurationT&& value) { SetOpensearchConfiguration(std::forward<OpensearchConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the configuration of the Amazon Kendra index used for
     * the <code>AMAZON.QnAIntent</code>. To create a Amazon Kendra index, follow the
     * steps at <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/create-index.html">Creating
     * an index</a>.</p>
     */
    inline const QnAKendraConfiguration& GetKendraConfiguration() const { return m_kendraConfiguration; }
    inline bool KendraConfigurationHasBeenSet() const { return m_kendraConfigurationHasBeenSet; }
    template<typename KendraConfigurationT = QnAKendraConfiguration>
    void SetKendraConfiguration(KendraConfigurationT&& value) { m_kendraConfigurationHasBeenSet = true; m_kendraConfiguration = std::forward<KendraConfigurationT>(value); }
    template<typename KendraConfigurationT = QnAKendraConfiguration>
    DataSourceConfiguration& WithKendraConfiguration(KendraConfigurationT&& value) { SetKendraConfiguration(std::forward<KendraConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the configuration of the Amazon Bedrock knowledge base
     * used for the <code>AMAZON.QnAIntent</code>. To set up a knowledge base, follow
     * the steps at <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base.html">Building
     * a knowledge base</a>.</p>
     */
    inline const BedrockKnowledgeStoreConfiguration& GetBedrockKnowledgeStoreConfiguration() const { return m_bedrockKnowledgeStoreConfiguration; }
    inline bool BedrockKnowledgeStoreConfigurationHasBeenSet() const { return m_bedrockKnowledgeStoreConfigurationHasBeenSet; }
    template<typename BedrockKnowledgeStoreConfigurationT = BedrockKnowledgeStoreConfiguration>
    void SetBedrockKnowledgeStoreConfiguration(BedrockKnowledgeStoreConfigurationT&& value) { m_bedrockKnowledgeStoreConfigurationHasBeenSet = true; m_bedrockKnowledgeStoreConfiguration = std::forward<BedrockKnowledgeStoreConfigurationT>(value); }
    template<typename BedrockKnowledgeStoreConfigurationT = BedrockKnowledgeStoreConfiguration>
    DataSourceConfiguration& WithBedrockKnowledgeStoreConfiguration(BedrockKnowledgeStoreConfigurationT&& value) { SetBedrockKnowledgeStoreConfiguration(std::forward<BedrockKnowledgeStoreConfigurationT>(value)); return *this;}
    ///@}
  private:

    OpensearchConfiguration m_opensearchConfiguration;
    bool m_opensearchConfigurationHasBeenSet = false;

    QnAKendraConfiguration m_kendraConfiguration;
    bool m_kendraConfigurationHasBeenSet = false;

    BedrockKnowledgeStoreConfiguration m_bedrockKnowledgeStoreConfiguration;
    bool m_bedrockKnowledgeStoreConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
