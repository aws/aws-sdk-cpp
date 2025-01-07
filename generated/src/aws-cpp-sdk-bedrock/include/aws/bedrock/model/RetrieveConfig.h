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
    AWS_BEDROCK_API RetrieveConfig();
    AWS_BEDROCK_API RetrieveConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API RetrieveConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline RetrieveConfig& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline RetrieveConfig& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline RetrieveConfig& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configuration details for knowledge base retrieval.</p>
     */
    inline const KnowledgeBaseRetrievalConfiguration& GetKnowledgeBaseRetrievalConfiguration() const{ return m_knowledgeBaseRetrievalConfiguration; }
    inline bool KnowledgeBaseRetrievalConfigurationHasBeenSet() const { return m_knowledgeBaseRetrievalConfigurationHasBeenSet; }
    inline void SetKnowledgeBaseRetrievalConfiguration(const KnowledgeBaseRetrievalConfiguration& value) { m_knowledgeBaseRetrievalConfigurationHasBeenSet = true; m_knowledgeBaseRetrievalConfiguration = value; }
    inline void SetKnowledgeBaseRetrievalConfiguration(KnowledgeBaseRetrievalConfiguration&& value) { m_knowledgeBaseRetrievalConfigurationHasBeenSet = true; m_knowledgeBaseRetrievalConfiguration = std::move(value); }
    inline RetrieveConfig& WithKnowledgeBaseRetrievalConfiguration(const KnowledgeBaseRetrievalConfiguration& value) { SetKnowledgeBaseRetrievalConfiguration(value); return *this;}
    inline RetrieveConfig& WithKnowledgeBaseRetrievalConfiguration(KnowledgeBaseRetrievalConfiguration&& value) { SetKnowledgeBaseRetrievalConfiguration(std::move(value)); return *this;}
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
