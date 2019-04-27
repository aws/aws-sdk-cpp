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
   * <p>Provides configuration parameters for the output of topic detection jobs.</p>
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/OutputDataConfig">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHEND_API OutputDataConfig
  {
  public:
    OutputDataConfig();
    OutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    OutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When you use the <code>OutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. The URI must be in the same region as the API endpoint that you are
     * calling. The location is used as the prefix for the actual location of the
     * output file.</p> <p>When the topic detection job is finished, the service
     * creates an output file in a directory specific to the job. The
     * <code>S3Uri</code> field contains the location of the output file, called
     * <code>output.tar.gz</code>. It is a compressed archive that contains the ouput
     * of the operation.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>When you use the <code>OutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. The URI must be in the same region as the API endpoint that you are
     * calling. The location is used as the prefix for the actual location of the
     * output file.</p> <p>When the topic detection job is finished, the service
     * creates an output file in a directory specific to the job. The
     * <code>S3Uri</code> field contains the location of the output file, called
     * <code>output.tar.gz</code>. It is a compressed archive that contains the ouput
     * of the operation.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>When you use the <code>OutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. The URI must be in the same region as the API endpoint that you are
     * calling. The location is used as the prefix for the actual location of the
     * output file.</p> <p>When the topic detection job is finished, the service
     * creates an output file in a directory specific to the job. The
     * <code>S3Uri</code> field contains the location of the output file, called
     * <code>output.tar.gz</code>. It is a compressed archive that contains the ouput
     * of the operation.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>When you use the <code>OutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. The URI must be in the same region as the API endpoint that you are
     * calling. The location is used as the prefix for the actual location of the
     * output file.</p> <p>When the topic detection job is finished, the service
     * creates an output file in a directory specific to the job. The
     * <code>S3Uri</code> field contains the location of the output file, called
     * <code>output.tar.gz</code>. It is a compressed archive that contains the ouput
     * of the operation.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>When you use the <code>OutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. The URI must be in the same region as the API endpoint that you are
     * calling. The location is used as the prefix for the actual location of the
     * output file.</p> <p>When the topic detection job is finished, the service
     * creates an output file in a directory specific to the job. The
     * <code>S3Uri</code> field contains the location of the output file, called
     * <code>output.tar.gz</code>. It is a compressed archive that contains the ouput
     * of the operation.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>When you use the <code>OutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. The URI must be in the same region as the API endpoint that you are
     * calling. The location is used as the prefix for the actual location of the
     * output file.</p> <p>When the topic detection job is finished, the service
     * creates an output file in a directory specific to the job. The
     * <code>S3Uri</code> field contains the location of the output file, called
     * <code>output.tar.gz</code>. It is a compressed archive that contains the ouput
     * of the operation.</p>
     */
    inline OutputDataConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>When you use the <code>OutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. The URI must be in the same region as the API endpoint that you are
     * calling. The location is used as the prefix for the actual location of the
     * output file.</p> <p>When the topic detection job is finished, the service
     * creates an output file in a directory specific to the job. The
     * <code>S3Uri</code> field contains the location of the output file, called
     * <code>output.tar.gz</code>. It is a compressed archive that contains the ouput
     * of the operation.</p>
     */
    inline OutputDataConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>When you use the <code>OutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. The URI must be in the same region as the API endpoint that you are
     * calling. The location is used as the prefix for the actual location of the
     * output file.</p> <p>When the topic detection job is finished, the service
     * creates an output file in a directory specific to the job. The
     * <code>S3Uri</code> field contains the location of the output file, called
     * <code>output.tar.gz</code>. It is a compressed archive that contains the ouput
     * of the operation.</p>
     */
    inline OutputDataConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt the output results from an analysis job. The KmsKeyId can be one of
     * the following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>KMS Key Alias: <code>"alias/ExampleAlias"</code> </p> </li>
     * <li> <p>ARN of a KMS Key Alias:
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt the output results from an analysis job. The KmsKeyId can be one of
     * the following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>KMS Key Alias: <code>"alias/ExampleAlias"</code> </p> </li>
     * <li> <p>ARN of a KMS Key Alias:
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt the output results from an analysis job. The KmsKeyId can be one of
     * the following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>KMS Key Alias: <code>"alias/ExampleAlias"</code> </p> </li>
     * <li> <p>ARN of a KMS Key Alias:
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt the output results from an analysis job. The KmsKeyId can be one of
     * the following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>KMS Key Alias: <code>"alias/ExampleAlias"</code> </p> </li>
     * <li> <p>ARN of a KMS Key Alias:
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt the output results from an analysis job. The KmsKeyId can be one of
     * the following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>KMS Key Alias: <code>"alias/ExampleAlias"</code> </p> </li>
     * <li> <p>ARN of a KMS Key Alias:
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt the output results from an analysis job. The KmsKeyId can be one of
     * the following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>KMS Key Alias: <code>"alias/ExampleAlias"</code> </p> </li>
     * <li> <p>ARN of a KMS Key Alias:
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul>
     */
    inline OutputDataConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt the output results from an analysis job. The KmsKeyId can be one of
     * the following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>KMS Key Alias: <code>"alias/ExampleAlias"</code> </p> </li>
     * <li> <p>ARN of a KMS Key Alias:
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul>
     */
    inline OutputDataConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt the output results from an analysis job. The KmsKeyId can be one of
     * the following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>KMS Key Alias: <code>"alias/ExampleAlias"</code> </p> </li>
     * <li> <p>ARN of a KMS Key Alias:
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul>
     */
    inline OutputDataConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
