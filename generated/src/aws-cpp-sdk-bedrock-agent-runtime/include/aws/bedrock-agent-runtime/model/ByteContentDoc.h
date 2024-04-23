/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>This property contains the document to chat with, along with its
   * attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ByteContentDoc">AWS
   * API Reference</a></p>
   */
  class ByteContentDoc
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ByteContentDoc();
    AWS_BEDROCKAGENTRUNTIME_API ByteContentDoc(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ByteContentDoc& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The MIME type of the document contained in the wrapper object.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The MIME type of the document contained in the wrapper object.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The MIME type of the document contained in the wrapper object.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The MIME type of the document contained in the wrapper object.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The MIME type of the document contained in the wrapper object.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The MIME type of the document contained in the wrapper object.</p>
     */
    inline ByteContentDoc& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The MIME type of the document contained in the wrapper object.</p>
     */
    inline ByteContentDoc& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The MIME type of the document contained in the wrapper object.</p>
     */
    inline ByteContentDoc& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The byte value of the file to upload, encoded as a Base-64 string.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetData() const{ return m_data; }

    /**
     * <p>The byte value of the file to upload, encoded as a Base-64 string.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The byte value of the file to upload, encoded as a Base-64 string.</p>
     */
    inline void SetData(const Aws::Utils::CryptoBuffer& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The byte value of the file to upload, encoded as a Base-64 string.</p>
     */
    inline void SetData(Aws::Utils::CryptoBuffer&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The byte value of the file to upload, encoded as a Base-64 string.</p>
     */
    inline ByteContentDoc& WithData(const Aws::Utils::CryptoBuffer& value) { SetData(value); return *this;}

    /**
     * <p>The byte value of the file to upload, encoded as a Base-64 string.</p>
     */
    inline ByteContentDoc& WithData(Aws::Utils::CryptoBuffer&& value) { SetData(std::move(value)); return *this;}


    /**
     * <p>The file name of the document contained in the wrapper object.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The file name of the document contained in the wrapper object.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The file name of the document contained in the wrapper object.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The file name of the document contained in the wrapper object.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The file name of the document contained in the wrapper object.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The file name of the document contained in the wrapper object.</p>
     */
    inline ByteContentDoc& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The file name of the document contained in the wrapper object.</p>
     */
    inline ByteContentDoc& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The file name of the document contained in the wrapper object.</p>
     */
    inline ByteContentDoc& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}

  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
