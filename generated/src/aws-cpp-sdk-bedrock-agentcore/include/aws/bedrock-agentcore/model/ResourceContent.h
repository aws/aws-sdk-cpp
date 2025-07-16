/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ResourceContentType.h>
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
namespace BedrockAgentCore
{
namespace Model
{

  /**
   * <p>Contains information about resource content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ResourceContent">AWS
   * API Reference</a></p>
   */
  class ResourceContent
  {
  public:
    AWS_BEDROCKAGENTCORE_API ResourceContent() = default;
    AWS_BEDROCKAGENTCORE_API ResourceContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API ResourceContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of resource content.</p>
     */
    inline ResourceContentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ResourceContentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ResourceContent& WithType(ResourceContentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the resource content.</p>
     */
    inline const Aws::String& GetUri() const { return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    template<typename UriT = Aws::String>
    void SetUri(UriT&& value) { m_uriHasBeenSet = true; m_uri = std::forward<UriT>(value); }
    template<typename UriT = Aws::String>
    ResourceContent& WithUri(UriT&& value) { SetUri(std::forward<UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MIME type of the resource content.</p>
     */
    inline const Aws::String& GetMimeType() const { return m_mimeType; }
    inline bool MimeTypeHasBeenSet() const { return m_mimeTypeHasBeenSet; }
    template<typename MimeTypeT = Aws::String>
    void SetMimeType(MimeTypeT&& value) { m_mimeTypeHasBeenSet = true; m_mimeType = std::forward<MimeTypeT>(value); }
    template<typename MimeTypeT = Aws::String>
    ResourceContent& WithMimeType(MimeTypeT&& value) { SetMimeType(std::forward<MimeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text resource content.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    ResourceContent& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The binary resource content.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBlob() const { return m_blob; }
    inline bool BlobHasBeenSet() const { return m_blobHasBeenSet; }
    template<typename BlobT = Aws::Utils::ByteBuffer>
    void SetBlob(BlobT&& value) { m_blobHasBeenSet = true; m_blob = std::forward<BlobT>(value); }
    template<typename BlobT = Aws::Utils::ByteBuffer>
    ResourceContent& WithBlob(BlobT&& value) { SetBlob(std::forward<BlobT>(value)); return *this;}
    ///@}
  private:

    ResourceContentType m_type{ResourceContentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    Aws::String m_mimeType;
    bool m_mimeTypeHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::Utils::ByteBuffer m_blob{};
    bool m_blobHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
