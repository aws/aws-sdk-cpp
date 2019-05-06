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
  class AWS_TEXTRACT_API DetectDocumentTextRequest : public TextractRequest
  {
  public:
    DetectDocumentTextRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectDocumentText"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The input document as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Textract operations, you can't pass image bytes. The
     * document must be an image in JPG or PNG format.</p> <p>If you are using an AWS
     * SDK to call Amazon Textract, you might not need to base64-encode image bytes
     * passed using the <code>Bytes</code> field. </p>
     */
    inline const Document& GetDocument() const{ return m_document; }

    /**
     * <p>The input document as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Textract operations, you can't pass image bytes. The
     * document must be an image in JPG or PNG format.</p> <p>If you are using an AWS
     * SDK to call Amazon Textract, you might not need to base64-encode image bytes
     * passed using the <code>Bytes</code> field. </p>
     */
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }

    /**
     * <p>The input document as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Textract operations, you can't pass image bytes. The
     * document must be an image in JPG or PNG format.</p> <p>If you are using an AWS
     * SDK to call Amazon Textract, you might not need to base64-encode image bytes
     * passed using the <code>Bytes</code> field. </p>
     */
    inline void SetDocument(const Document& value) { m_documentHasBeenSet = true; m_document = value; }

    /**
     * <p>The input document as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Textract operations, you can't pass image bytes. The
     * document must be an image in JPG or PNG format.</p> <p>If you are using an AWS
     * SDK to call Amazon Textract, you might not need to base64-encode image bytes
     * passed using the <code>Bytes</code> field. </p>
     */
    inline void SetDocument(Document&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }

    /**
     * <p>The input document as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Textract operations, you can't pass image bytes. The
     * document must be an image in JPG or PNG format.</p> <p>If you are using an AWS
     * SDK to call Amazon Textract, you might not need to base64-encode image bytes
     * passed using the <code>Bytes</code> field. </p>
     */
    inline DetectDocumentTextRequest& WithDocument(const Document& value) { SetDocument(value); return *this;}

    /**
     * <p>The input document as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Textract operations, you can't pass image bytes. The
     * document must be an image in JPG or PNG format.</p> <p>If you are using an AWS
     * SDK to call Amazon Textract, you might not need to base64-encode image bytes
     * passed using the <code>Bytes</code> field. </p>
     */
    inline DetectDocumentTextRequest& WithDocument(Document&& value) { SetDocument(std::move(value)); return *this;}

  private:

    Document m_document;
    bool m_documentHasBeenSet;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
