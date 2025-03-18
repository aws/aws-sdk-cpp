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
    AWS_COMPREHEND_API DetectEntitiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectEntities"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A UTF-8 text string. The maximum string size is 100 KB. If you enter text
     * using this parameter, do not use the <code>Bytes</code> parameter.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    DetectEntitiesRequest& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. If your request includes the endpoint
     * for a custom entity recognition model, Amazon Comprehend uses the language of
     * your custom model, and it ignores any language code that you specify here.</p>
     * <p>All input documents must be in the same language.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline DetectEntitiesRequest& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetEndpointArn() const { return m_endpointArn; }
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
    template<typename EndpointArnT = Aws::String>
    void SetEndpointArn(EndpointArnT&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::forward<EndpointArnT>(value); }
    template<typename EndpointArnT = Aws::String>
    DetectEntitiesRequest& WithEndpointArn(EndpointArnT&& value) { SetEndpointArn(std::forward<EndpointArnT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Utils::ByteBuffer& GetBytes() const { return m_bytes; }
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
    template<typename BytesT = Aws::Utils::ByteBuffer>
    void SetBytes(BytesT&& value) { m_bytesHasBeenSet = true; m_bytes = std::forward<BytesT>(value); }
    template<typename BytesT = Aws::Utils::ByteBuffer>
    DetectEntitiesRequest& WithBytes(BytesT&& value) { SetBytes(std::forward<BytesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides configuration parameters to override the default actions for
     * extracting text from PDF documents and image files.</p>
     */
    inline const DocumentReaderConfig& GetDocumentReaderConfig() const { return m_documentReaderConfig; }
    inline bool DocumentReaderConfigHasBeenSet() const { return m_documentReaderConfigHasBeenSet; }
    template<typename DocumentReaderConfigT = DocumentReaderConfig>
    void SetDocumentReaderConfig(DocumentReaderConfigT&& value) { m_documentReaderConfigHasBeenSet = true; m_documentReaderConfig = std::forward<DocumentReaderConfigT>(value); }
    template<typename DocumentReaderConfigT = DocumentReaderConfig>
    DetectEntitiesRequest& WithDocumentReaderConfig(DocumentReaderConfigT&& value) { SetDocumentReaderConfig(std::forward<DocumentReaderConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::Utils::ByteBuffer m_bytes{};
    bool m_bytesHasBeenSet = false;

    DocumentReaderConfig m_documentReaderConfig;
    bool m_documentReaderConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
