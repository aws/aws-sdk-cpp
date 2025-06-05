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
    AWS_KMS_API GenerateMacRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateMac"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The message to be hashed. Specify a message of up to 4,096 bytes. </p> <p>
     * <code>GenerateMac</code> and <a>VerifyMac</a> do not provide special handling
     * for message digests. If you generate an HMAC for a hash digest of a message, you
     * must verify the HMAC of the same hash digest.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::Utils::CryptoBuffer>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::Utils::CryptoBuffer>
    GenerateMacRequest& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HMAC KMS key to use in the operation. The MAC algorithm computes the HMAC
     * for the message and the key as described in <a
     * href="https://datatracker.ietf.org/doc/html/rfc2104">RFC 2104</a>.</p> <p>To
     * identify an HMAC KMS key, use the <a>DescribeKey</a> operation and see the
     * <code>KeySpec</code> field in the response.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    GenerateMacRequest& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC algorithm used in the operation.</p> <p> The algorithm must be
     * compatible with the HMAC KMS key that you specify. To find the MAC algorithms
     * that your HMAC KMS key supports, use the <a>DescribeKey</a> operation and see
     * the <code>MacAlgorithms</code> field in the <code>DescribeKey</code>
     * response.</p>
     */
    inline MacAlgorithmSpec GetMacAlgorithm() const { return m_macAlgorithm; }
    inline bool MacAlgorithmHasBeenSet() const { return m_macAlgorithmHasBeenSet; }
    inline void SetMacAlgorithm(MacAlgorithmSpec value) { m_macAlgorithmHasBeenSet = true; m_macAlgorithm = value; }
    inline GenerateMacRequest& WithMacAlgorithm(MacAlgorithmSpec value) { SetMacAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/using-grant-token.html">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGrantTokens() const { return m_grantTokens; }
    inline bool GrantTokensHasBeenSet() const { return m_grantTokensHasBeenSet; }
    template<typename GrantTokensT = Aws::Vector<Aws::String>>
    void SetGrantTokens(GrantTokensT&& value) { m_grantTokensHasBeenSet = true; m_grantTokens = std::forward<GrantTokensT>(value); }
    template<typename GrantTokensT = Aws::Vector<Aws::String>>
    GenerateMacRequest& WithGrantTokens(GrantTokensT&& value) { SetGrantTokens(std::forward<GrantTokensT>(value)); return *this;}
    template<typename GrantTokensT = Aws::String>
    GenerateMacRequest& AddGrantTokens(GrantTokensT&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.emplace_back(std::forward<GrantTokensT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks if your request will succeed. <code>DryRun</code> is an optional
     * parameter. </p> <p>To learn more about how to use this parameter, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/testing-permissions.html">Testing
     * your permissions</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline GenerateMacRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Utils::CryptoBuffer m_message{};
    bool m_messageHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    MacAlgorithmSpec m_macAlgorithm{MacAlgorithmSpec::NOT_SET};
    bool m_macAlgorithmHasBeenSet = false;

    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
