/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Use these settings only when you use Kantar watermarking. Specify the values
   * that MediaConvert uses to generate and place Kantar watermarks in your output
   * audio. These settings apply to every output in your job. In addition to
   * specifying these values, you also need to store your Kantar credentials in AWS
   * Secrets Manager. For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/kantar-watermarking.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/KantarWatermarkSettings">AWS
   * API Reference</a></p>
   */
  class KantarWatermarkSettings
  {
  public:
    AWS_MEDIACONVERT_API KantarWatermarkSettings();
    AWS_MEDIACONVERT_API KantarWatermarkSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API KantarWatermarkSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Provide an audio channel name from your Kantar audio license.
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * Provide an audio channel name from your Kantar audio license.
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * Provide an audio channel name from your Kantar audio license.
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * Provide an audio channel name from your Kantar audio license.
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * Provide an audio channel name from your Kantar audio license.
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * Provide an audio channel name from your Kantar audio license.
     */
    inline KantarWatermarkSettings& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * Provide an audio channel name from your Kantar audio license.
     */
    inline KantarWatermarkSettings& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * Provide an audio channel name from your Kantar audio license.
     */
    inline KantarWatermarkSettings& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * Specify a unique identifier for Kantar to use for this piece of content.
     */
    inline const Aws::String& GetContentReference() const{ return m_contentReference; }

    /**
     * Specify a unique identifier for Kantar to use for this piece of content.
     */
    inline bool ContentReferenceHasBeenSet() const { return m_contentReferenceHasBeenSet; }

    /**
     * Specify a unique identifier for Kantar to use for this piece of content.
     */
    inline void SetContentReference(const Aws::String& value) { m_contentReferenceHasBeenSet = true; m_contentReference = value; }

    /**
     * Specify a unique identifier for Kantar to use for this piece of content.
     */
    inline void SetContentReference(Aws::String&& value) { m_contentReferenceHasBeenSet = true; m_contentReference = std::move(value); }

    /**
     * Specify a unique identifier for Kantar to use for this piece of content.
     */
    inline void SetContentReference(const char* value) { m_contentReferenceHasBeenSet = true; m_contentReference.assign(value); }

    /**
     * Specify a unique identifier for Kantar to use for this piece of content.
     */
    inline KantarWatermarkSettings& WithContentReference(const Aws::String& value) { SetContentReference(value); return *this;}

    /**
     * Specify a unique identifier for Kantar to use for this piece of content.
     */
    inline KantarWatermarkSettings& WithContentReference(Aws::String&& value) { SetContentReference(std::move(value)); return *this;}

    /**
     * Specify a unique identifier for Kantar to use for this piece of content.
     */
    inline KantarWatermarkSettings& WithContentReference(const char* value) { SetContentReference(value); return *this;}


    /**
     * Provide the name of the AWS Secrets Manager secret where your Kantar credentials
     * are stored. Note that your MediaConvert service role must provide access to this
     * secret. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/granting-permissions-for-mediaconvert-to-access-secrets-manager-secret.html.
     * For instructions on creating a secret, see
     * https://docs.aws.amazon.com/secretsmanager/latest/userguide/tutorials_basic.html,
     * in the AWS Secrets Manager User Guide.
     */
    inline const Aws::String& GetCredentialsSecretName() const{ return m_credentialsSecretName; }

    /**
     * Provide the name of the AWS Secrets Manager secret where your Kantar credentials
     * are stored. Note that your MediaConvert service role must provide access to this
     * secret. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/granting-permissions-for-mediaconvert-to-access-secrets-manager-secret.html.
     * For instructions on creating a secret, see
     * https://docs.aws.amazon.com/secretsmanager/latest/userguide/tutorials_basic.html,
     * in the AWS Secrets Manager User Guide.
     */
    inline bool CredentialsSecretNameHasBeenSet() const { return m_credentialsSecretNameHasBeenSet; }

    /**
     * Provide the name of the AWS Secrets Manager secret where your Kantar credentials
     * are stored. Note that your MediaConvert service role must provide access to this
     * secret. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/granting-permissions-for-mediaconvert-to-access-secrets-manager-secret.html.
     * For instructions on creating a secret, see
     * https://docs.aws.amazon.com/secretsmanager/latest/userguide/tutorials_basic.html,
     * in the AWS Secrets Manager User Guide.
     */
    inline void SetCredentialsSecretName(const Aws::String& value) { m_credentialsSecretNameHasBeenSet = true; m_credentialsSecretName = value; }

    /**
     * Provide the name of the AWS Secrets Manager secret where your Kantar credentials
     * are stored. Note that your MediaConvert service role must provide access to this
     * secret. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/granting-permissions-for-mediaconvert-to-access-secrets-manager-secret.html.
     * For instructions on creating a secret, see
     * https://docs.aws.amazon.com/secretsmanager/latest/userguide/tutorials_basic.html,
     * in the AWS Secrets Manager User Guide.
     */
    inline void SetCredentialsSecretName(Aws::String&& value) { m_credentialsSecretNameHasBeenSet = true; m_credentialsSecretName = std::move(value); }

    /**
     * Provide the name of the AWS Secrets Manager secret where your Kantar credentials
     * are stored. Note that your MediaConvert service role must provide access to this
     * secret. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/granting-permissions-for-mediaconvert-to-access-secrets-manager-secret.html.
     * For instructions on creating a secret, see
     * https://docs.aws.amazon.com/secretsmanager/latest/userguide/tutorials_basic.html,
     * in the AWS Secrets Manager User Guide.
     */
    inline void SetCredentialsSecretName(const char* value) { m_credentialsSecretNameHasBeenSet = true; m_credentialsSecretName.assign(value); }

    /**
     * Provide the name of the AWS Secrets Manager secret where your Kantar credentials
     * are stored. Note that your MediaConvert service role must provide access to this
     * secret. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/granting-permissions-for-mediaconvert-to-access-secrets-manager-secret.html.
     * For instructions on creating a secret, see
     * https://docs.aws.amazon.com/secretsmanager/latest/userguide/tutorials_basic.html,
     * in the AWS Secrets Manager User Guide.
     */
    inline KantarWatermarkSettings& WithCredentialsSecretName(const Aws::String& value) { SetCredentialsSecretName(value); return *this;}

    /**
     * Provide the name of the AWS Secrets Manager secret where your Kantar credentials
     * are stored. Note that your MediaConvert service role must provide access to this
     * secret. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/granting-permissions-for-mediaconvert-to-access-secrets-manager-secret.html.
     * For instructions on creating a secret, see
     * https://docs.aws.amazon.com/secretsmanager/latest/userguide/tutorials_basic.html,
     * in the AWS Secrets Manager User Guide.
     */
    inline KantarWatermarkSettings& WithCredentialsSecretName(Aws::String&& value) { SetCredentialsSecretName(std::move(value)); return *this;}

    /**
     * Provide the name of the AWS Secrets Manager secret where your Kantar credentials
     * are stored. Note that your MediaConvert service role must provide access to this
     * secret. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/granting-permissions-for-mediaconvert-to-access-secrets-manager-secret.html.
     * For instructions on creating a secret, see
     * https://docs.aws.amazon.com/secretsmanager/latest/userguide/tutorials_basic.html,
     * in the AWS Secrets Manager User Guide.
     */
    inline KantarWatermarkSettings& WithCredentialsSecretName(const char* value) { SetCredentialsSecretName(value); return *this;}


    /**
     * Optional. Specify an offset, in whole seconds, from the start of your output and
     * the beginning of the watermarking. When you don't specify an offset, Kantar
     * defaults to zero.
     */
    inline double GetFileOffset() const{ return m_fileOffset; }

    /**
     * Optional. Specify an offset, in whole seconds, from the start of your output and
     * the beginning of the watermarking. When you don't specify an offset, Kantar
     * defaults to zero.
     */
    inline bool FileOffsetHasBeenSet() const { return m_fileOffsetHasBeenSet; }

    /**
     * Optional. Specify an offset, in whole seconds, from the start of your output and
     * the beginning of the watermarking. When you don't specify an offset, Kantar
     * defaults to zero.
     */
    inline void SetFileOffset(double value) { m_fileOffsetHasBeenSet = true; m_fileOffset = value; }

    /**
     * Optional. Specify an offset, in whole seconds, from the start of your output and
     * the beginning of the watermarking. When you don't specify an offset, Kantar
     * defaults to zero.
     */
    inline KantarWatermarkSettings& WithFileOffset(double value) { SetFileOffset(value); return *this;}


    /**
     * Provide your Kantar license ID number. You should get this number from Kantar.
     */
    inline int GetKantarLicenseId() const{ return m_kantarLicenseId; }

    /**
     * Provide your Kantar license ID number. You should get this number from Kantar.
     */
    inline bool KantarLicenseIdHasBeenSet() const { return m_kantarLicenseIdHasBeenSet; }

    /**
     * Provide your Kantar license ID number. You should get this number from Kantar.
     */
    inline void SetKantarLicenseId(int value) { m_kantarLicenseIdHasBeenSet = true; m_kantarLicenseId = value; }

    /**
     * Provide your Kantar license ID number. You should get this number from Kantar.
     */
    inline KantarWatermarkSettings& WithKantarLicenseId(int value) { SetKantarLicenseId(value); return *this;}


    /**
     * Provide the HTTPS endpoint to the Kantar server. You should get this endpoint
     * from Kantar.
     */
    inline const Aws::String& GetKantarServerUrl() const{ return m_kantarServerUrl; }

    /**
     * Provide the HTTPS endpoint to the Kantar server. You should get this endpoint
     * from Kantar.
     */
    inline bool KantarServerUrlHasBeenSet() const { return m_kantarServerUrlHasBeenSet; }

    /**
     * Provide the HTTPS endpoint to the Kantar server. You should get this endpoint
     * from Kantar.
     */
    inline void SetKantarServerUrl(const Aws::String& value) { m_kantarServerUrlHasBeenSet = true; m_kantarServerUrl = value; }

    /**
     * Provide the HTTPS endpoint to the Kantar server. You should get this endpoint
     * from Kantar.
     */
    inline void SetKantarServerUrl(Aws::String&& value) { m_kantarServerUrlHasBeenSet = true; m_kantarServerUrl = std::move(value); }

    /**
     * Provide the HTTPS endpoint to the Kantar server. You should get this endpoint
     * from Kantar.
     */
    inline void SetKantarServerUrl(const char* value) { m_kantarServerUrlHasBeenSet = true; m_kantarServerUrl.assign(value); }

    /**
     * Provide the HTTPS endpoint to the Kantar server. You should get this endpoint
     * from Kantar.
     */
    inline KantarWatermarkSettings& WithKantarServerUrl(const Aws::String& value) { SetKantarServerUrl(value); return *this;}

    /**
     * Provide the HTTPS endpoint to the Kantar server. You should get this endpoint
     * from Kantar.
     */
    inline KantarWatermarkSettings& WithKantarServerUrl(Aws::String&& value) { SetKantarServerUrl(std::move(value)); return *this;}

    /**
     * Provide the HTTPS endpoint to the Kantar server. You should get this endpoint
     * from Kantar.
     */
    inline KantarWatermarkSettings& WithKantarServerUrl(const char* value) { SetKantarServerUrl(value); return *this;}


    /**
     * Optional. Specify the Amazon S3 bucket where you want MediaConvert to store your
     * Kantar watermark XML logs. When you don't specify a bucket, MediaConvert doesn't
     * save these logs. Note that your MediaConvert service role must provide access to
     * this location. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html
     */
    inline const Aws::String& GetLogDestination() const{ return m_logDestination; }

    /**
     * Optional. Specify the Amazon S3 bucket where you want MediaConvert to store your
     * Kantar watermark XML logs. When you don't specify a bucket, MediaConvert doesn't
     * save these logs. Note that your MediaConvert service role must provide access to
     * this location. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html
     */
    inline bool LogDestinationHasBeenSet() const { return m_logDestinationHasBeenSet; }

    /**
     * Optional. Specify the Amazon S3 bucket where you want MediaConvert to store your
     * Kantar watermark XML logs. When you don't specify a bucket, MediaConvert doesn't
     * save these logs. Note that your MediaConvert service role must provide access to
     * this location. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html
     */
    inline void SetLogDestination(const Aws::String& value) { m_logDestinationHasBeenSet = true; m_logDestination = value; }

    /**
     * Optional. Specify the Amazon S3 bucket where you want MediaConvert to store your
     * Kantar watermark XML logs. When you don't specify a bucket, MediaConvert doesn't
     * save these logs. Note that your MediaConvert service role must provide access to
     * this location. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html
     */
    inline void SetLogDestination(Aws::String&& value) { m_logDestinationHasBeenSet = true; m_logDestination = std::move(value); }

    /**
     * Optional. Specify the Amazon S3 bucket where you want MediaConvert to store your
     * Kantar watermark XML logs. When you don't specify a bucket, MediaConvert doesn't
     * save these logs. Note that your MediaConvert service role must provide access to
     * this location. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html
     */
    inline void SetLogDestination(const char* value) { m_logDestinationHasBeenSet = true; m_logDestination.assign(value); }

    /**
     * Optional. Specify the Amazon S3 bucket where you want MediaConvert to store your
     * Kantar watermark XML logs. When you don't specify a bucket, MediaConvert doesn't
     * save these logs. Note that your MediaConvert service role must provide access to
     * this location. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html
     */
    inline KantarWatermarkSettings& WithLogDestination(const Aws::String& value) { SetLogDestination(value); return *this;}

    /**
     * Optional. Specify the Amazon S3 bucket where you want MediaConvert to store your
     * Kantar watermark XML logs. When you don't specify a bucket, MediaConvert doesn't
     * save these logs. Note that your MediaConvert service role must provide access to
     * this location. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html
     */
    inline KantarWatermarkSettings& WithLogDestination(Aws::String&& value) { SetLogDestination(std::move(value)); return *this;}

    /**
     * Optional. Specify the Amazon S3 bucket where you want MediaConvert to store your
     * Kantar watermark XML logs. When you don't specify a bucket, MediaConvert doesn't
     * save these logs. Note that your MediaConvert service role must provide access to
     * this location. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html
     */
    inline KantarWatermarkSettings& WithLogDestination(const char* value) { SetLogDestination(value); return *this;}


    /**
     * You can optionally use this field to specify the first timestamp that Kantar
     * embeds during watermarking. Kantar suggests that you be very cautious when using
     * this Kantar feature, and that you use it only on channels that are managed
     * specifically for use with this feature by your Audience Measurement Operator.
     * For more information about this feature, contact Kantar technical support.
     */
    inline const Aws::String& GetMetadata3() const{ return m_metadata3; }

    /**
     * You can optionally use this field to specify the first timestamp that Kantar
     * embeds during watermarking. Kantar suggests that you be very cautious when using
     * this Kantar feature, and that you use it only on channels that are managed
     * specifically for use with this feature by your Audience Measurement Operator.
     * For more information about this feature, contact Kantar technical support.
     */
    inline bool Metadata3HasBeenSet() const { return m_metadata3HasBeenSet; }

    /**
     * You can optionally use this field to specify the first timestamp that Kantar
     * embeds during watermarking. Kantar suggests that you be very cautious when using
     * this Kantar feature, and that you use it only on channels that are managed
     * specifically for use with this feature by your Audience Measurement Operator.
     * For more information about this feature, contact Kantar technical support.
     */
    inline void SetMetadata3(const Aws::String& value) { m_metadata3HasBeenSet = true; m_metadata3 = value; }

    /**
     * You can optionally use this field to specify the first timestamp that Kantar
     * embeds during watermarking. Kantar suggests that you be very cautious when using
     * this Kantar feature, and that you use it only on channels that are managed
     * specifically for use with this feature by your Audience Measurement Operator.
     * For more information about this feature, contact Kantar technical support.
     */
    inline void SetMetadata3(Aws::String&& value) { m_metadata3HasBeenSet = true; m_metadata3 = std::move(value); }

    /**
     * You can optionally use this field to specify the first timestamp that Kantar
     * embeds during watermarking. Kantar suggests that you be very cautious when using
     * this Kantar feature, and that you use it only on channels that are managed
     * specifically for use with this feature by your Audience Measurement Operator.
     * For more information about this feature, contact Kantar technical support.
     */
    inline void SetMetadata3(const char* value) { m_metadata3HasBeenSet = true; m_metadata3.assign(value); }

    /**
     * You can optionally use this field to specify the first timestamp that Kantar
     * embeds during watermarking. Kantar suggests that you be very cautious when using
     * this Kantar feature, and that you use it only on channels that are managed
     * specifically for use with this feature by your Audience Measurement Operator.
     * For more information about this feature, contact Kantar technical support.
     */
    inline KantarWatermarkSettings& WithMetadata3(const Aws::String& value) { SetMetadata3(value); return *this;}

    /**
     * You can optionally use this field to specify the first timestamp that Kantar
     * embeds during watermarking. Kantar suggests that you be very cautious when using
     * this Kantar feature, and that you use it only on channels that are managed
     * specifically for use with this feature by your Audience Measurement Operator.
     * For more information about this feature, contact Kantar technical support.
     */
    inline KantarWatermarkSettings& WithMetadata3(Aws::String&& value) { SetMetadata3(std::move(value)); return *this;}

    /**
     * You can optionally use this field to specify the first timestamp that Kantar
     * embeds during watermarking. Kantar suggests that you be very cautious when using
     * this Kantar feature, and that you use it only on channels that are managed
     * specifically for use with this feature by your Audience Measurement Operator.
     * For more information about this feature, contact Kantar technical support.
     */
    inline KantarWatermarkSettings& WithMetadata3(const char* value) { SetMetadata3(value); return *this;}


    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline const Aws::String& GetMetadata4() const{ return m_metadata4; }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline bool Metadata4HasBeenSet() const { return m_metadata4HasBeenSet; }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline void SetMetadata4(const Aws::String& value) { m_metadata4HasBeenSet = true; m_metadata4 = value; }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline void SetMetadata4(Aws::String&& value) { m_metadata4HasBeenSet = true; m_metadata4 = std::move(value); }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline void SetMetadata4(const char* value) { m_metadata4HasBeenSet = true; m_metadata4.assign(value); }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline KantarWatermarkSettings& WithMetadata4(const Aws::String& value) { SetMetadata4(value); return *this;}

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline KantarWatermarkSettings& WithMetadata4(Aws::String&& value) { SetMetadata4(std::move(value)); return *this;}

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline KantarWatermarkSettings& WithMetadata4(const char* value) { SetMetadata4(value); return *this;}


    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline const Aws::String& GetMetadata5() const{ return m_metadata5; }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline bool Metadata5HasBeenSet() const { return m_metadata5HasBeenSet; }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline void SetMetadata5(const Aws::String& value) { m_metadata5HasBeenSet = true; m_metadata5 = value; }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline void SetMetadata5(Aws::String&& value) { m_metadata5HasBeenSet = true; m_metadata5 = std::move(value); }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline void SetMetadata5(const char* value) { m_metadata5HasBeenSet = true; m_metadata5.assign(value); }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline KantarWatermarkSettings& WithMetadata5(const Aws::String& value) { SetMetadata5(value); return *this;}

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline KantarWatermarkSettings& WithMetadata5(Aws::String&& value) { SetMetadata5(std::move(value)); return *this;}

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline KantarWatermarkSettings& WithMetadata5(const char* value) { SetMetadata5(value); return *this;}


    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline const Aws::String& GetMetadata6() const{ return m_metadata6; }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline bool Metadata6HasBeenSet() const { return m_metadata6HasBeenSet; }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline void SetMetadata6(const Aws::String& value) { m_metadata6HasBeenSet = true; m_metadata6 = value; }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline void SetMetadata6(Aws::String&& value) { m_metadata6HasBeenSet = true; m_metadata6 = std::move(value); }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline void SetMetadata6(const char* value) { m_metadata6HasBeenSet = true; m_metadata6.assign(value); }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline KantarWatermarkSettings& WithMetadata6(const Aws::String& value) { SetMetadata6(value); return *this;}

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline KantarWatermarkSettings& WithMetadata6(Aws::String&& value) { SetMetadata6(std::move(value)); return *this;}

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline KantarWatermarkSettings& WithMetadata6(const char* value) { SetMetadata6(value); return *this;}


    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline const Aws::String& GetMetadata7() const{ return m_metadata7; }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline bool Metadata7HasBeenSet() const { return m_metadata7HasBeenSet; }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline void SetMetadata7(const Aws::String& value) { m_metadata7HasBeenSet = true; m_metadata7 = value; }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline void SetMetadata7(Aws::String&& value) { m_metadata7HasBeenSet = true; m_metadata7 = std::move(value); }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline void SetMetadata7(const char* value) { m_metadata7HasBeenSet = true; m_metadata7.assign(value); }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline KantarWatermarkSettings& WithMetadata7(const Aws::String& value) { SetMetadata7(value); return *this;}

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline KantarWatermarkSettings& WithMetadata7(Aws::String&& value) { SetMetadata7(std::move(value)); return *this;}

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline KantarWatermarkSettings& WithMetadata7(const char* value) { SetMetadata7(value); return *this;}


    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline const Aws::String& GetMetadata8() const{ return m_metadata8; }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline bool Metadata8HasBeenSet() const { return m_metadata8HasBeenSet; }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline void SetMetadata8(const Aws::String& value) { m_metadata8HasBeenSet = true; m_metadata8 = value; }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline void SetMetadata8(Aws::String&& value) { m_metadata8HasBeenSet = true; m_metadata8 = std::move(value); }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline void SetMetadata8(const char* value) { m_metadata8HasBeenSet = true; m_metadata8.assign(value); }

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline KantarWatermarkSettings& WithMetadata8(const Aws::String& value) { SetMetadata8(value); return *this;}

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline KantarWatermarkSettings& WithMetadata8(Aws::String&& value) { SetMetadata8(std::move(value)); return *this;}

    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline KantarWatermarkSettings& WithMetadata8(const char* value) { SetMetadata8(value); return *this;}

  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_contentReference;
    bool m_contentReferenceHasBeenSet = false;

    Aws::String m_credentialsSecretName;
    bool m_credentialsSecretNameHasBeenSet = false;

    double m_fileOffset;
    bool m_fileOffsetHasBeenSet = false;

    int m_kantarLicenseId;
    bool m_kantarLicenseIdHasBeenSet = false;

    Aws::String m_kantarServerUrl;
    bool m_kantarServerUrlHasBeenSet = false;

    Aws::String m_logDestination;
    bool m_logDestinationHasBeenSet = false;

    Aws::String m_metadata3;
    bool m_metadata3HasBeenSet = false;

    Aws::String m_metadata4;
    bool m_metadata4HasBeenSet = false;

    Aws::String m_metadata5;
    bool m_metadata5HasBeenSet = false;

    Aws::String m_metadata6;
    bool m_metadata6HasBeenSet = false;

    Aws::String m_metadata7;
    bool m_metadata7HasBeenSet = false;

    Aws::String m_metadata8;
    bool m_metadata8HasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
