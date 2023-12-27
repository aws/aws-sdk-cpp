﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateType.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBaseRetrieveAndGenerateConfiguration.h>
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
   * <p>Configures the retrieval and generation for the session.</p><p><h3>See
   * Also:</h3>   <a
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


    
    inline const RetrieveAndGenerateType& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const RetrieveAndGenerateType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(RetrieveAndGenerateType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline RetrieveAndGenerateConfiguration& WithType(const RetrieveAndGenerateType& value) { SetType(value); return *this;}

    
    inline RetrieveAndGenerateConfiguration& WithType(RetrieveAndGenerateType&& value) { SetType(std::move(value)); return *this;}


    
    inline const KnowledgeBaseRetrieveAndGenerateConfiguration& GetKnowledgeBaseConfiguration() const{ return m_knowledgeBaseConfiguration; }

    
    inline bool KnowledgeBaseConfigurationHasBeenSet() const { return m_knowledgeBaseConfigurationHasBeenSet; }

    
    inline void SetKnowledgeBaseConfiguration(const KnowledgeBaseRetrieveAndGenerateConfiguration& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = value; }

    
    inline void SetKnowledgeBaseConfiguration(KnowledgeBaseRetrieveAndGenerateConfiguration&& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = std::move(value); }

    
    inline RetrieveAndGenerateConfiguration& WithKnowledgeBaseConfiguration(const KnowledgeBaseRetrieveAndGenerateConfiguration& value) { SetKnowledgeBaseConfiguration(value); return *this;}

    
    inline RetrieveAndGenerateConfiguration& WithKnowledgeBaseConfiguration(KnowledgeBaseRetrieveAndGenerateConfiguration&& value) { SetKnowledgeBaseConfiguration(std::move(value)); return *this;}

  private:

    RetrieveAndGenerateType m_type;
    bool m_typeHasBeenSet = false;

    KnowledgeBaseRetrieveAndGenerateConfiguration m_knowledgeBaseConfiguration;
    bool m_knowledgeBaseConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
