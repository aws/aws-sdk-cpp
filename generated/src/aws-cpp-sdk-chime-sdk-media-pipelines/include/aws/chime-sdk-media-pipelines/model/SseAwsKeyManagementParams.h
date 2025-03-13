/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>Contains server side encryption parameters to be used by media capture
   * pipeline. The parameters can also be used by media concatenation pipeline taking
   * media capture pipeline as a media source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/SseAwsKeyManagementParams">AWS
   * API Reference</a></p>
   */
  class SseAwsKeyManagementParams
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API SseAwsKeyManagementParams() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API SseAwsKeyManagementParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API SseAwsKeyManagementParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The KMS key you want to use to encrypt your media pipeline output. Decryption
     * is required for concatenation pipeline. If using a key located in the current
     * Amazon Web Services account, you can specify your KMS key in one of four
     * ways:</p> <ul> <li> <p>Use the KMS key ID itself. For example,
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>Use an
     * alias for the KMS key ID. For example, <code>alias/ExampleAlias</code>.</p>
     * </li> <li> <p>Use the Amazon Resource Name (ARN) for the KMS key ID. For
     * example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ul>
     * <p>If using a key located in a different Amazon Web Services account than the
     * current Amazon Web Services account, you can specify your KMS key in one of two
     * ways:</p> <ul> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ul>
     * <p>If you don't specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>Note that the role specified in the
     * <code>SinkIamRoleArn</code> request parameter must have permission to use the
     * specified KMS key.</p>
     */
    inline const Aws::String& GetAwsKmsKeyId() const { return m_awsKmsKeyId; }
    inline bool AwsKmsKeyIdHasBeenSet() const { return m_awsKmsKeyIdHasBeenSet; }
    template<typename AwsKmsKeyIdT = Aws::String>
    void SetAwsKmsKeyId(AwsKmsKeyIdT&& value) { m_awsKmsKeyIdHasBeenSet = true; m_awsKmsKeyId = std::forward<AwsKmsKeyIdT>(value); }
    template<typename AwsKmsKeyIdT = Aws::String>
    SseAwsKeyManagementParams& WithAwsKmsKeyId(AwsKmsKeyIdT&& value) { SetAwsKmsKeyId(std::forward<AwsKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Base64-encoded string of a UTF-8 encoded JSON, which contains the encryption
     * context as non-secret key-value pair known as encryption context pairs, that
     * provides an added layer of security for your data. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/encrypt_context.html">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetAwsKmsEncryptionContext() const { return m_awsKmsEncryptionContext; }
    inline bool AwsKmsEncryptionContextHasBeenSet() const { return m_awsKmsEncryptionContextHasBeenSet; }
    template<typename AwsKmsEncryptionContextT = Aws::String>
    void SetAwsKmsEncryptionContext(AwsKmsEncryptionContextT&& value) { m_awsKmsEncryptionContextHasBeenSet = true; m_awsKmsEncryptionContext = std::forward<AwsKmsEncryptionContextT>(value); }
    template<typename AwsKmsEncryptionContextT = Aws::String>
    SseAwsKeyManagementParams& WithAwsKmsEncryptionContext(AwsKmsEncryptionContextT&& value) { SetAwsKmsEncryptionContext(std::forward<AwsKmsEncryptionContextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsKmsKeyId;
    bool m_awsKmsKeyIdHasBeenSet = false;

    Aws::String m_awsKmsEncryptionContext;
    bool m_awsKmsEncryptionContextHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
