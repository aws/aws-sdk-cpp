﻿/**
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
    AWS_COMPREHEND_API DetectEntitiesResult();
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
    inline const Aws::Vector<Entity>& GetEntities() const{ return m_entities; }
    inline void SetEntities(const Aws::Vector<Entity>& value) { m_entities = value; }
    inline void SetEntities(Aws::Vector<Entity>&& value) { m_entities = std::move(value); }
    inline DetectEntitiesResult& WithEntities(const Aws::Vector<Entity>& value) { SetEntities(value); return *this;}
    inline DetectEntitiesResult& WithEntities(Aws::Vector<Entity>&& value) { SetEntities(std::move(value)); return *this;}
    inline DetectEntitiesResult& AddEntities(const Entity& value) { m_entities.push_back(value); return *this; }
    inline DetectEntitiesResult& AddEntities(Entity&& value) { m_entities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the document, discovered during text extraction. This field
     * is present in the response only if your request used the <code>Byte</code>
     * parameter. </p>
     */
    inline const DocumentMetadata& GetDocumentMetadata() const{ return m_documentMetadata; }
    inline void SetDocumentMetadata(const DocumentMetadata& value) { m_documentMetadata = value; }
    inline void SetDocumentMetadata(DocumentMetadata&& value) { m_documentMetadata = std::move(value); }
    inline DetectEntitiesResult& WithDocumentMetadata(const DocumentMetadata& value) { SetDocumentMetadata(value); return *this;}
    inline DetectEntitiesResult& WithDocumentMetadata(DocumentMetadata&& value) { SetDocumentMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document type for each page in the input document. This field is present
     * in the response only if your request used the <code>Byte</code> parameter. </p>
     */
    inline const Aws::Vector<DocumentTypeListItem>& GetDocumentType() const{ return m_documentType; }
    inline void SetDocumentType(const Aws::Vector<DocumentTypeListItem>& value) { m_documentType = value; }
    inline void SetDocumentType(Aws::Vector<DocumentTypeListItem>&& value) { m_documentType = std::move(value); }
    inline DetectEntitiesResult& WithDocumentType(const Aws::Vector<DocumentTypeListItem>& value) { SetDocumentType(value); return *this;}
    inline DetectEntitiesResult& WithDocumentType(Aws::Vector<DocumentTypeListItem>&& value) { SetDocumentType(std::move(value)); return *this;}
    inline DetectEntitiesResult& AddDocumentType(const DocumentTypeListItem& value) { m_documentType.push_back(value); return *this; }
    inline DetectEntitiesResult& AddDocumentType(DocumentTypeListItem&& value) { m_documentType.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<Block>& GetBlocks() const{ return m_blocks; }
    inline void SetBlocks(const Aws::Vector<Block>& value) { m_blocks = value; }
    inline void SetBlocks(Aws::Vector<Block>&& value) { m_blocks = std::move(value); }
    inline DetectEntitiesResult& WithBlocks(const Aws::Vector<Block>& value) { SetBlocks(value); return *this;}
    inline DetectEntitiesResult& WithBlocks(Aws::Vector<Block>&& value) { SetBlocks(std::move(value)); return *this;}
    inline DetectEntitiesResult& AddBlocks(const Block& value) { m_blocks.push_back(value); return *this; }
    inline DetectEntitiesResult& AddBlocks(Block&& value) { m_blocks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Page-level errors that the system detected while processing the input
     * document. The field is empty if the system encountered no errors.</p>
     */
    inline const Aws::Vector<ErrorsListItem>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<ErrorsListItem>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<ErrorsListItem>&& value) { m_errors = std::move(value); }
    inline DetectEntitiesResult& WithErrors(const Aws::Vector<ErrorsListItem>& value) { SetErrors(value); return *this;}
    inline DetectEntitiesResult& WithErrors(Aws::Vector<ErrorsListItem>&& value) { SetErrors(std::move(value)); return *this;}
    inline DetectEntitiesResult& AddErrors(const ErrorsListItem& value) { m_errors.push_back(value); return *this; }
    inline DetectEntitiesResult& AddErrors(ErrorsListItem&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DetectEntitiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DetectEntitiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DetectEntitiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Entity> m_entities;

    DocumentMetadata m_documentMetadata;

    Aws::Vector<DocumentTypeListItem> m_documentType;

    Aws::Vector<Block> m_blocks;

    Aws::Vector<ErrorsListItem> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
