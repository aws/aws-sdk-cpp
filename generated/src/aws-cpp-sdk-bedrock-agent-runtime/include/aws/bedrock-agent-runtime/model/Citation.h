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
   * <p>An object containing a segment of the generated response that is based on a
   * source in the knowledge base, alongside information about the source.</p>
   * <p>This data type is used in the following API operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html#API_agent-runtime_InvokeAgent_ResponseSyntax">InvokeAgent
   * response</a> – in the <code>citations</code> field</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_RetrieveAndGenerate.html#API_agent-runtime_RetrieveAndGenerate_ResponseSyntax">RetrieveAndGenerate
   * response</a> – in the <code>citations</code> field</p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/Citation">AWS
   * API Reference</a></p>
   */
  class Citation
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API Citation() = default;
    AWS_BEDROCKAGENTRUNTIME_API Citation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Citation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the generated response and metadata </p>
     */
    inline const GeneratedResponsePart& GetGeneratedResponsePart() const { return m_generatedResponsePart; }
    inline bool GeneratedResponsePartHasBeenSet() const { return m_generatedResponsePartHasBeenSet; }
    template<typename GeneratedResponsePartT = GeneratedResponsePart>
    void SetGeneratedResponsePart(GeneratedResponsePartT&& value) { m_generatedResponsePartHasBeenSet = true; m_generatedResponsePart = std::forward<GeneratedResponsePartT>(value); }
    template<typename GeneratedResponsePartT = GeneratedResponsePart>
    Citation& WithGeneratedResponsePart(GeneratedResponsePartT&& value) { SetGeneratedResponsePart(std::forward<GeneratedResponsePartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains metadata about the sources cited for the generated response.</p>
     */
    inline const Aws::Vector<RetrievedReference>& GetRetrievedReferences() const { return m_retrievedReferences; }
    inline bool RetrievedReferencesHasBeenSet() const { return m_retrievedReferencesHasBeenSet; }
    template<typename RetrievedReferencesT = Aws::Vector<RetrievedReference>>
    void SetRetrievedReferences(RetrievedReferencesT&& value) { m_retrievedReferencesHasBeenSet = true; m_retrievedReferences = std::forward<RetrievedReferencesT>(value); }
    template<typename RetrievedReferencesT = Aws::Vector<RetrievedReference>>
    Citation& WithRetrievedReferences(RetrievedReferencesT&& value) { SetRetrievedReferences(std::forward<RetrievedReferencesT>(value)); return *this;}
    template<typename RetrievedReferencesT = RetrievedReference>
    Citation& AddRetrievedReferences(RetrievedReferencesT&& value) { m_retrievedReferencesHasBeenSet = true; m_retrievedReferences.emplace_back(std::forward<RetrievedReferencesT>(value)); return *this; }
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
