/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBaseVectorSearchConfiguration.h>
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
   * <p>Contains details about how the results should be returned.</p> <p>This data
   * type is used in the following API operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_Retrieve.html#API_agent-runtime_Retrieve_RequestSyntax">Retrieve
   * request body</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_RetrieveAndGenerate.html#API_agent-runtime_RetrieveAndGenerate_RequestSyntax">RetrieveAndGenerate
   * request body</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/KnowledgeBaseRetrievalConfiguration">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseRetrievalConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseRetrievalConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseRetrievalConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseRetrievalConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains details about how the results from the vector search should be
     * returned.</p>
     */
    inline const KnowledgeBaseVectorSearchConfiguration& GetVectorSearchConfiguration() const{ return m_vectorSearchConfiguration; }

    /**
     * <p>Contains details about how the results from the vector search should be
     * returned.</p>
     */
    inline bool VectorSearchConfigurationHasBeenSet() const { return m_vectorSearchConfigurationHasBeenSet; }

    /**
     * <p>Contains details about how the results from the vector search should be
     * returned.</p>
     */
    inline void SetVectorSearchConfiguration(const KnowledgeBaseVectorSearchConfiguration& value) { m_vectorSearchConfigurationHasBeenSet = true; m_vectorSearchConfiguration = value; }

    /**
     * <p>Contains details about how the results from the vector search should be
     * returned.</p>
     */
    inline void SetVectorSearchConfiguration(KnowledgeBaseVectorSearchConfiguration&& value) { m_vectorSearchConfigurationHasBeenSet = true; m_vectorSearchConfiguration = std::move(value); }

    /**
     * <p>Contains details about how the results from the vector search should be
     * returned.</p>
     */
    inline KnowledgeBaseRetrievalConfiguration& WithVectorSearchConfiguration(const KnowledgeBaseVectorSearchConfiguration& value) { SetVectorSearchConfiguration(value); return *this;}

    /**
     * <p>Contains details about how the results from the vector search should be
     * returned.</p>
     */
    inline KnowledgeBaseRetrievalConfiguration& WithVectorSearchConfiguration(KnowledgeBaseVectorSearchConfiguration&& value) { SetVectorSearchConfiguration(std::move(value)); return *this;}

  private:

    KnowledgeBaseVectorSearchConfiguration m_vectorSearchConfiguration;
    bool m_vectorSearchConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
