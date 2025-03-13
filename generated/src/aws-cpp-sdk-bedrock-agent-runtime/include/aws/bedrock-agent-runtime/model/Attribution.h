/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/Citation.h>
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
   * <p>Contains citations for a part of an agent response.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/Attribution">AWS
   * API Reference</a></p>
   */
  class Attribution
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API Attribution() = default;
    AWS_BEDROCKAGENTRUNTIME_API Attribution(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Attribution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of citations and related information for a part of an agent
     * response.</p>
     */
    inline const Aws::Vector<Citation>& GetCitations() const { return m_citations; }
    inline bool CitationsHasBeenSet() const { return m_citationsHasBeenSet; }
    template<typename CitationsT = Aws::Vector<Citation>>
    void SetCitations(CitationsT&& value) { m_citationsHasBeenSet = true; m_citations = std::forward<CitationsT>(value); }
    template<typename CitationsT = Aws::Vector<Citation>>
    Attribution& WithCitations(CitationsT&& value) { SetCitations(std::forward<CitationsT>(value)); return *this;}
    template<typename CitationsT = Citation>
    Attribution& AddCitations(CitationsT&& value) { m_citationsHasBeenSet = true; m_citations.emplace_back(std::forward<CitationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Citation> m_citations;
    bool m_citationsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
