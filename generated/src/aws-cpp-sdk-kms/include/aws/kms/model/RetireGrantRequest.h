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
    AWS_KMS_API RetireGrantRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RetireGrant"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifies the grant to be retired. You can use a grant token to identify a
     * new grant even before it has achieved eventual consistency.</p> <p>Only the
     * <a>CreateGrant</a> operation returns a grant token. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#terms-eventual-consistency">Eventual
     * consistency</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetGrantToken() const{ return m_grantToken; }

    /**
     * <p>Identifies the grant to be retired. You can use a grant token to identify a
     * new grant even before it has achieved eventual consistency.</p> <p>Only the
     * <a>CreateGrant</a> operation returns a grant token. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#terms-eventual-consistency">Eventual
     * consistency</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool GrantTokenHasBeenSet() const { return m_grantTokenHasBeenSet; }

    /**
     * <p>Identifies the grant to be retired. You can use a grant token to identify a
     * new grant even before it has achieved eventual consistency.</p> <p>Only the
     * <a>CreateGrant</a> operation returns a grant token. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#terms-eventual-consistency">Eventual
     * consistency</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetGrantToken(const Aws::String& value) { m_grantTokenHasBeenSet = true; m_grantToken = value; }

    /**
     * <p>Identifies the grant to be retired. You can use a grant token to identify a
     * new grant even before it has achieved eventual consistency.</p> <p>Only the
     * <a>CreateGrant</a> operation returns a grant token. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#terms-eventual-consistency">Eventual
     * consistency</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetGrantToken(Aws::String&& value) { m_grantTokenHasBeenSet = true; m_grantToken = std::move(value); }

    /**
     * <p>Identifies the grant to be retired. You can use a grant token to identify a
     * new grant even before it has achieved eventual consistency.</p> <p>Only the
     * <a>CreateGrant</a> operation returns a grant token. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#terms-eventual-consistency">Eventual
     * consistency</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetGrantToken(const char* value) { m_grantTokenHasBeenSet = true; m_grantToken.assign(value); }

    /**
     * <p>Identifies the grant to be retired. You can use a grant token to identify a
     * new grant even before it has achieved eventual consistency.</p> <p>Only the
     * <a>CreateGrant</a> operation returns a grant token. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#terms-eventual-consistency">Eventual
     * consistency</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline RetireGrantRequest& WithGrantToken(const Aws::String& value) { SetGrantToken(value); return *this;}

    /**
     * <p>Identifies the grant to be retired. You can use a grant token to identify a
     * new grant even before it has achieved eventual consistency.</p> <p>Only the
     * <a>CreateGrant</a> operation returns a grant token. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#terms-eventual-consistency">Eventual
     * consistency</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline RetireGrantRequest& WithGrantToken(Aws::String&& value) { SetGrantToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the grant to be retired. You can use a grant token to identify a
     * new grant even before it has achieved eventual consistency.</p> <p>Only the
     * <a>CreateGrant</a> operation returns a grant token. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#terms-eventual-consistency">Eventual
     * consistency</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline RetireGrantRequest& WithGrantToken(const char* value) { SetGrantToken(value); return *this;}


    /**
     * <p>The key ARN KMS key associated with the grant. To find the key ARN, use the
     * <a>ListKeys</a> operation.</p> <p>For example:
     * <code>arn:aws:kms:us-east-2:444455556666:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The key ARN KMS key associated with the grant. To find the key ARN, use the
     * <a>ListKeys</a> operation.</p> <p>For example:
     * <code>arn:aws:kms:us-east-2:444455556666:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The key ARN KMS key associated with the grant. To find the key ARN, use the
     * <a>ListKeys</a> operation.</p> <p>For example:
     * <code>arn:aws:kms:us-east-2:444455556666:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The key ARN KMS key associated with the grant. To find the key ARN, use the
     * <a>ListKeys</a> operation.</p> <p>For example:
     * <code>arn:aws:kms:us-east-2:444455556666:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The key ARN KMS key associated with the grant. To find the key ARN, use the
     * <a>ListKeys</a> operation.</p> <p>For example:
     * <code>arn:aws:kms:us-east-2:444455556666:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The key ARN KMS key associated with the grant. To find the key ARN, use the
     * <a>ListKeys</a> operation.</p> <p>For example:
     * <code>arn:aws:kms:us-east-2:444455556666:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p>
     */
    inline RetireGrantRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The key ARN KMS key associated with the grant. To find the key ARN, use the
     * <a>ListKeys</a> operation.</p> <p>For example:
     * <code>arn:aws:kms:us-east-2:444455556666:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p>
     */
    inline RetireGrantRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The key ARN KMS key associated with the grant. To find the key ARN, use the
     * <a>ListKeys</a> operation.</p> <p>For example:
     * <code>arn:aws:kms:us-east-2:444455556666:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p>
     */
    inline RetireGrantRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>Identifies the grant to retire. To get the grant ID, use <a>CreateGrant</a>,
     * <a>ListGrants</a>, or <a>ListRetirableGrants</a>.</p> <ul> <li> <p>Grant ID
     * Example - 0123456789012345678901234567890123456789012345678901234567890123</p>
     * </li> </ul>
     */
    inline const Aws::String& GetGrantId() const{ return m_grantId; }

    /**
     * <p>Identifies the grant to retire. To get the grant ID, use <a>CreateGrant</a>,
     * <a>ListGrants</a>, or <a>ListRetirableGrants</a>.</p> <ul> <li> <p>Grant ID
     * Example - 0123456789012345678901234567890123456789012345678901234567890123</p>
     * </li> </ul>
     */
    inline bool GrantIdHasBeenSet() const { return m_grantIdHasBeenSet; }

    /**
     * <p>Identifies the grant to retire. To get the grant ID, use <a>CreateGrant</a>,
     * <a>ListGrants</a>, or <a>ListRetirableGrants</a>.</p> <ul> <li> <p>Grant ID
     * Example - 0123456789012345678901234567890123456789012345678901234567890123</p>
     * </li> </ul>
     */
    inline void SetGrantId(const Aws::String& value) { m_grantIdHasBeenSet = true; m_grantId = value; }

    /**
     * <p>Identifies the grant to retire. To get the grant ID, use <a>CreateGrant</a>,
     * <a>ListGrants</a>, or <a>ListRetirableGrants</a>.</p> <ul> <li> <p>Grant ID
     * Example - 0123456789012345678901234567890123456789012345678901234567890123</p>
     * </li> </ul>
     */
    inline void SetGrantId(Aws::String&& value) { m_grantIdHasBeenSet = true; m_grantId = std::move(value); }

    /**
     * <p>Identifies the grant to retire. To get the grant ID, use <a>CreateGrant</a>,
     * <a>ListGrants</a>, or <a>ListRetirableGrants</a>.</p> <ul> <li> <p>Grant ID
     * Example - 0123456789012345678901234567890123456789012345678901234567890123</p>
     * </li> </ul>
     */
    inline void SetGrantId(const char* value) { m_grantIdHasBeenSet = true; m_grantId.assign(value); }

    /**
     * <p>Identifies the grant to retire. To get the grant ID, use <a>CreateGrant</a>,
     * <a>ListGrants</a>, or <a>ListRetirableGrants</a>.</p> <ul> <li> <p>Grant ID
     * Example - 0123456789012345678901234567890123456789012345678901234567890123</p>
     * </li> </ul>
     */
    inline RetireGrantRequest& WithGrantId(const Aws::String& value) { SetGrantId(value); return *this;}

    /**
     * <p>Identifies the grant to retire. To get the grant ID, use <a>CreateGrant</a>,
     * <a>ListGrants</a>, or <a>ListRetirableGrants</a>.</p> <ul> <li> <p>Grant ID
     * Example - 0123456789012345678901234567890123456789012345678901234567890123</p>
     * </li> </ul>
     */
    inline RetireGrantRequest& WithGrantId(Aws::String&& value) { SetGrantId(std::move(value)); return *this;}

    /**
     * <p>Identifies the grant to retire. To get the grant ID, use <a>CreateGrant</a>,
     * <a>ListGrants</a>, or <a>ListRetirableGrants</a>.</p> <ul> <li> <p>Grant ID
     * Example - 0123456789012345678901234567890123456789012345678901234567890123</p>
     * </li> </ul>
     */
    inline RetireGrantRequest& WithGrantId(const char* value) { SetGrantId(value); return *this;}

  private:

    Aws::String m_grantToken;
    bool m_grantTokenHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_grantId;
    bool m_grantIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
