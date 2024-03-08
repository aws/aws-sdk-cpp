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
    AWS_BEDROCKRUNTIME_API PayloadPart(Aws::Vector<unsigned char>&& value) { m_bytes = std::move(value); }

    /**
     * <p>Base64-encoded bytes of payload data.</p>
     */
    inline const Aws::Vector<unsigned char>& GetBytes() const { return m_bytes; }

    /**
     * <p>Base64-encoded bytes of payload data.</p>
     */
    inline Aws::Vector<unsigned char>&& GetBytesWithOwnership() { return std::move(m_bytes); }

    /**
     * <p>Base64-encoded bytes of payload data.</p>
     */
    inline void SetBytes(const Aws::Vector<unsigned char>& value) { m_bytesHasBeenSet = true; m_bytes = value; }

    /**
     * <p>Base64-encoded bytes of payload data.</p>
     */
    inline void SetBytes(Aws::Vector<unsigned char>&& value) { m_bytesHasBeenSet = true; m_bytes = std::move(value); }

    /**
     * <p>Base64-encoded bytes of payload data.</p>
     */
    inline PayloadPart& WithBytes(const Aws::Vector<unsigned char>& value) { SetBytes(value); return *this;}

    /**
     * <p>Base64-encoded bytes of payload data.</p>
     */
    inline PayloadPart& WithBytes(Aws::Vector<unsigned char>&& value) { SetBytes(std::move(value)); return *this;}

  private:

    Aws::Vector<unsigned char> m_bytes;
    bool m_bytesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
