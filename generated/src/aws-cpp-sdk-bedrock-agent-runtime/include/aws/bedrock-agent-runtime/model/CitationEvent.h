/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
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
   * <p>A citation event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/CitationEvent">AWS
   * API Reference</a></p>
   */
  class CitationEvent
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API CitationEvent();
    AWS_BEDROCKAGENTRUNTIME_API CitationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API CitationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The citation.</p>
     */
    inline const Citation& GetCitation() const{ return m_citation; }
    inline bool CitationHasBeenSet() const { return m_citationHasBeenSet; }
    inline void SetCitation(const Citation& value) { m_citationHasBeenSet = true; m_citation = value; }
    inline void SetCitation(Citation&& value) { m_citationHasBeenSet = true; m_citation = std::move(value); }
    inline CitationEvent& WithCitation(const Citation& value) { SetCitation(value); return *this;}
    inline CitationEvent& WithCitation(Citation&& value) { SetCitation(std::move(value)); return *this;}
    ///@}
  private:

    Citation m_citation;
    bool m_citationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
