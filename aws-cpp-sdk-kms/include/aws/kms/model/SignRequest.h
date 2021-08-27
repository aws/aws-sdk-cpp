/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/kms/model/MessageType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/model/SigningAlgorithmSpec.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API SignRequest : public KMSRequest
  {
  public:
    SignRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Sign"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifies an asymmetric CMK. AWS KMS uses the private key in the asymmetric
     * CMK to sign the message. The <code>KeyUsage</code> type of the CMK must be
     * <code>SIGN_VERIFY</code>. To find the <code>KeyUsage</code> of a CMK, use the
     * <a>DescribeKey</a> operation.</p> <p>To specify a CMK, use its key ID, Amazon
     * Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix
     * it with <code>"alias/"</code>. To specify a CMK in a different AWS account, you
     * must use the key ARN or alias ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>Identifies an asymmetric CMK. AWS KMS uses the private key in the asymmetric
     * CMK to sign the message. The <code>KeyUsage</code> type of the CMK must be
     * <code>SIGN_VERIFY</code>. To find the <code>KeyUsage</code> of a CMK, use the
     * <a>DescribeKey</a> operation.</p> <p>To specify a CMK, use its key ID, Amazon
     * Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix
     * it with <code>"alias/"</code>. To specify a CMK in a different AWS account, you
     * must use the key ARN or alias ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>Identifies an asymmetric CMK. AWS KMS uses the private key in the asymmetric
     * CMK to sign the message. The <code>KeyUsage</code> type of the CMK must be
     * <code>SIGN_VERIFY</code>. To find the <code>KeyUsage</code> of a CMK, use the
     * <a>DescribeKey</a> operation.</p> <p>To specify a CMK, use its key ID, Amazon
     * Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix
     * it with <code>"alias/"</code>. To specify a CMK in a different AWS account, you
     * must use the key ARN or alias ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>Identifies an asymmetric CMK. AWS KMS uses the private key in the asymmetric
     * CMK to sign the message. The <code>KeyUsage</code> type of the CMK must be
     * <code>SIGN_VERIFY</code>. To find the <code>KeyUsage</code> of a CMK, use the
     * <a>DescribeKey</a> operation.</p> <p>To specify a CMK, use its key ID, Amazon
     * Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix
     * it with <code>"alias/"</code>. To specify a CMK in a different AWS account, you
     * must use the key ARN or alias ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>Identifies an asymmetric CMK. AWS KMS uses the private key in the asymmetric
     * CMK to sign the message. The <code>KeyUsage</code> type of the CMK must be
     * <code>SIGN_VERIFY</code>. To find the <code>KeyUsage</code> of a CMK, use the
     * <a>DescribeKey</a> operation.</p> <p>To specify a CMK, use its key ID, Amazon
     * Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix
     * it with <code>"alias/"</code>. To specify a CMK in a different AWS account, you
     * must use the key ARN or alias ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>Identifies an asymmetric CMK. AWS KMS uses the private key in the asymmetric
     * CMK to sign the message. The <code>KeyUsage</code> type of the CMK must be
     * <code>SIGN_VERIFY</code>. To find the <code>KeyUsage</code> of a CMK, use the
     * <a>DescribeKey</a> operation.</p> <p>To specify a CMK, use its key ID, Amazon
     * Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix
     * it with <code>"alias/"</code>. To specify a CMK in a different AWS account, you
     * must use the key ARN or alias ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline SignRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Identifies an asymmetric CMK. AWS KMS uses the private key in the asymmetric
     * CMK to sign the message. The <code>KeyUsage</code> type of the CMK must be
     * <code>SIGN_VERIFY</code>. To find the <code>KeyUsage</code> of a CMK, use the
     * <a>DescribeKey</a> operation.</p> <p>To specify a CMK, use its key ID, Amazon
     * Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix
     * it with <code>"alias/"</code>. To specify a CMK in a different AWS account, you
     * must use the key ARN or alias ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline SignRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Identifies an asymmetric CMK. AWS KMS uses the private key in the asymmetric
     * CMK to sign the message. The <code>KeyUsage</code> type of the CMK must be
     * <code>SIGN_VERIFY</code>. To find the <code>KeyUsage</code> of a CMK, use the
     * <a>DescribeKey</a> operation.</p> <p>To specify a CMK, use its key ID, Amazon
     * Resource Name (ARN), alias name, or alias ARN. When using an alias name, prefix
     * it with <code>"alias/"</code>. To specify a CMK in a different AWS account, you
     * must use the key ARN or alias ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline SignRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>Specifies the message or message digest to sign. Messages can be 0-4096
     * bytes. To sign a larger message, provide the message digest.</p> <p>If you
     * provide a message, AWS KMS generates a hash digest of the message and then signs
     * it.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetMessage() const{ return m_message; }

    /**
     * <p>Specifies the message or message digest to sign. Messages can be 0-4096
     * bytes. To sign a larger message, provide the message digest.</p> <p>If you
     * provide a message, AWS KMS generates a hash digest of the message and then signs
     * it.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Specifies the message or message digest to sign. Messages can be 0-4096
     * bytes. To sign a larger message, provide the message digest.</p> <p>If you
     * provide a message, AWS KMS generates a hash digest of the message and then signs
     * it.</p>
     */
    inline void SetMessage(const Aws::Utils::CryptoBuffer& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Specifies the message or message digest to sign. Messages can be 0-4096
     * bytes. To sign a larger message, provide the message digest.</p> <p>If you
     * provide a message, AWS KMS generates a hash digest of the message and then signs
     * it.</p>
     */
    inline void SetMessage(Aws::Utils::CryptoBuffer&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Specifies the message or message digest to sign. Messages can be 0-4096
     * bytes. To sign a larger message, provide the message digest.</p> <p>If you
     * provide a message, AWS KMS generates a hash digest of the message and then signs
     * it.</p>
     */
    inline SignRequest& WithMessage(const Aws::Utils::CryptoBuffer& value) { SetMessage(value); return *this;}

    /**
     * <p>Specifies the message or message digest to sign. Messages can be 0-4096
     * bytes. To sign a larger message, provide the message digest.</p> <p>If you
     * provide a message, AWS KMS generates a hash digest of the message and then signs
     * it.</p>
     */
    inline SignRequest& WithMessage(Aws::Utils::CryptoBuffer&& value) { SetMessage(std::move(value)); return *this;}


    /**
     * <p>Tells AWS KMS whether the value of the <code>Message</code> parameter is a
     * message or message digest. The default value, RAW, indicates a message. To
     * indicate a message digest, enter <code>DIGEST</code>.</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }

    /**
     * <p>Tells AWS KMS whether the value of the <code>Message</code> parameter is a
     * message or message digest. The default value, RAW, indicates a message. To
     * indicate a message digest, enter <code>DIGEST</code>.</p>
     */
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }

    /**
     * <p>Tells AWS KMS whether the value of the <code>Message</code> parameter is a
     * message or message digest. The default value, RAW, indicates a message. To
     * indicate a message digest, enter <code>DIGEST</code>.</p>
     */
    inline void SetMessageType(const MessageType& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }

    /**
     * <p>Tells AWS KMS whether the value of the <code>Message</code> parameter is a
     * message or message digest. The default value, RAW, indicates a message. To
     * indicate a message digest, enter <code>DIGEST</code>.</p>
     */
    inline void SetMessageType(MessageType&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::move(value); }

    /**
     * <p>Tells AWS KMS whether the value of the <code>Message</code> parameter is a
     * message or message digest. The default value, RAW, indicates a message. To
     * indicate a message digest, enter <code>DIGEST</code>.</p>
     */
    inline SignRequest& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}

    /**
     * <p>Tells AWS KMS whether the value of the <code>Message</code> parameter is a
     * message or message digest. The default value, RAW, indicates a message. To
     * indicate a message digest, enter <code>DIGEST</code>.</p>
     */
    inline SignRequest& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}


    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGrantTokens() const{ return m_grantTokens; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline bool GrantTokensHasBeenSet() const { return m_grantTokensHasBeenSet; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetGrantTokens(const Aws::Vector<Aws::String>& value) { m_grantTokensHasBeenSet = true; m_grantTokens = value; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetGrantTokens(Aws::Vector<Aws::String>&& value) { m_grantTokensHasBeenSet = true; m_grantTokens = std::move(value); }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline SignRequest& WithGrantTokens(const Aws::Vector<Aws::String>& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline SignRequest& WithGrantTokens(Aws::Vector<Aws::String>&& value) { SetGrantTokens(std::move(value)); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline SignRequest& AddGrantTokens(const Aws::String& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline SignRequest& AddGrantTokens(Aws::String&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline SignRequest& AddGrantTokens(const char* value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }


    /**
     * <p>Specifies the signing algorithm to use when signing the message. </p>
     * <p>Choose an algorithm that is compatible with the type and size of the
     * specified asymmetric CMK.</p>
     */
    inline const SigningAlgorithmSpec& GetSigningAlgorithm() const{ return m_signingAlgorithm; }

    /**
     * <p>Specifies the signing algorithm to use when signing the message. </p>
     * <p>Choose an algorithm that is compatible with the type and size of the
     * specified asymmetric CMK.</p>
     */
    inline bool SigningAlgorithmHasBeenSet() const { return m_signingAlgorithmHasBeenSet; }

    /**
     * <p>Specifies the signing algorithm to use when signing the message. </p>
     * <p>Choose an algorithm that is compatible with the type and size of the
     * specified asymmetric CMK.</p>
     */
    inline void SetSigningAlgorithm(const SigningAlgorithmSpec& value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = value; }

    /**
     * <p>Specifies the signing algorithm to use when signing the message. </p>
     * <p>Choose an algorithm that is compatible with the type and size of the
     * specified asymmetric CMK.</p>
     */
    inline void SetSigningAlgorithm(SigningAlgorithmSpec&& value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = std::move(value); }

    /**
     * <p>Specifies the signing algorithm to use when signing the message. </p>
     * <p>Choose an algorithm that is compatible with the type and size of the
     * specified asymmetric CMK.</p>
     */
    inline SignRequest& WithSigningAlgorithm(const SigningAlgorithmSpec& value) { SetSigningAlgorithm(value); return *this;}

    /**
     * <p>Specifies the signing algorithm to use when signing the message. </p>
     * <p>Choose an algorithm that is compatible with the type and size of the
     * specified asymmetric CMK.</p>
     */
    inline SignRequest& WithSigningAlgorithm(SigningAlgorithmSpec&& value) { SetSigningAlgorithm(std::move(value)); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;

    Aws::Utils::CryptoBuffer m_message;
    bool m_messageHasBeenSet;

    MessageType m_messageType;
    bool m_messageTypeHasBeenSet;

    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet;

    SigningAlgorithmSpec m_signingAlgorithm;
    bool m_signingAlgorithmHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
