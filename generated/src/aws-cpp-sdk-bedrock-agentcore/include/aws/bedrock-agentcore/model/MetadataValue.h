/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
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
namespace BedrockAgentCore
{
namespace Model
{

  /**
   * <p>Value associated with the <code>eventMetadata</code> key.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/MetadataValue">AWS
   * API Reference</a></p>
   */
  class MetadataValue
  {
  public:
    AWS_BEDROCKAGENTCORE_API MetadataValue() = default;
    AWS_BEDROCKAGENTCORE_API MetadataValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API MetadataValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Value associated with the <code>eventMetadata</code> key.</p>
     */
    inline const Aws::String& GetStringValue() const { return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    template<typename StringValueT = Aws::String>
    void SetStringValue(StringValueT&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::forward<StringValueT>(value); }
    template<typename StringValueT = Aws::String>
    MetadataValue& WithStringValue(StringValueT&& value) { SetStringValue(std::forward<StringValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
