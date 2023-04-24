/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/ContentRedactionOutput.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>Allows you to specify additional settings for your Call Analytics post-call
   * request, including output locations for your redacted transcript, which IAM role
   * to use, and which encryption key to use.</p> <p> <code>DataAccessRoleArn</code>
   * and <code>OutputLocation</code> are required fields.</p> <p>
   * <code>PostCallAnalyticsSettings</code> provides the same insights as a Call
   * Analytics post-call transcription. For more information, refer to <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-post-call.html">Post-call
   * analytics with real-time transcriptions</a> in the <i>Amazon Transcribe
   * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/PostCallAnalyticsSettings">AWS
   * API Reference</a></p>
   */
  class PostCallAnalyticsSettings
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API PostCallAnalyticsSettings();
    AWS_CHIMESDKMEDIAPIPELINES_API PostCallAnalyticsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API PostCallAnalyticsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL of the Amazon S3 bucket that contains the post-call data.</p>
     */
    inline const Aws::String& GetOutputLocation() const{ return m_outputLocation; }

    /**
     * <p>The URL of the Amazon S3 bucket that contains the post-call data.</p>
     */
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }

    /**
     * <p>The URL of the Amazon S3 bucket that contains the post-call data.</p>
     */
    inline void SetOutputLocation(const Aws::String& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    /**
     * <p>The URL of the Amazon S3 bucket that contains the post-call data.</p>
     */
    inline void SetOutputLocation(Aws::String&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }

    /**
     * <p>The URL of the Amazon S3 bucket that contains the post-call data.</p>
     */
    inline void SetOutputLocation(const char* value) { m_outputLocationHasBeenSet = true; m_outputLocation.assign(value); }

    /**
     * <p>The URL of the Amazon S3 bucket that contains the post-call data.</p>
     */
    inline PostCallAnalyticsSettings& WithOutputLocation(const Aws::String& value) { SetOutputLocation(value); return *this;}

    /**
     * <p>The URL of the Amazon S3 bucket that contains the post-call data.</p>
     */
    inline PostCallAnalyticsSettings& WithOutputLocation(Aws::String&& value) { SetOutputLocation(std::move(value)); return *this;}

    /**
     * <p>The URL of the Amazon S3 bucket that contains the post-call data.</p>
     */
    inline PostCallAnalyticsSettings& WithOutputLocation(const char* value) { SetOutputLocation(value); return *this;}


    /**
     * <p>The ARN of the role used by Amazon Web Services Transcribe to upload your
     * post call analysis. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-post-call.html">Post-call
     * analytics with real-time transcriptions</a> in the <i>Amazon Transcribe
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The ARN of the role used by Amazon Web Services Transcribe to upload your
     * post call analysis. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-post-call.html">Post-call
     * analytics with real-time transcriptions</a> in the <i>Amazon Transcribe
     * Developer Guide</i>.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the role used by Amazon Web Services Transcribe to upload your
     * post call analysis. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-post-call.html">Post-call
     * analytics with real-time transcriptions</a> in the <i>Amazon Transcribe
     * Developer Guide</i>.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The ARN of the role used by Amazon Web Services Transcribe to upload your
     * post call analysis. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-post-call.html">Post-call
     * analytics with real-time transcriptions</a> in the <i>Amazon Transcribe
     * Developer Guide</i>.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The ARN of the role used by Amazon Web Services Transcribe to upload your
     * post call analysis. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-post-call.html">Post-call
     * analytics with real-time transcriptions</a> in the <i>Amazon Transcribe
     * Developer Guide</i>.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The ARN of the role used by Amazon Web Services Transcribe to upload your
     * post call analysis. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-post-call.html">Post-call
     * analytics with real-time transcriptions</a> in the <i>Amazon Transcribe
     * Developer Guide</i>.</p>
     */
    inline PostCallAnalyticsSettings& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role used by Amazon Web Services Transcribe to upload your
     * post call analysis. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-post-call.html">Post-call
     * analytics with real-time transcriptions</a> in the <i>Amazon Transcribe
     * Developer Guide</i>.</p>
     */
    inline PostCallAnalyticsSettings& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role used by Amazon Web Services Transcribe to upload your
     * post call analysis. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-post-call.html">Post-call
     * analytics with real-time transcriptions</a> in the <i>Amazon Transcribe
     * Developer Guide</i>.</p>
     */
    inline PostCallAnalyticsSettings& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>The content redaction output settings for a post-call analysis task.</p>
     */
    inline const ContentRedactionOutput& GetContentRedactionOutput() const{ return m_contentRedactionOutput; }

    /**
     * <p>The content redaction output settings for a post-call analysis task.</p>
     */
    inline bool ContentRedactionOutputHasBeenSet() const { return m_contentRedactionOutputHasBeenSet; }

    /**
     * <p>The content redaction output settings for a post-call analysis task.</p>
     */
    inline void SetContentRedactionOutput(const ContentRedactionOutput& value) { m_contentRedactionOutputHasBeenSet = true; m_contentRedactionOutput = value; }

    /**
     * <p>The content redaction output settings for a post-call analysis task.</p>
     */
    inline void SetContentRedactionOutput(ContentRedactionOutput&& value) { m_contentRedactionOutputHasBeenSet = true; m_contentRedactionOutput = std::move(value); }

    /**
     * <p>The content redaction output settings for a post-call analysis task.</p>
     */
    inline PostCallAnalyticsSettings& WithContentRedactionOutput(const ContentRedactionOutput& value) { SetContentRedactionOutput(value); return *this;}

    /**
     * <p>The content redaction output settings for a post-call analysis task.</p>
     */
    inline PostCallAnalyticsSettings& WithContentRedactionOutput(ContentRedactionOutput&& value) { SetContentRedactionOutput(std::move(value)); return *this;}


    /**
     * <p>The ID of the KMS (Key Management Service) key used to encrypt the
     * output.</p>
     */
    inline const Aws::String& GetOutputEncryptionKMSKeyId() const{ return m_outputEncryptionKMSKeyId; }

    /**
     * <p>The ID of the KMS (Key Management Service) key used to encrypt the
     * output.</p>
     */
    inline bool OutputEncryptionKMSKeyIdHasBeenSet() const { return m_outputEncryptionKMSKeyIdHasBeenSet; }

    /**
     * <p>The ID of the KMS (Key Management Service) key used to encrypt the
     * output.</p>
     */
    inline void SetOutputEncryptionKMSKeyId(const Aws::String& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = value; }

    /**
     * <p>The ID of the KMS (Key Management Service) key used to encrypt the
     * output.</p>
     */
    inline void SetOutputEncryptionKMSKeyId(Aws::String&& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = std::move(value); }

    /**
     * <p>The ID of the KMS (Key Management Service) key used to encrypt the
     * output.</p>
     */
    inline void SetOutputEncryptionKMSKeyId(const char* value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId.assign(value); }

    /**
     * <p>The ID of the KMS (Key Management Service) key used to encrypt the
     * output.</p>
     */
    inline PostCallAnalyticsSettings& WithOutputEncryptionKMSKeyId(const Aws::String& value) { SetOutputEncryptionKMSKeyId(value); return *this;}

    /**
     * <p>The ID of the KMS (Key Management Service) key used to encrypt the
     * output.</p>
     */
    inline PostCallAnalyticsSettings& WithOutputEncryptionKMSKeyId(Aws::String&& value) { SetOutputEncryptionKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the KMS (Key Management Service) key used to encrypt the
     * output.</p>
     */
    inline PostCallAnalyticsSettings& WithOutputEncryptionKMSKeyId(const char* value) { SetOutputEncryptionKMSKeyId(value); return *this;}

  private:

    Aws::String m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    ContentRedactionOutput m_contentRedactionOutput;
    bool m_contentRedactionOutputHasBeenSet = false;

    Aws::String m_outputEncryptionKMSKeyId;
    bool m_outputEncryptionKMSKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
