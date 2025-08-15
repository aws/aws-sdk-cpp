/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains information about content defined inline in bytes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ByteContentDoc">AWS
   * API Reference</a></p>
   */
  class ByteContentDoc
  {
  public:
    AWS_BEDROCKAGENT_API ByteContentDoc() = default;
    AWS_BEDROCKAGENT_API ByteContentDoc(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ByteContentDoc& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The MIME type of the content. For a list of MIME types, see <a
     * href="https://www.iana.org/assignments/media-types/media-types.xhtml">Media
     * Types</a>. The following MIME types are supported:</p> <ul> <li>
     * <p>text/plain</p> </li> <li> <p>text/html</p> </li> <li> <p>text/csv</p> </li>
     * <li> <p>text/vtt</p> </li> <li> <p>message/rfc822</p> </li> <li>
     * <p>application/xhtml+xml</p> </li> <li> <p>application/pdf</p> </li> <li>
     * <p>application/msword</p> </li> <li>
     * <p>application/vnd.ms-word.document.macroenabled.12</p> </li> <li>
     * <p>application/vnd.ms-word.template.macroenabled.12</p> </li> <li>
     * <p>application/vnd.ms-excel</p> </li> <li>
     * <p>application/vnd.ms-excel.addin.macroenabled.12</p> </li> <li>
     * <p>application/vnd.ms-excel.sheet.macroenabled.12</p> </li> <li>
     * <p>application/vnd.ms-excel.template.macroenabled.12</p> </li> <li>
     * <p>application/vnd.ms-excel.sheet.binary.macroenabled.12</p> </li> <li>
     * <p>application/vnd.ms-spreadsheetml</p> </li> <li>
     * <p>application/vnd.openxmlformats-officedocument.spreadsheetml.sheet</p> </li>
     * <li> <p>application/vnd.openxmlformats-officedocument.spreadsheetml.template</p>
     * </li> <li>
     * <p>application/vnd.openxmlformats-officedocument.wordprocessingml.document</p>
     * </li> <li>
     * <p>application/vnd.openxmlformats-officedocument.wordprocessingml.template</p>
     * </li> </ul>
     */
    inline const Aws::String& GetMimeType() const { return m_mimeType; }
    inline bool MimeTypeHasBeenSet() const { return m_mimeTypeHasBeenSet; }
    template<typename MimeTypeT = Aws::String>
    void SetMimeType(MimeTypeT&& value) { m_mimeTypeHasBeenSet = true; m_mimeType = std::forward<MimeTypeT>(value); }
    template<typename MimeTypeT = Aws::String>
    ByteContentDoc& WithMimeType(MimeTypeT&& value) { SetMimeType(std::forward<MimeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base64-encoded string of the content.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::Utils::CryptoBuffer>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::Utils::CryptoBuffer>
    ByteContentDoc& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mimeType;
    bool m_mimeTypeHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_data{};
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
