﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/model/GrantConstraints.h>
#include <aws/kms/model/GrantOperation.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class CreateGrantRequest : public KMSRequest
  {
  public:
    AWS_KMS_API CreateGrantRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGrant"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Identifies the KMS key for the grant. The grant gives principals permission
     * to use this KMS key.</p> <p>Specify the key ID or key ARN of the KMS key. To
     * specify a KMS key in a different Amazon Web Services account, you must use the
     * key ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }
    inline CreateGrantRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline CreateGrantRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline CreateGrantRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity that gets the permissions specified in the grant.</p> <p>To
     * specify the grantee principal, use the Amazon Resource Name (ARN) of an Amazon
     * Web Services principal. Valid principals include Amazon Web Services accounts,
     * IAM users, IAM roles, federated users, and assumed role users. For help with the
     * ARN syntax for a principal, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a> in the <i> <i>Identity and Access Management User Guide</i> </i>.</p>
     */
    inline const Aws::String& GetGranteePrincipal() const{ return m_granteePrincipal; }
    inline bool GranteePrincipalHasBeenSet() const { return m_granteePrincipalHasBeenSet; }
    inline void SetGranteePrincipal(const Aws::String& value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal = value; }
    inline void SetGranteePrincipal(Aws::String&& value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal = std::move(value); }
    inline void SetGranteePrincipal(const char* value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal.assign(value); }
    inline CreateGrantRequest& WithGranteePrincipal(const Aws::String& value) { SetGranteePrincipal(value); return *this;}
    inline CreateGrantRequest& WithGranteePrincipal(Aws::String&& value) { SetGranteePrincipal(std::move(value)); return *this;}
    inline CreateGrantRequest& WithGranteePrincipal(const char* value) { SetGranteePrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal that has permission to use the <a>RetireGrant</a> operation to
     * retire the grant. </p> <p>To specify the principal, use the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an Amazon Web Services principal. Valid principals
     * include Amazon Web Services accounts, IAM users, IAM roles, federated users, and
     * assumed role users. For help with the ARN syntax for a principal, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a> in the <i> <i>Identity and Access Management User Guide</i> </i>.</p>
     * <p>The grant determines the retiring principal. Other principals might have
     * permission to retire the grant or revoke the grant. For details, see
     * <a>RevokeGrant</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#grant-delete">Retiring
     * and revoking grants</a> in the <i>Key Management Service Developer Guide</i>.
     * </p>
     */
    inline const Aws::String& GetRetiringPrincipal() const{ return m_retiringPrincipal; }
    inline bool RetiringPrincipalHasBeenSet() const { return m_retiringPrincipalHasBeenSet; }
    inline void SetRetiringPrincipal(const Aws::String& value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal = value; }
    inline void SetRetiringPrincipal(Aws::String&& value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal = std::move(value); }
    inline void SetRetiringPrincipal(const char* value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal.assign(value); }
    inline CreateGrantRequest& WithRetiringPrincipal(const Aws::String& value) { SetRetiringPrincipal(value); return *this;}
    inline CreateGrantRequest& WithRetiringPrincipal(Aws::String&& value) { SetRetiringPrincipal(std::move(value)); return *this;}
    inline CreateGrantRequest& WithRetiringPrincipal(const char* value) { SetRetiringPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of operations that the grant permits. </p> <p>This list must include
     * only operations that are permitted in a grant. Also, the operation must be
     * supported on the KMS key. For example, you cannot create a grant for a symmetric
     * encryption KMS key that allows the <a>Sign</a> operation, or a grant for an
     * asymmetric KMS key that allows the <a>GenerateDataKey</a> operation. If you try,
     * KMS returns a <code>ValidationError</code> exception. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#terms-grant-operations">Grant
     * operations</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Vector<GrantOperation>& GetOperations() const{ return m_operations; }
    inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }
    inline void SetOperations(const Aws::Vector<GrantOperation>& value) { m_operationsHasBeenSet = true; m_operations = value; }
    inline void SetOperations(Aws::Vector<GrantOperation>&& value) { m_operationsHasBeenSet = true; m_operations = std::move(value); }
    inline CreateGrantRequest& WithOperations(const Aws::Vector<GrantOperation>& value) { SetOperations(value); return *this;}
    inline CreateGrantRequest& WithOperations(Aws::Vector<GrantOperation>&& value) { SetOperations(std::move(value)); return *this;}
    inline CreateGrantRequest& AddOperations(const GrantOperation& value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }
    inline CreateGrantRequest& AddOperations(GrantOperation&& value) { m_operationsHasBeenSet = true; m_operations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies a grant constraint.</p>  <p>Do not include confidential
     * or sensitive information in this field. This field may be displayed in plaintext
     * in CloudTrail logs and other output.</p>  <p>KMS supports the
     * <code>EncryptionContextEquals</code> and <code>EncryptionContextSubset</code>
     * grant constraints, which allow the permissions in the grant only when the
     * encryption context in the request matches (<code>EncryptionContextEquals</code>)
     * or includes (<code>EncryptionContextSubset</code>) the encryption context
     * specified in the constraint. </p> <p>The encryption context grant constraints
     * are supported only on <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#terms-grant-operations">grant
     * operations</a> that include an <code>EncryptionContext</code> parameter, such as
     * cryptographic operations on symmetric encryption KMS keys. Grants with grant
     * constraints can include the <a>DescribeKey</a> and <a>RetireGrant</a>
     * operations, but the constraint doesn't apply to these operations. If a grant
     * with a grant constraint includes the <code>CreateGrant</code> operation, the
     * constraint requires that any grants created with the <code>CreateGrant</code>
     * permission have an equally strict or stricter encryption context constraint.</p>
     * <p>You cannot use an encryption context grant constraint for cryptographic
     * operations with asymmetric KMS keys or HMAC KMS keys. Operations with these keys
     * don't support an encryption context.</p> <p>Each constraint value can include up
     * to 8 encryption context pairs. The encryption context value in each constraint
     * cannot exceed 384 characters. For information about grant constraints, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-grant-overview.html#grant-constraints">Using
     * grant constraints</a> in the <i>Key Management Service Developer Guide</i>. For
     * more information about encryption context, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i> <i>Key Management Service Developer Guide</i> </i>. </p>
     */
    inline const GrantConstraints& GetConstraints() const{ return m_constraints; }
    inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }
    inline void SetConstraints(const GrantConstraints& value) { m_constraintsHasBeenSet = true; m_constraints = value; }
    inline void SetConstraints(GrantConstraints&& value) { m_constraintsHasBeenSet = true; m_constraints = std::move(value); }
    inline CreateGrantRequest& WithConstraints(const GrantConstraints& value) { SetConstraints(value); return *this;}
    inline CreateGrantRequest& WithConstraints(GrantConstraints&& value) { SetConstraints(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of grant tokens. </p> <p>Use a grant token when your permission to
     * call this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGrantTokens() const{ return m_grantTokens; }
    inline bool GrantTokensHasBeenSet() const { return m_grantTokensHasBeenSet; }
    inline void SetGrantTokens(const Aws::Vector<Aws::String>& value) { m_grantTokensHasBeenSet = true; m_grantTokens = value; }
    inline void SetGrantTokens(Aws::Vector<Aws::String>&& value) { m_grantTokensHasBeenSet = true; m_grantTokens = std::move(value); }
    inline CreateGrantRequest& WithGrantTokens(const Aws::Vector<Aws::String>& value) { SetGrantTokens(value); return *this;}
    inline CreateGrantRequest& WithGrantTokens(Aws::Vector<Aws::String>&& value) { SetGrantTokens(std::move(value)); return *this;}
    inline CreateGrantRequest& AddGrantTokens(const Aws::String& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }
    inline CreateGrantRequest& AddGrantTokens(Aws::String&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(std::move(value)); return *this; }
    inline CreateGrantRequest& AddGrantTokens(const char* value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A friendly name for the grant. Use this value to prevent the unintended
     * creation of duplicate grants when retrying this request.</p>  <p>Do
     * not include confidential or sensitive information in this field. This field may
     * be displayed in plaintext in CloudTrail logs and other output.</p> 
     * <p>When this value is absent, all <code>CreateGrant</code> requests result in a
     * new grant with a unique <code>GrantId</code> even if all the supplied parameters
     * are identical. This can result in unintended duplicates when you retry the
     * <code>CreateGrant</code> request.</p> <p>When this value is present, you can
     * retry a <code>CreateGrant</code> request with identical parameters; if the grant
     * already exists, the original <code>GrantId</code> is returned without creating a
     * new grant. Note that the returned grant token is unique with every
     * <code>CreateGrant</code> request, even when a duplicate <code>GrantId</code> is
     * returned. All grant tokens for the same grant ID can be used
     * interchangeably.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateGrantRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateGrantRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateGrantRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks if your request will succeed. <code>DryRun</code> is an optional
     * parameter. </p> <p>To learn more about how to use this parameter, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-dryrun.html">Testing
     * your KMS API calls</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateGrantRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_granteePrincipal;
    bool m_granteePrincipalHasBeenSet = false;

    Aws::String m_retiringPrincipal;
    bool m_retiringPrincipalHasBeenSet = false;

    Aws::Vector<GrantOperation> m_operations;
    bool m_operationsHasBeenSet = false;

    GrantConstraints m_constraints;
    bool m_constraintsHasBeenSet = false;

    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
