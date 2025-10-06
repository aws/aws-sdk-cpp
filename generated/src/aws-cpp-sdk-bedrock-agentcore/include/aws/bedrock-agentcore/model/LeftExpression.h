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
   * <p>Left expression of the event metadata filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/LeftExpression">AWS
   * API Reference</a></p>
   */
  class LeftExpression
  {
  public:
    AWS_BEDROCKAGENTCORE_API LeftExpression() = default;
    AWS_BEDROCKAGENTCORE_API LeftExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API LeftExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Key associated with the metadata in an event.</p>
     */
    inline const Aws::String& GetMetadataKey() const { return m_metadataKey; }
    inline bool MetadataKeyHasBeenSet() const { return m_metadataKeyHasBeenSet; }
    template<typename MetadataKeyT = Aws::String>
    void SetMetadataKey(MetadataKeyT&& value) { m_metadataKeyHasBeenSet = true; m_metadataKey = std::forward<MetadataKeyT>(value); }
    template<typename MetadataKeyT = Aws::String>
    LeftExpression& WithMetadataKey(MetadataKeyT&& value) { SetMetadataKey(std::forward<MetadataKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metadataKey;
    bool m_metadataKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
