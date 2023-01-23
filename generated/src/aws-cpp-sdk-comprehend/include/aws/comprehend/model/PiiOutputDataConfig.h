/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides configuration parameters for the output of PII entity detection
   * jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/PiiOutputDataConfig">AWS
   * API Reference</a></p>
   */
  class PiiOutputDataConfig
  {
  public:
    AWS_COMPREHEND_API PiiOutputDataConfig();
    AWS_COMPREHEND_API PiiOutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API PiiOutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When you use the <code>PiiOutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. </p> <p> For a PII entity detection job, the output file is plain
     * text, not a compressed archive. The output file name is the same as the input
     * file, with <code>.out</code> appended at the end. </p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>When you use the <code>PiiOutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. </p> <p> For a PII entity detection job, the output file is plain
     * text, not a compressed archive. The output file name is the same as the input
     * file, with <code>.out</code> appended at the end. </p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>When you use the <code>PiiOutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. </p> <p> For a PII entity detection job, the output file is plain
     * text, not a compressed archive. The output file name is the same as the input
     * file, with <code>.out</code> appended at the end. </p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>When you use the <code>PiiOutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. </p> <p> For a PII entity detection job, the output file is plain
     * text, not a compressed archive. The output file name is the same as the input
     * file, with <code>.out</code> appended at the end. </p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>When you use the <code>PiiOutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. </p> <p> For a PII entity detection job, the output file is plain
     * text, not a compressed archive. The output file name is the same as the input
     * file, with <code>.out</code> appended at the end. </p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>When you use the <code>PiiOutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. </p> <p> For a PII entity detection job, the output file is plain
     * text, not a compressed archive. The output file name is the same as the input
     * file, with <code>.out</code> appended at the end. </p>
     */
    inline PiiOutputDataConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>When you use the <code>PiiOutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. </p> <p> For a PII entity detection job, the output file is plain
     * text, not a compressed archive. The output file name is the same as the input
     * file, with <code>.out</code> appended at the end. </p>
     */
    inline PiiOutputDataConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>When you use the <code>PiiOutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. </p> <p> For a PII entity detection job, the output file is plain
     * text, not a compressed archive. The output file name is the same as the input
     * file, with <code>.out</code> appended at the end. </p>
     */
    inline PiiOutputDataConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt the output results from an analysis job.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt the output results from an analysis job.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt the output results from an analysis job.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt the output results from an analysis job.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt the output results from an analysis job.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt the output results from an analysis job.</p>
     */
    inline PiiOutputDataConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt the output results from an analysis job.</p>
     */
    inline PiiOutputDataConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt the output results from an analysis job.</p>
     */
    inline PiiOutputDataConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
