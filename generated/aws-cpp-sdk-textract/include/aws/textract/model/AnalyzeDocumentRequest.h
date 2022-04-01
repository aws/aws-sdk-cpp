/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractRequest.h>
#include <aws/textract/model/Document.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/HumanLoopConfig.h>
#include <aws/textract/model/FeatureType.h>
#include <utility>

namespace Aws
{
namespace Textract
{
namespace Model
{

  /**
   */
  class AWS_TEXTRACT_API AnalyzeDocumentRequest : public TextractRequest
  {
  public:
    AnalyzeDocumentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AnalyzeDocument"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The input document as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Textract operations, you can't pass image bytes. The
     * document must be an image in JPEG or PNG format.</p> <p>If you're using an AWS
     * SDK to call Amazon Textract, you might not need to base64-encode image bytes
     * that are passed using the <code>Bytes</code> field. </p>
     */
    inline const Document& GetDocument() const{ return m_document; }

    /**
     * <p>The input document as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Textract operations, you can't pass image bytes. The
     * document must be an image in JPEG or PNG format.</p> <p>If you're using an AWS
     * SDK to call Amazon Textract, you might not need to base64-encode image bytes
     * that are passed using the <code>Bytes</code> field. </p>
     */
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }

    /**
     * <p>The input document as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Textract operations, you can't pass image bytes. The
     * document must be an image in JPEG or PNG format.</p> <p>If you're using an AWS
     * SDK to call Amazon Textract, you might not need to base64-encode image bytes
     * that are passed using the <code>Bytes</code> field. </p>
     */
    inline void SetDocument(const Document& value) { m_documentHasBeenSet = true; m_document = value; }

    /**
     * <p>The input document as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Textract operations, you can't pass image bytes. The
     * document must be an image in JPEG or PNG format.</p> <p>If you're using an AWS
     * SDK to call Amazon Textract, you might not need to base64-encode image bytes
     * that are passed using the <code>Bytes</code> field. </p>
     */
    inline void SetDocument(Document&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }

    /**
     * <p>The input document as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Textract operations, you can't pass image bytes. The
     * document must be an image in JPEG or PNG format.</p> <p>If you're using an AWS
     * SDK to call Amazon Textract, you might not need to base64-encode image bytes
     * that are passed using the <code>Bytes</code> field. </p>
     */
    inline AnalyzeDocumentRequest& WithDocument(const Document& value) { SetDocument(value); return *this;}

    /**
     * <p>The input document as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Textract operations, you can't pass image bytes. The
     * document must be an image in JPEG or PNG format.</p> <p>If you're using an AWS
     * SDK to call Amazon Textract, you might not need to base64-encode image bytes
     * that are passed using the <code>Bytes</code> field. </p>
     */
    inline AnalyzeDocumentRequest& WithDocument(Document&& value) { SetDocument(std::move(value)); return *this;}


    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected form data. To perform both types of analysis, add TABLES and
     * FORMS to <code>FeatureTypes</code>. All lines and words detected in the document
     * are included in the response (including text that isn't related to the value of
     * <code>FeatureTypes</code>). </p>
     */
    inline const Aws::Vector<FeatureType>& GetFeatureTypes() const{ return m_featureTypes; }

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected form data. To perform both types of analysis, add TABLES and
     * FORMS to <code>FeatureTypes</code>. All lines and words detected in the document
     * are included in the response (including text that isn't related to the value of
     * <code>FeatureTypes</code>). </p>
     */
    inline bool FeatureTypesHasBeenSet() const { return m_featureTypesHasBeenSet; }

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected form data. To perform both types of analysis, add TABLES and
     * FORMS to <code>FeatureTypes</code>. All lines and words detected in the document
     * are included in the response (including text that isn't related to the value of
     * <code>FeatureTypes</code>). </p>
     */
    inline void SetFeatureTypes(const Aws::Vector<FeatureType>& value) { m_featureTypesHasBeenSet = true; m_featureTypes = value; }

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected form data. To perform both types of analysis, add TABLES and
     * FORMS to <code>FeatureTypes</code>. All lines and words detected in the document
     * are included in the response (including text that isn't related to the value of
     * <code>FeatureTypes</code>). </p>
     */
    inline void SetFeatureTypes(Aws::Vector<FeatureType>&& value) { m_featureTypesHasBeenSet = true; m_featureTypes = std::move(value); }

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected form data. To perform both types of analysis, add TABLES and
     * FORMS to <code>FeatureTypes</code>. All lines and words detected in the document
     * are included in the response (including text that isn't related to the value of
     * <code>FeatureTypes</code>). </p>
     */
    inline AnalyzeDocumentRequest& WithFeatureTypes(const Aws::Vector<FeatureType>& value) { SetFeatureTypes(value); return *this;}

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected form data. To perform both types of analysis, add TABLES and
     * FORMS to <code>FeatureTypes</code>. All lines and words detected in the document
     * are included in the response (including text that isn't related to the value of
     * <code>FeatureTypes</code>). </p>
     */
    inline AnalyzeDocumentRequest& WithFeatureTypes(Aws::Vector<FeatureType>&& value) { SetFeatureTypes(std::move(value)); return *this;}

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected form data. To perform both types of analysis, add TABLES and
     * FORMS to <code>FeatureTypes</code>. All lines and words detected in the document
     * are included in the response (including text that isn't related to the value of
     * <code>FeatureTypes</code>). </p>
     */
    inline AnalyzeDocumentRequest& AddFeatureTypes(const FeatureType& value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(value); return *this; }

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected form data. To perform both types of analysis, add TABLES and
     * FORMS to <code>FeatureTypes</code>. All lines and words detected in the document
     * are included in the response (including text that isn't related to the value of
     * <code>FeatureTypes</code>). </p>
     */
    inline AnalyzeDocumentRequest& AddFeatureTypes(FeatureType&& value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Sets the configuration for the human in the loop workflow for analyzing
     * documents.</p>
     */
    inline const HumanLoopConfig& GetHumanLoopConfig() const{ return m_humanLoopConfig; }

    /**
     * <p>Sets the configuration for the human in the loop workflow for analyzing
     * documents.</p>
     */
    inline bool HumanLoopConfigHasBeenSet() const { return m_humanLoopConfigHasBeenSet; }

    /**
     * <p>Sets the configuration for the human in the loop workflow for analyzing
     * documents.</p>
     */
    inline void SetHumanLoopConfig(const HumanLoopConfig& value) { m_humanLoopConfigHasBeenSet = true; m_humanLoopConfig = value; }

    /**
     * <p>Sets the configuration for the human in the loop workflow for analyzing
     * documents.</p>
     */
    inline void SetHumanLoopConfig(HumanLoopConfig&& value) { m_humanLoopConfigHasBeenSet = true; m_humanLoopConfig = std::move(value); }

    /**
     * <p>Sets the configuration for the human in the loop workflow for analyzing
     * documents.</p>
     */
    inline AnalyzeDocumentRequest& WithHumanLoopConfig(const HumanLoopConfig& value) { SetHumanLoopConfig(value); return *this;}

    /**
     * <p>Sets the configuration for the human in the loop workflow for analyzing
     * documents.</p>
     */
    inline AnalyzeDocumentRequest& WithHumanLoopConfig(HumanLoopConfig&& value) { SetHumanLoopConfig(std::move(value)); return *this;}

  private:

    Document m_document;
    bool m_documentHasBeenSet;

    Aws::Vector<FeatureType> m_featureTypes;
    bool m_featureTypesHasBeenSet;

    HumanLoopConfig m_humanLoopConfig;
    bool m_humanLoopConfigHasBeenSet;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
