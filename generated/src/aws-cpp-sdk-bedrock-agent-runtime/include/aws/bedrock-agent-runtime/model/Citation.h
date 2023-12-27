﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/GeneratedResponsePart.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/RetrievedReference.h>
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
   * <p>Citation associated with the agent response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/Citation">AWS
   * API Reference</a></p>
   */
  class Citation
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API Citation();
    AWS_BEDROCKAGENTRUNTIME_API Citation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Citation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const GeneratedResponsePart& GetGeneratedResponsePart() const{ return m_generatedResponsePart; }

    
    inline bool GeneratedResponsePartHasBeenSet() const { return m_generatedResponsePartHasBeenSet; }

    
    inline void SetGeneratedResponsePart(const GeneratedResponsePart& value) { m_generatedResponsePartHasBeenSet = true; m_generatedResponsePart = value; }

    
    inline void SetGeneratedResponsePart(GeneratedResponsePart&& value) { m_generatedResponsePartHasBeenSet = true; m_generatedResponsePart = std::move(value); }

    
    inline Citation& WithGeneratedResponsePart(const GeneratedResponsePart& value) { SetGeneratedResponsePart(value); return *this;}

    
    inline Citation& WithGeneratedResponsePart(GeneratedResponsePart&& value) { SetGeneratedResponsePart(std::move(value)); return *this;}


    
    inline const Aws::Vector<RetrievedReference>& GetRetrievedReferences() const{ return m_retrievedReferences; }

    
    inline bool RetrievedReferencesHasBeenSet() const { return m_retrievedReferencesHasBeenSet; }

    
    inline void SetRetrievedReferences(const Aws::Vector<RetrievedReference>& value) { m_retrievedReferencesHasBeenSet = true; m_retrievedReferences = value; }

    
    inline void SetRetrievedReferences(Aws::Vector<RetrievedReference>&& value) { m_retrievedReferencesHasBeenSet = true; m_retrievedReferences = std::move(value); }

    
    inline Citation& WithRetrievedReferences(const Aws::Vector<RetrievedReference>& value) { SetRetrievedReferences(value); return *this;}

    
    inline Citation& WithRetrievedReferences(Aws::Vector<RetrievedReference>&& value) { SetRetrievedReferences(std::move(value)); return *this;}

    
    inline Citation& AddRetrievedReferences(const RetrievedReference& value) { m_retrievedReferencesHasBeenSet = true; m_retrievedReferences.push_back(value); return *this; }

    
    inline Citation& AddRetrievedReferences(RetrievedReference&& value) { m_retrievedReferencesHasBeenSet = true; m_retrievedReferences.push_back(std::move(value)); return *this; }

  private:

    GeneratedResponsePart m_generatedResponsePart;
    bool m_generatedResponsePartHasBeenSet = false;

    Aws::Vector<RetrievedReference> m_retrievedReferences;
    bool m_retrievedReferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
