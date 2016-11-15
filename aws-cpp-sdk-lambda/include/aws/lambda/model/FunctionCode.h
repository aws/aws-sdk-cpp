/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>The code for the Lambda function.</p>
   */
  class AWS_LAMBDA_API FunctionCode
  {
  public:
    FunctionCode();
    FunctionCode(const Aws::Utils::Json::JsonValue& jsonValue);
    FunctionCode& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The contents of your zip file containing your deployment package. If you are
     * using the web API directly, the contents of the zip file must be base64-encoded.
     * If you are using the AWS SDKs or the AWS CLI, the SDKs or CLI will do the
     * encoding for you. For more information about creating a .zip file, go to <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role.html">Execution
     * Permissions</a> in the <i>AWS Lambda Developer Guide</i>. </p>
     */
    inline const Aws::Utils::ByteBuffer& GetZipFile() const{ return m_zipFile; }

    /**
     * <p>The contents of your zip file containing your deployment package. If you are
     * using the web API directly, the contents of the zip file must be base64-encoded.
     * If you are using the AWS SDKs or the AWS CLI, the SDKs or CLI will do the
     * encoding for you. For more information about creating a .zip file, go to <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role.html">Execution
     * Permissions</a> in the <i>AWS Lambda Developer Guide</i>. </p>
     */
    inline void SetZipFile(const Aws::Utils::ByteBuffer& value) { m_zipFileHasBeenSet = true; m_zipFile = value; }

    /**
     * <p>The contents of your zip file containing your deployment package. If you are
     * using the web API directly, the contents of the zip file must be base64-encoded.
     * If you are using the AWS SDKs or the AWS CLI, the SDKs or CLI will do the
     * encoding for you. For more information about creating a .zip file, go to <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role.html">Execution
     * Permissions</a> in the <i>AWS Lambda Developer Guide</i>. </p>
     */
    inline void SetZipFile(Aws::Utils::ByteBuffer&& value) { m_zipFileHasBeenSet = true; m_zipFile = value; }

    /**
     * <p>The contents of your zip file containing your deployment package. If you are
     * using the web API directly, the contents of the zip file must be base64-encoded.
     * If you are using the AWS SDKs or the AWS CLI, the SDKs or CLI will do the
     * encoding for you. For more information about creating a .zip file, go to <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role.html">Execution
     * Permissions</a> in the <i>AWS Lambda Developer Guide</i>. </p>
     */
    inline FunctionCode& WithZipFile(const Aws::Utils::ByteBuffer& value) { SetZipFile(value); return *this;}

    /**
     * <p>The contents of your zip file containing your deployment package. If you are
     * using the web API directly, the contents of the zip file must be base64-encoded.
     * If you are using the AWS SDKs or the AWS CLI, the SDKs or CLI will do the
     * encoding for you. For more information about creating a .zip file, go to <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role.html">Execution
     * Permissions</a> in the <i>AWS Lambda Developer Guide</i>. </p>
     */
    inline FunctionCode& WithZipFile(Aws::Utils::ByteBuffer&& value) { SetZipFile(value); return *this;}

    /**
     * <p>Amazon S3 bucket name where the .zip file containing your deployment package
     * is stored. This bucket must reside in the same AWS region where you are creating
     * the Lambda function.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>Amazon S3 bucket name where the .zip file containing your deployment package
     * is stored. This bucket must reside in the same AWS region where you are creating
     * the Lambda function.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>Amazon S3 bucket name where the .zip file containing your deployment package
     * is stored. This bucket must reside in the same AWS region where you are creating
     * the Lambda function.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>Amazon S3 bucket name where the .zip file containing your deployment package
     * is stored. This bucket must reside in the same AWS region where you are creating
     * the Lambda function.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>Amazon S3 bucket name where the .zip file containing your deployment package
     * is stored. This bucket must reside in the same AWS region where you are creating
     * the Lambda function.</p>
     */
    inline FunctionCode& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>Amazon S3 bucket name where the .zip file containing your deployment package
     * is stored. This bucket must reside in the same AWS region where you are creating
     * the Lambda function.</p>
     */
    inline FunctionCode& WithS3Bucket(Aws::String&& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>Amazon S3 bucket name where the .zip file containing your deployment package
     * is stored. This bucket must reside in the same AWS region where you are creating
     * the Lambda function.</p>
     */
    inline FunctionCode& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The Amazon S3 object (the deployment package) key name you want to
     * upload.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }

    /**
     * <p>The Amazon S3 object (the deployment package) key name you want to
     * upload.</p>
     */
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }

    /**
     * <p>The Amazon S3 object (the deployment package) key name you want to
     * upload.</p>
     */
    inline void SetS3Key(Aws::String&& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }

    /**
     * <p>The Amazon S3 object (the deployment package) key name you want to
     * upload.</p>
     */
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }

    /**
     * <p>The Amazon S3 object (the deployment package) key name you want to
     * upload.</p>
     */
    inline FunctionCode& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /**
     * <p>The Amazon S3 object (the deployment package) key name you want to
     * upload.</p>
     */
    inline FunctionCode& WithS3Key(Aws::String&& value) { SetS3Key(value); return *this;}

    /**
     * <p>The Amazon S3 object (the deployment package) key name you want to
     * upload.</p>
     */
    inline FunctionCode& WithS3Key(const char* value) { SetS3Key(value); return *this;}

    /**
     * <p>The Amazon S3 object (the deployment package) version you want to upload.</p>
     */
    inline const Aws::String& GetS3ObjectVersion() const{ return m_s3ObjectVersion; }

    /**
     * <p>The Amazon S3 object (the deployment package) version you want to upload.</p>
     */
    inline void SetS3ObjectVersion(const Aws::String& value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion = value; }

    /**
     * <p>The Amazon S3 object (the deployment package) version you want to upload.</p>
     */
    inline void SetS3ObjectVersion(Aws::String&& value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion = value; }

    /**
     * <p>The Amazon S3 object (the deployment package) version you want to upload.</p>
     */
    inline void SetS3ObjectVersion(const char* value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion.assign(value); }

    /**
     * <p>The Amazon S3 object (the deployment package) version you want to upload.</p>
     */
    inline FunctionCode& WithS3ObjectVersion(const Aws::String& value) { SetS3ObjectVersion(value); return *this;}

    /**
     * <p>The Amazon S3 object (the deployment package) version you want to upload.</p>
     */
    inline FunctionCode& WithS3ObjectVersion(Aws::String&& value) { SetS3ObjectVersion(value); return *this;}

    /**
     * <p>The Amazon S3 object (the deployment package) version you want to upload.</p>
     */
    inline FunctionCode& WithS3ObjectVersion(const char* value) { SetS3ObjectVersion(value); return *this;}

  private:
    Aws::Utils::ByteBuffer m_zipFile;
    bool m_zipFileHasBeenSet;
    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet;
    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet;
    Aws::String m_s3ObjectVersion;
    bool m_s3ObjectVersionHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
