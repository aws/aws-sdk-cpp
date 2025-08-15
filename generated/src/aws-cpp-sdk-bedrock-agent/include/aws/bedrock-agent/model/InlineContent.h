/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/InlineContentType.h>
#include <aws/bedrock-agent/model/ByteContentDoc.h>
#include <aws/bedrock-agent/model/TextContentDoc.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains information about content defined inline to ingest into a data
   * source. Choose a <code>type</code> and include the field that corresponds to
   * it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/InlineContent">AWS
   * API Reference</a></p>
   */
  class InlineContent
  {
  public:
    AWS_BEDROCKAGENT_API InlineContent() = default;
    AWS_BEDROCKAGENT_API InlineContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API InlineContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of inline content to define.</p>
     */
    inline InlineContentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(InlineContentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline InlineContent& WithType(InlineContentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about content defined inline in bytes.</p>
     */
    inline const ByteContentDoc& GetByteContent() const { return m_byteContent; }
    inline bool ByteContentHasBeenSet() const { return m_byteContentHasBeenSet; }
    template<typename ByteContentT = ByteContentDoc>
    void SetByteContent(ByteContentT&& value) { m_byteContentHasBeenSet = true; m_byteContent = std::forward<ByteContentT>(value); }
    template<typename ByteContentT = ByteContentDoc>
    InlineContent& WithByteContent(ByteContentT&& value) { SetByteContent(std::forward<ByteContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about content defined inline in text.</p>
     */
    inline const TextContentDoc& GetTextContent() const { return m_textContent; }
    inline bool TextContentHasBeenSet() const { return m_textContentHasBeenSet; }
    template<typename TextContentT = TextContentDoc>
    void SetTextContent(TextContentT&& value) { m_textContentHasBeenSet = true; m_textContent = std::forward<TextContentT>(value); }
    template<typename TextContentT = TextContentDoc>
    InlineContent& WithTextContent(TextContentT&& value) { SetTextContent(std::forward<TextContentT>(value)); return *this;}
    ///@}
  private:

    InlineContentType m_type{InlineContentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ByteContentDoc m_byteContent;
    bool m_byteContentHasBeenSet = false;

    TextContentDoc m_textContent;
    bool m_textContentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
