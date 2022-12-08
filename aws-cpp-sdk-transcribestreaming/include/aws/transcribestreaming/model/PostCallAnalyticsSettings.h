/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/ContentRedactionOutput.h>
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
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>Allows you to specify additional settings for your streaming Call Analytics
   * post-call request, including output locations for your redacted and unredacted
   * transcript, which IAM role to use, and, optionally, which encryption key to
   * use.</p> <p> <code>ContentRedactionOutput</code>,
   * <code>DataAccessRoleArn</code>, and <code>OutputLocation</code> are required
   * fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/PostCallAnalyticsSettings">AWS
   * API Reference</a></p>
   */
  class PostCallAnalyticsSettings
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API PostCallAnalyticsSettings();
    AWS_TRANSCRIBESTREAMINGSERVICE_API PostCallAnalyticsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API PostCallAnalyticsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 location where you want your Call Analytics post-call
     * transcription output stored. You can use any of the following formats to specify
     * the output location:</p> <ol> <li> <p>s3://DOC-EXAMPLE-BUCKET</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/my-call-analytics-job.json</p> </li>
     * </ol>
     */
    inline const Aws::String& GetOutputLocation() const{ return m_outputLocation; }

    /**
     * <p>The Amazon S3 location where you want your Call Analytics post-call
     * transcription output stored. You can use any of the following formats to specify
     * the output location:</p> <ol> <li> <p>s3://DOC-EXAMPLE-BUCKET</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/my-call-analytics-job.json</p> </li>
     * </ol>
     */
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }

    /**
     * <p>The Amazon S3 location where you want your Call Analytics post-call
     * transcription output stored. You can use any of the following formats to specify
     * the output location:</p> <ol> <li> <p>s3://DOC-EXAMPLE-BUCKET</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/my-call-analytics-job.json</p> </li>
     * </ol>
     */
    inline void SetOutputLocation(const Aws::String& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    /**
     * <p>The Amazon S3 location where you want your Call Analytics post-call
     * transcription output stored. You can use any of the following formats to specify
     * the output location:</p> <ol> <li> <p>s3://DOC-EXAMPLE-BUCKET</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/my-call-analytics-job.json</p> </li>
     * </ol>
     */
    inline void SetOutputLocation(Aws::String&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }

    /**
     * <p>The Amazon S3 location where you want your Call Analytics post-call
     * transcription output stored. You can use any of the following formats to specify
     * the output location:</p> <ol> <li> <p>s3://DOC-EXAMPLE-BUCKET</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/my-call-analytics-job.json</p> </li>
     * </ol>
     */
    inline void SetOutputLocation(const char* value) { m_outputLocationHasBeenSet = true; m_outputLocation.assign(value); }

    /**
     * <p>The Amazon S3 location where you want your Call Analytics post-call
     * transcription output stored. You can use any of the following formats to specify
     * the output location:</p> <ol> <li> <p>s3://DOC-EXAMPLE-BUCKET</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/my-call-analytics-job.json</p> </li>
     * </ol>
     */
    inline PostCallAnalyticsSettings& WithOutputLocation(const Aws::String& value) { SetOutputLocation(value); return *this;}

    /**
     * <p>The Amazon S3 location where you want your Call Analytics post-call
     * transcription output stored. You can use any of the following formats to specify
     * the output location:</p> <ol> <li> <p>s3://DOC-EXAMPLE-BUCKET</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/my-call-analytics-job.json</p> </li>
     * </ol>
     */
    inline PostCallAnalyticsSettings& WithOutputLocation(Aws::String&& value) { SetOutputLocation(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location where you want your Call Analytics post-call
     * transcription output stored. You can use any of the following formats to specify
     * the output location:</p> <ol> <li> <p>s3://DOC-EXAMPLE-BUCKET</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/my-call-analytics-job.json</p> </li>
     * </ol>
     */
    inline PostCallAnalyticsSettings& WithOutputLocation(const char* value) { SetOutputLocation(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>. For more information, see <a
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
     * <code>arn:aws:iam::111122223333:role/Admin</code>. For more information, see <a
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
     * <code>arn:aws:iam::111122223333:role/Admin</code>. For more information, see <a
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
     * <code>arn:aws:iam::111122223333:role/Admin</code>. For more information, see <a
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
     * <code>arn:aws:iam::111122223333:role/Admin</code>. For more information, see <a
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
     * <code>arn:aws:iam::111122223333:role/Admin</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline PostCallAnalyticsSettings& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline PostCallAnalyticsSettings& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline PostCallAnalyticsSettings& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>Specify whether you want only a redacted transcript or both a redacted and an
     * unredacted transcript. If you choose redacted and unredacted, two JSON files are
     * generated and stored in the Amazon S3 output location you specify.</p> <p>Note
     * that to include <code>ContentRedactionOutput</code> in your request, you must
     * enable content redaction (<code>ContentRedactionType</code>).</p>
     */
    inline const ContentRedactionOutput& GetContentRedactionOutput() const{ return m_contentRedactionOutput; }

    /**
     * <p>Specify whether you want only a redacted transcript or both a redacted and an
     * unredacted transcript. If you choose redacted and unredacted, two JSON files are
     * generated and stored in the Amazon S3 output location you specify.</p> <p>Note
     * that to include <code>ContentRedactionOutput</code> in your request, you must
     * enable content redaction (<code>ContentRedactionType</code>).</p>
     */
    inline bool ContentRedactionOutputHasBeenSet() const { return m_contentRedactionOutputHasBeenSet; }

    /**
     * <p>Specify whether you want only a redacted transcript or both a redacted and an
     * unredacted transcript. If you choose redacted and unredacted, two JSON files are
     * generated and stored in the Amazon S3 output location you specify.</p> <p>Note
     * that to include <code>ContentRedactionOutput</code> in your request, you must
     * enable content redaction (<code>ContentRedactionType</code>).</p>
     */
    inline void SetContentRedactionOutput(const ContentRedactionOutput& value) { m_contentRedactionOutputHasBeenSet = true; m_contentRedactionOutput = value; }

    /**
     * <p>Specify whether you want only a redacted transcript or both a redacted and an
     * unredacted transcript. If you choose redacted and unredacted, two JSON files are
     * generated and stored in the Amazon S3 output location you specify.</p> <p>Note
     * that to include <code>ContentRedactionOutput</code> in your request, you must
     * enable content redaction (<code>ContentRedactionType</code>).</p>
     */
    inline void SetContentRedactionOutput(ContentRedactionOutput&& value) { m_contentRedactionOutputHasBeenSet = true; m_contentRedactionOutput = std::move(value); }

    /**
     * <p>Specify whether you want only a redacted transcript or both a redacted and an
     * unredacted transcript. If you choose redacted and unredacted, two JSON files are
     * generated and stored in the Amazon S3 output location you specify.</p> <p>Note
     * that to include <code>ContentRedactionOutput</code> in your request, you must
     * enable content redaction (<code>ContentRedactionType</code>).</p>
     */
    inline PostCallAnalyticsSettings& WithContentRedactionOutput(const ContentRedactionOutput& value) { SetContentRedactionOutput(value); return *this;}

    /**
     * <p>Specify whether you want only a redacted transcript or both a redacted and an
     * unredacted transcript. If you choose redacted and unredacted, two JSON files are
     * generated and stored in the Amazon S3 output location you specify.</p> <p>Note
     * that to include <code>ContentRedactionOutput</code> in your request, you must
     * enable content redaction (<code>ContentRedactionType</code>).</p>
     */
    inline PostCallAnalyticsSettings& WithContentRedactionOutput(ContentRedactionOutput&& value) { SetContentRedactionOutput(std::move(value)); return *this;}


    /**
     * <p>The KMS key you want to use to encrypt your Call Analytics post-call
     * output.</p> <p>If using a key located in the <b>current</b> Amazon Web Services
     * account, you can specify your KMS key in one of four ways:</p> <ol> <li> <p>Use
     * the KMS key ID itself. For example,
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>Use an
     * alias for the KMS key ID. For example, <code>alias/ExampleAlias</code>.</p>
     * </li> <li> <p>Use the Amazon Resource Name (ARN) for the KMS key ID. For
     * example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>Note that the user making the request must have permission to use the
     * specified KMS key.</p>
     */
    inline const Aws::String& GetOutputEncryptionKMSKeyId() const{ return m_outputEncryptionKMSKeyId; }

    /**
     * <p>The KMS key you want to use to encrypt your Call Analytics post-call
     * output.</p> <p>If using a key located in the <b>current</b> Amazon Web Services
     * account, you can specify your KMS key in one of four ways:</p> <ol> <li> <p>Use
     * the KMS key ID itself. For example,
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>Use an
     * alias for the KMS key ID. For example, <code>alias/ExampleAlias</code>.</p>
     * </li> <li> <p>Use the Amazon Resource Name (ARN) for the KMS key ID. For
     * example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>Note that the user making the request must have permission to use the
     * specified KMS key.</p>
     */
    inline bool OutputEncryptionKMSKeyIdHasBeenSet() const { return m_outputEncryptionKMSKeyIdHasBeenSet; }

    /**
     * <p>The KMS key you want to use to encrypt your Call Analytics post-call
     * output.</p> <p>If using a key located in the <b>current</b> Amazon Web Services
     * account, you can specify your KMS key in one of four ways:</p> <ol> <li> <p>Use
     * the KMS key ID itself. For example,
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>Use an
     * alias for the KMS key ID. For example, <code>alias/ExampleAlias</code>.</p>
     * </li> <li> <p>Use the Amazon Resource Name (ARN) for the KMS key ID. For
     * example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>Note that the user making the request must have permission to use the
     * specified KMS key.</p>
     */
    inline void SetOutputEncryptionKMSKeyId(const Aws::String& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = value; }

    /**
     * <p>The KMS key you want to use to encrypt your Call Analytics post-call
     * output.</p> <p>If using a key located in the <b>current</b> Amazon Web Services
     * account, you can specify your KMS key in one of four ways:</p> <ol> <li> <p>Use
     * the KMS key ID itself. For example,
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>Use an
     * alias for the KMS key ID. For example, <code>alias/ExampleAlias</code>.</p>
     * </li> <li> <p>Use the Amazon Resource Name (ARN) for the KMS key ID. For
     * example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>Note that the user making the request must have permission to use the
     * specified KMS key.</p>
     */
    inline void SetOutputEncryptionKMSKeyId(Aws::String&& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = std::move(value); }

    /**
     * <p>The KMS key you want to use to encrypt your Call Analytics post-call
     * output.</p> <p>If using a key located in the <b>current</b> Amazon Web Services
     * account, you can specify your KMS key in one of four ways:</p> <ol> <li> <p>Use
     * the KMS key ID itself. For example,
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>Use an
     * alias for the KMS key ID. For example, <code>alias/ExampleAlias</code>.</p>
     * </li> <li> <p>Use the Amazon Resource Name (ARN) for the KMS key ID. For
     * example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>Note that the user making the request must have permission to use the
     * specified KMS key.</p>
     */
    inline void SetOutputEncryptionKMSKeyId(const char* value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId.assign(value); }

    /**
     * <p>The KMS key you want to use to encrypt your Call Analytics post-call
     * output.</p> <p>If using a key located in the <b>current</b> Amazon Web Services
     * account, you can specify your KMS key in one of four ways:</p> <ol> <li> <p>Use
     * the KMS key ID itself. For example,
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>Use an
     * alias for the KMS key ID. For example, <code>alias/ExampleAlias</code>.</p>
     * </li> <li> <p>Use the Amazon Resource Name (ARN) for the KMS key ID. For
     * example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>Note that the user making the request must have permission to use the
     * specified KMS key.</p>
     */
    inline PostCallAnalyticsSettings& WithOutputEncryptionKMSKeyId(const Aws::String& value) { SetOutputEncryptionKMSKeyId(value); return *this;}

    /**
     * <p>The KMS key you want to use to encrypt your Call Analytics post-call
     * output.</p> <p>If using a key located in the <b>current</b> Amazon Web Services
     * account, you can specify your KMS key in one of four ways:</p> <ol> <li> <p>Use
     * the KMS key ID itself. For example,
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>Use an
     * alias for the KMS key ID. For example, <code>alias/ExampleAlias</code>.</p>
     * </li> <li> <p>Use the Amazon Resource Name (ARN) for the KMS key ID. For
     * example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>Note that the user making the request must have permission to use the
     * specified KMS key.</p>
     */
    inline PostCallAnalyticsSettings& WithOutputEncryptionKMSKeyId(Aws::String&& value) { SetOutputEncryptionKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key you want to use to encrypt your Call Analytics post-call
     * output.</p> <p>If using a key located in the <b>current</b> Amazon Web Services
     * account, you can specify your KMS key in one of four ways:</p> <ol> <li> <p>Use
     * the KMS key ID itself. For example,
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>Use an
     * alias for the KMS key ID. For example, <code>alias/ExampleAlias</code>.</p>
     * </li> <li> <p>Use the Amazon Resource Name (ARN) for the KMS key ID. For
     * example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>Note that the user making the request must have permission to use the
     * specified KMS key.</p>
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
} // namespace TranscribeStreamingService
} // namespace Aws
