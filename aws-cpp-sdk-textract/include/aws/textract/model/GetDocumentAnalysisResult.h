﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_TEXTRACT_API GetDocumentAnalysisResult
  {
  public:
    GetDocumentAnalysisResult();
    GetDocumentAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDocumentAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetDocumentAnalysisResult& WithDocumentMetadata(const DocumentMetadata& value) { SetDocumentMetadata(value); return *this;}

    /**
     * <p>Information about a document that Amazon Textract processed.
     * <code>DocumentMetadata</code> is returned in every page of paginated responses
     * from an Amazon Textract video operation.</p>
     */
    inline GetDocumentAnalysisResult& WithDocumentMetadata(DocumentMetadata&& value) { SetDocumentMetadata(std::move(value)); return *this;}


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
    inline GetDocumentAnalysisResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The current status of the text detection job.</p>
     */
    inline GetDocumentAnalysisResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text detection
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text detection
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text detection
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text detection
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text detection
     * results.</p>
     */
    inline GetDocumentAnalysisResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text detection
     * results.</p>
     */
    inline GetDocumentAnalysisResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text detection
     * results.</p>
     */
    inline GetDocumentAnalysisResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The results of the text-analysis operation.</p>
     */
    inline const Aws::Vector<Block>& GetBlocks() const{ return m_blocks; }

    /**
     * <p>The results of the text-analysis operation.</p>
     */
    inline void SetBlocks(const Aws::Vector<Block>& value) { m_blocks = value; }

    /**
     * <p>The results of the text-analysis operation.</p>
     */
    inline void SetBlocks(Aws::Vector<Block>&& value) { m_blocks = std::move(value); }

    /**
     * <p>The results of the text-analysis operation.</p>
     */
    inline GetDocumentAnalysisResult& WithBlocks(const Aws::Vector<Block>& value) { SetBlocks(value); return *this;}

    /**
     * <p>The results of the text-analysis operation.</p>
     */
    inline GetDocumentAnalysisResult& WithBlocks(Aws::Vector<Block>&& value) { SetBlocks(std::move(value)); return *this;}

    /**
     * <p>The results of the text-analysis operation.</p>
     */
    inline GetDocumentAnalysisResult& AddBlocks(const Block& value) { m_blocks.push_back(value); return *this; }

    /**
     * <p>The results of the text-analysis operation.</p>
     */
    inline GetDocumentAnalysisResult& AddBlocks(Block&& value) { m_blocks.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of warnings that occurred during the document-analysis operation.</p>
     */
    inline const Aws::Vector<Warning>& GetWarnings() const{ return m_warnings; }

    /**
     * <p>A list of warnings that occurred during the document-analysis operation.</p>
     */
    inline void SetWarnings(const Aws::Vector<Warning>& value) { m_warnings = value; }

    /**
     * <p>A list of warnings that occurred during the document-analysis operation.</p>
     */
    inline void SetWarnings(Aws::Vector<Warning>&& value) { m_warnings = std::move(value); }

    /**
     * <p>A list of warnings that occurred during the document-analysis operation.</p>
     */
    inline GetDocumentAnalysisResult& WithWarnings(const Aws::Vector<Warning>& value) { SetWarnings(value); return *this;}

    /**
     * <p>A list of warnings that occurred during the document-analysis operation.</p>
     */
    inline GetDocumentAnalysisResult& WithWarnings(Aws::Vector<Warning>&& value) { SetWarnings(std::move(value)); return *this;}

    /**
     * <p>A list of warnings that occurred during the document-analysis operation.</p>
     */
    inline GetDocumentAnalysisResult& AddWarnings(const Warning& value) { m_warnings.push_back(value); return *this; }

    /**
     * <p>A list of warnings that occurred during the document-analysis operation.</p>
     */
    inline GetDocumentAnalysisResult& AddWarnings(Warning&& value) { m_warnings.push_back(std::move(value)); return *this; }


    /**
     * <p>Returns if the detection job could not be completed. Contains explanation for
     * what error occured.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Returns if the detection job could not be completed. Contains explanation for
     * what error occured.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>Returns if the detection job could not be completed. Contains explanation for
     * what error occured.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>Returns if the detection job could not be completed. Contains explanation for
     * what error occured.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>Returns if the detection job could not be completed. Contains explanation for
     * what error occured.</p>
     */
    inline GetDocumentAnalysisResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Returns if the detection job could not be completed. Contains explanation for
     * what error occured.</p>
     */
    inline GetDocumentAnalysisResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Returns if the detection job could not be completed. Contains explanation for
     * what error occured.</p>
     */
    inline GetDocumentAnalysisResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetAnalyzeDocumentModelVersion() const{ return m_analyzeDocumentModelVersion; }

    /**
     * <p/>
     */
    inline void SetAnalyzeDocumentModelVersion(const Aws::String& value) { m_analyzeDocumentModelVersion = value; }

    /**
     * <p/>
     */
    inline void SetAnalyzeDocumentModelVersion(Aws::String&& value) { m_analyzeDocumentModelVersion = std::move(value); }

    /**
     * <p/>
     */
    inline void SetAnalyzeDocumentModelVersion(const char* value) { m_analyzeDocumentModelVersion.assign(value); }

    /**
     * <p/>
     */
    inline GetDocumentAnalysisResult& WithAnalyzeDocumentModelVersion(const Aws::String& value) { SetAnalyzeDocumentModelVersion(value); return *this;}

    /**
     * <p/>
     */
    inline GetDocumentAnalysisResult& WithAnalyzeDocumentModelVersion(Aws::String&& value) { SetAnalyzeDocumentModelVersion(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline GetDocumentAnalysisResult& WithAnalyzeDocumentModelVersion(const char* value) { SetAnalyzeDocumentModelVersion(value); return *this;}

  private:

    DocumentMetadata m_documentMetadata;

    JobStatus m_jobStatus;

    Aws::String m_nextToken;

    Aws::Vector<Block> m_blocks;

    Aws::Vector<Warning> m_warnings;

    Aws::String m_statusMessage;

    Aws::String m_analyzeDocumentModelVersion;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
