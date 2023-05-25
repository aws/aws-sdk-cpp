/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/MacAlgorithmSpec.h>
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
  class GenerateMacRequest : public KMSRequest
  {
  public:
    AWS_KMS_API GenerateMacRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateMac"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The message to be hashed. Specify a message of up to 4,096 bytes. </p> <p>
     * <code>GenerateMac</code> and <a>VerifyMac</a> do not provide special handling
     * for message digests. If you generate an HMAC for a hash digest of a message, you
     * must verify the HMAC of the same hash digest.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetMessage() const{ return m_message; }

    /**
     * <p>The message to be hashed. Specify a message of up to 4,096 bytes. </p> <p>
     * <code>GenerateMac</code> and <a>VerifyMac</a> do not provide special handling
     * for message digests. If you generate an HMAC for a hash digest of a message, you
     * must verify the HMAC of the same hash digest.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message to be hashed. Specify a message of up to 4,096 bytes. </p> <p>
     * <code>GenerateMac</code> and <a>VerifyMac</a> do not provide special handling
     * for message digests. If you generate an HMAC for a hash digest of a message, you
     * must verify the HMAC of the same hash digest.</p>
     */
    inline void SetMessage(const Aws::Utils::CryptoBuffer& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message to be hashed. Specify a message of up to 4,096 bytes. </p> <p>
     * <code>GenerateMac</code> and <a>VerifyMac</a> do not provide special handling
     * for message digests. If you generate an HMAC for a hash digest of a message, you
     * must verify the HMAC of the same hash digest.</p>
     */
    inline void SetMessage(Aws::Utils::CryptoBuffer&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message to be hashed. Specify a message of up to 4,096 bytes. </p> <p>
     * <code>GenerateMac</code> and <a>VerifyMac</a> do not provide special handling
     * for message digests. If you generate an HMAC for a hash digest of a message, you
     * must verify the HMAC of the same hash digest.</p>
     */
    inline GenerateMacRequest& WithMessage(const Aws::Utils::CryptoBuffer& value) { SetMessage(value); return *this;}

    /**
     * <p>The message to be hashed. Specify a message of up to 4,096 bytes. </p> <p>
     * <code>GenerateMac</code> and <a>VerifyMac</a> do not provide special handling
     * for message digests. If you generate an HMAC for a hash digest of a message, you
     * must verify the HMAC of the same hash digest.</p>
     */
    inline GenerateMacRequest& WithMessage(Aws::Utils::CryptoBuffer&& value) { SetMessage(std::move(value)); return *this;}


    /**
     * <p>The HMAC KMS key to use in the operation. The MAC algorithm computes the HMAC
     * for the message and the key as described in <a
     * href="https://datatracker.ietf.org/doc/html/rfc2104">RFC 2104</a>.</p> <p>To
     * identify an HMAC KMS key, use the <a>DescribeKey</a> operation and see the
     * <code>KeySpec</code> field in the response.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The HMAC KMS key to use in the operation. The MAC algorithm computes the HMAC
     * for the message and the key as described in <a
     * href="https://datatracker.ietf.org/doc/html/rfc2104">RFC 2104</a>.</p> <p>To
     * identify an HMAC KMS key, use the <a>DescribeKey</a> operation and see the
     * <code>KeySpec</code> field in the response.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The HMAC KMS key to use in the operation. The MAC algorithm computes the HMAC
     * for the message and the key as described in <a
     * href="https://datatracker.ietf.org/doc/html/rfc2104">RFC 2104</a>.</p> <p>To
     * identify an HMAC KMS key, use the <a>DescribeKey</a> operation and see the
     * <code>KeySpec</code> field in the response.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The HMAC KMS key to use in the operation. The MAC algorithm computes the HMAC
     * for the message and the key as described in <a
     * href="https://datatracker.ietf.org/doc/html/rfc2104">RFC 2104</a>.</p> <p>To
     * identify an HMAC KMS key, use the <a>DescribeKey</a> operation and see the
     * <code>KeySpec</code> field in the response.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The HMAC KMS key to use in the operation. The MAC algorithm computes the HMAC
     * for the message and the key as described in <a
     * href="https://datatracker.ietf.org/doc/html/rfc2104">RFC 2104</a>.</p> <p>To
     * identify an HMAC KMS key, use the <a>DescribeKey</a> operation and see the
     * <code>KeySpec</code> field in the response.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The HMAC KMS key to use in the operation. The MAC algorithm computes the HMAC
     * for the message and the key as described in <a
     * href="https://datatracker.ietf.org/doc/html/rfc2104">RFC 2104</a>.</p> <p>To
     * identify an HMAC KMS key, use the <a>DescribeKey</a> operation and see the
     * <code>KeySpec</code> field in the response.</p>
     */
    inline GenerateMacRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The HMAC KMS key to use in the operation. The MAC algorithm computes the HMAC
     * for the message and the key as described in <a
     * href="https://datatracker.ietf.org/doc/html/rfc2104">RFC 2104</a>.</p> <p>To
     * identify an HMAC KMS key, use the <a>DescribeKey</a> operation and see the
     * <code>KeySpec</code> field in the response.</p>
     */
    inline GenerateMacRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The HMAC KMS key to use in the operation. The MAC algorithm computes the HMAC
     * for the message and the key as described in <a
     * href="https://datatracker.ietf.org/doc/html/rfc2104">RFC 2104</a>.</p> <p>To
     * identify an HMAC KMS key, use the <a>DescribeKey</a> operation and see the
     * <code>KeySpec</code> field in the response.</p>
     */
    inline GenerateMacRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The MAC algorithm used in the operation.</p> <p> The algorithm must be
     * compatible with the HMAC KMS key that you specify. To find the MAC algorithms
     * that your HMAC KMS key supports, use the <a>DescribeKey</a> operation and see
     * the <code>MacAlgorithms</code> field in the <code>DescribeKey</code>
     * response.</p>
     */
    inline const MacAlgorithmSpec& GetMacAlgorithm() const{ return m_macAlgorithm; }

    /**
     * <p>The MAC algorithm used in the operation.</p> <p> The algorithm must be
     * compatible with the HMAC KMS key that you specify. To find the MAC algorithms
     * that your HMAC KMS key supports, use the <a>DescribeKey</a> operation and see
     * the <code>MacAlgorithms</code> field in the <code>DescribeKey</code>
     * response.</p>
     */
    inline bool MacAlgorithmHasBeenSet() const { return m_macAlgorithmHasBeenSet; }

    /**
     * <p>The MAC algorithm used in the operation.</p> <p> The algorithm must be
     * compatible with the HMAC KMS key that you specify. To find the MAC algorithms
     * that your HMAC KMS key supports, use the <a>DescribeKey</a> operation and see
     * the <code>MacAlgorithms</code> field in the <code>DescribeKey</code>
     * response.</p>
     */
    inline void SetMacAlgorithm(const MacAlgorithmSpec& value) { m_macAlgorithmHasBeenSet = true; m_macAlgorithm = value; }

    /**
     * <p>The MAC algorithm used in the operation.</p> <p> The algorithm must be
     * compatible with the HMAC KMS key that you specify. To find the MAC algorithms
     * that your HMAC KMS key supports, use the <a>DescribeKey</a> operation and see
     * the <code>MacAlgorithms</code> field in the <code>DescribeKey</code>
     * response.</p>
     */
    inline void SetMacAlgorithm(MacAlgorithmSpec&& value) { m_macAlgorithmHasBeenSet = true; m_macAlgorithm = std::move(value); }

    /**
     * <p>The MAC algorithm used in the operation.</p> <p> The algorithm must be
     * compatible with the HMAC KMS key that you specify. To find the MAC algorithms
     * that your HMAC KMS key supports, use the <a>DescribeKey</a> operation and see
     * the <code>MacAlgorithms</code> field in the <code>DescribeKey</code>
     * response.</p>
     */
    inline GenerateMacRequest& WithMacAlgorithm(const MacAlgorithmSpec& value) { SetMacAlgorithm(value); return *this;}

    /**
     * <p>The MAC algorithm used in the operation.</p> <p> The algorithm must be
     * compatible with the HMAC KMS key that you specify. To find the MAC algorithms
     * that your HMAC KMS key supports, use the <a>DescribeKey</a> operation and see
     * the <code>MacAlgorithms</code> field in the <code>DescribeKey</code>
     * response.</p>
     */
    inline GenerateMacRequest& WithMacAlgorithm(MacAlgorithmSpec&& value) { SetMacAlgorithm(std::move(value)); return *this;}


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
    inline GenerateMacRequest& WithGrantTokens(const Aws::Vector<Aws::String>& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateMacRequest& WithGrantTokens(Aws::Vector<Aws::String>&& value) { SetGrantTokens(std::move(value)); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateMacRequest& AddGrantTokens(const Aws::String& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateMacRequest& AddGrantTokens(Aws::String&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateMacRequest& AddGrantTokens(const char* value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

  private:

    Aws::Utils::CryptoBuffer m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    MacAlgorithmSpec m_macAlgorithm;
    bool m_macAlgorithmHasBeenSet = false;

    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
