/**
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
   * <p>A citation event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/CitationEvent">AWS
   * API Reference</a></p>
   */
  class CitationEvent
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API CitationEvent() = default;
    AWS_BEDROCKAGENTRUNTIME_API CitationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API CitationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The generated response to the citation event.</p>
     */
    inline const GeneratedResponsePart& GetGeneratedResponsePart() const { return m_generatedResponsePart; }
    inline bool GeneratedResponsePartHasBeenSet() const { return m_generatedResponsePartHasBeenSet; }
    template<typename GeneratedResponsePartT = GeneratedResponsePart>
    void SetGeneratedResponsePart(GeneratedResponsePartT&& value) { m_generatedResponsePartHasBeenSet = true; m_generatedResponsePart = std::forward<GeneratedResponsePartT>(value); }
    template<typename GeneratedResponsePartT = GeneratedResponsePart>
    CitationEvent& WithGeneratedResponsePart(GeneratedResponsePartT&& value) { SetGeneratedResponsePart(std::forward<GeneratedResponsePartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retrieved references of the citation event.</p>
     */
    inline const Aws::Vector<RetrievedReference>& GetRetrievedReferences() const { return m_retrievedReferences; }
    inline bool RetrievedReferencesHasBeenSet() const { return m_retrievedReferencesHasBeenSet; }
    template<typename RetrievedReferencesT = Aws::Vector<RetrievedReference>>
    void SetRetrievedReferences(RetrievedReferencesT&& value) { m_retrievedReferencesHasBeenSet = true; m_retrievedReferences = std::forward<RetrievedReferencesT>(value); }
    template<typename RetrievedReferencesT = Aws::Vector<RetrievedReference>>
    CitationEvent& WithRetrievedReferences(RetrievedReferencesT&& value) { SetRetrievedReferences(std::forward<RetrievedReferencesT>(value)); return *this;}
    template<typename RetrievedReferencesT = RetrievedReference>
    CitationEvent& AddRetrievedReferences(RetrievedReferencesT&& value) { m_retrievedReferencesHasBeenSet = true; m_retrievedReferences.emplace_back(std::forward<RetrievedReferencesT>(value)); return *this; }
    ///@}
  private:

    GeneratedResponsePart m_generatedResponsePart;
    bool m_generatedResponsePartHasBeenSet = false;

    Aws::Vector<RetrievedReference> m_retrievedReferences;
    bool m_retrievedReferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
