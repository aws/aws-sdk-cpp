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


    /**
     * <p>The configuration used with the external source wrapper object in the
     * retrieveAndGenerate function.</p>
     */
    inline const ExternalSourcesRetrieveAndGenerateConfiguration& GetExternalSourcesConfiguration() const{ return m_externalSourcesConfiguration; }

    /**
     * <p>The configuration used with the external source wrapper object in the
     * retrieveAndGenerate function.</p>
     */
    inline bool ExternalSourcesConfigurationHasBeenSet() const { return m_externalSourcesConfigurationHasBeenSet; }

    /**
     * <p>The configuration used with the external source wrapper object in the
     * retrieveAndGenerate function.</p>
     */
    inline void SetExternalSourcesConfiguration(const ExternalSourcesRetrieveAndGenerateConfiguration& value) { m_externalSourcesConfigurationHasBeenSet = true; m_externalSourcesConfiguration = value; }

    /**
     * <p>The configuration used with the external source wrapper object in the
     * retrieveAndGenerate function.</p>
     */
    inline void SetExternalSourcesConfiguration(ExternalSourcesRetrieveAndGenerateConfiguration&& value) { m_externalSourcesConfigurationHasBeenSet = true; m_externalSourcesConfiguration = std::move(value); }

    /**
     * <p>The configuration used with the external source wrapper object in the
     * retrieveAndGenerate function.</p>
     */
    inline RetrieveAndGenerateConfiguration& WithExternalSourcesConfiguration(const ExternalSourcesRetrieveAndGenerateConfiguration& value) { SetExternalSourcesConfiguration(value); return *this;}

    /**
     * <p>The configuration used with the external source wrapper object in the
     * retrieveAndGenerate function.</p>
     */
    inline RetrieveAndGenerateConfiguration& WithExternalSourcesConfiguration(ExternalSourcesRetrieveAndGenerateConfiguration&& value) { SetExternalSourcesConfiguration(std::move(value)); return *this;}


    /**
     * <p>Contains details about the resource being queried.</p>
     */
    inline const KnowledgeBaseRetrieveAndGenerateConfiguration& GetKnowledgeBaseConfiguration() const{ return m_knowledgeBaseConfiguration; }

    /**
     * <p>Contains details about the resource being queried.</p>
     */
    inline bool KnowledgeBaseConfigurationHasBeenSet() const { return m_knowledgeBaseConfigurationHasBeenSet; }

    /**
     * <p>Contains details about the resource being queried.</p>
     */
    inline void SetKnowledgeBaseConfiguration(const KnowledgeBaseRetrieveAndGenerateConfiguration& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = value; }

    /**
     * <p>Contains details about the resource being queried.</p>
     */
    inline void SetKnowledgeBaseConfiguration(KnowledgeBaseRetrieveAndGenerateConfiguration&& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = std::move(value); }

    /**
     * <p>Contains details about the resource being queried.</p>
     */
    inline RetrieveAndGenerateConfiguration& WithKnowledgeBaseConfiguration(const KnowledgeBaseRetrieveAndGenerateConfiguration& value) { SetKnowledgeBaseConfiguration(value); return *this;}

    /**
     * <p>Contains details about the resource being queried.</p>
     */
    inline RetrieveAndGenerateConfiguration& WithKnowledgeBaseConfiguration(KnowledgeBaseRetrieveAndGenerateConfiguration&& value) { SetKnowledgeBaseConfiguration(std::move(value)); return *this;}


    /**
     * <p>The type of resource that is queried by the request.</p>
     */
    inline const RetrieveAndGenerateType& GetType() const{ return m_type; }

    /**
     * <p>The type of resource that is queried by the request.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of resource that is queried by the request.</p>
     */
    inline void SetType(const RetrieveAndGenerateType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of resource that is queried by the request.</p>
     */
    inline void SetType(RetrieveAndGenerateType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of resource that is queried by the request.</p>
     */
    inline RetrieveAndGenerateConfiguration& WithType(const RetrieveAndGenerateType& value) { SetType(value); return *this;}

    /**
     * <p>The type of resource that is queried by the request.</p>
     */
    inline RetrieveAndGenerateConfiguration& WithType(RetrieveAndGenerateType&& value) { SetType(std::move(value)); return *this;}

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
