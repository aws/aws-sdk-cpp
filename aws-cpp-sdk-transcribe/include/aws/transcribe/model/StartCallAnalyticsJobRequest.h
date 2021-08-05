﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/Media.h>
#include <aws/transcribe/model/CallAnalyticsJobSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/ChannelDefinition.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class AWS_TRANSCRIBESERVICE_API StartCallAnalyticsJobRequest : public TranscribeServiceRequest
  {
  public:
    StartCallAnalyticsJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCallAnalyticsJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the call analytics job. You can't use the string "." or ".." by
     * themselves as the job name. The name must also be unique within an AWS account.
     * If you try to create a call analytics job with the same name as a previous call
     * analytics job, you get a <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetCallAnalyticsJobName() const{ return m_callAnalyticsJobName; }

    /**
     * <p>The name of the call analytics job. You can't use the string "." or ".." by
     * themselves as the job name. The name must also be unique within an AWS account.
     * If you try to create a call analytics job with the same name as a previous call
     * analytics job, you get a <code>ConflictException</code> error.</p>
     */
    inline bool CallAnalyticsJobNameHasBeenSet() const { return m_callAnalyticsJobNameHasBeenSet; }

    /**
     * <p>The name of the call analytics job. You can't use the string "." or ".." by
     * themselves as the job name. The name must also be unique within an AWS account.
     * If you try to create a call analytics job with the same name as a previous call
     * analytics job, you get a <code>ConflictException</code> error.</p>
     */
    inline void SetCallAnalyticsJobName(const Aws::String& value) { m_callAnalyticsJobNameHasBeenSet = true; m_callAnalyticsJobName = value; }

    /**
     * <p>The name of the call analytics job. You can't use the string "." or ".." by
     * themselves as the job name. The name must also be unique within an AWS account.
     * If you try to create a call analytics job with the same name as a previous call
     * analytics job, you get a <code>ConflictException</code> error.</p>
     */
    inline void SetCallAnalyticsJobName(Aws::String&& value) { m_callAnalyticsJobNameHasBeenSet = true; m_callAnalyticsJobName = std::move(value); }

    /**
     * <p>The name of the call analytics job. You can't use the string "." or ".." by
     * themselves as the job name. The name must also be unique within an AWS account.
     * If you try to create a call analytics job with the same name as a previous call
     * analytics job, you get a <code>ConflictException</code> error.</p>
     */
    inline void SetCallAnalyticsJobName(const char* value) { m_callAnalyticsJobNameHasBeenSet = true; m_callAnalyticsJobName.assign(value); }

    /**
     * <p>The name of the call analytics job. You can't use the string "." or ".." by
     * themselves as the job name. The name must also be unique within an AWS account.
     * If you try to create a call analytics job with the same name as a previous call
     * analytics job, you get a <code>ConflictException</code> error.</p>
     */
    inline StartCallAnalyticsJobRequest& WithCallAnalyticsJobName(const Aws::String& value) { SetCallAnalyticsJobName(value); return *this;}

    /**
     * <p>The name of the call analytics job. You can't use the string "." or ".." by
     * themselves as the job name. The name must also be unique within an AWS account.
     * If you try to create a call analytics job with the same name as a previous call
     * analytics job, you get a <code>ConflictException</code> error.</p>
     */
    inline StartCallAnalyticsJobRequest& WithCallAnalyticsJobName(Aws::String&& value) { SetCallAnalyticsJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the call analytics job. You can't use the string "." or ".." by
     * themselves as the job name. The name must also be unique within an AWS account.
     * If you try to create a call analytics job with the same name as a previous call
     * analytics job, you get a <code>ConflictException</code> error.</p>
     */
    inline StartCallAnalyticsJobRequest& WithCallAnalyticsJobName(const char* value) { SetCallAnalyticsJobName(value); return *this;}


    
    inline const Media& GetMedia() const{ return m_media; }

    
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }

    
    inline void SetMedia(const Media& value) { m_mediaHasBeenSet = true; m_media = value; }

    
    inline void SetMedia(Media&& value) { m_mediaHasBeenSet = true; m_media = std::move(value); }

    
    inline StartCallAnalyticsJobRequest& WithMedia(const Media& value) { SetMedia(value); return *this;}

    
    inline StartCallAnalyticsJobRequest& WithMedia(Media&& value) { SetMedia(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 location where the output of the call analytics job is stored.
     * You can provide the following location types to store the output of call
     * analytics job:</p> <ul> <li> <p>s3://DOC-EXAMPLE-BUCKET1</p> <p> If you specify
     * a bucket, Amazon Transcribe saves the output of the analytics job as a JSON file
     * at the root level of the bucket.</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET1/folder/</p> <p>f you specify a path, Amazon
     * Transcribe saves the output of the analytics job as
     * s3://DOC-EXAMPLE-BUCKET1/folder/your-transcription-job-name.json</p> <p>If you
     * specify a folder, you must provide a trailing slash.</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET1/folder/filename.json</p> <p> If you provide a path
     * that has the filename specified, Amazon Transcribe saves the output of the
     * analytics job as s3://DOC-EXAMPLEBUCKET1/folder/filename.json</p> </li> </ul>
     * <p>You can specify an AWS Key Management Service key to encrypt the output of
     * our analytics job using the <code>OutputEncryptionKMSKeyId</code> parameter. If
     * you don't specify a KMS key, Amazon Transcribe uses the default Amazon S3 key
     * for server-side encryption of the analytics job output that is placed in your S3
     * bucket. </p>
     */
    inline const Aws::String& GetOutputLocation() const{ return m_outputLocation; }

    /**
     * <p>The Amazon S3 location where the output of the call analytics job is stored.
     * You can provide the following location types to store the output of call
     * analytics job:</p> <ul> <li> <p>s3://DOC-EXAMPLE-BUCKET1</p> <p> If you specify
     * a bucket, Amazon Transcribe saves the output of the analytics job as a JSON file
     * at the root level of the bucket.</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET1/folder/</p> <p>f you specify a path, Amazon
     * Transcribe saves the output of the analytics job as
     * s3://DOC-EXAMPLE-BUCKET1/folder/your-transcription-job-name.json</p> <p>If you
     * specify a folder, you must provide a trailing slash.</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET1/folder/filename.json</p> <p> If you provide a path
     * that has the filename specified, Amazon Transcribe saves the output of the
     * analytics job as s3://DOC-EXAMPLEBUCKET1/folder/filename.json</p> </li> </ul>
     * <p>You can specify an AWS Key Management Service key to encrypt the output of
     * our analytics job using the <code>OutputEncryptionKMSKeyId</code> parameter. If
     * you don't specify a KMS key, Amazon Transcribe uses the default Amazon S3 key
     * for server-side encryption of the analytics job output that is placed in your S3
     * bucket. </p>
     */
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }

    /**
     * <p>The Amazon S3 location where the output of the call analytics job is stored.
     * You can provide the following location types to store the output of call
     * analytics job:</p> <ul> <li> <p>s3://DOC-EXAMPLE-BUCKET1</p> <p> If you specify
     * a bucket, Amazon Transcribe saves the output of the analytics job as a JSON file
     * at the root level of the bucket.</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET1/folder/</p> <p>f you specify a path, Amazon
     * Transcribe saves the output of the analytics job as
     * s3://DOC-EXAMPLE-BUCKET1/folder/your-transcription-job-name.json</p> <p>If you
     * specify a folder, you must provide a trailing slash.</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET1/folder/filename.json</p> <p> If you provide a path
     * that has the filename specified, Amazon Transcribe saves the output of the
     * analytics job as s3://DOC-EXAMPLEBUCKET1/folder/filename.json</p> </li> </ul>
     * <p>You can specify an AWS Key Management Service key to encrypt the output of
     * our analytics job using the <code>OutputEncryptionKMSKeyId</code> parameter. If
     * you don't specify a KMS key, Amazon Transcribe uses the default Amazon S3 key
     * for server-side encryption of the analytics job output that is placed in your S3
     * bucket. </p>
     */
    inline void SetOutputLocation(const Aws::String& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    /**
     * <p>The Amazon S3 location where the output of the call analytics job is stored.
     * You can provide the following location types to store the output of call
     * analytics job:</p> <ul> <li> <p>s3://DOC-EXAMPLE-BUCKET1</p> <p> If you specify
     * a bucket, Amazon Transcribe saves the output of the analytics job as a JSON file
     * at the root level of the bucket.</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET1/folder/</p> <p>f you specify a path, Amazon
     * Transcribe saves the output of the analytics job as
     * s3://DOC-EXAMPLE-BUCKET1/folder/your-transcription-job-name.json</p> <p>If you
     * specify a folder, you must provide a trailing slash.</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET1/folder/filename.json</p> <p> If you provide a path
     * that has the filename specified, Amazon Transcribe saves the output of the
     * analytics job as s3://DOC-EXAMPLEBUCKET1/folder/filename.json</p> </li> </ul>
     * <p>You can specify an AWS Key Management Service key to encrypt the output of
     * our analytics job using the <code>OutputEncryptionKMSKeyId</code> parameter. If
     * you don't specify a KMS key, Amazon Transcribe uses the default Amazon S3 key
     * for server-side encryption of the analytics job output that is placed in your S3
     * bucket. </p>
     */
    inline void SetOutputLocation(Aws::String&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }

    /**
     * <p>The Amazon S3 location where the output of the call analytics job is stored.
     * You can provide the following location types to store the output of call
     * analytics job:</p> <ul> <li> <p>s3://DOC-EXAMPLE-BUCKET1</p> <p> If you specify
     * a bucket, Amazon Transcribe saves the output of the analytics job as a JSON file
     * at the root level of the bucket.</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET1/folder/</p> <p>f you specify a path, Amazon
     * Transcribe saves the output of the analytics job as
     * s3://DOC-EXAMPLE-BUCKET1/folder/your-transcription-job-name.json</p> <p>If you
     * specify a folder, you must provide a trailing slash.</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET1/folder/filename.json</p> <p> If you provide a path
     * that has the filename specified, Amazon Transcribe saves the output of the
     * analytics job as s3://DOC-EXAMPLEBUCKET1/folder/filename.json</p> </li> </ul>
     * <p>You can specify an AWS Key Management Service key to encrypt the output of
     * our analytics job using the <code>OutputEncryptionKMSKeyId</code> parameter. If
     * you don't specify a KMS key, Amazon Transcribe uses the default Amazon S3 key
     * for server-side encryption of the analytics job output that is placed in your S3
     * bucket. </p>
     */
    inline void SetOutputLocation(const char* value) { m_outputLocationHasBeenSet = true; m_outputLocation.assign(value); }

    /**
     * <p>The Amazon S3 location where the output of the call analytics job is stored.
     * You can provide the following location types to store the output of call
     * analytics job:</p> <ul> <li> <p>s3://DOC-EXAMPLE-BUCKET1</p> <p> If you specify
     * a bucket, Amazon Transcribe saves the output of the analytics job as a JSON file
     * at the root level of the bucket.</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET1/folder/</p> <p>f you specify a path, Amazon
     * Transcribe saves the output of the analytics job as
     * s3://DOC-EXAMPLE-BUCKET1/folder/your-transcription-job-name.json</p> <p>If you
     * specify a folder, you must provide a trailing slash.</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET1/folder/filename.json</p> <p> If you provide a path
     * that has the filename specified, Amazon Transcribe saves the output of the
     * analytics job as s3://DOC-EXAMPLEBUCKET1/folder/filename.json</p> </li> </ul>
     * <p>You can specify an AWS Key Management Service key to encrypt the output of
     * our analytics job using the <code>OutputEncryptionKMSKeyId</code> parameter. If
     * you don't specify a KMS key, Amazon Transcribe uses the default Amazon S3 key
     * for server-side encryption of the analytics job output that is placed in your S3
     * bucket. </p>
     */
    inline StartCallAnalyticsJobRequest& WithOutputLocation(const Aws::String& value) { SetOutputLocation(value); return *this;}

    /**
     * <p>The Amazon S3 location where the output of the call analytics job is stored.
     * You can provide the following location types to store the output of call
     * analytics job:</p> <ul> <li> <p>s3://DOC-EXAMPLE-BUCKET1</p> <p> If you specify
     * a bucket, Amazon Transcribe saves the output of the analytics job as a JSON file
     * at the root level of the bucket.</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET1/folder/</p> <p>f you specify a path, Amazon
     * Transcribe saves the output of the analytics job as
     * s3://DOC-EXAMPLE-BUCKET1/folder/your-transcription-job-name.json</p> <p>If you
     * specify a folder, you must provide a trailing slash.</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET1/folder/filename.json</p> <p> If you provide a path
     * that has the filename specified, Amazon Transcribe saves the output of the
     * analytics job as s3://DOC-EXAMPLEBUCKET1/folder/filename.json</p> </li> </ul>
     * <p>You can specify an AWS Key Management Service key to encrypt the output of
     * our analytics job using the <code>OutputEncryptionKMSKeyId</code> parameter. If
     * you don't specify a KMS key, Amazon Transcribe uses the default Amazon S3 key
     * for server-side encryption of the analytics job output that is placed in your S3
     * bucket. </p>
     */
    inline StartCallAnalyticsJobRequest& WithOutputLocation(Aws::String&& value) { SetOutputLocation(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location where the output of the call analytics job is stored.
     * You can provide the following location types to store the output of call
     * analytics job:</p> <ul> <li> <p>s3://DOC-EXAMPLE-BUCKET1</p> <p> If you specify
     * a bucket, Amazon Transcribe saves the output of the analytics job as a JSON file
     * at the root level of the bucket.</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET1/folder/</p> <p>f you specify a path, Amazon
     * Transcribe saves the output of the analytics job as
     * s3://DOC-EXAMPLE-BUCKET1/folder/your-transcription-job-name.json</p> <p>If you
     * specify a folder, you must provide a trailing slash.</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET1/folder/filename.json</p> <p> If you provide a path
     * that has the filename specified, Amazon Transcribe saves the output of the
     * analytics job as s3://DOC-EXAMPLEBUCKET1/folder/filename.json</p> </li> </ul>
     * <p>You can specify an AWS Key Management Service key to encrypt the output of
     * our analytics job using the <code>OutputEncryptionKMSKeyId</code> parameter. If
     * you don't specify a KMS key, Amazon Transcribe uses the default Amazon S3 key
     * for server-side encryption of the analytics job output that is placed in your S3
     * bucket. </p>
     */
    inline StartCallAnalyticsJobRequest& WithOutputLocation(const char* value) { SetOutputLocation(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service key used to
     * encrypt the output of the call analytics job. The user calling the operation
     * must have permission to use the specified KMS key.</p> <p>You use either of the
     * following to identify an AWS KMS key in the current account:</p> <ul> <li>
     * <p>KMS Key ID: "1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>KMS Key
     * Alias: "alias/ExampleAlias"</p> </li> </ul> <p> You can use either of the
     * following to identify a KMS key in the current account or another account:</p>
     * <ul> <li> <p>Amazon Resource Name (ARN) of a KMS key in the current account or
     * another account: "arn:aws:kms:region:account
     * ID:key/1234abcd-12ab-34cd-56ef1234567890ab"</p> </li> <li> <p>ARN of a KMS Key
     * Alias: "arn:aws:kms:region:account ID:alias/ExampleAlias"</p> </li> </ul> <p>If
     * you don't specify an encryption key, the output of the call analytics job is
     * encrypted with the default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS
     * key to encrypt your output, you must also specify an output location in the
     * <code>OutputLocation</code> parameter. </p>
     */
    inline const Aws::String& GetOutputEncryptionKMSKeyId() const{ return m_outputEncryptionKMSKeyId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service key used to
     * encrypt the output of the call analytics job. The user calling the operation
     * must have permission to use the specified KMS key.</p> <p>You use either of the
     * following to identify an AWS KMS key in the current account:</p> <ul> <li>
     * <p>KMS Key ID: "1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>KMS Key
     * Alias: "alias/ExampleAlias"</p> </li> </ul> <p> You can use either of the
     * following to identify a KMS key in the current account or another account:</p>
     * <ul> <li> <p>Amazon Resource Name (ARN) of a KMS key in the current account or
     * another account: "arn:aws:kms:region:account
     * ID:key/1234abcd-12ab-34cd-56ef1234567890ab"</p> </li> <li> <p>ARN of a KMS Key
     * Alias: "arn:aws:kms:region:account ID:alias/ExampleAlias"</p> </li> </ul> <p>If
     * you don't specify an encryption key, the output of the call analytics job is
     * encrypted with the default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS
     * key to encrypt your output, you must also specify an output location in the
     * <code>OutputLocation</code> parameter. </p>
     */
    inline bool OutputEncryptionKMSKeyIdHasBeenSet() const { return m_outputEncryptionKMSKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service key used to
     * encrypt the output of the call analytics job. The user calling the operation
     * must have permission to use the specified KMS key.</p> <p>You use either of the
     * following to identify an AWS KMS key in the current account:</p> <ul> <li>
     * <p>KMS Key ID: "1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>KMS Key
     * Alias: "alias/ExampleAlias"</p> </li> </ul> <p> You can use either of the
     * following to identify a KMS key in the current account or another account:</p>
     * <ul> <li> <p>Amazon Resource Name (ARN) of a KMS key in the current account or
     * another account: "arn:aws:kms:region:account
     * ID:key/1234abcd-12ab-34cd-56ef1234567890ab"</p> </li> <li> <p>ARN of a KMS Key
     * Alias: "arn:aws:kms:region:account ID:alias/ExampleAlias"</p> </li> </ul> <p>If
     * you don't specify an encryption key, the output of the call analytics job is
     * encrypted with the default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS
     * key to encrypt your output, you must also specify an output location in the
     * <code>OutputLocation</code> parameter. </p>
     */
    inline void SetOutputEncryptionKMSKeyId(const Aws::String& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service key used to
     * encrypt the output of the call analytics job. The user calling the operation
     * must have permission to use the specified KMS key.</p> <p>You use either of the
     * following to identify an AWS KMS key in the current account:</p> <ul> <li>
     * <p>KMS Key ID: "1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>KMS Key
     * Alias: "alias/ExampleAlias"</p> </li> </ul> <p> You can use either of the
     * following to identify a KMS key in the current account or another account:</p>
     * <ul> <li> <p>Amazon Resource Name (ARN) of a KMS key in the current account or
     * another account: "arn:aws:kms:region:account
     * ID:key/1234abcd-12ab-34cd-56ef1234567890ab"</p> </li> <li> <p>ARN of a KMS Key
     * Alias: "arn:aws:kms:region:account ID:alias/ExampleAlias"</p> </li> </ul> <p>If
     * you don't specify an encryption key, the output of the call analytics job is
     * encrypted with the default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS
     * key to encrypt your output, you must also specify an output location in the
     * <code>OutputLocation</code> parameter. </p>
     */
    inline void SetOutputEncryptionKMSKeyId(Aws::String&& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service key used to
     * encrypt the output of the call analytics job. The user calling the operation
     * must have permission to use the specified KMS key.</p> <p>You use either of the
     * following to identify an AWS KMS key in the current account:</p> <ul> <li>
     * <p>KMS Key ID: "1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>KMS Key
     * Alias: "alias/ExampleAlias"</p> </li> </ul> <p> You can use either of the
     * following to identify a KMS key in the current account or another account:</p>
     * <ul> <li> <p>Amazon Resource Name (ARN) of a KMS key in the current account or
     * another account: "arn:aws:kms:region:account
     * ID:key/1234abcd-12ab-34cd-56ef1234567890ab"</p> </li> <li> <p>ARN of a KMS Key
     * Alias: "arn:aws:kms:region:account ID:alias/ExampleAlias"</p> </li> </ul> <p>If
     * you don't specify an encryption key, the output of the call analytics job is
     * encrypted with the default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS
     * key to encrypt your output, you must also specify an output location in the
     * <code>OutputLocation</code> parameter. </p>
     */
    inline void SetOutputEncryptionKMSKeyId(const char* value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service key used to
     * encrypt the output of the call analytics job. The user calling the operation
     * must have permission to use the specified KMS key.</p> <p>You use either of the
     * following to identify an AWS KMS key in the current account:</p> <ul> <li>
     * <p>KMS Key ID: "1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>KMS Key
     * Alias: "alias/ExampleAlias"</p> </li> </ul> <p> You can use either of the
     * following to identify a KMS key in the current account or another account:</p>
     * <ul> <li> <p>Amazon Resource Name (ARN) of a KMS key in the current account or
     * another account: "arn:aws:kms:region:account
     * ID:key/1234abcd-12ab-34cd-56ef1234567890ab"</p> </li> <li> <p>ARN of a KMS Key
     * Alias: "arn:aws:kms:region:account ID:alias/ExampleAlias"</p> </li> </ul> <p>If
     * you don't specify an encryption key, the output of the call analytics job is
     * encrypted with the default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS
     * key to encrypt your output, you must also specify an output location in the
     * <code>OutputLocation</code> parameter. </p>
     */
    inline StartCallAnalyticsJobRequest& WithOutputEncryptionKMSKeyId(const Aws::String& value) { SetOutputEncryptionKMSKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service key used to
     * encrypt the output of the call analytics job. The user calling the operation
     * must have permission to use the specified KMS key.</p> <p>You use either of the
     * following to identify an AWS KMS key in the current account:</p> <ul> <li>
     * <p>KMS Key ID: "1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>KMS Key
     * Alias: "alias/ExampleAlias"</p> </li> </ul> <p> You can use either of the
     * following to identify a KMS key in the current account or another account:</p>
     * <ul> <li> <p>Amazon Resource Name (ARN) of a KMS key in the current account or
     * another account: "arn:aws:kms:region:account
     * ID:key/1234abcd-12ab-34cd-56ef1234567890ab"</p> </li> <li> <p>ARN of a KMS Key
     * Alias: "arn:aws:kms:region:account ID:alias/ExampleAlias"</p> </li> </ul> <p>If
     * you don't specify an encryption key, the output of the call analytics job is
     * encrypted with the default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS
     * key to encrypt your output, you must also specify an output location in the
     * <code>OutputLocation</code> parameter. </p>
     */
    inline StartCallAnalyticsJobRequest& WithOutputEncryptionKMSKeyId(Aws::String&& value) { SetOutputEncryptionKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service key used to
     * encrypt the output of the call analytics job. The user calling the operation
     * must have permission to use the specified KMS key.</p> <p>You use either of the
     * following to identify an AWS KMS key in the current account:</p> <ul> <li>
     * <p>KMS Key ID: "1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>KMS Key
     * Alias: "alias/ExampleAlias"</p> </li> </ul> <p> You can use either of the
     * following to identify a KMS key in the current account or another account:</p>
     * <ul> <li> <p>Amazon Resource Name (ARN) of a KMS key in the current account or
     * another account: "arn:aws:kms:region:account
     * ID:key/1234abcd-12ab-34cd-56ef1234567890ab"</p> </li> <li> <p>ARN of a KMS Key
     * Alias: "arn:aws:kms:region:account ID:alias/ExampleAlias"</p> </li> </ul> <p>If
     * you don't specify an encryption key, the output of the call analytics job is
     * encrypted with the default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS
     * key to encrypt your output, you must also specify an output location in the
     * <code>OutputLocation</code> parameter. </p>
     */
    inline StartCallAnalyticsJobRequest& WithOutputEncryptionKMSKeyId(const char* value) { SetOutputEncryptionKMSKeyId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a role that has access to the S3 bucket
     * that contains your input files. Amazon Transcribe assumes this role to read
     * queued audio files. If you have specified an output S3 bucket for your
     * transcription results, this role should have access to the output bucket as
     * well.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that has access to the S3 bucket
     * that contains your input files. Amazon Transcribe assumes this role to read
     * queued audio files. If you have specified an output S3 bucket for your
     * transcription results, this role should have access to the output bucket as
     * well.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that has access to the S3 bucket
     * that contains your input files. Amazon Transcribe assumes this role to read
     * queued audio files. If you have specified an output S3 bucket for your
     * transcription results, this role should have access to the output bucket as
     * well.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that has access to the S3 bucket
     * that contains your input files. Amazon Transcribe assumes this role to read
     * queued audio files. If you have specified an output S3 bucket for your
     * transcription results, this role should have access to the output bucket as
     * well.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that has access to the S3 bucket
     * that contains your input files. Amazon Transcribe assumes this role to read
     * queued audio files. If you have specified an output S3 bucket for your
     * transcription results, this role should have access to the output bucket as
     * well.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that has access to the S3 bucket
     * that contains your input files. Amazon Transcribe assumes this role to read
     * queued audio files. If you have specified an output S3 bucket for your
     * transcription results, this role should have access to the output bucket as
     * well.</p>
     */
    inline StartCallAnalyticsJobRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role that has access to the S3 bucket
     * that contains your input files. Amazon Transcribe assumes this role to read
     * queued audio files. If you have specified an output S3 bucket for your
     * transcription results, this role should have access to the output bucket as
     * well.</p>
     */
    inline StartCallAnalyticsJobRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role that has access to the S3 bucket
     * that contains your input files. Amazon Transcribe assumes this role to read
     * queued audio files. If you have specified an output S3 bucket for your
     * transcription results, this role should have access to the output bucket as
     * well.</p>
     */
    inline StartCallAnalyticsJobRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>A <code>Settings</code> object that provides optional settings for a call
     * analytics job. </p>
     */
    inline const CallAnalyticsJobSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>A <code>Settings</code> object that provides optional settings for a call
     * analytics job. </p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>A <code>Settings</code> object that provides optional settings for a call
     * analytics job. </p>
     */
    inline void SetSettings(const CallAnalyticsJobSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>A <code>Settings</code> object that provides optional settings for a call
     * analytics job. </p>
     */
    inline void SetSettings(CallAnalyticsJobSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>A <code>Settings</code> object that provides optional settings for a call
     * analytics job. </p>
     */
    inline StartCallAnalyticsJobRequest& WithSettings(const CallAnalyticsJobSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>A <code>Settings</code> object that provides optional settings for a call
     * analytics job. </p>
     */
    inline StartCallAnalyticsJobRequest& WithSettings(CallAnalyticsJobSettings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * <p>When you start a call analytics job, you must pass an array that maps the
     * agent and the customer to specific audio channels. The values you can assign to
     * a channel are 0 and 1. The agent and the customer must each have their own
     * channel. You can't assign more than one channel to an agent or customer. </p>
     */
    inline const Aws::Vector<ChannelDefinition>& GetChannelDefinitions() const{ return m_channelDefinitions; }

    /**
     * <p>When you start a call analytics job, you must pass an array that maps the
     * agent and the customer to specific audio channels. The values you can assign to
     * a channel are 0 and 1. The agent and the customer must each have their own
     * channel. You can't assign more than one channel to an agent or customer. </p>
     */
    inline bool ChannelDefinitionsHasBeenSet() const { return m_channelDefinitionsHasBeenSet; }

    /**
     * <p>When you start a call analytics job, you must pass an array that maps the
     * agent and the customer to specific audio channels. The values you can assign to
     * a channel are 0 and 1. The agent and the customer must each have their own
     * channel. You can't assign more than one channel to an agent or customer. </p>
     */
    inline void SetChannelDefinitions(const Aws::Vector<ChannelDefinition>& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = value; }

    /**
     * <p>When you start a call analytics job, you must pass an array that maps the
     * agent and the customer to specific audio channels. The values you can assign to
     * a channel are 0 and 1. The agent and the customer must each have their own
     * channel. You can't assign more than one channel to an agent or customer. </p>
     */
    inline void SetChannelDefinitions(Aws::Vector<ChannelDefinition>&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = std::move(value); }

    /**
     * <p>When you start a call analytics job, you must pass an array that maps the
     * agent and the customer to specific audio channels. The values you can assign to
     * a channel are 0 and 1. The agent and the customer must each have their own
     * channel. You can't assign more than one channel to an agent or customer. </p>
     */
    inline StartCallAnalyticsJobRequest& WithChannelDefinitions(const Aws::Vector<ChannelDefinition>& value) { SetChannelDefinitions(value); return *this;}

    /**
     * <p>When you start a call analytics job, you must pass an array that maps the
     * agent and the customer to specific audio channels. The values you can assign to
     * a channel are 0 and 1. The agent and the customer must each have their own
     * channel. You can't assign more than one channel to an agent or customer. </p>
     */
    inline StartCallAnalyticsJobRequest& WithChannelDefinitions(Aws::Vector<ChannelDefinition>&& value) { SetChannelDefinitions(std::move(value)); return *this;}

    /**
     * <p>When you start a call analytics job, you must pass an array that maps the
     * agent and the customer to specific audio channels. The values you can assign to
     * a channel are 0 and 1. The agent and the customer must each have their own
     * channel. You can't assign more than one channel to an agent or customer. </p>
     */
    inline StartCallAnalyticsJobRequest& AddChannelDefinitions(const ChannelDefinition& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.push_back(value); return *this; }

    /**
     * <p>When you start a call analytics job, you must pass an array that maps the
     * agent and the customer to specific audio channels. The values you can assign to
     * a channel are 0 and 1. The agent and the customer must each have their own
     * channel. You can't assign more than one channel to an agent or customer. </p>
     */
    inline StartCallAnalyticsJobRequest& AddChannelDefinitions(ChannelDefinition&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_callAnalyticsJobName;
    bool m_callAnalyticsJobNameHasBeenSet;

    Media m_media;
    bool m_mediaHasBeenSet;

    Aws::String m_outputLocation;
    bool m_outputLocationHasBeenSet;

    Aws::String m_outputEncryptionKMSKeyId;
    bool m_outputEncryptionKMSKeyIdHasBeenSet;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet;

    CallAnalyticsJobSettings m_settings;
    bool m_settingsHasBeenSet;

    Aws::Vector<ChannelDefinition> m_channelDefinitions;
    bool m_channelDefinitionsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
