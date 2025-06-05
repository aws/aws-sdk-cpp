/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class RetireGrantRequest : public KMSRequest
  {
  public:
    AWS_KMS_API RetireGrantRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RetireGrant"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Identifies the grant to be retired. You can use a grant token to identify a
     * new grant even before it has achieved eventual consistency.</p> <p>Only the
     * <a>CreateGrant</a> operation returns a grant token. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#terms-eventual-consistency">Eventual
     * consistency</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetGrantToken() const { return m_grantToken; }
    inline bool GrantTokenHasBeenSet() const { return m_grantTokenHasBeenSet; }
    template<typename GrantTokenT = Aws::String>
    void SetGrantToken(GrantTokenT&& value) { m_grantTokenHasBeenSet = true; m_grantToken = std::forward<GrantTokenT>(value); }
    template<typename GrantTokenT = Aws::String>
    RetireGrantRequest& WithGrantToken(GrantTokenT&& value) { SetGrantToken(std::forward<GrantTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key ARN KMS key associated with the grant. To find the key ARN, use the
     * <a>ListKeys</a> operation.</p> <p>For example:
     * <code>arn:aws:kms:us-east-2:444455556666:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    RetireGrantRequest& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the grant to retire. To get the grant ID, use <a>CreateGrant</a>,
     * <a>ListGrants</a>, or <a>ListRetirableGrants</a>.</p> <ul> <li> <p>Grant ID
     * Example - 0123456789012345678901234567890123456789012345678901234567890123</p>
     * </li> </ul>
     */
    inline const Aws::String& GetGrantId() const { return m_grantId; }
    inline bool GrantIdHasBeenSet() const { return m_grantIdHasBeenSet; }
    template<typename GrantIdT = Aws::String>
    void SetGrantId(GrantIdT&& value) { m_grantIdHasBeenSet = true; m_grantId = std::forward<GrantIdT>(value); }
    template<typename GrantIdT = Aws::String>
    RetireGrantRequest& WithGrantId(GrantIdT&& value) { SetGrantId(std::forward<GrantIdT>(value)); return *this;}
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
    inline RetireGrantRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_grantToken;
    bool m_grantTokenHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_grantId;
    bool m_grantIdHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
