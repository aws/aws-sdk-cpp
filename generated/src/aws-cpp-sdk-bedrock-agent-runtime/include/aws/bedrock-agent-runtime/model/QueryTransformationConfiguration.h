/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/QueryTransformationType.h>
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
   * <p>To split up the prompt and retrieve multiple sources, set the transformation
   * type to <code>QUERY_DECOMPOSITION</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/QueryTransformationConfiguration">AWS
   * API Reference</a></p>
   */
  class QueryTransformationConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API QueryTransformationConfiguration() = default;
    AWS_BEDROCKAGENTRUNTIME_API QueryTransformationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API QueryTransformationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of transformation to apply to the prompt.</p>
     */
    inline QueryTransformationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(QueryTransformationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline QueryTransformationConfiguration& WithType(QueryTransformationType value) { SetType(value); return *this;}
    ///@}
  private:

    QueryTransformationType m_type{QueryTransformationType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
