/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ClassifyDocumentRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API ClassifyDocumentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ClassifyDocument"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The document text to be analyzed. If you enter text using this parameter, do
     * not use the <code>Bytes</code> parameter.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    ClassifyDocumentRequest& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint. </p> <p>For prompt safety
     * classification, Amazon Comprehend provides the endpoint ARN. For more
     * information about prompt safety classifiers, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/trust-safety.html#prompt-classification">Prompt
     * safety classification</a> in the <i>Amazon Comprehend Developer Guide</i> </p>
     * <p>For custom classification, you create an endpoint for your custom model. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/using-endpoints.html">Using
     * Amazon Comprehend endpoints</a>.</p>
     */
    inline const Aws::String& GetEndpointArn() const { return m_endpointArn; }
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
    template<typename EndpointArnT = Aws::String>
    void SetEndpointArn(EndpointArnT&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::forward<EndpointArnT>(value); }
    template<typename EndpointArnT = Aws::String>
    ClassifyDocumentRequest& WithEndpointArn(EndpointArnT&& value) { SetEndpointArn(std::forward<EndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the <code>Bytes</code> parameter to input a text, PDF, Word or image
     * file.</p> <p>When you classify a document using a custom model, you can also use
     * the <code>Bytes</code> parameter to input an Amazon Textract
     * <code>DetectDocumentText</code> or <code>AnalyzeDocument</code> output file.</p>
     * <p>To classify a document using the prompt safety classifier, use the
     * <code>Text</code> parameter for input.</p> <p>Provide the input document as a
     * sequence of base64-encoded bytes. If your code uses an Amazon Web Services SDK
     * to classify documents, the SDK may encode the document file bytes for you. </p>
     * <p>The maximum length of this field depends on the input document type. For
     * details, see <a
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
    ClassifyDocumentRequest& WithBytes(BytesT&& value) { SetBytes(std::forward<BytesT>(value)); return *this;}
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
    ClassifyDocumentRequest& WithDocumentReaderConfig(DocumentReaderConfigT&& value) { SetDocumentReaderConfig(std::forward<DocumentReaderConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

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
