/**
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
  class StartCallAnalyticsJobRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API StartCallAnalyticsJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCallAnalyticsJob"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique name, chosen by you, for your Call Analytics job.</p> <p>This name
     * is case sensitive, cannot contain spaces, and must be unique within an Amazon
     * Web Services account. If you try to create a new job with the same name as an
     * existing job, you get a <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetCallAnalyticsJobName() const{ return m_callAnalyticsJobName; }

    /**
     * <p>A unique name, chosen by you, for your Call Analytics job.</p> <p>This name
     * is case sensitive, cannot contain spaces, and must be unique within an Amazon
     * Web Services account. If you try to create a new job with the same name as an
     * existing job, you get a <code>ConflictException</code> error.</p>
     */
    inline bool CallAnalyticsJobNameHasBeenSet() const { return m_callAnalyticsJobNameHasBeenSet; }

    /**
     * <p>A unique name, chosen by you, for your Call Analytics job.</p> <p>This name
     * is case sensitive, cannot contain spaces, and must be unique within an Amazon
     * Web Services account. If you try to create a new job with the same name as an
     * existing job, you get a <code>ConflictException</code> error.</p>
     */
    inline void SetCallAnalyticsJobName(const Aws::String& value) { m_callAnalyticsJobNameHasBeenSet = true; m_callAnalyticsJobName = value; }

    /**
     * <p>A unique name, chosen by you, for your Call Analytics job.</p> <p>This name
     * is case sensitive, cannot contain spaces, and must be unique within an Amazon
     * Web Services account. If you try to create a new job with the same name as an
     * existing job, you get a <code>ConflictException</code> error.</p>
     */
    inline void SetCallAnalyticsJobName(Aws::String&& value) { m_callAnalyticsJobNameHasBeenSet = true; m_callAnalyticsJobName = std::move(value); }

    /**
     * <p>A unique name, chosen by you, for your Call Analytics job.</p> <p>This name
     * is case sensitive, cannot contain spaces, and must be unique within an Amazon
     * Web Services account. If you try to create a new job with the same name as an
     * existing job, you get a <code>ConflictException</code> error.</p>
     */
    inline void SetCallAnalyticsJobName(const char* value) { m_callAnalyticsJobNameHasBeenSet = true; m_callAnalyticsJobName.assign(value); }

    /**
     * <p>A unique name, chosen by you, for your Call Analytics job.</p> <p>This name
     * is case sensitive, cannot contain spaces, and must be unique within an Amazon
     * Web Services account. If you try to create a new job with the same name as an
     * existing job, you get a <code>ConflictException</code> error.</p>
     */
    inline StartCallAnalyticsJobRequest& WithCallAnalyticsJobName(const Aws::String& value) { SetCallAnalyticsJobName(value); return *this;}

    /**
     * <p>A unique name, chosen by you, for your Call Analytics job.</p> <p>This name
     * is case sensitive, cannot contain spaces, and must be unique within an Amazon
     * Web Services account. If you try to create a new job with the same name as an
     * existing job, you get a <code>ConflictException</code> error.</p>
     */
    inline StartCallAnalyticsJobRequest& WithCallAnalyticsJobName(Aws::String&& value) { SetCallAnalyticsJobName(std::move(value)); return *this;}

    /**
     * <p>A unique name, chosen by you, for your Call Analytics job.</p> <p>This name
     * is case sensitive, cannot contain spaces, and must be unique within an Amazon
     * Web Services account. If you try to create a new job with the same name as an
     * existing job, you get a <code>ConflictException</code> error.</p>
     */
    inline StartCallAnalyticsJobRequest& WithCallAnalyticsJobName(const char* value) { SetCallAnalyticsJobName(value); return *this;}


    /**
     * <p>Describes the Amazon S3 location of the media file you want to use in your
     * Call Analytics request.</p>
     */
    inline const Media& GetMedia() const{ return m_media; }

    /**
     * <p>Describes the Amazon S3 location of the media file you want to use in your
     * Call Analytics request.</p>
     */
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }

    /**
     * <p>Describes the Amazon S3 location of the media file you want to use in your
     * Call Analytics request.</p>
     */
    inline void SetMedia(const Media& value) { m_mediaHasBeenSet = true; m_media = value; }

    /**
     * <p>Describes the Amazon S3 location of the media file you want to use in your
     * Call Analytics request.</p>
     */
    inline void SetMedia(Media&& value) { m_mediaHasBeenSet = true; m_media = std::move(value); }

    /**
     * <p>Describes the Amazon S3 location of the media file you want to use in your
     * Call Analytics request.</p>
     */
    inline StartCallAnalyticsJobRequest& WithMedia(const Media& value) { SetMedia(value); return *this;}

    /**
     * <p>Describes the Amazon S3 location of the media file you want to use in your
     * Call Analytics request.</p>
     */
    inline StartCallAnalyticsJobRequest& WithMedia(Media&& value) { SetMedia(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 location where you want your Call Analytics transcription
     * output stored. You can use any of the following formats to specify the output
     * location:</p> <ol> <li> <p>s3://DOC-EXAMPLE-BUCKET</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/my-call-analytics-job.json</p> </li>
     * </ol> <p>Unless you specify a file name (option 3), the name of your output file
     * has a default value that matches the name you specified for your transcription
     * job using the <code>CallAnalyticsJobName</code> parameter.</p> <p>You can
     * specify a KMS key to encrypt your output using the
     * <code>OutputEncryptionKMSKeyId</code> parameter. If you don't specify a KMS key,
     * Amazon Transcribe uses the default Amazon S3 key for server-side encryption.</p>
     * <p>If you don't specify <code>OutputLocation</code>, your transcript is placed
     * in a service-managed Amazon S3 bucket and you are provided with a URI to access
     * your transcript.</p>
     */
    inline const Aws::String& GetOutputLocation() const{ return m_outputLocation; }

    /**
     * <p>The Amazon S3 location where you want your Call Analytics transcription
     * output stored. You can use any of the following formats to specify the output
     * location:</p> <ol> <li> <p>s3://DOC-EXAMPLE-BUCKET</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/my-call-analytics-job.json</p> </li>
     * </ol> <p>Unless you specify a file name (option 3), the name of your output file
     * has a default value that matches the name you specified for your transcription
     * job using the <code>CallAnalyticsJobName</code> parameter.</p> <p>You can
     * specify a KMS key to encrypt your output using the
     * <code>OutputEncryptionKMSKeyId</code> parameter. If you don't specify a KMS key,
     * Amazon Transcribe uses the default Amazon S3 key for server-side encryption.</p>
     * <p>If you don't specify <code>OutputLocation</code>, your transcript is placed
     * in a service-managed Amazon S3 bucket and you are provided with a URI to access
     * your transcript.</p>
     */
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }

    /**
     * <p>The Amazon S3 location where you want your Call Analytics transcription
     * output stored. You can use any of the following formats to specify the output
     * location:</p> <ol> <li> <p>s3://DOC-EXAMPLE-BUCKET</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/my-call-analytics-job.json</p> </li>
     * </ol> <p>Unless you specify a file name (option 3), the name of your output file
     * has a default value that matches the name you specified for your transcription
     * job using the <code>CallAnalyticsJobName</code> parameter.</p> <p>You can
     * specify a KMS key to encrypt your output using the
     * <code>OutputEncryptionKMSKeyId</code> parameter. If you don't specify a KMS key,
     * Amazon Transcribe uses the default Amazon S3 key for server-side encryption.</p>
     * <p>If you don't specify <code>OutputLocation</code>, your transcript is placed
     * in a service-managed Amazon S3 bucket and you are provided with a URI to access
     * your transcript.</p>
     */
    inline void SetOutputLocation(const Aws::String& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    /**
     * <p>The Amazon S3 location where you want your Call Analytics transcription
     * output stored. You can use any of the following formats to specify the output
     * location:</p> <ol> <li> <p>s3://DOC-EXAMPLE-BUCKET</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/my-call-analytics-job.json</p> </li>
     * </ol> <p>Unless you specify a file name (option 3), the name of your output file
     * has a default value that matches the name you specified for your transcription
     * job using the <code>CallAnalyticsJobName</code> parameter.</p> <p>You can
     * specify a KMS key to encrypt your output using the
     * <code>OutputEncryptionKMSKeyId</code> parameter. If you don't specify a KMS key,
     * Amazon Transcribe uses the default Amazon S3 key for server-side encryption.</p>
     * <p>If you don't specify <code>OutputLocation</code>, your transcript is placed
     * in a service-managed Amazon S3 bucket and you are provided with a URI to access
     * your transcript.</p>
     */
    inline void SetOutputLocation(Aws::String&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }

    /**
     * <p>The Amazon S3 location where you want your Call Analytics transcription
     * output stored. You can use any of the following formats to specify the output
     * location:</p> <ol> <li> <p>s3://DOC-EXAMPLE-BUCKET</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/my-call-analytics-job.json</p> </li>
     * </ol> <p>Unless you specify a file name (option 3), the name of your output file
     * has a default value that matches the name you specified for your transcription
     * job using the <code>CallAnalyticsJobName</code> parameter.</p> <p>You can
     * specify a KMS key to encrypt your output using the
     * <code>OutputEncryptionKMSKeyId</code> parameter. If you don't specify a KMS key,
     * Amazon Transcribe uses the default Amazon S3 key for server-side encryption.</p>
     * <p>If you don't specify <code>OutputLocation</code>, your transcript is placed
     * in a service-managed Amazon S3 bucket and you are provided with a URI to access
     * your transcript.</p>
     */
    inline void SetOutputLocation(const char* value) { m_outputLocationHasBeenSet = true; m_outputLocation.assign(value); }

    /**
     * <p>The Amazon S3 location where you want your Call Analytics transcription
     * output stored. You can use any of the following formats to specify the output
     * location:</p> <ol> <li> <p>s3://DOC-EXAMPLE-BUCKET</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/my-call-analytics-job.json</p> </li>
     * </ol> <p>Unless you specify a file name (option 3), the name of your output file
     * has a default value that matches the name you specified for your transcription
     * job using the <code>CallAnalyticsJobName</code> parameter.</p> <p>You can
     * specify a KMS key to encrypt your output using the
     * <code>OutputEncryptionKMSKeyId</code> parameter. If you don't specify a KMS key,
     * Amazon Transcribe uses the default Amazon S3 key for server-side encryption.</p>
     * <p>If you don't specify <code>OutputLocation</code>, your transcript is placed
     * in a service-managed Amazon S3 bucket and you are provided with a URI to access
     * your transcript.</p>
     */
    inline StartCallAnalyticsJobRequest& WithOutputLocation(const Aws::String& value) { SetOutputLocation(value); return *this;}

    /**
     * <p>The Amazon S3 location where you want your Call Analytics transcription
     * output stored. You can use any of the following formats to specify the output
     * location:</p> <ol> <li> <p>s3://DOC-EXAMPLE-BUCKET</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/my-call-analytics-job.json</p> </li>
     * </ol> <p>Unless you specify a file name (option 3), the name of your output file
     * has a default value that matches the name you specified for your transcription
     * job using the <code>CallAnalyticsJobName</code> parameter.</p> <p>You can
     * specify a KMS key to encrypt your output using the
     * <code>OutputEncryptionKMSKeyId</code> parameter. If you don't specify a KMS key,
     * Amazon Transcribe uses the default Amazon S3 key for server-side encryption.</p>
     * <p>If you don't specify <code>OutputLocation</code>, your transcript is placed
     * in a service-managed Amazon S3 bucket and you are provided with a URI to access
     * your transcript.</p>
     */
    inline StartCallAnalyticsJobRequest& WithOutputLocation(Aws::String&& value) { SetOutputLocation(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location where you want your Call Analytics transcription
     * output stored. You can use any of the following formats to specify the output
     * location:</p> <ol> <li> <p>s3://DOC-EXAMPLE-BUCKET</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/my-call-analytics-job.json</p> </li>
     * </ol> <p>Unless you specify a file name (option 3), the name of your output file
     * has a default value that matches the name you specified for your transcription
     * job using the <code>CallAnalyticsJobName</code> parameter.</p> <p>You can
     * specify a KMS key to encrypt your output using the
     * <code>OutputEncryptionKMSKeyId</code> parameter. If you don't specify a KMS key,
     * Amazon Transcribe uses the default Amazon S3 key for server-side encryption.</p>
     * <p>If you don't specify <code>OutputLocation</code>, your transcript is placed
     * in a service-managed Amazon S3 bucket and you are provided with a URI to access
     * your transcript.</p>
     */
    inline StartCallAnalyticsJobRequest& WithOutputLocation(const char* value) { SetOutputLocation(value); return *this;}


    /**
     * <p>The KMS key you want to use to encrypt your Call Analytics output.</p> <p>If
     * using a key located in the <b>current</b> Amazon Web Services account, you can
     * specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key ID
     * itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you don't specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS key to encrypt your
     * output, you must also specify an output location using the
     * <code>OutputLocation</code> parameter.</p> <p>Note that the user making the
     * request must have permission to use the specified KMS key.</p>
     */
    inline const Aws::String& GetOutputEncryptionKMSKeyId() const{ return m_outputEncryptionKMSKeyId; }

    /**
     * <p>The KMS key you want to use to encrypt your Call Analytics output.</p> <p>If
     * using a key located in the <b>current</b> Amazon Web Services account, you can
     * specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key ID
     * itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you don't specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS key to encrypt your
     * output, you must also specify an output location using the
     * <code>OutputLocation</code> parameter.</p> <p>Note that the user making the
     * request must have permission to use the specified KMS key.</p>
     */
    inline bool OutputEncryptionKMSKeyIdHasBeenSet() const { return m_outputEncryptionKMSKeyIdHasBeenSet; }

    /**
     * <p>The KMS key you want to use to encrypt your Call Analytics output.</p> <p>If
     * using a key located in the <b>current</b> Amazon Web Services account, you can
     * specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key ID
     * itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you don't specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS key to encrypt your
     * output, you must also specify an output location using the
     * <code>OutputLocation</code> parameter.</p> <p>Note that the user making the
     * request must have permission to use the specified KMS key.</p>
     */
    inline void SetOutputEncryptionKMSKeyId(const Aws::String& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = value; }

    /**
     * <p>The KMS key you want to use to encrypt your Call Analytics output.</p> <p>If
     * using a key located in the <b>current</b> Amazon Web Services account, you can
     * specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key ID
     * itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you don't specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS key to encrypt your
     * output, you must also specify an output location using the
     * <code>OutputLocation</code> parameter.</p> <p>Note that the user making the
     * request must have permission to use the specified KMS key.</p>
     */
    inline void SetOutputEncryptionKMSKeyId(Aws::String&& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = std::move(value); }

    /**
     * <p>The KMS key you want to use to encrypt your Call Analytics output.</p> <p>If
     * using a key located in the <b>current</b> Amazon Web Services account, you can
     * specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key ID
     * itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you don't specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS key to encrypt your
     * output, you must also specify an output location using the
     * <code>OutputLocation</code> parameter.</p> <p>Note that the user making the
     * request must have permission to use the specified KMS key.</p>
     */
    inline void SetOutputEncryptionKMSKeyId(const char* value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId.assign(value); }

    /**
     * <p>The KMS key you want to use to encrypt your Call Analytics output.</p> <p>If
     * using a key located in the <b>current</b> Amazon Web Services account, you can
     * specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key ID
     * itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you don't specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS key to encrypt your
     * output, you must also specify an output location using the
     * <code>OutputLocation</code> parameter.</p> <p>Note that the user making the
     * request must have permission to use the specified KMS key.</p>
     */
    inline StartCallAnalyticsJobRequest& WithOutputEncryptionKMSKeyId(const Aws::String& value) { SetOutputEncryptionKMSKeyId(value); return *this;}

    /**
     * <p>The KMS key you want to use to encrypt your Call Analytics output.</p> <p>If
     * using a key located in the <b>current</b> Amazon Web Services account, you can
     * specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key ID
     * itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you don't specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS key to encrypt your
     * output, you must also specify an output location using the
     * <code>OutputLocation</code> parameter.</p> <p>Note that the user making the
     * request must have permission to use the specified KMS key.</p>
     */
    inline StartCallAnalyticsJobRequest& WithOutputEncryptionKMSKeyId(Aws::String&& value) { SetOutputEncryptionKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key you want to use to encrypt your Call Analytics output.</p> <p>If
     * using a key located in the <b>current</b> Amazon Web Services account, you can
     * specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key ID
     * itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you don't specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS key to encrypt your
     * output, you must also specify an output location using the
     * <code>OutputLocation</code> parameter.</p> <p>Note that the user making the
     * request must have permission to use the specified KMS key.</p>
     */
    inline StartCallAnalyticsJobRequest& WithOutputEncryptionKMSKeyId(const char* value) { SetOutputEncryptionKMSKeyId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline StartCallAnalyticsJobRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline StartCallAnalyticsJobRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline StartCallAnalyticsJobRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>Specify additional optional settings in your request, including content
     * redaction; allows you to apply custom language models, vocabulary filters, and
     * custom vocabularies to your Call Analytics job.</p>
     */
    inline const CallAnalyticsJobSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>Specify additional optional settings in your request, including content
     * redaction; allows you to apply custom language models, vocabulary filters, and
     * custom vocabularies to your Call Analytics job.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>Specify additional optional settings in your request, including content
     * redaction; allows you to apply custom language models, vocabulary filters, and
     * custom vocabularies to your Call Analytics job.</p>
     */
    inline void SetSettings(const CallAnalyticsJobSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Specify additional optional settings in your request, including content
     * redaction; allows you to apply custom language models, vocabulary filters, and
     * custom vocabularies to your Call Analytics job.</p>
     */
    inline void SetSettings(CallAnalyticsJobSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Specify additional optional settings in your request, including content
     * redaction; allows you to apply custom language models, vocabulary filters, and
     * custom vocabularies to your Call Analytics job.</p>
     */
    inline StartCallAnalyticsJobRequest& WithSettings(const CallAnalyticsJobSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>Specify additional optional settings in your request, including content
     * redaction; allows you to apply custom language models, vocabulary filters, and
     * custom vocabularies to your Call Analytics job.</p>
     */
    inline StartCallAnalyticsJobRequest& WithSettings(CallAnalyticsJobSettings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if your agent is the first participant to speak, you would set
     * <code>ChannelId</code> to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>AGENT</code> (to indicate that it's the
     * agent speaking).</p>
     */
    inline const Aws::Vector<ChannelDefinition>& GetChannelDefinitions() const{ return m_channelDefinitions; }

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if your agent is the first participant to speak, you would set
     * <code>ChannelId</code> to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>AGENT</code> (to indicate that it's the
     * agent speaking).</p>
     */
    inline bool ChannelDefinitionsHasBeenSet() const { return m_channelDefinitionsHasBeenSet; }

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if your agent is the first participant to speak, you would set
     * <code>ChannelId</code> to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>AGENT</code> (to indicate that it's the
     * agent speaking).</p>
     */
    inline void SetChannelDefinitions(const Aws::Vector<ChannelDefinition>& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = value; }

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if your agent is the first participant to speak, you would set
     * <code>ChannelId</code> to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>AGENT</code> (to indicate that it's the
     * agent speaking).</p>
     */
    inline void SetChannelDefinitions(Aws::Vector<ChannelDefinition>&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = std::move(value); }

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if your agent is the first participant to speak, you would set
     * <code>ChannelId</code> to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>AGENT</code> (to indicate that it's the
     * agent speaking).</p>
     */
    inline StartCallAnalyticsJobRequest& WithChannelDefinitions(const Aws::Vector<ChannelDefinition>& value) { SetChannelDefinitions(value); return *this;}

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if your agent is the first participant to speak, you would set
     * <code>ChannelId</code> to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>AGENT</code> (to indicate that it's the
     * agent speaking).</p>
     */
    inline StartCallAnalyticsJobRequest& WithChannelDefinitions(Aws::Vector<ChannelDefinition>&& value) { SetChannelDefinitions(std::move(value)); return *this;}

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if your agent is the first participant to speak, you would set
     * <code>ChannelId</code> to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>AGENT</code> (to indicate that it's the
     * agent speaking).</p>
     */
    inline StartCallAnalyticsJobRequest& AddChannelDefinitions(const ChannelDefinition& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.push_back(value); return *this; }

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if your agent is the first participant to speak, you would set
     * <code>ChannelId</code> to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>AGENT</code> (to indicate that it's the
     * agent speaking).</p>
     */
    inline StartCallAnalyticsJobRequest& AddChannelDefinitions(ChannelDefinition&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_callAnalyticsJobName;
    bool m_callAnalyticsJobNameHasBeenSet = false;

    Media m_media;
    bool m_mediaHasBeenSet = false;

    Aws::String m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    Aws::String m_outputEncryptionKMSKeyId;
    bool m_outputEncryptionKMSKeyIdHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    CallAnalyticsJobSettings m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::Vector<ChannelDefinition> m_channelDefinitions;
    bool m_channelDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
