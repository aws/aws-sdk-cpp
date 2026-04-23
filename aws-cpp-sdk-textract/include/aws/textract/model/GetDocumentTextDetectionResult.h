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
#include <aws/textract/model/JobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/Block.h>
#include <aws/textract/model/Warning.h>
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
  class AWS_TEXTRACT_API GetDocumentTextDetectionResult
  {
  public:
    GetDocumentTextDetectionResult();
    GetDocumentTextDetectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDocumentTextDetectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about a document that Amazon Textract processed.
     * <code>DocumentMetadata</code> is returned in every page of paginated responses
     * from an Amazon Textract video operation.</p>
     */
    inline const DocumentMetadata& GetDocumentMetadata() const{ return m_documentMetadata; }

    /**
     * <p>Information about a document that Amazon Textract processed.
     * <code>DocumentMetadata</code> is returned in every page of paginated responses
     * from an Amazon Textract video operation.</p>
     */
    inline void SetDocumentMetadata(const DocumentMetadata& value) { m_documentMetadata = value; }

    /**
     * <p>Information about a document that Amazon Textract processed.
     * <code>DocumentMetadata</code> is returned in every page of paginated responses
     * from an Amazon Textract video operation.</p>
     */
    inline void SetDocumentMetadata(DocumentMetadata&& value) { m_documentMetadata = std::move(value); }

    /**
     * <p>Information about a document that Amazon Textract processed.
     * <code>DocumentMetadata</code> is returned in every page of paginated responses
     * from an Amazon Textract video operation.</p>
     */
    inline GetDocumentTextDetectionResult& WithDocumentMetadata(const DocumentMetadata& value) { SetDocumentMetadata(value); return *this;}

    /**
     * <p>Information about a document that Amazon Textract processed.
     * <code>DocumentMetadata</code> is returned in every page of paginated responses
     * from an Amazon Textract video operation.</p>
     */
    inline GetDocumentTextDetectionResult& WithDocumentMetadata(DocumentMetadata&& value) { SetDocumentMetadata(std::move(value)); return *this;}


    /**
     * <p>The current status of the text detection job.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The current status of the text detection job.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }

    /**
     * <p>The current status of the text detection job.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>The current status of the text detection job.</p>
     */
    inline GetDocumentTextDetectionResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The current status of the text detection job.</p>
     */
    inline GetDocumentTextDetectionResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text-detection
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text-detection
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text-detection
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text-detection
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text-detection
     * results.</p>
     */
    inline GetDocumentTextDetectionResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text-detection
     * results.</p>
     */
    inline GetDocumentTextDetectionResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text-detection
     * results.</p>
     */
    inline GetDocumentTextDetectionResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The results of the text-detection operation.</p>
     */
    inline const Aws::Vector<Block>& GetBlocks() const{ return m_blocks; }

    /**
     * <p>The results of the text-detection operation.</p>
     */
    inline void SetBlocks(const Aws::Vector<Block>& value) { m_blocks = value; }

    /**
     * <p>The results of the text-detection operation.</p>
     */
    inline void SetBlocks(Aws::Vector<Block>&& value) { m_blocks = std::move(value); }

    /**
     * <p>The results of the text-detection operation.</p>
     */
    inline GetDocumentTextDetectionResult& WithBlocks(const Aws::Vector<Block>& value) { SetBlocks(value); return *this;}

    /**
     * <p>The results of the text-detection operation.</p>
     */
    inline GetDocumentTextDetectionResult& WithBlocks(Aws::Vector<Block>&& value) { SetBlocks(std::move(value)); return *this;}

    /**
     * <p>The results of the text-detection operation.</p>
     */
    inline GetDocumentTextDetectionResult& AddBlocks(const Block& value) { m_blocks.push_back(value); return *this; }

    /**
     * <p>The results of the text-detection operation.</p>
     */
    inline GetDocumentTextDetectionResult& AddBlocks(Block&& value) { m_blocks.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of warnings that occurred during the document text-detection
     * operation.</p>
     */
    inline const Aws::Vector<Warning>& GetWarnings() const{ return m_warnings; }

    /**
     * <p>A list of warnings that occurred during the document text-detection
     * operation.</p>
     */
    inline void SetWarnings(const Aws::Vector<Warning>& value) { m_warnings = value; }

    /**
     * <p>A list of warnings that occurred during the document text-detection
     * operation.</p>
     */
    inline void SetWarnings(Aws::Vector<Warning>&& value) { m_warnings = std::move(value); }

    /**
     * <p>A list of warnings that occurred during the document text-detection
     * operation.</p>
     */
    inline GetDocumentTextDetectionResult& WithWarnings(const Aws::Vector<Warning>& value) { SetWarnings(value); return *this;}

    /**
     * <p>A list of warnings that occurred during the document text-detection
     * operation.</p>
     */
    inline GetDocumentTextDetectionResult& WithWarnings(Aws::Vector<Warning>&& value) { SetWarnings(std::move(value)); return *this;}

    /**
     * <p>A list of warnings that occurred during the document text-detection
     * operation.</p>
     */
    inline GetDocumentTextDetectionResult& AddWarnings(const Warning& value) { m_warnings.push_back(value); return *this; }

    /**
     * <p>A list of warnings that occurred during the document text-detection
     * operation.</p>
     */
    inline GetDocumentTextDetectionResult& AddWarnings(Warning&& value) { m_warnings.push_back(std::move(value)); return *this; }


    /**
     * <p>The current status of an asynchronous document text-detection operation. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The current status of an asynchronous document text-detection operation. </p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>The current status of an asynchronous document text-detection operation. </p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>The current status of an asynchronous document text-detection operation. </p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>The current status of an asynchronous document text-detection operation. </p>
     */
    inline GetDocumentTextDetectionResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The current status of an asynchronous document text-detection operation. </p>
     */
    inline GetDocumentTextDetectionResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The current status of an asynchronous document text-detection operation. </p>
     */
    inline GetDocumentTextDetectionResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    DocumentMetadata m_documentMetadata;

    JobStatus m_jobStatus;

    Aws::String m_nextToken;

    Aws::Vector<Block> m_blocks;

    Aws::Vector<Warning> m_warnings;

    Aws::String m_statusMessage;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
