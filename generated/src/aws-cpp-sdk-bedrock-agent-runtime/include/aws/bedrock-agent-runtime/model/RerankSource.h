/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/RerankDocument.h>
#include <aws/bedrock-agent-runtime/model/RerankSourceType.h>
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
   * <p>Contains information about a source for reranking.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RerankSource">AWS
   * API Reference</a></p>
   */
  class RerankSource
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RerankSource();
    AWS_BEDROCKAGENTRUNTIME_API RerankSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RerankSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains an inline definition of a source for reranking.</p>
     */
    inline const RerankDocument& GetInlineDocumentSource() const{ return m_inlineDocumentSource; }
    inline bool InlineDocumentSourceHasBeenSet() const { return m_inlineDocumentSourceHasBeenSet; }
    inline void SetInlineDocumentSource(const RerankDocument& value) { m_inlineDocumentSourceHasBeenSet = true; m_inlineDocumentSource = value; }
    inline void SetInlineDocumentSource(RerankDocument&& value) { m_inlineDocumentSourceHasBeenSet = true; m_inlineDocumentSource = std::move(value); }
    inline RerankSource& WithInlineDocumentSource(const RerankDocument& value) { SetInlineDocumentSource(value); return *this;}
    inline RerankSource& WithInlineDocumentSource(RerankDocument&& value) { SetInlineDocumentSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the source.</p>
     */
    inline const RerankSourceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RerankSourceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RerankSourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RerankSource& WithType(const RerankSourceType& value) { SetType(value); return *this;}
    inline RerankSource& WithType(RerankSourceType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    RerankDocument m_inlineDocumentSource;
    bool m_inlineDocumentSourceHasBeenSet = false;

    RerankSourceType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
