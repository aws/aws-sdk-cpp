/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/Architecture.h>
#include <utility>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   */
  class UpdateFunctionCodeRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API UpdateFunctionCodeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFunctionCode"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> – <code>my-function</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> – <code>my-function</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> – <code>my-function</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> – <code>my-function</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> – <code>my-function</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> – <code>my-function</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline UpdateFunctionCodeRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> – <code>my-function</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline UpdateFunctionCodeRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> – <code>my-function</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline UpdateFunctionCodeRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>The base64-encoded contents of the deployment package. Amazon Web Services
     * SDK and CLI clients handle the encoding for you. Use only with a function
     * defined with a .zip file archive deployment package.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetZipFile() const{ return m_zipFile; }

    /**
     * <p>The base64-encoded contents of the deployment package. Amazon Web Services
     * SDK and CLI clients handle the encoding for you. Use only with a function
     * defined with a .zip file archive deployment package.</p>
     */
    inline bool ZipFileHasBeenSet() const { return m_zipFileHasBeenSet; }

    /**
     * <p>The base64-encoded contents of the deployment package. Amazon Web Services
     * SDK and CLI clients handle the encoding for you. Use only with a function
     * defined with a .zip file archive deployment package.</p>
     */
    inline void SetZipFile(const Aws::Utils::CryptoBuffer& value) { m_zipFileHasBeenSet = true; m_zipFile = value; }

    /**
     * <p>The base64-encoded contents of the deployment package. Amazon Web Services
     * SDK and CLI clients handle the encoding for you. Use only with a function
     * defined with a .zip file archive deployment package.</p>
     */
    inline void SetZipFile(Aws::Utils::CryptoBuffer&& value) { m_zipFileHasBeenSet = true; m_zipFile = std::move(value); }

    /**
     * <p>The base64-encoded contents of the deployment package. Amazon Web Services
     * SDK and CLI clients handle the encoding for you. Use only with a function
     * defined with a .zip file archive deployment package.</p>
     */
    inline UpdateFunctionCodeRequest& WithZipFile(const Aws::Utils::CryptoBuffer& value) { SetZipFile(value); return *this;}

    /**
     * <p>The base64-encoded contents of the deployment package. Amazon Web Services
     * SDK and CLI clients handle the encoding for you. Use only with a function
     * defined with a .zip file archive deployment package.</p>
     */
    inline UpdateFunctionCodeRequest& WithZipFile(Aws::Utils::CryptoBuffer&& value) { SetZipFile(std::move(value)); return *this;}


    /**
     * <p>An Amazon S3 bucket in the same Amazon Web Services Region as your function.
     * The bucket can be in a different Amazon Web Services account. Use only with a
     * function defined with a .zip file archive deployment package.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>An Amazon S3 bucket in the same Amazon Web Services Region as your function.
     * The bucket can be in a different Amazon Web Services account. Use only with a
     * function defined with a .zip file archive deployment package.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>An Amazon S3 bucket in the same Amazon Web Services Region as your function.
     * The bucket can be in a different Amazon Web Services account. Use only with a
     * function defined with a .zip file archive deployment package.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>An Amazon S3 bucket in the same Amazon Web Services Region as your function.
     * The bucket can be in a different Amazon Web Services account. Use only with a
     * function defined with a .zip file archive deployment package.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>An Amazon S3 bucket in the same Amazon Web Services Region as your function.
     * The bucket can be in a different Amazon Web Services account. Use only with a
     * function defined with a .zip file archive deployment package.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>An Amazon S3 bucket in the same Amazon Web Services Region as your function.
     * The bucket can be in a different Amazon Web Services account. Use only with a
     * function defined with a .zip file archive deployment package.</p>
     */
    inline UpdateFunctionCodeRequest& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>An Amazon S3 bucket in the same Amazon Web Services Region as your function.
     * The bucket can be in a different Amazon Web Services account. Use only with a
     * function defined with a .zip file archive deployment package.</p>
     */
    inline UpdateFunctionCodeRequest& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>An Amazon S3 bucket in the same Amazon Web Services Region as your function.
     * The bucket can be in a different Amazon Web Services account. Use only with a
     * function defined with a .zip file archive deployment package.</p>
     */
    inline UpdateFunctionCodeRequest& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The Amazon S3 key of the deployment package. Use only with a function defined
     * with a .zip file archive deployment package.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }

    /**
     * <p>The Amazon S3 key of the deployment package. Use only with a function defined
     * with a .zip file archive deployment package.</p>
     */
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }

    /**
     * <p>The Amazon S3 key of the deployment package. Use only with a function defined
     * with a .zip file archive deployment package.</p>
     */
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }

    /**
     * <p>The Amazon S3 key of the deployment package. Use only with a function defined
     * with a .zip file archive deployment package.</p>
     */
    inline void SetS3Key(Aws::String&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::move(value); }

    /**
     * <p>The Amazon S3 key of the deployment package. Use only with a function defined
     * with a .zip file archive deployment package.</p>
     */
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }

    /**
     * <p>The Amazon S3 key of the deployment package. Use only with a function defined
     * with a .zip file archive deployment package.</p>
     */
    inline UpdateFunctionCodeRequest& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /**
     * <p>The Amazon S3 key of the deployment package. Use only with a function defined
     * with a .zip file archive deployment package.</p>
     */
    inline UpdateFunctionCodeRequest& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 key of the deployment package. Use only with a function defined
     * with a .zip file archive deployment package.</p>
     */
    inline UpdateFunctionCodeRequest& WithS3Key(const char* value) { SetS3Key(value); return *this;}


    /**
     * <p>For versioned objects, the version of the deployment package object to
     * use.</p>
     */
    inline const Aws::String& GetS3ObjectVersion() const{ return m_s3ObjectVersion; }

    /**
     * <p>For versioned objects, the version of the deployment package object to
     * use.</p>
     */
    inline bool S3ObjectVersionHasBeenSet() const { return m_s3ObjectVersionHasBeenSet; }

    /**
     * <p>For versioned objects, the version of the deployment package object to
     * use.</p>
     */
    inline void SetS3ObjectVersion(const Aws::String& value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion = value; }

    /**
     * <p>For versioned objects, the version of the deployment package object to
     * use.</p>
     */
    inline void SetS3ObjectVersion(Aws::String&& value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion = std::move(value); }

    /**
     * <p>For versioned objects, the version of the deployment package object to
     * use.</p>
     */
    inline void SetS3ObjectVersion(const char* value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion.assign(value); }

    /**
     * <p>For versioned objects, the version of the deployment package object to
     * use.</p>
     */
    inline UpdateFunctionCodeRequest& WithS3ObjectVersion(const Aws::String& value) { SetS3ObjectVersion(value); return *this;}

    /**
     * <p>For versioned objects, the version of the deployment package object to
     * use.</p>
     */
    inline UpdateFunctionCodeRequest& WithS3ObjectVersion(Aws::String&& value) { SetS3ObjectVersion(std::move(value)); return *this;}

    /**
     * <p>For versioned objects, the version of the deployment package object to
     * use.</p>
     */
    inline UpdateFunctionCodeRequest& WithS3ObjectVersion(const char* value) { SetS3ObjectVersion(value); return *this;}


    /**
     * <p>URI of a container image in the Amazon ECR registry. Do not use for a
     * function defined with a .zip file archive.</p>
     */
    inline const Aws::String& GetImageUri() const{ return m_imageUri; }

    /**
     * <p>URI of a container image in the Amazon ECR registry. Do not use for a
     * function defined with a .zip file archive.</p>
     */
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }

    /**
     * <p>URI of a container image in the Amazon ECR registry. Do not use for a
     * function defined with a .zip file archive.</p>
     */
    inline void SetImageUri(const Aws::String& value) { m_imageUriHasBeenSet = true; m_imageUri = value; }

    /**
     * <p>URI of a container image in the Amazon ECR registry. Do not use for a
     * function defined with a .zip file archive.</p>
     */
    inline void SetImageUri(Aws::String&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::move(value); }

    /**
     * <p>URI of a container image in the Amazon ECR registry. Do not use for a
     * function defined with a .zip file archive.</p>
     */
    inline void SetImageUri(const char* value) { m_imageUriHasBeenSet = true; m_imageUri.assign(value); }

    /**
     * <p>URI of a container image in the Amazon ECR registry. Do not use for a
     * function defined with a .zip file archive.</p>
     */
    inline UpdateFunctionCodeRequest& WithImageUri(const Aws::String& value) { SetImageUri(value); return *this;}

    /**
     * <p>URI of a container image in the Amazon ECR registry. Do not use for a
     * function defined with a .zip file archive.</p>
     */
    inline UpdateFunctionCodeRequest& WithImageUri(Aws::String&& value) { SetImageUri(std::move(value)); return *this;}

    /**
     * <p>URI of a container image in the Amazon ECR registry. Do not use for a
     * function defined with a .zip file archive.</p>
     */
    inline UpdateFunctionCodeRequest& WithImageUri(const char* value) { SetImageUri(value); return *this;}


    /**
     * <p>Set to true to publish a new version of the function after updating the code.
     * This has the same effect as calling <a>PublishVersion</a> separately.</p>
     */
    inline bool GetPublish() const{ return m_publish; }

    /**
     * <p>Set to true to publish a new version of the function after updating the code.
     * This has the same effect as calling <a>PublishVersion</a> separately.</p>
     */
    inline bool PublishHasBeenSet() const { return m_publishHasBeenSet; }

    /**
     * <p>Set to true to publish a new version of the function after updating the code.
     * This has the same effect as calling <a>PublishVersion</a> separately.</p>
     */
    inline void SetPublish(bool value) { m_publishHasBeenSet = true; m_publish = value; }

    /**
     * <p>Set to true to publish a new version of the function after updating the code.
     * This has the same effect as calling <a>PublishVersion</a> separately.</p>
     */
    inline UpdateFunctionCodeRequest& WithPublish(bool value) { SetPublish(value); return *this;}


    /**
     * <p>Set to true to validate the request parameters and access permissions without
     * modifying the function code.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Set to true to validate the request parameters and access permissions without
     * modifying the function code.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Set to true to validate the request parameters and access permissions without
     * modifying the function code.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Set to true to validate the request parameters and access permissions without
     * modifying the function code.</p>
     */
    inline UpdateFunctionCodeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Update the function only if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a function that has changed since you last
     * read it.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>Update the function only if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a function that has changed since you last
     * read it.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>Update the function only if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a function that has changed since you last
     * read it.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>Update the function only if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a function that has changed since you last
     * read it.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>Update the function only if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a function that has changed since you last
     * read it.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>Update the function only if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a function that has changed since you last
     * read it.</p>
     */
    inline UpdateFunctionCodeRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>Update the function only if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a function that has changed since you last
     * read it.</p>
     */
    inline UpdateFunctionCodeRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>Update the function only if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a function that has changed since you last
     * read it.</p>
     */
    inline UpdateFunctionCodeRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>The instruction set architecture that the function supports. Enter a string
     * array with one of the valid values (arm64 or x86_64). The default value is
     * <code>x86_64</code>.</p>
     */
    inline const Aws::Vector<Architecture>& GetArchitectures() const{ return m_architectures; }

    /**
     * <p>The instruction set architecture that the function supports. Enter a string
     * array with one of the valid values (arm64 or x86_64). The default value is
     * <code>x86_64</code>.</p>
     */
    inline bool ArchitecturesHasBeenSet() const { return m_architecturesHasBeenSet; }

    /**
     * <p>The instruction set architecture that the function supports. Enter a string
     * array with one of the valid values (arm64 or x86_64). The default value is
     * <code>x86_64</code>.</p>
     */
    inline void SetArchitectures(const Aws::Vector<Architecture>& value) { m_architecturesHasBeenSet = true; m_architectures = value; }

    /**
     * <p>The instruction set architecture that the function supports. Enter a string
     * array with one of the valid values (arm64 or x86_64). The default value is
     * <code>x86_64</code>.</p>
     */
    inline void SetArchitectures(Aws::Vector<Architecture>&& value) { m_architecturesHasBeenSet = true; m_architectures = std::move(value); }

    /**
     * <p>The instruction set architecture that the function supports. Enter a string
     * array with one of the valid values (arm64 or x86_64). The default value is
     * <code>x86_64</code>.</p>
     */
    inline UpdateFunctionCodeRequest& WithArchitectures(const Aws::Vector<Architecture>& value) { SetArchitectures(value); return *this;}

    /**
     * <p>The instruction set architecture that the function supports. Enter a string
     * array with one of the valid values (arm64 or x86_64). The default value is
     * <code>x86_64</code>.</p>
     */
    inline UpdateFunctionCodeRequest& WithArchitectures(Aws::Vector<Architecture>&& value) { SetArchitectures(std::move(value)); return *this;}

    /**
     * <p>The instruction set architecture that the function supports. Enter a string
     * array with one of the valid values (arm64 or x86_64). The default value is
     * <code>x86_64</code>.</p>
     */
    inline UpdateFunctionCodeRequest& AddArchitectures(const Architecture& value) { m_architecturesHasBeenSet = true; m_architectures.push_back(value); return *this; }

    /**
     * <p>The instruction set architecture that the function supports. Enter a string
     * array with one of the valid values (arm64 or x86_64). The default value is
     * <code>x86_64</code>.</p>
     */
    inline UpdateFunctionCodeRequest& AddArchitectures(Architecture&& value) { m_architecturesHasBeenSet = true; m_architectures.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_zipFile;
    bool m_zipFileHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;

    Aws::String m_s3ObjectVersion;
    bool m_s3ObjectVersionHasBeenSet = false;

    Aws::String m_imageUri;
    bool m_imageUriHasBeenSet = false;

    bool m_publish;
    bool m_publishHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::Vector<Architecture> m_architectures;
    bool m_architecturesHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
