/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/RerankQueryContentType.h>
#include <aws/bedrock-agent-runtime/model/RerankTextDocument.h>
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
   * <p>Contains information about a query to submit to the reranker
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RerankQuery">AWS
   * API Reference</a></p>
   */
  class RerankQuery
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RerankQuery() = default;
    AWS_BEDROCKAGENTRUNTIME_API RerankQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RerankQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the query.</p>
     */
    inline RerankQueryContentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RerankQueryContentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RerankQuery& WithType(RerankQueryContentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about a text query.</p>
     */
    inline const RerankTextDocument& GetTextQuery() const { return m_textQuery; }
    inline bool TextQueryHasBeenSet() const { return m_textQueryHasBeenSet; }
    template<typename TextQueryT = RerankTextDocument>
    void SetTextQuery(TextQueryT&& value) { m_textQueryHasBeenSet = true; m_textQuery = std::forward<TextQueryT>(value); }
    template<typename TextQueryT = RerankTextDocument>
    RerankQuery& WithTextQuery(TextQueryT&& value) { SetTextQuery(std::forward<TextQueryT>(value)); return *this;}
    ///@}
  private:

    RerankQueryContentType m_type{RerankQueryContentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    RerankTextDocument m_textQuery;
    bool m_textQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
