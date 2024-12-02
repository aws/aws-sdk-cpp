/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/KnowledgeBaseConfig.h>
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
   * <p>Contains configuration details for retrieval of information and response
   * generation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/RAGConfig">AWS
   * API Reference</a></p>
   */
  class RAGConfig
  {
  public:
    AWS_BEDROCK_API RAGConfig();
    AWS_BEDROCK_API RAGConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API RAGConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configuration details for knowledge base retrieval and response
     * generation.</p>
     */
    inline const KnowledgeBaseConfig& GetKnowledgeBaseConfig() const{ return m_knowledgeBaseConfig; }
    inline bool KnowledgeBaseConfigHasBeenSet() const { return m_knowledgeBaseConfigHasBeenSet; }
    inline void SetKnowledgeBaseConfig(const KnowledgeBaseConfig& value) { m_knowledgeBaseConfigHasBeenSet = true; m_knowledgeBaseConfig = value; }
    inline void SetKnowledgeBaseConfig(KnowledgeBaseConfig&& value) { m_knowledgeBaseConfigHasBeenSet = true; m_knowledgeBaseConfig = std::move(value); }
    inline RAGConfig& WithKnowledgeBaseConfig(const KnowledgeBaseConfig& value) { SetKnowledgeBaseConfig(value); return *this;}
    inline RAGConfig& WithKnowledgeBaseConfig(KnowledgeBaseConfig&& value) { SetKnowledgeBaseConfig(std::move(value)); return *this;}
    ///@}
  private:

    KnowledgeBaseConfig m_knowledgeBaseConfig;
    bool m_knowledgeBaseConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
