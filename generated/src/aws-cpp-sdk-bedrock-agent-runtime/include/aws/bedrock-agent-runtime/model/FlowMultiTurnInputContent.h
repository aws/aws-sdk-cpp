﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/Document.h>
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
   * <p>The content structure containing input information for multi-turn flow
   * interactions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowMultiTurnInputContent">AWS
   * API Reference</a></p>
   */
  class FlowMultiTurnInputContent
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowMultiTurnInputContent();
    AWS_BEDROCKAGENTRUNTIME_API FlowMultiTurnInputContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowMultiTurnInputContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The requested additional input to send back to the multi-turn flow node.</p>
     */
    inline Aws::Utils::DocumentView GetDocument() const{ return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    inline void SetDocument(const Aws::Utils::Document& value) { m_documentHasBeenSet = true; m_document = value; }
    inline void SetDocument(Aws::Utils::Document&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }
    inline FlowMultiTurnInputContent& WithDocument(const Aws::Utils::Document& value) { SetDocument(value); return *this;}
    inline FlowMultiTurnInputContent& WithDocument(Aws::Utils::Document&& value) { SetDocument(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_document;
    bool m_documentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
