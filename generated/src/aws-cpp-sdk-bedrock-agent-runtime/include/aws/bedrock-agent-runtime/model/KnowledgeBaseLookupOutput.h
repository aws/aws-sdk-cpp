/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
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
   * <p>Contains details about the results from looking up the knowledge
   * base.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/KnowledgeBaseLookupOutput">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseLookupOutput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseLookupOutput();
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseLookupOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseLookupOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains metadata about the sources cited for the generated response.</p>
     */
    inline const Aws::Vector<RetrievedReference>& GetRetrievedReferences() const{ return m_retrievedReferences; }

    /**
     * <p>Contains metadata about the sources cited for the generated response.</p>
     */
    inline bool RetrievedReferencesHasBeenSet() const { return m_retrievedReferencesHasBeenSet; }

    /**
     * <p>Contains metadata about the sources cited for the generated response.</p>
     */
    inline void SetRetrievedReferences(const Aws::Vector<RetrievedReference>& value) { m_retrievedReferencesHasBeenSet = true; m_retrievedReferences = value; }

    /**
     * <p>Contains metadata about the sources cited for the generated response.</p>
     */
    inline void SetRetrievedReferences(Aws::Vector<RetrievedReference>&& value) { m_retrievedReferencesHasBeenSet = true; m_retrievedReferences = std::move(value); }

    /**
     * <p>Contains metadata about the sources cited for the generated response.</p>
     */
    inline KnowledgeBaseLookupOutput& WithRetrievedReferences(const Aws::Vector<RetrievedReference>& value) { SetRetrievedReferences(value); return *this;}

    /**
     * <p>Contains metadata about the sources cited for the generated response.</p>
     */
    inline KnowledgeBaseLookupOutput& WithRetrievedReferences(Aws::Vector<RetrievedReference>&& value) { SetRetrievedReferences(std::move(value)); return *this;}

    /**
     * <p>Contains metadata about the sources cited for the generated response.</p>
     */
    inline KnowledgeBaseLookupOutput& AddRetrievedReferences(const RetrievedReference& value) { m_retrievedReferencesHasBeenSet = true; m_retrievedReferences.push_back(value); return *this; }

    /**
     * <p>Contains metadata about the sources cited for the generated response.</p>
     */
    inline KnowledgeBaseLookupOutput& AddRetrievedReferences(RetrievedReference&& value) { m_retrievedReferencesHasBeenSet = true; m_retrievedReferences.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RetrievedReference> m_retrievedReferences;
    bool m_retrievedReferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
