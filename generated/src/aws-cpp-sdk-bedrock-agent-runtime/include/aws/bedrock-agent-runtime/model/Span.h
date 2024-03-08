/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>

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
   * <p>Contains information about where the text with a citation begins and ends in
   * the generated output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/Span">AWS
   * API Reference</a></p>
   */
  class Span
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API Span();
    AWS_BEDROCKAGENTRUNTIME_API Span(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Span& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Where the text with a citation ends in the generated output.</p>
     */
    inline int GetEnd() const{ return m_end; }

    /**
     * <p>Where the text with a citation ends in the generated output.</p>
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * <p>Where the text with a citation ends in the generated output.</p>
     */
    inline void SetEnd(int value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>Where the text with a citation ends in the generated output.</p>
     */
    inline Span& WithEnd(int value) { SetEnd(value); return *this;}


    /**
     * <p>Where the text with a citation starts in the generated output.</p>
     */
    inline int GetStart() const{ return m_start; }

    /**
     * <p>Where the text with a citation starts in the generated output.</p>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>Where the text with a citation starts in the generated output.</p>
     */
    inline void SetStart(int value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>Where the text with a citation starts in the generated output.</p>
     */
    inline Span& WithStart(int value) { SetStart(value); return *this;}

  private:

    int m_end;
    bool m_endHasBeenSet = false;

    int m_start;
    bool m_startHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
