/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>Output from the bidirectional stream. The output is speech and a text
   * transcription.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/BidirectionalOutputPayloadPart">AWS
   * API Reference</a></p>
   */
  class BidirectionalOutputPayloadPart
  {
  public:
    AWS_BEDROCKRUNTIME_API BidirectionalOutputPayloadPart() = default;
    AWS_BEDROCKRUNTIME_API BidirectionalOutputPayloadPart(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API BidirectionalOutputPayloadPart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The speech output of the bidirectional stream.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetBytes() const { return m_bytes; }
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
    template<typename BytesT = Aws::Utils::CryptoBuffer>
    void SetBytes(BytesT&& value) { m_bytesHasBeenSet = true; m_bytes = std::forward<BytesT>(value); }
    template<typename BytesT = Aws::Utils::CryptoBuffer>
    BidirectionalOutputPayloadPart& WithBytes(BytesT&& value) { SetBytes(std::forward<BytesT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::CryptoBuffer m_bytes{};
    bool m_bytesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
