/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/DocumentMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/HumanLoopActivationOutput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AnalyzeDocumentResult
  {
  public:
    AWS_TEXTRACT_API AnalyzeDocumentResult();
    AWS_TEXTRACT_API AnalyzeDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API AnalyzeDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata about the analyzed document. An example is the number of pages.</p>
     */
    inline const DocumentMetadata& GetDocumentMetadata() const{ return m_documentMetadata; }

    /**
     * <p>Metadata about the analyzed document. An example is the number of pages.</p>
     */
    inline void SetDocumentMetadata(const DocumentMetadata& value) { m_documentMetadata = value; }

    /**
     * <p>Metadata about the analyzed document. An example is the number of pages.</p>
     */
    inline void SetDocumentMetadata(DocumentMetadata&& value) { m_documentMetadata = std::move(value); }

    /**
     * <p>Metadata about the analyzed document. An example is the number of pages.</p>
     */
    inline AnalyzeDocumentResult& WithDocumentMetadata(const DocumentMetadata& value) { SetDocumentMetadata(value); return *this;}

    /**
     * <p>Metadata about the analyzed document. An example is the number of pages.</p>
     */
    inline AnalyzeDocumentResult& WithDocumentMetadata(DocumentMetadata&& value) { SetDocumentMetadata(std::move(value)); return *this;}


    /**
     * <p>The items that are detected and analyzed by <code>AnalyzeDocument</code>.</p>
     */
    inline const Aws::Vector<Block>& GetBlocks() const{ return m_blocks; }

    /**
     * <p>The items that are detected and analyzed by <code>AnalyzeDocument</code>.</p>
     */
    inline void SetBlocks(const Aws::Vector<Block>& value) { m_blocks = value; }

    /**
     * <p>The items that are detected and analyzed by <code>AnalyzeDocument</code>.</p>
     */
    inline void SetBlocks(Aws::Vector<Block>&& value) { m_blocks = std::move(value); }

    /**
     * <p>The items that are detected and analyzed by <code>AnalyzeDocument</code>.</p>
     */
    inline AnalyzeDocumentResult& WithBlocks(const Aws::Vector<Block>& value) { SetBlocks(value); return *this;}

    /**
     * <p>The items that are detected and analyzed by <code>AnalyzeDocument</code>.</p>
     */
    inline AnalyzeDocumentResult& WithBlocks(Aws::Vector<Block>&& value) { SetBlocks(std::move(value)); return *this;}

    /**
     * <p>The items that are detected and analyzed by <code>AnalyzeDocument</code>.</p>
     */
    inline AnalyzeDocumentResult& AddBlocks(const Block& value) { m_blocks.push_back(value); return *this; }

    /**
     * <p>The items that are detected and analyzed by <code>AnalyzeDocument</code>.</p>
     */
    inline AnalyzeDocumentResult& AddBlocks(Block&& value) { m_blocks.push_back(std::move(value)); return *this; }


    /**
     * <p>Shows the results of the human in the loop evaluation.</p>
     */
    inline const HumanLoopActivationOutput& GetHumanLoopActivationOutput() const{ return m_humanLoopActivationOutput; }

    /**
     * <p>Shows the results of the human in the loop evaluation.</p>
     */
    inline void SetHumanLoopActivationOutput(const HumanLoopActivationOutput& value) { m_humanLoopActivationOutput = value; }

    /**
     * <p>Shows the results of the human in the loop evaluation.</p>
     */
    inline void SetHumanLoopActivationOutput(HumanLoopActivationOutput&& value) { m_humanLoopActivationOutput = std::move(value); }

    /**
     * <p>Shows the results of the human in the loop evaluation.</p>
     */
    inline AnalyzeDocumentResult& WithHumanLoopActivationOutput(const HumanLoopActivationOutput& value) { SetHumanLoopActivationOutput(value); return *this;}

    /**
     * <p>Shows the results of the human in the loop evaluation.</p>
     */
    inline AnalyzeDocumentResult& WithHumanLoopActivationOutput(HumanLoopActivationOutput&& value) { SetHumanLoopActivationOutput(std::move(value)); return *this;}


    /**
     * <p>The version of the model used to analyze the document.</p>
     */
    inline const Aws::String& GetAnalyzeDocumentModelVersion() const{ return m_analyzeDocumentModelVersion; }

    /**
     * <p>The version of the model used to analyze the document.</p>
     */
    inline void SetAnalyzeDocumentModelVersion(const Aws::String& value) { m_analyzeDocumentModelVersion = value; }

    /**
     * <p>The version of the model used to analyze the document.</p>
     */
    inline void SetAnalyzeDocumentModelVersion(Aws::String&& value) { m_analyzeDocumentModelVersion = std::move(value); }

    /**
     * <p>The version of the model used to analyze the document.</p>
     */
    inline void SetAnalyzeDocumentModelVersion(const char* value) { m_analyzeDocumentModelVersion.assign(value); }

    /**
     * <p>The version of the model used to analyze the document.</p>
     */
    inline AnalyzeDocumentResult& WithAnalyzeDocumentModelVersion(const Aws::String& value) { SetAnalyzeDocumentModelVersion(value); return *this;}

    /**
     * <p>The version of the model used to analyze the document.</p>
     */
    inline AnalyzeDocumentResult& WithAnalyzeDocumentModelVersion(Aws::String&& value) { SetAnalyzeDocumentModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the model used to analyze the document.</p>
     */
    inline AnalyzeDocumentResult& WithAnalyzeDocumentModelVersion(const char* value) { SetAnalyzeDocumentModelVersion(value); return *this;}

  private:

    DocumentMetadata m_documentMetadata;

    Aws::Vector<Block> m_blocks;

    HumanLoopActivationOutput m_humanLoopActivationOutput;

    Aws::String m_analyzeDocumentModelVersion;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
