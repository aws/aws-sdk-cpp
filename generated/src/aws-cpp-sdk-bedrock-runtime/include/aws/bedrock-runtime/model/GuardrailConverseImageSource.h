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
   * <p>The image source (image bytes) of the guardrail converse image
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailConverseImageSource">AWS
   * API Reference</a></p>
   */
  class GuardrailConverseImageSource
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailConverseImageSource();
    AWS_BEDROCKRUNTIME_API GuardrailConverseImageSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailConverseImageSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The raw image bytes for the image.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBytes() const{ return m_bytes; }
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
    inline void SetBytes(const Aws::Utils::ByteBuffer& value) { m_bytesHasBeenSet = true; m_bytes = value; }
    inline void SetBytes(Aws::Utils::ByteBuffer&& value) { m_bytesHasBeenSet = true; m_bytes = std::move(value); }
    inline GuardrailConverseImageSource& WithBytes(const Aws::Utils::ByteBuffer& value) { SetBytes(value); return *this;}
    inline GuardrailConverseImageSource& WithBytes(Aws::Utils::ByteBuffer&& value) { SetBytes(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_bytes;
    bool m_bytesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
