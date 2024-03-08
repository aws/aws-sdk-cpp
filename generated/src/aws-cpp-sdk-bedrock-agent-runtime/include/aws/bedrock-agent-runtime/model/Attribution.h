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
    AWS_BEDROCKAGENTRUNTIME_API Attribution();
    AWS_BEDROCKAGENTRUNTIME_API Attribution(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Attribution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of citations and related information for a part of an agent
     * response.</p>
     */
    inline const Aws::Vector<Citation>& GetCitations() const{ return m_citations; }

    /**
     * <p>A list of citations and related information for a part of an agent
     * response.</p>
     */
    inline bool CitationsHasBeenSet() const { return m_citationsHasBeenSet; }

    /**
     * <p>A list of citations and related information for a part of an agent
     * response.</p>
     */
    inline void SetCitations(const Aws::Vector<Citation>& value) { m_citationsHasBeenSet = true; m_citations = value; }

    /**
     * <p>A list of citations and related information for a part of an agent
     * response.</p>
     */
    inline void SetCitations(Aws::Vector<Citation>&& value) { m_citationsHasBeenSet = true; m_citations = std::move(value); }

    /**
     * <p>A list of citations and related information for a part of an agent
     * response.</p>
     */
    inline Attribution& WithCitations(const Aws::Vector<Citation>& value) { SetCitations(value); return *this;}

    /**
     * <p>A list of citations and related information for a part of an agent
     * response.</p>
     */
    inline Attribution& WithCitations(Aws::Vector<Citation>&& value) { SetCitations(std::move(value)); return *this;}

    /**
     * <p>A list of citations and related information for a part of an agent
     * response.</p>
     */
    inline Attribution& AddCitations(const Citation& value) { m_citationsHasBeenSet = true; m_citations.push_back(value); return *this; }

    /**
     * <p>A list of citations and related information for a part of an agent
     * response.</p>
     */
    inline Attribution& AddCitations(Citation&& value) { m_citationsHasBeenSet = true; m_citations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Citation> m_citations;
    bool m_citationsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
