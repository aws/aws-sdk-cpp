/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/DocumentMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/Entity.h>
#include <aws/comprehend/model/DocumentTypeListItem.h>
#include <aws/comprehend/model/Block.h>
#include <aws/comprehend/model/ErrorsListItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Comprehend
{
namespace Model
{
  class DetectEntitiesResult
  {
  public:
    AWS_COMPREHEND_API DetectEntitiesResult() = default;
    AWS_COMPREHEND_API DetectEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DetectEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of entities identified in the input text. For each entity, the
     * response provides the entity text, entity type, where the entity text begins and
     * ends, and the level of confidence that Amazon Comprehend has in the detection.
     * </p> <p>If your request uses a custom entity recognition model, Amazon
     * Comprehend detects the entities that the model is trained to recognize.
     * Otherwise, it detects the default entity types. For a list of default entity
     * types, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-entities.html">Entities</a>
     * in the Comprehend Developer Guide. </p>
     */
    inline const Aws::Vector<Entity>& GetEntities() const { return m_entities; }
    template<typename EntitiesT = Aws::Vector<Entity>>
    void SetEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities = std::forward<EntitiesT>(value); }
    template<typename EntitiesT = Aws::Vector<Entity>>
    DetectEntitiesResult& WithEntities(EntitiesT&& value) { SetEntities(std::forward<EntitiesT>(value)); return *this;}
    template<typename EntitiesT = Entity>
    DetectEntitiesResult& AddEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities.emplace_back(std::forward<EntitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the document, discovered during text extraction. This field
     * is present in the response only if your request used the <code>Byte</code>
     * parameter. </p>
     */
    inline const DocumentMetadata& GetDocumentMetadata() const { return m_documentMetadata; }
    template<typename DocumentMetadataT = DocumentMetadata>
    void SetDocumentMetadata(DocumentMetadataT&& value) { m_documentMetadataHasBeenSet = true; m_documentMetadata = std::forward<DocumentMetadataT>(value); }
    template<typename DocumentMetadataT = DocumentMetadata>
    DetectEntitiesResult& WithDocumentMetadata(DocumentMetadataT&& value) { SetDocumentMetadata(std::forward<DocumentMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document type for each page in the input document. This field is present
     * in the response only if your request used the <code>Byte</code> parameter. </p>
     */
    inline const Aws::Vector<DocumentTypeListItem>& GetDocumentType() const { return m_documentType; }
    template<typename DocumentTypeT = Aws::Vector<DocumentTypeListItem>>
    void SetDocumentType(DocumentTypeT&& value) { m_documentTypeHasBeenSet = true; m_documentType = std::forward<DocumentTypeT>(value); }
    template<typename DocumentTypeT = Aws::Vector<DocumentTypeListItem>>
    DetectEntitiesResult& WithDocumentType(DocumentTypeT&& value) { SetDocumentType(std::forward<DocumentTypeT>(value)); return *this;}
    template<typename DocumentTypeT = DocumentTypeListItem>
    DetectEntitiesResult& AddDocumentType(DocumentTypeT&& value) { m_documentTypeHasBeenSet = true; m_documentType.emplace_back(std::forward<DocumentTypeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about each block of text in the input document. Blocks are
     * nested. A page block contains a block for each line of text, which contains a
     * block for each word. </p> <p>The <code>Block</code> content for a Word input
     * document does not include a <code>Geometry</code> field.</p> <p>The
     * <code>Block</code> field is not present in the response for plain-text
     * inputs.</p>
     */
    inline const Aws::Vector<Block>& GetBlocks() const { return m_blocks; }
    template<typename BlocksT = Aws::Vector<Block>>
    void SetBlocks(BlocksT&& value) { m_blocksHasBeenSet = true; m_blocks = std::forward<BlocksT>(value); }
    template<typename BlocksT = Aws::Vector<Block>>
    DetectEntitiesResult& WithBlocks(BlocksT&& value) { SetBlocks(std::forward<BlocksT>(value)); return *this;}
    template<typename BlocksT = Block>
    DetectEntitiesResult& AddBlocks(BlocksT&& value) { m_blocksHasBeenSet = true; m_blocks.emplace_back(std::forward<BlocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Page-level errors that the system detected while processing the input
     * document. The field is empty if the system encountered no errors.</p>
     */
    inline const Aws::Vector<ErrorsListItem>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<ErrorsListItem>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<ErrorsListItem>>
    DetectEntitiesResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = ErrorsListItem>
    DetectEntitiesResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DetectEntitiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Entity> m_entities;
    bool m_entitiesHasBeenSet = false;

    DocumentMetadata m_documentMetadata;
    bool m_documentMetadataHasBeenSet = false;

    Aws::Vector<DocumentTypeListItem> m_documentType;
    bool m_documentTypeHasBeenSet = false;

    Aws::Vector<Block> m_blocks;
    bool m_blocksHasBeenSet = false;

    Aws::Vector<ErrorsListItem> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
