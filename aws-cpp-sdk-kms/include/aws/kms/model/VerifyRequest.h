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
#include <aws/kms/model/SigningAlgorithmSpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class VerifyRequest : public KMSRequest
  {
  public:
    AWS_KMS_API VerifyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Verify"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifies the asymmetric KMS key that will be used to verify the signature.
     * This must be the same KMS key that was used to generate the signature. If you
     * specify a different KMS key, the signature verification fails.</p> <p>To specify
     * a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>Identifies the asymmetric KMS key that will be used to verify the signature.
     * This must be the same KMS key that was used to generate the signature. If you
     * specify a different KMS key, the signature verification fails.</p> <p>To specify
     * a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>Identifies the asymmetric KMS key that will be used to verify the signature.
     * This must be the same KMS key that was used to generate the signature. If you
     * specify a different KMS key, the signature verification fails.</p> <p>To specify
     * a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>Identifies the asymmetric KMS key that will be used to verify the signature.
     * This must be the same KMS key that was used to generate the signature. If you
     * specify a different KMS key, the signature verification fails.</p> <p>To specify
     * a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>Identifies the asymmetric KMS key that will be used to verify the signature.
     * This must be the same KMS key that was used to generate the signature. If you
     * specify a different KMS key, the signature verification fails.</p> <p>To specify
     * a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>Identifies the asymmetric KMS key that will be used to verify the signature.
     * This must be the same KMS key that was used to generate the signature. If you
     * specify a different KMS key, the signature verification fails.</p> <p>To specify
     * a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline VerifyRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Identifies the asymmetric KMS key that will be used to verify the signature.
     * This must be the same KMS key that was used to generate the signature. If you
     * specify a different KMS key, the signature verification fails.</p> <p>To specify
     * a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline VerifyRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Identifies the asymmetric KMS key that will be used to verify the signature.
     * This must be the same KMS key that was used to generate the signature. If you
     * specify a different KMS key, the signature verification fails.</p> <p>To specify
     * a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline VerifyRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>Specifies the message that was signed. You can submit a raw message of up to
     * 4096 bytes, or a hash digest of the message. If you submit a digest, use the
     * <code>MessageType</code> parameter with a value of <code>DIGEST</code>.</p>
     * <p>If the message specified here is different from the message that was signed,
     * the signature verification fails. A message and its hash digest are considered
     * to be the same message.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetMessage() const{ return m_message; }

    /**
     * <p>Specifies the message that was signed. You can submit a raw message of up to
     * 4096 bytes, or a hash digest of the message. If you submit a digest, use the
     * <code>MessageType</code> parameter with a value of <code>DIGEST</code>.</p>
     * <p>If the message specified here is different from the message that was signed,
     * the signature verification fails. A message and its hash digest are considered
     * to be the same message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Specifies the message that was signed. You can submit a raw message of up to
     * 4096 bytes, or a hash digest of the message. If you submit a digest, use the
     * <code>MessageType</code> parameter with a value of <code>DIGEST</code>.</p>
     * <p>If the message specified here is different from the message that was signed,
     * the signature verification fails. A message and its hash digest are considered
     * to be the same message.</p>
     */
    inline void SetMessage(const Aws::Utils::CryptoBuffer& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Specifies the message that was signed. You can submit a raw message of up to
     * 4096 bytes, or a hash digest of the message. If you submit a digest, use the
     * <code>MessageType</code> parameter with a value of <code>DIGEST</code>.</p>
     * <p>If the message specified here is different from the message that was signed,
     * the signature verification fails. A message and its hash digest are considered
     * to be the same message.</p>
     */
    inline void SetMessage(Aws::Utils::CryptoBuffer&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Specifies the message that was signed. You can submit a raw message of up to
     * 4096 bytes, or a hash digest of the message. If you submit a digest, use the
     * <code>MessageType</code> parameter with a value of <code>DIGEST</code>.</p>
     * <p>If the message specified here is different from the message that was signed,
     * the signature verification fails. A message and its hash digest are considered
     * to be the same message.</p>
     */
    inline VerifyRequest& WithMessage(const Aws::Utils::CryptoBuffer& value) { SetMessage(value); return *this;}

    /**
     * <p>Specifies the message that was signed. You can submit a raw message of up to
     * 4096 bytes, or a hash digest of the message. If you submit a digest, use the
     * <code>MessageType</code> parameter with a value of <code>DIGEST</code>.</p>
     * <p>If the message specified here is different from the message that was signed,
     * the signature verification fails. A message and its hash digest are considered
     * to be the same message.</p>
     */
    inline VerifyRequest& WithMessage(Aws::Utils::CryptoBuffer&& value) { SetMessage(std::move(value)); return *this;}


    /**
     * <p>Tells KMS whether the value of the <code>Message</code> parameter is a
     * message or message digest. The default value, RAW, indicates a message. To
     * indicate a message digest, enter <code>DIGEST</code>.</p>  <p>Use the
     * <code>DIGEST</code> value only when the value of the <code>Message</code>
     * parameter is a message digest. If you use the <code>DIGEST</code> value with a
     * raw message, the security of the verification operation can be compromised.</p>
     * 
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }

    /**
     * <p>Tells KMS whether the value of the <code>Message</code> parameter is a
     * message or message digest. The default value, RAW, indicates a message. To
     * indicate a message digest, enter <code>DIGEST</code>.</p>  <p>Use the
     * <code>DIGEST</code> value only when the value of the <code>Message</code>
     * parameter is a message digest. If you use the <code>DIGEST</code> value with a
     * raw message, the security of the verification operation can be compromised.</p>
     * 
     */
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }

    /**
     * <p>Tells KMS whether the value of the <code>Message</code> parameter is a
     * message or message digest. The default value, RAW, indicates a message. To
     * indicate a message digest, enter <code>DIGEST</code>.</p>  <p>Use the
     * <code>DIGEST</code> value only when the value of the <code>Message</code>
     * parameter is a message digest. If you use the <code>DIGEST</code> value with a
     * raw message, the security of the verification operation can be compromised.</p>
     * 
     */
    inline void SetMessageType(const MessageType& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }

    /**
     * <p>Tells KMS whether the value of the <code>Message</code> parameter is a
     * message or message digest. The default value, RAW, indicates a message. To
     * indicate a message digest, enter <code>DIGEST</code>.</p>  <p>Use the
     * <code>DIGEST</code> value only when the value of the <code>Message</code>
     * parameter is a message digest. If you use the <code>DIGEST</code> value with a
     * raw message, the security of the verification operation can be compromised.</p>
     * 
     */
    inline void SetMessageType(MessageType&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::move(value); }

    /**
     * <p>Tells KMS whether the value of the <code>Message</code> parameter is a
     * message or message digest. The default value, RAW, indicates a message. To
     * indicate a message digest, enter <code>DIGEST</code>.</p>  <p>Use the
     * <code>DIGEST</code> value only when the value of the <code>Message</code>
     * parameter is a message digest. If you use the <code>DIGEST</code> value with a
     * raw message, the security of the verification operation can be compromised.</p>
     * 
     */
    inline VerifyRequest& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}

    /**
     * <p>Tells KMS whether the value of the <code>Message</code> parameter is a
     * message or message digest. The default value, RAW, indicates a message. To
     * indicate a message digest, enter <code>DIGEST</code>.</p>  <p>Use the
     * <code>DIGEST</code> value only when the value of the <code>Message</code>
     * parameter is a message digest. If you use the <code>DIGEST</code> value with a
     * raw message, the security of the verification operation can be compromised.</p>
     * 
     */
    inline VerifyRequest& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}


    /**
     * <p>The signature that the <code>Sign</code> operation generated.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetSignature() const{ return m_signature; }

    /**
     * <p>The signature that the <code>Sign</code> operation generated.</p>
     */
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }

    /**
     * <p>The signature that the <code>Sign</code> operation generated.</p>
     */
    inline void SetSignature(const Aws::Utils::ByteBuffer& value) { m_signatureHasBeenSet = true; m_signature = value; }

    /**
     * <p>The signature that the <code>Sign</code> operation generated.</p>
     */
    inline void SetSignature(Aws::Utils::ByteBuffer&& value) { m_signatureHasBeenSet = true; m_signature = std::move(value); }

    /**
     * <p>The signature that the <code>Sign</code> operation generated.</p>
     */
    inline VerifyRequest& WithSignature(const Aws::Utils::ByteBuffer& value) { SetSignature(value); return *this;}

    /**
     * <p>The signature that the <code>Sign</code> operation generated.</p>
     */
    inline VerifyRequest& WithSignature(Aws::Utils::ByteBuffer&& value) { SetSignature(std::move(value)); return *this;}


    /**
     * <p>The signing algorithm that was used to sign the message. If you submit a
     * different algorithm, the signature verification fails.</p>
     */
    inline const SigningAlgorithmSpec& GetSigningAlgorithm() const{ return m_signingAlgorithm; }

    /**
     * <p>The signing algorithm that was used to sign the message. If you submit a
     * different algorithm, the signature verification fails.</p>
     */
    inline bool SigningAlgorithmHasBeenSet() const { return m_signingAlgorithmHasBeenSet; }

    /**
     * <p>The signing algorithm that was used to sign the message. If you submit a
     * different algorithm, the signature verification fails.</p>
     */
    inline void SetSigningAlgorithm(const SigningAlgorithmSpec& value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = value; }

    /**
     * <p>The signing algorithm that was used to sign the message. If you submit a
     * different algorithm, the signature verification fails.</p>
     */
    inline void SetSigningAlgorithm(SigningAlgorithmSpec&& value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = std::move(value); }

    /**
     * <p>The signing algorithm that was used to sign the message. If you submit a
     * different algorithm, the signature verification fails.</p>
     */
    inline VerifyRequest& WithSigningAlgorithm(const SigningAlgorithmSpec& value) { SetSigningAlgorithm(value); return *this;}

    /**
     * <p>The signing algorithm that was used to sign the message. If you submit a
     * different algorithm, the signature verification fails.</p>
     */
    inline VerifyRequest& WithSigningAlgorithm(SigningAlgorithmSpec&& value) { SetSigningAlgorithm(std::move(value)); return *this;}


    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGrantTokens() const{ return m_grantTokens; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool GrantTokensHasBeenSet() const { return m_grantTokensHasBeenSet; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetGrantTokens(const Aws::Vector<Aws::String>& value) { m_grantTokensHasBeenSet = true; m_grantTokens = value; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetGrantTokens(Aws::Vector<Aws::String>&& value) { m_grantTokensHasBeenSet = true; m_grantTokens = std::move(value); }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline VerifyRequest& WithGrantTokens(const Aws::Vector<Aws::String>& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline VerifyRequest& WithGrantTokens(Aws::Vector<Aws::String>&& value) { SetGrantTokens(std::move(value)); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline VerifyRequest& AddGrantTokens(const Aws::String& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline VerifyRequest& AddGrantTokens(Aws::String&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline VerifyRequest& AddGrantTokens(const char* value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_message;
    bool m_messageHasBeenSet = false;

    MessageType m_messageType;
    bool m_messageTypeHasBeenSet = false;

    Aws::Utils::ByteBuffer m_signature;
    bool m_signatureHasBeenSet = false;

    SigningAlgorithmSpec m_signingAlgorithm;
    bool m_signingAlgorithmHasBeenSet = false;

    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
