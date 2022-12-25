/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractRequest.h>
#include <aws/textract/model/Document.h>
#include <utility>

namespace Aws
{
namespace Textract
{
namespace Model
{

  /**
   */
  class DetectDocumentTextRequest : public TextractRequest
  {
  public:
    AWS_TEXTRACT_API DetectDocumentTextRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectDocumentText"; }

    AWS_TEXTRACT_API Aws::String SerializePayload() const override;

    AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline DetectDocumentTextRequest& WithDocument(const Document& value) { SetDocument(value); return *this;}

    /**
     * <p>The input document as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Textract operations, you can't pass image bytes. The
     * document must be an image in JPEG or PNG format.</p> <p>If you're using an AWS
     * SDK to call Amazon Textract, you might not need to base64-encode image bytes
     * that are passed using the <code>Bytes</code> field. </p>
     */
    inline DetectDocumentTextRequest& WithDocument(Document&& value) { SetDocument(std::move(value)); return *this;}

  private:

    Document m_document;
    bool m_documentHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
