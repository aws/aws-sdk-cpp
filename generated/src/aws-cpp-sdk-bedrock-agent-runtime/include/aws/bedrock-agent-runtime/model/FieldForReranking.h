/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information for a metadata field to include in or exclude from
   * consideration when reranking.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FieldForReranking">AWS
   * API Reference</a></p>
   */
  class FieldForReranking
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FieldForReranking() = default;
    AWS_BEDROCKAGENTRUNTIME_API FieldForReranking(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FieldForReranking& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a metadata field to include in or exclude from consideration when
     * reranking.</p>
     */
    inline const Aws::String& GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    template<typename FieldNameT = Aws::String>
    void SetFieldName(FieldNameT&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::forward<FieldNameT>(value); }
    template<typename FieldNameT = Aws::String>
    FieldForReranking& WithFieldName(FieldNameT&& value) { SetFieldName(std::forward<FieldNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
