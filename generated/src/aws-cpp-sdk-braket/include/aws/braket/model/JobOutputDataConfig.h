/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
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
namespace Braket
{
namespace Model
{

  /**
   * <p>Specifies the path to the S3 location where you want to store job artifacts
   * and the encryption key used to store them.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/JobOutputDataConfig">AWS
   * API Reference</a></p>
   */
  class JobOutputDataConfig
  {
  public:
    AWS_BRAKET_API JobOutputDataConfig();
    AWS_BRAKET_API JobOutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API JobOutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon Braket uses to
     * encrypt the job training artifacts at rest using Amazon S3 server-side
     * encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon Braket uses to
     * encrypt the job training artifacts at rest using Amazon S3 server-side
     * encryption.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon Braket uses to
     * encrypt the job training artifacts at rest using Amazon S3 server-side
     * encryption.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon Braket uses to
     * encrypt the job training artifacts at rest using Amazon S3 server-side
     * encryption.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon Braket uses to
     * encrypt the job training artifacts at rest using Amazon S3 server-side
     * encryption.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon Braket uses to
     * encrypt the job training artifacts at rest using Amazon S3 server-side
     * encryption.</p>
     */
    inline JobOutputDataConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon Braket uses to
     * encrypt the job training artifacts at rest using Amazon S3 server-side
     * encryption.</p>
     */
    inline JobOutputDataConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon Braket uses to
     * encrypt the job training artifacts at rest using Amazon S3 server-side
     * encryption.</p>
     */
    inline JobOutputDataConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Identifies the S3 path where you want Amazon Braket to store the job training
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline const Aws::String& GetS3Path() const{ return m_s3Path; }

    /**
     * <p>Identifies the S3 path where you want Amazon Braket to store the job training
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline bool S3PathHasBeenSet() const { return m_s3PathHasBeenSet; }

    /**
     * <p>Identifies the S3 path where you want Amazon Braket to store the job training
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline void SetS3Path(const Aws::String& value) { m_s3PathHasBeenSet = true; m_s3Path = value; }

    /**
     * <p>Identifies the S3 path where you want Amazon Braket to store the job training
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline void SetS3Path(Aws::String&& value) { m_s3PathHasBeenSet = true; m_s3Path = std::move(value); }

    /**
     * <p>Identifies the S3 path where you want Amazon Braket to store the job training
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline void SetS3Path(const char* value) { m_s3PathHasBeenSet = true; m_s3Path.assign(value); }

    /**
     * <p>Identifies the S3 path where you want Amazon Braket to store the job training
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline JobOutputDataConfig& WithS3Path(const Aws::String& value) { SetS3Path(value); return *this;}

    /**
     * <p>Identifies the S3 path where you want Amazon Braket to store the job training
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline JobOutputDataConfig& WithS3Path(Aws::String&& value) { SetS3Path(std::move(value)); return *this;}

    /**
     * <p>Identifies the S3 path where you want Amazon Braket to store the job training
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline JobOutputDataConfig& WithS3Path(const char* value) { SetS3Path(value); return *this;}

  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_s3Path;
    bool m_s3PathHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
