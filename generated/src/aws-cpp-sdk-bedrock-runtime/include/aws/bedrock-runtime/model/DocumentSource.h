﻿/**
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
   * <p>Contains the content of a document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/DocumentSource">AWS
   * API Reference</a></p>
   */
  class DocumentSource
  {
  public:
    AWS_BEDROCKRUNTIME_API DocumentSource() = default;
    AWS_BEDROCKRUNTIME_API DocumentSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API DocumentSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The raw bytes for the document. If you use an Amazon Web Services SDK, you
     * don't need to encode the bytes in base64.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBytes() const { return m_bytes; }
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
    template<typename BytesT = Aws::Utils::ByteBuffer>
    void SetBytes(BytesT&& value) { m_bytesHasBeenSet = true; m_bytes = std::forward<BytesT>(value); }
    template<typename BytesT = Aws::Utils::ByteBuffer>
    DocumentSource& WithBytes(BytesT&& value) { SetBytes(std::forward<BytesT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_bytes{};
    bool m_bytesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
