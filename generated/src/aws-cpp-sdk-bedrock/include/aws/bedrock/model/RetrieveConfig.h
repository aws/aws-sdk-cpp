/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/KnowledgeBaseRetrievalConfiguration.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>The configuration details for retrieving information from a knowledge
   * base.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/RetrieveConfig">AWS
   * API Reference</a></p>
   */
  class RetrieveConfig
  {
  public:
    AWS_BEDROCK_API RetrieveConfig() = default;
    AWS_BEDROCK_API RetrieveConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API RetrieveConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    RetrieveConfig& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configuration details for knowledge base retrieval.</p>
     */
    inline const KnowledgeBaseRetrievalConfiguration& GetKnowledgeBaseRetrievalConfiguration() const { return m_knowledgeBaseRetrievalConfiguration; }
    inline bool KnowledgeBaseRetrievalConfigurationHasBeenSet() const { return m_knowledgeBaseRetrievalConfigurationHasBeenSet; }
    template<typename KnowledgeBaseRetrievalConfigurationT = KnowledgeBaseRetrievalConfiguration>
    void SetKnowledgeBaseRetrievalConfiguration(KnowledgeBaseRetrievalConfigurationT&& value) { m_knowledgeBaseRetrievalConfigurationHasBeenSet = true; m_knowledgeBaseRetrievalConfiguration = std::forward<KnowledgeBaseRetrievalConfigurationT>(value); }
    template<typename KnowledgeBaseRetrievalConfigurationT = KnowledgeBaseRetrievalConfiguration>
    RetrieveConfig& WithKnowledgeBaseRetrievalConfiguration(KnowledgeBaseRetrievalConfigurationT&& value) { SetKnowledgeBaseRetrievalConfiguration(std::forward<KnowledgeBaseRetrievalConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    KnowledgeBaseRetrievalConfiguration m_knowledgeBaseRetrievalConfiguration;
    bool m_knowledgeBaseRetrievalConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
