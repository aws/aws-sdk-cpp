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
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for the external source wrapper object in the
     * <code>retrieveAndGenerate</code> function.</p>
     */
    inline const ExternalSourcesRetrieveAndGenerateConfiguration& GetExternalSourcesConfiguration() const{ return m_externalSourcesConfiguration; }
    inline bool ExternalSourcesConfigurationHasBeenSet() const { return m_externalSourcesConfigurationHasBeenSet; }
    inline void SetExternalSourcesConfiguration(const ExternalSourcesRetrieveAndGenerateConfiguration& value) { m_externalSourcesConfigurationHasBeenSet = true; m_externalSourcesConfiguration = value; }
    inline void SetExternalSourcesConfiguration(ExternalSourcesRetrieveAndGenerateConfiguration&& value) { m_externalSourcesConfigurationHasBeenSet = true; m_externalSourcesConfiguration = std::move(value); }
    inline RetrieveAndGenerateConfiguration& WithExternalSourcesConfiguration(const ExternalSourcesRetrieveAndGenerateConfiguration& value) { SetExternalSourcesConfiguration(value); return *this;}
    inline RetrieveAndGenerateConfiguration& WithExternalSourcesConfiguration(ExternalSourcesRetrieveAndGenerateConfiguration&& value) { SetExternalSourcesConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the knowledge base for retrieving information and
     * generating responses.</p>
     */
    inline const KnowledgeBaseRetrieveAndGenerateConfiguration& GetKnowledgeBaseConfiguration() const{ return m_knowledgeBaseConfiguration; }
    inline bool KnowledgeBaseConfigurationHasBeenSet() const { return m_knowledgeBaseConfigurationHasBeenSet; }
    inline void SetKnowledgeBaseConfiguration(const KnowledgeBaseRetrieveAndGenerateConfiguration& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = value; }
    inline void SetKnowledgeBaseConfiguration(KnowledgeBaseRetrieveAndGenerateConfiguration&& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = std::move(value); }
    inline RetrieveAndGenerateConfiguration& WithKnowledgeBaseConfiguration(const KnowledgeBaseRetrieveAndGenerateConfiguration& value) { SetKnowledgeBaseConfiguration(value); return *this;}
    inline RetrieveAndGenerateConfiguration& WithKnowledgeBaseConfiguration(KnowledgeBaseRetrieveAndGenerateConfiguration&& value) { SetKnowledgeBaseConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource that contains your data for retrieving information and
     * generating responses.</p> <p>If you choose ot use <code>EXTERNAL_SOURCES</code>,
     * then currently only Claude 3 Sonnet models for knowledge bases are
     * supported.</p>
     */
    inline const RetrieveAndGenerateType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RetrieveAndGenerateType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RetrieveAndGenerateType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RetrieveAndGenerateConfiguration& WithType(const RetrieveAndGenerateType& value) { SetType(value); return *this;}
    inline RetrieveAndGenerateConfiguration& WithType(RetrieveAndGenerateType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    ExternalSourcesRetrieveAndGenerateConfiguration m_externalSourcesConfiguration;
    bool m_externalSourcesConfigurationHasBeenSet = false;

    KnowledgeBaseRetrieveAndGenerateConfiguration m_knowledgeBaseConfiguration;
    bool m_knowledgeBaseConfigurationHasBeenSet = false;

    RetrieveAndGenerateType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
