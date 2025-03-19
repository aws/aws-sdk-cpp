/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ExternalSourcesRetrieveAndGenerateConfiguration.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBaseRetrieveAndGenerateConfiguration.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateType.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains details about the resource being queried.</p> <p>This data type is
   * used in the following API operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_RetrieveAndGenerate.html#API_agent-runtime_RetrieveAndGenerate_RequestSyntax">RetrieveAndGenerate
   * request</a> – in the <code>retrieveAndGenerateConfiguration</code> field</p>
   * </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RetrieveAndGenerateConfiguration">AWS
   * API Reference</a></p>
   */
  class RetrieveAndGenerateConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateConfiguration() = default;
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for the external source wrapper object in the
     * <code>retrieveAndGenerate</code> function.</p>
     */
    inline const ExternalSourcesRetrieveAndGenerateConfiguration& GetExternalSourcesConfiguration() const { return m_externalSourcesConfiguration; }
    inline bool ExternalSourcesConfigurationHasBeenSet() const { return m_externalSourcesConfigurationHasBeenSet; }
    template<typename ExternalSourcesConfigurationT = ExternalSourcesRetrieveAndGenerateConfiguration>
    void SetExternalSourcesConfiguration(ExternalSourcesConfigurationT&& value) { m_externalSourcesConfigurationHasBeenSet = true; m_externalSourcesConfiguration = std::forward<ExternalSourcesConfigurationT>(value); }
    template<typename ExternalSourcesConfigurationT = ExternalSourcesRetrieveAndGenerateConfiguration>
    RetrieveAndGenerateConfiguration& WithExternalSourcesConfiguration(ExternalSourcesConfigurationT&& value) { SetExternalSourcesConfiguration(std::forward<ExternalSourcesConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the knowledge base for retrieving information and
     * generating responses.</p>
     */
    inline const KnowledgeBaseRetrieveAndGenerateConfiguration& GetKnowledgeBaseConfiguration() const { return m_knowledgeBaseConfiguration; }
    inline bool KnowledgeBaseConfigurationHasBeenSet() const { return m_knowledgeBaseConfigurationHasBeenSet; }
    template<typename KnowledgeBaseConfigurationT = KnowledgeBaseRetrieveAndGenerateConfiguration>
    void SetKnowledgeBaseConfiguration(KnowledgeBaseConfigurationT&& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = std::forward<KnowledgeBaseConfigurationT>(value); }
    template<typename KnowledgeBaseConfigurationT = KnowledgeBaseRetrieveAndGenerateConfiguration>
    RetrieveAndGenerateConfiguration& WithKnowledgeBaseConfiguration(KnowledgeBaseConfigurationT&& value) { SetKnowledgeBaseConfiguration(std::forward<KnowledgeBaseConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource that contains your data for retrieving information and
     * generating responses.</p>  <p>If you choose to use
     * <code>EXTERNAL_SOURCES</code>, then currently only Anthropic Claude 3 Sonnet
     * models for knowledge bases are supported.</p> 
     */
    inline RetrieveAndGenerateType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RetrieveAndGenerateType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RetrieveAndGenerateConfiguration& WithType(RetrieveAndGenerateType value) { SetType(value); return *this;}
    ///@}
  private:

    ExternalSourcesRetrieveAndGenerateConfiguration m_externalSourcesConfiguration;
    bool m_externalSourcesConfigurationHasBeenSet = false;

    KnowledgeBaseRetrieveAndGenerateConfiguration m_knowledgeBaseConfiguration;
    bool m_knowledgeBaseConfigurationHasBeenSet = false;

    RetrieveAndGenerateType m_type{RetrieveAndGenerateType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
