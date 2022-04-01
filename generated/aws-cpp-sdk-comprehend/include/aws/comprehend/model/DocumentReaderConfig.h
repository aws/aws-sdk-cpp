/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/DocumentReadAction.h>
#include <aws/comprehend/model/DocumentReadMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/DocumentReadFeatureTypes.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>The input properties for a topic detection job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DocumentReaderConfig">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHEND_API DocumentReaderConfig
  {
  public:
    DocumentReaderConfig();
    DocumentReaderConfig(Aws::Utils::Json::JsonView jsonValue);
    DocumentReaderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This enum field will start with two values which will apply to PDFs:</p> <ul>
     * <li> <p> <code>TEXTRACT_DETECT_DOCUMENT_TEXT</code> - The service calls
     * DetectDocumentText for PDF documents per page.</p> </li> <li> <p>
     * <code>TEXTRACT_ANALYZE_DOCUMENT</code> - The service calls AnalyzeDocument for
     * PDF documents per page.</p> </li> </ul>
     */
    inline const DocumentReadAction& GetDocumentReadAction() const{ return m_documentReadAction; }

    /**
     * <p>This enum field will start with two values which will apply to PDFs:</p> <ul>
     * <li> <p> <code>TEXTRACT_DETECT_DOCUMENT_TEXT</code> - The service calls
     * DetectDocumentText for PDF documents per page.</p> </li> <li> <p>
     * <code>TEXTRACT_ANALYZE_DOCUMENT</code> - The service calls AnalyzeDocument for
     * PDF documents per page.</p> </li> </ul>
     */
    inline bool DocumentReadActionHasBeenSet() const { return m_documentReadActionHasBeenSet; }

    /**
     * <p>This enum field will start with two values which will apply to PDFs:</p> <ul>
     * <li> <p> <code>TEXTRACT_DETECT_DOCUMENT_TEXT</code> - The service calls
     * DetectDocumentText for PDF documents per page.</p> </li> <li> <p>
     * <code>TEXTRACT_ANALYZE_DOCUMENT</code> - The service calls AnalyzeDocument for
     * PDF documents per page.</p> </li> </ul>
     */
    inline void SetDocumentReadAction(const DocumentReadAction& value) { m_documentReadActionHasBeenSet = true; m_documentReadAction = value; }

    /**
     * <p>This enum field will start with two values which will apply to PDFs:</p> <ul>
     * <li> <p> <code>TEXTRACT_DETECT_DOCUMENT_TEXT</code> - The service calls
     * DetectDocumentText for PDF documents per page.</p> </li> <li> <p>
     * <code>TEXTRACT_ANALYZE_DOCUMENT</code> - The service calls AnalyzeDocument for
     * PDF documents per page.</p> </li> </ul>
     */
    inline void SetDocumentReadAction(DocumentReadAction&& value) { m_documentReadActionHasBeenSet = true; m_documentReadAction = std::move(value); }

    /**
     * <p>This enum field will start with two values which will apply to PDFs:</p> <ul>
     * <li> <p> <code>TEXTRACT_DETECT_DOCUMENT_TEXT</code> - The service calls
     * DetectDocumentText for PDF documents per page.</p> </li> <li> <p>
     * <code>TEXTRACT_ANALYZE_DOCUMENT</code> - The service calls AnalyzeDocument for
     * PDF documents per page.</p> </li> </ul>
     */
    inline DocumentReaderConfig& WithDocumentReadAction(const DocumentReadAction& value) { SetDocumentReadAction(value); return *this;}

    /**
     * <p>This enum field will start with two values which will apply to PDFs:</p> <ul>
     * <li> <p> <code>TEXTRACT_DETECT_DOCUMENT_TEXT</code> - The service calls
     * DetectDocumentText for PDF documents per page.</p> </li> <li> <p>
     * <code>TEXTRACT_ANALYZE_DOCUMENT</code> - The service calls AnalyzeDocument for
     * PDF documents per page.</p> </li> </ul>
     */
    inline DocumentReaderConfig& WithDocumentReadAction(DocumentReadAction&& value) { SetDocumentReadAction(std::move(value)); return *this;}


    /**
     * <p>This enum field provides two values:</p> <ul> <li> <p>
     * <code>SERVICE_DEFAULT</code> - use service defaults for Document reading. For
     * Digital PDF it would mean using an internal parser instead of Textract APIs</p>
     * </li> <li> <p> <code>FORCE_DOCUMENT_READ_ACTION</code> - Always use specified
     * action for DocumentReadAction, including Digital PDF. </p> </li> </ul>
     */
    inline const DocumentReadMode& GetDocumentReadMode() const{ return m_documentReadMode; }

    /**
     * <p>This enum field provides two values:</p> <ul> <li> <p>
     * <code>SERVICE_DEFAULT</code> - use service defaults for Document reading. For
     * Digital PDF it would mean using an internal parser instead of Textract APIs</p>
     * </li> <li> <p> <code>FORCE_DOCUMENT_READ_ACTION</code> - Always use specified
     * action for DocumentReadAction, including Digital PDF. </p> </li> </ul>
     */
    inline bool DocumentReadModeHasBeenSet() const { return m_documentReadModeHasBeenSet; }

    /**
     * <p>This enum field provides two values:</p> <ul> <li> <p>
     * <code>SERVICE_DEFAULT</code> - use service defaults for Document reading. For
     * Digital PDF it would mean using an internal parser instead of Textract APIs</p>
     * </li> <li> <p> <code>FORCE_DOCUMENT_READ_ACTION</code> - Always use specified
     * action for DocumentReadAction, including Digital PDF. </p> </li> </ul>
     */
    inline void SetDocumentReadMode(const DocumentReadMode& value) { m_documentReadModeHasBeenSet = true; m_documentReadMode = value; }

    /**
     * <p>This enum field provides two values:</p> <ul> <li> <p>
     * <code>SERVICE_DEFAULT</code> - use service defaults for Document reading. For
     * Digital PDF it would mean using an internal parser instead of Textract APIs</p>
     * </li> <li> <p> <code>FORCE_DOCUMENT_READ_ACTION</code> - Always use specified
     * action for DocumentReadAction, including Digital PDF. </p> </li> </ul>
     */
    inline void SetDocumentReadMode(DocumentReadMode&& value) { m_documentReadModeHasBeenSet = true; m_documentReadMode = std::move(value); }

    /**
     * <p>This enum field provides two values:</p> <ul> <li> <p>
     * <code>SERVICE_DEFAULT</code> - use service defaults for Document reading. For
     * Digital PDF it would mean using an internal parser instead of Textract APIs</p>
     * </li> <li> <p> <code>FORCE_DOCUMENT_READ_ACTION</code> - Always use specified
     * action for DocumentReadAction, including Digital PDF. </p> </li> </ul>
     */
    inline DocumentReaderConfig& WithDocumentReadMode(const DocumentReadMode& value) { SetDocumentReadMode(value); return *this;}

    /**
     * <p>This enum field provides two values:</p> <ul> <li> <p>
     * <code>SERVICE_DEFAULT</code> - use service defaults for Document reading. For
     * Digital PDF it would mean using an internal parser instead of Textract APIs</p>
     * </li> <li> <p> <code>FORCE_DOCUMENT_READ_ACTION</code> - Always use specified
     * action for DocumentReadAction, including Digital PDF. </p> </li> </ul>
     */
    inline DocumentReaderConfig& WithDocumentReadMode(DocumentReadMode&& value) { SetDocumentReadMode(std::move(value)); return *this;}


    /**
     * <p>Specifies how the text in an input file should be processed:</p>
     */
    inline const Aws::Vector<DocumentReadFeatureTypes>& GetFeatureTypes() const{ return m_featureTypes; }

    /**
     * <p>Specifies how the text in an input file should be processed:</p>
     */
    inline bool FeatureTypesHasBeenSet() const { return m_featureTypesHasBeenSet; }

    /**
     * <p>Specifies how the text in an input file should be processed:</p>
     */
    inline void SetFeatureTypes(const Aws::Vector<DocumentReadFeatureTypes>& value) { m_featureTypesHasBeenSet = true; m_featureTypes = value; }

    /**
     * <p>Specifies how the text in an input file should be processed:</p>
     */
    inline void SetFeatureTypes(Aws::Vector<DocumentReadFeatureTypes>&& value) { m_featureTypesHasBeenSet = true; m_featureTypes = std::move(value); }

    /**
     * <p>Specifies how the text in an input file should be processed:</p>
     */
    inline DocumentReaderConfig& WithFeatureTypes(const Aws::Vector<DocumentReadFeatureTypes>& value) { SetFeatureTypes(value); return *this;}

    /**
     * <p>Specifies how the text in an input file should be processed:</p>
     */
    inline DocumentReaderConfig& WithFeatureTypes(Aws::Vector<DocumentReadFeatureTypes>&& value) { SetFeatureTypes(std::move(value)); return *this;}

    /**
     * <p>Specifies how the text in an input file should be processed:</p>
     */
    inline DocumentReaderConfig& AddFeatureTypes(const DocumentReadFeatureTypes& value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(value); return *this; }

    /**
     * <p>Specifies how the text in an input file should be processed:</p>
     */
    inline DocumentReaderConfig& AddFeatureTypes(DocumentReadFeatureTypes&& value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(std::move(value)); return *this; }

  private:

    DocumentReadAction m_documentReadAction;
    bool m_documentReadActionHasBeenSet;

    DocumentReadMode m_documentReadMode;
    bool m_documentReadModeHasBeenSet;

    Aws::Vector<DocumentReadFeatureTypes> m_featureTypes;
    bool m_featureTypesHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
