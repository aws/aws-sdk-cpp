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
   * <p>Payload content included in the response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/PayloadPart">AWS
   * API Reference</a></p>
   */
  class PayloadPart
  {
  public:
    AWS_BEDROCKRUNTIME_API PayloadPart() = default;
    AWS_BEDROCKRUNTIME_API PayloadPart(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API PayloadPart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Base64-encoded bytes of payload data.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetBytes() const { return m_bytes; }
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
    template<typename BytesT = Aws::Utils::CryptoBuffer>
    void SetBytes(BytesT&& value) { m_bytesHasBeenSet = true; m_bytes = std::forward<BytesT>(value); }
    template<typename BytesT = Aws::Utils::CryptoBuffer>
    PayloadPart& WithBytes(BytesT&& value) { SetBytes(std::forward<BytesT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::CryptoBuffer m_bytes{};
    bool m_bytesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
