/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/LanguageCode.h>
#include <aws/core/utils/Array.h>
#include <aws/comprehend/model/DocumentReaderConfig.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class DetectEntitiesRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API DetectEntitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectEntities"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A UTF-8 text string. The maximum string size is 100 KB. If you enter text
     * using this parameter, do not use the <code>Bytes</code> parameter.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>A UTF-8 text string. The maximum string size is 100 KB. If you enter text
     * using this parameter, do not use the <code>Bytes</code> parameter.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>A UTF-8 text string. The maximum string size is 100 KB. If you enter text
     * using this parameter, do not use the <code>Bytes</code> parameter.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>A UTF-8 text string. The maximum string size is 100 KB. If you enter text
     * using this parameter, do not use the <code>Bytes</code> parameter.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>A UTF-8 text string. The maximum string size is 100 KB. If you enter text
     * using this parameter, do not use the <code>Bytes</code> parameter.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>A UTF-8 text string. The maximum string size is 100 KB. If you enter text
     * using this parameter, do not use the <code>Bytes</code> parameter.</p>
     */
    inline DetectEntitiesRequest& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>A UTF-8 text string. The maximum string size is 100 KB. If you enter text
     * using this parameter, do not use the <code>Bytes</code> parameter.</p>
     */
    inline DetectEntitiesRequest& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>A UTF-8 text string. The maximum string size is 100 KB. If you enter text
     * using this parameter, do not use the <code>Bytes</code> parameter.</p>
     */
    inline DetectEntitiesRequest& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. If your request includes the endpoint
     * for a custom entity recognition model, Amazon Comprehend uses the language of
     * your custom model, and it ignores any language code that you specify here.</p>
     * <p>All input documents must be in the same language.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. If your request includes the endpoint
     * for a custom entity recognition model, Amazon Comprehend uses the language of
     * your custom model, and it ignores any language code that you specify here.</p>
     * <p>All input documents must be in the same language.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. If your request includes the endpoint
     * for a custom entity recognition model, Amazon Comprehend uses the language of
     * your custom model, and it ignores any language code that you specify here.</p>
     * <p>All input documents must be in the same language.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. If your request includes the endpoint
     * for a custom entity recognition model, Amazon Comprehend uses the language of
     * your custom model, and it ignores any language code that you specify here.</p>
     * <p>All input documents must be in the same language.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. If your request includes the endpoint
     * for a custom entity recognition model, Amazon Comprehend uses the language of
     * your custom model, and it ignores any language code that you specify here.</p>
     * <p>All input documents must be in the same language.</p>
     */
    inline DetectEntitiesRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. If your request includes the endpoint
     * for a custom entity recognition model, Amazon Comprehend uses the language of
     * your custom model, and it ignores any language code that you specify here.</p>
     * <p>All input documents must be in the same language.</p>
     */
    inline DetectEntitiesRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name of an endpoint that is associated with a custom
     * entity recognition model. Provide an endpoint if you want to detect entities by
     * using your own custom model instead of the default model that is used by Amazon
     * Comprehend.</p> <p>If you specify an endpoint, Amazon Comprehend uses the
     * language of your custom model, and it ignores any language code that you provide
     * in your request.</p> <p>For information about endpoints, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/manage-endpoints.html">Managing
     * endpoints</a>.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }

    /**
     * <p>The Amazon Resource Name of an endpoint that is associated with a custom
     * entity recognition model. Provide an endpoint if you want to detect entities by
     * using your own custom model instead of the default model that is used by Amazon
     * Comprehend.</p> <p>If you specify an endpoint, Amazon Comprehend uses the
     * language of your custom model, and it ignores any language code that you provide
     * in your request.</p> <p>For information about endpoints, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/manage-endpoints.html">Managing
     * endpoints</a>.</p>
     */
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name of an endpoint that is associated with a custom
     * entity recognition model. Provide an endpoint if you want to detect entities by
     * using your own custom model instead of the default model that is used by Amazon
     * Comprehend.</p> <p>If you specify an endpoint, Amazon Comprehend uses the
     * language of your custom model, and it ignores any language code that you provide
     * in your request.</p> <p>For information about endpoints, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/manage-endpoints.html">Managing
     * endpoints</a>.</p>
     */
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }

    /**
     * <p>The Amazon Resource Name of an endpoint that is associated with a custom
     * entity recognition model. Provide an endpoint if you want to detect entities by
     * using your own custom model instead of the default model that is used by Amazon
     * Comprehend.</p> <p>If you specify an endpoint, Amazon Comprehend uses the
     * language of your custom model, and it ignores any language code that you provide
     * in your request.</p> <p>For information about endpoints, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/manage-endpoints.html">Managing
     * endpoints</a>.</p>
     */
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of an endpoint that is associated with a custom
     * entity recognition model. Provide an endpoint if you want to detect entities by
     * using your own custom model instead of the default model that is used by Amazon
     * Comprehend.</p> <p>If you specify an endpoint, Amazon Comprehend uses the
     * language of your custom model, and it ignores any language code that you provide
     * in your request.</p> <p>For information about endpoints, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/manage-endpoints.html">Managing
     * endpoints</a>.</p>
     */
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name of an endpoint that is associated with a custom
     * entity recognition model. Provide an endpoint if you want to detect entities by
     * using your own custom model instead of the default model that is used by Amazon
     * Comprehend.</p> <p>If you specify an endpoint, Amazon Comprehend uses the
     * language of your custom model, and it ignores any language code that you provide
     * in your request.</p> <p>For information about endpoints, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/manage-endpoints.html">Managing
     * endpoints</a>.</p>
     */
    inline DetectEntitiesRequest& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of an endpoint that is associated with a custom
     * entity recognition model. Provide an endpoint if you want to detect entities by
     * using your own custom model instead of the default model that is used by Amazon
     * Comprehend.</p> <p>If you specify an endpoint, Amazon Comprehend uses the
     * language of your custom model, and it ignores any language code that you provide
     * in your request.</p> <p>For information about endpoints, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/manage-endpoints.html">Managing
     * endpoints</a>.</p>
     */
    inline DetectEntitiesRequest& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of an endpoint that is associated with a custom
     * entity recognition model. Provide an endpoint if you want to detect entities by
     * using your own custom model instead of the default model that is used by Amazon
     * Comprehend.</p> <p>If you specify an endpoint, Amazon Comprehend uses the
     * language of your custom model, and it ignores any language code that you provide
     * in your request.</p> <p>For information about endpoints, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/manage-endpoints.html">Managing
     * endpoints</a>.</p>
     */
    inline DetectEntitiesRequest& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}


    /**
     * <p>This field applies only when you use a custom entity recognition model that
     * was trained with PDF annotations. For other cases, enter your text input in the
     * <code>Text</code> field.</p> <p> Use the <code>Bytes</code> parameter to input a
     * text, PDF, Word or image file. Using a plain-text file in the <code>Bytes</code>
     * parameter is equivelent to using the <code>Text</code> parameter (the
     * <code>Entities</code> field in the response is identical).</p> <p>You can also
     * use the <code>Bytes</code> parameter to input an Amazon Textract
     * <code>DetectDocumentText</code> or <code>AnalyzeDocument</code> output file.</p>
     * <p>Provide the input document as a sequence of base64-encoded bytes. If your
     * code uses an Amazon Web Services SDK to detect entities, the SDK may encode the
     * document file bytes for you. </p> <p>The maximum length of this field depends on
     * the input document type. For details, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/idp-inputs-sync.html">
     * Inputs for real-time custom analysis</a> in the Comprehend Developer Guide. </p>
     * <p>If you use the <code>Bytes</code> parameter, do not use the <code>Text</code>
     * parameter.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBytes() const{ return m_bytes; }

    /**
     * <p>This field applies only when you use a custom entity recognition model that
     * was trained with PDF annotations. For other cases, enter your text input in the
     * <code>Text</code> field.</p> <p> Use the <code>Bytes</code> parameter to input a
     * text, PDF, Word or image file. Using a plain-text file in the <code>Bytes</code>
     * parameter is equivelent to using the <code>Text</code> parameter (the
     * <code>Entities</code> field in the response is identical).</p> <p>You can also
     * use the <code>Bytes</code> parameter to input an Amazon Textract
     * <code>DetectDocumentText</code> or <code>AnalyzeDocument</code> output file.</p>
     * <p>Provide the input document as a sequence of base64-encoded bytes. If your
     * code uses an Amazon Web Services SDK to detect entities, the SDK may encode the
     * document file bytes for you. </p> <p>The maximum length of this field depends on
     * the input document type. For details, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/idp-inputs-sync.html">
     * Inputs for real-time custom analysis</a> in the Comprehend Developer Guide. </p>
     * <p>If you use the <code>Bytes</code> parameter, do not use the <code>Text</code>
     * parameter.</p>
     */
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }

    /**
     * <p>This field applies only when you use a custom entity recognition model that
     * was trained with PDF annotations. For other cases, enter your text input in the
     * <code>Text</code> field.</p> <p> Use the <code>Bytes</code> parameter to input a
     * text, PDF, Word or image file. Using a plain-text file in the <code>Bytes</code>
     * parameter is equivelent to using the <code>Text</code> parameter (the
     * <code>Entities</code> field in the response is identical).</p> <p>You can also
     * use the <code>Bytes</code> parameter to input an Amazon Textract
     * <code>DetectDocumentText</code> or <code>AnalyzeDocument</code> output file.</p>
     * <p>Provide the input document as a sequence of base64-encoded bytes. If your
     * code uses an Amazon Web Services SDK to detect entities, the SDK may encode the
     * document file bytes for you. </p> <p>The maximum length of this field depends on
     * the input document type. For details, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/idp-inputs-sync.html">
     * Inputs for real-time custom analysis</a> in the Comprehend Developer Guide. </p>
     * <p>If you use the <code>Bytes</code> parameter, do not use the <code>Text</code>
     * parameter.</p>
     */
    inline void SetBytes(const Aws::Utils::ByteBuffer& value) { m_bytesHasBeenSet = true; m_bytes = value; }

    /**
     * <p>This field applies only when you use a custom entity recognition model that
     * was trained with PDF annotations. For other cases, enter your text input in the
     * <code>Text</code> field.</p> <p> Use the <code>Bytes</code> parameter to input a
     * text, PDF, Word or image file. Using a plain-text file in the <code>Bytes</code>
     * parameter is equivelent to using the <code>Text</code> parameter (the
     * <code>Entities</code> field in the response is identical).</p> <p>You can also
     * use the <code>Bytes</code> parameter to input an Amazon Textract
     * <code>DetectDocumentText</code> or <code>AnalyzeDocument</code> output file.</p>
     * <p>Provide the input document as a sequence of base64-encoded bytes. If your
     * code uses an Amazon Web Services SDK to detect entities, the SDK may encode the
     * document file bytes for you. </p> <p>The maximum length of this field depends on
     * the input document type. For details, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/idp-inputs-sync.html">
     * Inputs for real-time custom analysis</a> in the Comprehend Developer Guide. </p>
     * <p>If you use the <code>Bytes</code> parameter, do not use the <code>Text</code>
     * parameter.</p>
     */
    inline void SetBytes(Aws::Utils::ByteBuffer&& value) { m_bytesHasBeenSet = true; m_bytes = std::move(value); }

    /**
     * <p>This field applies only when you use a custom entity recognition model that
     * was trained with PDF annotations. For other cases, enter your text input in the
     * <code>Text</code> field.</p> <p> Use the <code>Bytes</code> parameter to input a
     * text, PDF, Word or image file. Using a plain-text file in the <code>Bytes</code>
     * parameter is equivelent to using the <code>Text</code> parameter (the
     * <code>Entities</code> field in the response is identical).</p> <p>You can also
     * use the <code>Bytes</code> parameter to input an Amazon Textract
     * <code>DetectDocumentText</code> or <code>AnalyzeDocument</code> output file.</p>
     * <p>Provide the input document as a sequence of base64-encoded bytes. If your
     * code uses an Amazon Web Services SDK to detect entities, the SDK may encode the
     * document file bytes for you. </p> <p>The maximum length of this field depends on
     * the input document type. For details, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/idp-inputs-sync.html">
     * Inputs for real-time custom analysis</a> in the Comprehend Developer Guide. </p>
     * <p>If you use the <code>Bytes</code> parameter, do not use the <code>Text</code>
     * parameter.</p>
     */
    inline DetectEntitiesRequest& WithBytes(const Aws::Utils::ByteBuffer& value) { SetBytes(value); return *this;}

    /**
     * <p>This field applies only when you use a custom entity recognition model that
     * was trained with PDF annotations. For other cases, enter your text input in the
     * <code>Text</code> field.</p> <p> Use the <code>Bytes</code> parameter to input a
     * text, PDF, Word or image file. Using a plain-text file in the <code>Bytes</code>
     * parameter is equivelent to using the <code>Text</code> parameter (the
     * <code>Entities</code> field in the response is identical).</p> <p>You can also
     * use the <code>Bytes</code> parameter to input an Amazon Textract
     * <code>DetectDocumentText</code> or <code>AnalyzeDocument</code> output file.</p>
     * <p>Provide the input document as a sequence of base64-encoded bytes. If your
     * code uses an Amazon Web Services SDK to detect entities, the SDK may encode the
     * document file bytes for you. </p> <p>The maximum length of this field depends on
     * the input document type. For details, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/idp-inputs-sync.html">
     * Inputs for real-time custom analysis</a> in the Comprehend Developer Guide. </p>
     * <p>If you use the <code>Bytes</code> parameter, do not use the <code>Text</code>
     * parameter.</p>
     */
    inline DetectEntitiesRequest& WithBytes(Aws::Utils::ByteBuffer&& value) { SetBytes(std::move(value)); return *this;}


    /**
     * <p>Provides configuration parameters to override the default actions for
     * extracting text from PDF documents and image files.</p>
     */
    inline const DocumentReaderConfig& GetDocumentReaderConfig() const{ return m_documentReaderConfig; }

    /**
     * <p>Provides configuration parameters to override the default actions for
     * extracting text from PDF documents and image files.</p>
     */
    inline bool DocumentReaderConfigHasBeenSet() const { return m_documentReaderConfigHasBeenSet; }

    /**
     * <p>Provides configuration parameters to override the default actions for
     * extracting text from PDF documents and image files.</p>
     */
    inline void SetDocumentReaderConfig(const DocumentReaderConfig& value) { m_documentReaderConfigHasBeenSet = true; m_documentReaderConfig = value; }

    /**
     * <p>Provides configuration parameters to override the default actions for
     * extracting text from PDF documents and image files.</p>
     */
    inline void SetDocumentReaderConfig(DocumentReaderConfig&& value) { m_documentReaderConfigHasBeenSet = true; m_documentReaderConfig = std::move(value); }

    /**
     * <p>Provides configuration parameters to override the default actions for
     * extracting text from PDF documents and image files.</p>
     */
    inline DetectEntitiesRequest& WithDocumentReaderConfig(const DocumentReaderConfig& value) { SetDocumentReaderConfig(value); return *this;}

    /**
     * <p>Provides configuration parameters to override the default actions for
     * extracting text from PDF documents and image files.</p>
     */
    inline DetectEntitiesRequest& WithDocumentReaderConfig(DocumentReaderConfig&& value) { SetDocumentReaderConfig(std::move(value)); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::Utils::ByteBuffer m_bytes;
    bool m_bytesHasBeenSet = false;

    DocumentReaderConfig m_documentReaderConfig;
    bool m_documentReaderConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
