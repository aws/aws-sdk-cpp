﻿/**
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
   * <p>Provides configuration parameters to override the default actions for
   * extracting text from PDF documents and image files. </p> <p> By default, Amazon
   * Comprehend performs the following actions to extract text from files, based on
   * the input file type: </p> <ul> <li> <p> <b>Word files</b> - Amazon Comprehend
   * parser extracts the text. </p> </li> <li> <p> <b>Digital PDF files</b> - Amazon
   * Comprehend parser extracts the text. </p> </li> <li> <p> <b>Image files and
   * scanned PDF files</b> - Amazon Comprehend uses the Amazon Textract
   * <code>DetectDocumentText</code> API to extract the text. </p> </li> </ul> <p>
   * <code>DocumentReaderConfig</code> does not apply to plain text files or Word
   * files.</p> <p> For image files and PDF documents, you can override these default
   * actions using the fields listed below. For more information, see <a
   * href="https://docs.aws.amazon.com/comprehend/latest/dg/idp-set-textract-options.html">
   * Setting text extraction options</a> in the Comprehend Developer Guide.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DocumentReaderConfig">AWS
   * API Reference</a></p>
   */
  class DocumentReaderConfig
  {
  public:
    AWS_COMPREHEND_API DocumentReaderConfig() = default;
    AWS_COMPREHEND_API DocumentReaderConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DocumentReaderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This field defines the Amazon Textract API operation that Amazon Comprehend
     * uses to extract text from PDF files and image files. Enter one of the following
     * values:</p> <ul> <li> <p> <code>TEXTRACT_DETECT_DOCUMENT_TEXT</code> - The
     * Amazon Comprehend service uses the <code>DetectDocumentText</code> API
     * operation. </p> </li> <li> <p> <code>TEXTRACT_ANALYZE_DOCUMENT</code> - The
     * Amazon Comprehend service uses the <code>AnalyzeDocument</code> API operation.
     * </p> </li> </ul>
     */
    inline DocumentReadAction GetDocumentReadAction() const { return m_documentReadAction; }
    inline bool DocumentReadActionHasBeenSet() const { return m_documentReadActionHasBeenSet; }
    inline void SetDocumentReadAction(DocumentReadAction value) { m_documentReadActionHasBeenSet = true; m_documentReadAction = value; }
    inline DocumentReaderConfig& WithDocumentReadAction(DocumentReadAction value) { SetDocumentReadAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the text extraction actions for PDF files. Enter one of the
     * following values:</p> <ul> <li> <p> <code>SERVICE_DEFAULT</code> - use the
     * Amazon Comprehend service defaults for PDF files.</p> </li> <li> <p>
     * <code>FORCE_DOCUMENT_READ_ACTION</code> - Amazon Comprehend uses the Textract
     * API specified by DocumentReadAction for all PDF files, including digital PDF
     * files. </p> </li> </ul>
     */
    inline DocumentReadMode GetDocumentReadMode() const { return m_documentReadMode; }
    inline bool DocumentReadModeHasBeenSet() const { return m_documentReadModeHasBeenSet; }
    inline void SetDocumentReadMode(DocumentReadMode value) { m_documentReadModeHasBeenSet = true; m_documentReadMode = value; }
    inline DocumentReaderConfig& WithDocumentReadMode(DocumentReadMode value) { SetDocumentReadMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of Amazon Textract features to apply. If you chose
     * <code>TEXTRACT_ANALYZE_DOCUMENT</code> as the read action, you must specify one
     * or both of the following values:</p> <ul> <li> <p> <code>TABLES</code> - Returns
     * additional information about any tables that are detected in the input document.
     * </p> </li> <li> <p> <code>FORMS</code> - Returns additional information about
     * any forms that are detected in the input document. </p> </li> </ul>
     */
    inline const Aws::Vector<DocumentReadFeatureTypes>& GetFeatureTypes() const { return m_featureTypes; }
    inline bool FeatureTypesHasBeenSet() const { return m_featureTypesHasBeenSet; }
    template<typename FeatureTypesT = Aws::Vector<DocumentReadFeatureTypes>>
    void SetFeatureTypes(FeatureTypesT&& value) { m_featureTypesHasBeenSet = true; m_featureTypes = std::forward<FeatureTypesT>(value); }
    template<typename FeatureTypesT = Aws::Vector<DocumentReadFeatureTypes>>
    DocumentReaderConfig& WithFeatureTypes(FeatureTypesT&& value) { SetFeatureTypes(std::forward<FeatureTypesT>(value)); return *this;}
    inline DocumentReaderConfig& AddFeatureTypes(DocumentReadFeatureTypes value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(value); return *this; }
    ///@}
  private:

    DocumentReadAction m_documentReadAction{DocumentReadAction::NOT_SET};
    bool m_documentReadActionHasBeenSet = false;

    DocumentReadMode m_documentReadMode{DocumentReadMode::NOT_SET};
    bool m_documentReadModeHasBeenSet = false;

    Aws::Vector<DocumentReadFeatureTypes> m_featureTypes;
    bool m_featureTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
