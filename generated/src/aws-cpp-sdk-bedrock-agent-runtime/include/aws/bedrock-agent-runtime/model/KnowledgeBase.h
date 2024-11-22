/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBaseRetrievalConfiguration.h>
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
   * <p> Details of the knowledge base associated withe inline agent. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/KnowledgeBase">AWS
   * API Reference</a></p>
   */
  class KnowledgeBase
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBase();
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBase(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The description of the knowledge base associated with the inline agent. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline KnowledgeBase& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline KnowledgeBase& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline KnowledgeBase& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for a knowledge base associated with the inline agent.
     * </p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline KnowledgeBase& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline KnowledgeBase& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline KnowledgeBase& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configurations to apply to the knowledge base during query. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-test-config.html">Query
     * configurations</a>. </p>
     */
    inline const KnowledgeBaseRetrievalConfiguration& GetRetrievalConfiguration() const{ return m_retrievalConfiguration; }
    inline bool RetrievalConfigurationHasBeenSet() const { return m_retrievalConfigurationHasBeenSet; }
    inline void SetRetrievalConfiguration(const KnowledgeBaseRetrievalConfiguration& value) { m_retrievalConfigurationHasBeenSet = true; m_retrievalConfiguration = value; }
    inline void SetRetrievalConfiguration(KnowledgeBaseRetrievalConfiguration&& value) { m_retrievalConfigurationHasBeenSet = true; m_retrievalConfiguration = std::move(value); }
    inline KnowledgeBase& WithRetrievalConfiguration(const KnowledgeBaseRetrievalConfiguration& value) { SetRetrievalConfiguration(value); return *this;}
    inline KnowledgeBase& WithRetrievalConfiguration(KnowledgeBaseRetrievalConfiguration&& value) { SetRetrievalConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    KnowledgeBaseRetrievalConfiguration m_retrievalConfiguration;
    bool m_retrievalConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
