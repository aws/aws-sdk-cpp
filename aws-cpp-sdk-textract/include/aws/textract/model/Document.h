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
#include <aws/core/utils/Array.h>
#include <aws/textract/model/S3Object.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>The input document, either as bytes or as an S3 object.</p> <p>You pass image
   * bytes to an Amazon Textract API operation by using the <code>Bytes</code>
   * property. For example, you would use the <code>Bytes</code> property to pass a
   * document loaded from a local file system. Image bytes passed by using the
   * <code>Bytes</code> property must be base64 encoded. Your code might not need to
   * encode document file bytes if you're using an AWS SDK to call Amazon Textract
   * API operations. </p> <p>You pass images stored in an S3 bucket to an Amazon
   * Textract API operation by using the <code>S3Object</code> property. Documents
   * stored in an S3 bucket don't need to be base64 encoded.</p> <p>The AWS Region
   * for the S3 bucket that contains the S3 object must match the AWS Region that you
   * use for Amazon Textract operations.</p> <p>If you use the AWS CLI to call Amazon
   * Textract operations, passing image bytes using the Bytes property isn't
   * supported. You must first upload the document to an Amazon S3 bucket, and then
   * call the operation using the S3Object property.</p> <p>For Amazon Textract to
   * process an S3 object, the user must have permission to access the S3 object.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/Document">AWS
   * API Reference</a></p>
   */
  class AWS_TEXTRACT_API Document
  {
  public:
    Document();
    Document(Aws::Utils::Json::JsonView jsonValue);
    Document& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A blob of base-64 encoded documents bytes. The maximum size of a document
     * that's provided in a blob of bytes is 5 MB. The document bytes must be in PNG or
     * JPG format.</p> <p>If you are using an AWS SDK to call Amazon Textract, you
     * might not need to base64-encode image bytes passed using the <code>Bytes</code>
     * field. </p>
     */
    inline const Aws::Utils::ByteBuffer& GetBytes() const{ return m_bytes; }

    /**
     * <p>A blob of base-64 encoded documents bytes. The maximum size of a document
     * that's provided in a blob of bytes is 5 MB. The document bytes must be in PNG or
     * JPG format.</p> <p>If you are using an AWS SDK to call Amazon Textract, you
     * might not need to base64-encode image bytes passed using the <code>Bytes</code>
     * field. </p>
     */
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }

    /**
     * <p>A blob of base-64 encoded documents bytes. The maximum size of a document
     * that's provided in a blob of bytes is 5 MB. The document bytes must be in PNG or
     * JPG format.</p> <p>If you are using an AWS SDK to call Amazon Textract, you
     * might not need to base64-encode image bytes passed using the <code>Bytes</code>
     * field. </p>
     */
    inline void SetBytes(const Aws::Utils::ByteBuffer& value) { m_bytesHasBeenSet = true; m_bytes = value; }

    /**
     * <p>A blob of base-64 encoded documents bytes. The maximum size of a document
     * that's provided in a blob of bytes is 5 MB. The document bytes must be in PNG or
     * JPG format.</p> <p>If you are using an AWS SDK to call Amazon Textract, you
     * might not need to base64-encode image bytes passed using the <code>Bytes</code>
     * field. </p>
     */
    inline void SetBytes(Aws::Utils::ByteBuffer&& value) { m_bytesHasBeenSet = true; m_bytes = std::move(value); }

    /**
     * <p>A blob of base-64 encoded documents bytes. The maximum size of a document
     * that's provided in a blob of bytes is 5 MB. The document bytes must be in PNG or
     * JPG format.</p> <p>If you are using an AWS SDK to call Amazon Textract, you
     * might not need to base64-encode image bytes passed using the <code>Bytes</code>
     * field. </p>
     */
    inline Document& WithBytes(const Aws::Utils::ByteBuffer& value) { SetBytes(value); return *this;}

    /**
     * <p>A blob of base-64 encoded documents bytes. The maximum size of a document
     * that's provided in a blob of bytes is 5 MB. The document bytes must be in PNG or
     * JPG format.</p> <p>If you are using an AWS SDK to call Amazon Textract, you
     * might not need to base64-encode image bytes passed using the <code>Bytes</code>
     * field. </p>
     */
    inline Document& WithBytes(Aws::Utils::ByteBuffer&& value) { SetBytes(std::move(value)); return *this;}


    /**
     * <p>Identifies an S3 object as the document source. The maximum size of a
     * document stored in an S3 bucket is 5 MB.</p>
     */
    inline const S3Object& GetS3Object() const{ return m_s3Object; }

    /**
     * <p>Identifies an S3 object as the document source. The maximum size of a
     * document stored in an S3 bucket is 5 MB.</p>
     */
    inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }

    /**
     * <p>Identifies an S3 object as the document source. The maximum size of a
     * document stored in an S3 bucket is 5 MB.</p>
     */
    inline void SetS3Object(const S3Object& value) { m_s3ObjectHasBeenSet = true; m_s3Object = value; }

    /**
     * <p>Identifies an S3 object as the document source. The maximum size of a
     * document stored in an S3 bucket is 5 MB.</p>
     */
    inline void SetS3Object(S3Object&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = std::move(value); }

    /**
     * <p>Identifies an S3 object as the document source. The maximum size of a
     * document stored in an S3 bucket is 5 MB.</p>
     */
    inline Document& WithS3Object(const S3Object& value) { SetS3Object(value); return *this;}

    /**
     * <p>Identifies an S3 object as the document source. The maximum size of a
     * document stored in an S3 bucket is 5 MB.</p>
     */
    inline Document& WithS3Object(S3Object&& value) { SetS3Object(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_bytes;
    bool m_bytesHasBeenSet;

    S3Object m_s3Object;
    bool m_s3ObjectHasBeenSet;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
