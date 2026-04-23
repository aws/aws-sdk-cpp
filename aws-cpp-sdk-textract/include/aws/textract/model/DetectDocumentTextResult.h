/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/DocumentMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/Block.h>
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
namespace Textract
{
namespace Model
{
  class AWS_TEXTRACT_API DetectDocumentTextResult
  {
  public:
    DetectDocumentTextResult();
    DetectDocumentTextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DetectDocumentTextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata about the document. Contains the number of pages that are detected
     * in the document.</p>
     */
    inline const DocumentMetadata& GetDocumentMetadata() const{ return m_documentMetadata; }

    /**
     * <p>Metadata about the document. Contains the number of pages that are detected
     * in the document.</p>
     */
    inline void SetDocumentMetadata(const DocumentMetadata& value) { m_documentMetadata = value; }

    /**
     * <p>Metadata about the document. Contains the number of pages that are detected
     * in the document.</p>
     */
    inline void SetDocumentMetadata(DocumentMetadata&& value) { m_documentMetadata = std::move(value); }

    /**
     * <p>Metadata about the document. Contains the number of pages that are detected
     * in the document.</p>
     */
    inline DetectDocumentTextResult& WithDocumentMetadata(const DocumentMetadata& value) { SetDocumentMetadata(value); return *this;}

    /**
     * <p>Metadata about the document. Contains the number of pages that are detected
     * in the document.</p>
     */
    inline DetectDocumentTextResult& WithDocumentMetadata(DocumentMetadata&& value) { SetDocumentMetadata(std::move(value)); return *this;}


    /**
     * <p>An array of Block objects containing the text detected in the document.</p>
     */
    inline const Aws::Vector<Block>& GetBlocks() const{ return m_blocks; }

    /**
     * <p>An array of Block objects containing the text detected in the document.</p>
     */
    inline void SetBlocks(const Aws::Vector<Block>& value) { m_blocks = value; }

    /**
     * <p>An array of Block objects containing the text detected in the document.</p>
     */
    inline void SetBlocks(Aws::Vector<Block>&& value) { m_blocks = std::move(value); }

    /**
     * <p>An array of Block objects containing the text detected in the document.</p>
     */
    inline DetectDocumentTextResult& WithBlocks(const Aws::Vector<Block>& value) { SetBlocks(value); return *this;}

    /**
     * <p>An array of Block objects containing the text detected in the document.</p>
     */
    inline DetectDocumentTextResult& WithBlocks(Aws::Vector<Block>&& value) { SetBlocks(std::move(value)); return *this;}

    /**
     * <p>An array of Block objects containing the text detected in the document.</p>
     */
    inline DetectDocumentTextResult& AddBlocks(const Block& value) { m_blocks.push_back(value); return *this; }

    /**
     * <p>An array of Block objects containing the text detected in the document.</p>
     */
    inline DetectDocumentTextResult& AddBlocks(Block&& value) { m_blocks.push_back(std::move(value)); return *this; }

  private:

    DocumentMetadata m_documentMetadata;

    Aws::Vector<Block> m_blocks;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
