/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/DocumentCharLocation.h>
#include <aws/bedrock-runtime/model/DocumentPageLocation.h>
#include <aws/bedrock-runtime/model/DocumentChunkLocation.h>
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
   * <p>Specifies the precise location within a source document where cited content
   * can be found. This can include character-level positions, page numbers, or
   * document chunks depending on the document type and indexing
   * method.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/CitationLocation">AWS
   * API Reference</a></p>
   */
  class CitationLocation
  {
  public:
    AWS_BEDROCKRUNTIME_API CitationLocation() = default;
    AWS_BEDROCKRUNTIME_API CitationLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API CitationLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The character-level location within the document where the cited content is
     * found.</p>
     */
    inline const DocumentCharLocation& GetDocumentChar() const { return m_documentChar; }
    inline bool DocumentCharHasBeenSet() const { return m_documentCharHasBeenSet; }
    template<typename DocumentCharT = DocumentCharLocation>
    void SetDocumentChar(DocumentCharT&& value) { m_documentCharHasBeenSet = true; m_documentChar = std::forward<DocumentCharT>(value); }
    template<typename DocumentCharT = DocumentCharLocation>
    CitationLocation& WithDocumentChar(DocumentCharT&& value) { SetDocumentChar(std::forward<DocumentCharT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The page-level location within the document where the cited content is
     * found.</p>
     */
    inline const DocumentPageLocation& GetDocumentPage() const { return m_documentPage; }
    inline bool DocumentPageHasBeenSet() const { return m_documentPageHasBeenSet; }
    template<typename DocumentPageT = DocumentPageLocation>
    void SetDocumentPage(DocumentPageT&& value) { m_documentPageHasBeenSet = true; m_documentPage = std::forward<DocumentPageT>(value); }
    template<typename DocumentPageT = DocumentPageLocation>
    CitationLocation& WithDocumentPage(DocumentPageT&& value) { SetDocumentPage(std::forward<DocumentPageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The chunk-level location within the document where the cited content is
     * found, typically used for documents that have been segmented into logical
     * chunks.</p>
     */
    inline const DocumentChunkLocation& GetDocumentChunk() const { return m_documentChunk; }
    inline bool DocumentChunkHasBeenSet() const { return m_documentChunkHasBeenSet; }
    template<typename DocumentChunkT = DocumentChunkLocation>
    void SetDocumentChunk(DocumentChunkT&& value) { m_documentChunkHasBeenSet = true; m_documentChunk = std::forward<DocumentChunkT>(value); }
    template<typename DocumentChunkT = DocumentChunkLocation>
    CitationLocation& WithDocumentChunk(DocumentChunkT&& value) { SetDocumentChunk(std::forward<DocumentChunkT>(value)); return *this;}
    ///@}
  private:

    DocumentCharLocation m_documentChar;
    bool m_documentCharHasBeenSet = false;

    DocumentPageLocation m_documentPage;
    bool m_documentPageHasBeenSet = false;

    DocumentChunkLocation m_documentChunk;
    bool m_documentChunkHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
