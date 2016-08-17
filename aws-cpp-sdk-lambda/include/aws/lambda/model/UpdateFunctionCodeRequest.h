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
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_LAMBDA_API UpdateFunctionCodeRequest : public LambdaRequest
  {
  public:
    UpdateFunctionCodeRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The existing Lambda function name whose code you want to replace.</p> <p> You
     * can specify a function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The existing Lambda function name whose code you want to replace.</p> <p> You
     * can specify a function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The existing Lambda function name whose code you want to replace.</p> <p> You
     * can specify a function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The existing Lambda function name whose code you want to replace.</p> <p> You
     * can specify a function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The existing Lambda function name whose code you want to replace.</p> <p> You
     * can specify a function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline UpdateFunctionCodeRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The existing Lambda function name whose code you want to replace.</p> <p> You
     * can specify a function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline UpdateFunctionCodeRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The existing Lambda function name whose code you want to replace.</p> <p> You
     * can specify a function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline UpdateFunctionCodeRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

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
    inline UpdateFunctionCodeRequest& WithZipFile(const Aws::Utils::ByteBuffer& value) { SetZipFile(value); return *this;}

    /**
     * <p>The contents of your zip file containing your deployment package. If you are
     * using the web API directly, the contents of the zip file must be base64-encoded.
     * If you are using the AWS SDKs or the AWS CLI, the SDKs or CLI will do the
     * encoding for you. For more information about creating a .zip file, go to <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role.html">Execution
     * Permissions</a> in the <i>AWS Lambda Developer Guide</i>. </p>
     */
    inline UpdateFunctionCodeRequest& WithZipFile(Aws::Utils::ByteBuffer&& value) { SetZipFile(value); return *this;}

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
    inline UpdateFunctionCodeRequest& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>Amazon S3 bucket name where the .zip file containing your deployment package
     * is stored. This bucket must reside in the same AWS region where you are creating
     * the Lambda function.</p>
     */
    inline UpdateFunctionCodeRequest& WithS3Bucket(Aws::String&& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>Amazon S3 bucket name where the .zip file containing your deployment package
     * is stored. This bucket must reside in the same AWS region where you are creating
     * the Lambda function.</p>
     */
    inline UpdateFunctionCodeRequest& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}

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
    inline UpdateFunctionCodeRequest& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /**
     * <p>The Amazon S3 object (the deployment package) key name you want to
     * upload.</p>
     */
    inline UpdateFunctionCodeRequest& WithS3Key(Aws::String&& value) { SetS3Key(value); return *this;}

    /**
     * <p>The Amazon S3 object (the deployment package) key name you want to
     * upload.</p>
     */
    inline UpdateFunctionCodeRequest& WithS3Key(const char* value) { SetS3Key(value); return *this;}

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
    inline UpdateFunctionCodeRequest& WithS3ObjectVersion(const Aws::String& value) { SetS3ObjectVersion(value); return *this;}

    /**
     * <p>The Amazon S3 object (the deployment package) version you want to upload.</p>
     */
    inline UpdateFunctionCodeRequest& WithS3ObjectVersion(Aws::String&& value) { SetS3ObjectVersion(value); return *this;}

    /**
     * <p>The Amazon S3 object (the deployment package) version you want to upload.</p>
     */
    inline UpdateFunctionCodeRequest& WithS3ObjectVersion(const char* value) { SetS3ObjectVersion(value); return *this;}

    /**
     * <p>This boolean parameter can be used to request AWS Lambda to update the Lambda
     * function and publish a version as an atomic operation.</p>
     */
    inline bool GetPublish() const{ return m_publish; }

    /**
     * <p>This boolean parameter can be used to request AWS Lambda to update the Lambda
     * function and publish a version as an atomic operation.</p>
     */
    inline void SetPublish(bool value) { m_publishHasBeenSet = true; m_publish = value; }

    /**
     * <p>This boolean parameter can be used to request AWS Lambda to update the Lambda
     * function and publish a version as an atomic operation.</p>
     */
    inline UpdateFunctionCodeRequest& WithPublish(bool value) { SetPublish(value); return *this;}

  private:
    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;
    Aws::Utils::ByteBuffer m_zipFile;
    bool m_zipFileHasBeenSet;
    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet;
    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet;
    Aws::String m_s3ObjectVersion;
    bool m_s3ObjectVersionHasBeenSet;
    bool m_publish;
    bool m_publishHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
