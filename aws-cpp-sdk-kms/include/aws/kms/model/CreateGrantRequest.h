/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/model/GrantConstraints.h>
#include <aws/kms/model/GrantOperation.h>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API CreateGrantRequest : public KMSRequest
  {
  public:
    CreateGrantRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The unique identifier for the customer master key (CMK) that the grant
     * applies to.</p> <p>To specify this value, use the globally unique key ID or the
     * Amazon Resource Name (ARN) of the key. Examples:</p> <ul> <li> <p>Globally
     * unique key ID: 12345678-1234-1234-1234-123456789012</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> </ul>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The unique identifier for the customer master key (CMK) that the grant
     * applies to.</p> <p>To specify this value, use the globally unique key ID or the
     * Amazon Resource Name (ARN) of the key. Examples:</p> <ul> <li> <p>Globally
     * unique key ID: 12345678-1234-1234-1234-123456789012</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> </ul>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The unique identifier for the customer master key (CMK) that the grant
     * applies to.</p> <p>To specify this value, use the globally unique key ID or the
     * Amazon Resource Name (ARN) of the key. Examples:</p> <ul> <li> <p>Globally
     * unique key ID: 12345678-1234-1234-1234-123456789012</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> </ul>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The unique identifier for the customer master key (CMK) that the grant
     * applies to.</p> <p>To specify this value, use the globally unique key ID or the
     * Amazon Resource Name (ARN) of the key. Examples:</p> <ul> <li> <p>Globally
     * unique key ID: 12345678-1234-1234-1234-123456789012</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> </ul>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The unique identifier for the customer master key (CMK) that the grant
     * applies to.</p> <p>To specify this value, use the globally unique key ID or the
     * Amazon Resource Name (ARN) of the key. Examples:</p> <ul> <li> <p>Globally
     * unique key ID: 12345678-1234-1234-1234-123456789012</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> </ul>
     */
    inline CreateGrantRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The unique identifier for the customer master key (CMK) that the grant
     * applies to.</p> <p>To specify this value, use the globally unique key ID or the
     * Amazon Resource Name (ARN) of the key. Examples:</p> <ul> <li> <p>Globally
     * unique key ID: 12345678-1234-1234-1234-123456789012</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> </ul>
     */
    inline CreateGrantRequest& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /**
     * <p>The unique identifier for the customer master key (CMK) that the grant
     * applies to.</p> <p>To specify this value, use the globally unique key ID or the
     * Amazon Resource Name (ARN) of the key. Examples:</p> <ul> <li> <p>Globally
     * unique key ID: 12345678-1234-1234-1234-123456789012</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> </ul>
     */
    inline CreateGrantRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    /**
     * <p>The principal that is given permission to perform the operations that the
     * grant permits.</p> <p>To specify the principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax to use for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetGranteePrincipal() const{ return m_granteePrincipal; }

    /**
     * <p>The principal that is given permission to perform the operations that the
     * grant permits.</p> <p>To specify the principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax to use for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>AWS General Reference</i>.</p>
     */
    inline void SetGranteePrincipal(const Aws::String& value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal = value; }

    /**
     * <p>The principal that is given permission to perform the operations that the
     * grant permits.</p> <p>To specify the principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax to use for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>AWS General Reference</i>.</p>
     */
    inline void SetGranteePrincipal(Aws::String&& value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal = value; }

    /**
     * <p>The principal that is given permission to perform the operations that the
     * grant permits.</p> <p>To specify the principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax to use for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>AWS General Reference</i>.</p>
     */
    inline void SetGranteePrincipal(const char* value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal.assign(value); }

    /**
     * <p>The principal that is given permission to perform the operations that the
     * grant permits.</p> <p>To specify the principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax to use for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>AWS General Reference</i>.</p>
     */
    inline CreateGrantRequest& WithGranteePrincipal(const Aws::String& value) { SetGranteePrincipal(value); return *this;}

    /**
     * <p>The principal that is given permission to perform the operations that the
     * grant permits.</p> <p>To specify the principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax to use for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>AWS General Reference</i>.</p>
     */
    inline CreateGrantRequest& WithGranteePrincipal(Aws::String&& value) { SetGranteePrincipal(value); return *this;}

    /**
     * <p>The principal that is given permission to perform the operations that the
     * grant permits.</p> <p>To specify the principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax to use for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>AWS General Reference</i>.</p>
     */
    inline CreateGrantRequest& WithGranteePrincipal(const char* value) { SetGranteePrincipal(value); return *this;}

    /**
     * <p>The principal that is given permission to retire the grant by using
     * <a>RetireGrant</a> operation.</p> <p>To specify the principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax to use for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetRetiringPrincipal() const{ return m_retiringPrincipal; }

    /**
     * <p>The principal that is given permission to retire the grant by using
     * <a>RetireGrant</a> operation.</p> <p>To specify the principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax to use for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>AWS General Reference</i>.</p>
     */
    inline void SetRetiringPrincipal(const Aws::String& value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal = value; }

    /**
     * <p>The principal that is given permission to retire the grant by using
     * <a>RetireGrant</a> operation.</p> <p>To specify the principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax to use for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>AWS General Reference</i>.</p>
     */
    inline void SetRetiringPrincipal(Aws::String&& value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal = value; }

    /**
     * <p>The principal that is given permission to retire the grant by using
     * <a>RetireGrant</a> operation.</p> <p>To specify the principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax to use for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>AWS General Reference</i>.</p>
     */
    inline void SetRetiringPrincipal(const char* value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal.assign(value); }

    /**
     * <p>The principal that is given permission to retire the grant by using
     * <a>RetireGrant</a> operation.</p> <p>To specify the principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax to use for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>AWS General Reference</i>.</p>
     */
    inline CreateGrantRequest& WithRetiringPrincipal(const Aws::String& value) { SetRetiringPrincipal(value); return *this;}

    /**
     * <p>The principal that is given permission to retire the grant by using
     * <a>RetireGrant</a> operation.</p> <p>To specify the principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax to use for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>AWS General Reference</i>.</p>
     */
    inline CreateGrantRequest& WithRetiringPrincipal(Aws::String&& value) { SetRetiringPrincipal(value); return *this;}

    /**
     * <p>The principal that is given permission to retire the grant by using
     * <a>RetireGrant</a> operation.</p> <p>To specify the principal, use the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an AWS principal. Valid AWS principals include AWS
     * accounts (root), IAM users, federated users, and assumed role users. For
     * examples of the ARN syntax to use for specifying a principal, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">AWS
     * Identity and Access Management (IAM)</a> in the Example ARNs section of the
     * <i>AWS General Reference</i>.</p>
     */
    inline CreateGrantRequest& WithRetiringPrincipal(const char* value) { SetRetiringPrincipal(value); return *this;}

    /**
     * <p>A list of operations that the grant permits. The list can contain any
     * combination of one or more of the following values:</p> <ul> <li> <p>
     * <a>Decrypt</a> </p> </li> <li> <p> <a>Encrypt</a> </p> </li> <li> <p>
     * <a>GenerateDataKey</a> </p> </li> <li> <p>
     * <a>GenerateDataKeyWithoutPlaintext</a> </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_ReEncrypt.html">ReEncryptFrom</a>
     * </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_ReEncrypt.html">ReEncryptTo</a>
     * </p> </li> <li> <p> <a>CreateGrant</a> </p> </li> <li> <p> <a>RetireGrant</a>
     * </p> </li> <li> <p> <a>DescribeKey</a> </p> </li> </ul>
     */
    inline const Aws::Vector<GrantOperation>& GetOperations() const{ return m_operations; }

    /**
     * <p>A list of operations that the grant permits. The list can contain any
     * combination of one or more of the following values:</p> <ul> <li> <p>
     * <a>Decrypt</a> </p> </li> <li> <p> <a>Encrypt</a> </p> </li> <li> <p>
     * <a>GenerateDataKey</a> </p> </li> <li> <p>
     * <a>GenerateDataKeyWithoutPlaintext</a> </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_ReEncrypt.html">ReEncryptFrom</a>
     * </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_ReEncrypt.html">ReEncryptTo</a>
     * </p> </li> <li> <p> <a>CreateGrant</a> </p> </li> <li> <p> <a>RetireGrant</a>
     * </p> </li> <li> <p> <a>DescribeKey</a> </p> </li> </ul>
     */
    inline void SetOperations(const Aws::Vector<GrantOperation>& value) { m_operationsHasBeenSet = true; m_operations = value; }

    /**
     * <p>A list of operations that the grant permits. The list can contain any
     * combination of one or more of the following values:</p> <ul> <li> <p>
     * <a>Decrypt</a> </p> </li> <li> <p> <a>Encrypt</a> </p> </li> <li> <p>
     * <a>GenerateDataKey</a> </p> </li> <li> <p>
     * <a>GenerateDataKeyWithoutPlaintext</a> </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_ReEncrypt.html">ReEncryptFrom</a>
     * </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_ReEncrypt.html">ReEncryptTo</a>
     * </p> </li> <li> <p> <a>CreateGrant</a> </p> </li> <li> <p> <a>RetireGrant</a>
     * </p> </li> <li> <p> <a>DescribeKey</a> </p> </li> </ul>
     */
    inline void SetOperations(Aws::Vector<GrantOperation>&& value) { m_operationsHasBeenSet = true; m_operations = value; }

    /**
     * <p>A list of operations that the grant permits. The list can contain any
     * combination of one or more of the following values:</p> <ul> <li> <p>
     * <a>Decrypt</a> </p> </li> <li> <p> <a>Encrypt</a> </p> </li> <li> <p>
     * <a>GenerateDataKey</a> </p> </li> <li> <p>
     * <a>GenerateDataKeyWithoutPlaintext</a> </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_ReEncrypt.html">ReEncryptFrom</a>
     * </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_ReEncrypt.html">ReEncryptTo</a>
     * </p> </li> <li> <p> <a>CreateGrant</a> </p> </li> <li> <p> <a>RetireGrant</a>
     * </p> </li> <li> <p> <a>DescribeKey</a> </p> </li> </ul>
     */
    inline CreateGrantRequest& WithOperations(const Aws::Vector<GrantOperation>& value) { SetOperations(value); return *this;}

    /**
     * <p>A list of operations that the grant permits. The list can contain any
     * combination of one or more of the following values:</p> <ul> <li> <p>
     * <a>Decrypt</a> </p> </li> <li> <p> <a>Encrypt</a> </p> </li> <li> <p>
     * <a>GenerateDataKey</a> </p> </li> <li> <p>
     * <a>GenerateDataKeyWithoutPlaintext</a> </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_ReEncrypt.html">ReEncryptFrom</a>
     * </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_ReEncrypt.html">ReEncryptTo</a>
     * </p> </li> <li> <p> <a>CreateGrant</a> </p> </li> <li> <p> <a>RetireGrant</a>
     * </p> </li> <li> <p> <a>DescribeKey</a> </p> </li> </ul>
     */
    inline CreateGrantRequest& WithOperations(Aws::Vector<GrantOperation>&& value) { SetOperations(value); return *this;}

    /**
     * <p>A list of operations that the grant permits. The list can contain any
     * combination of one or more of the following values:</p> <ul> <li> <p>
     * <a>Decrypt</a> </p> </li> <li> <p> <a>Encrypt</a> </p> </li> <li> <p>
     * <a>GenerateDataKey</a> </p> </li> <li> <p>
     * <a>GenerateDataKeyWithoutPlaintext</a> </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_ReEncrypt.html">ReEncryptFrom</a>
     * </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_ReEncrypt.html">ReEncryptTo</a>
     * </p> </li> <li> <p> <a>CreateGrant</a> </p> </li> <li> <p> <a>RetireGrant</a>
     * </p> </li> <li> <p> <a>DescribeKey</a> </p> </li> </ul>
     */
    inline CreateGrantRequest& AddOperations(const GrantOperation& value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }

    /**
     * <p>A list of operations that the grant permits. The list can contain any
     * combination of one or more of the following values:</p> <ul> <li> <p>
     * <a>Decrypt</a> </p> </li> <li> <p> <a>Encrypt</a> </p> </li> <li> <p>
     * <a>GenerateDataKey</a> </p> </li> <li> <p>
     * <a>GenerateDataKeyWithoutPlaintext</a> </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_ReEncrypt.html">ReEncryptFrom</a>
     * </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_ReEncrypt.html">ReEncryptTo</a>
     * </p> </li> <li> <p> <a>CreateGrant</a> </p> </li> <li> <p> <a>RetireGrant</a>
     * </p> </li> <li> <p> <a>DescribeKey</a> </p> </li> </ul>
     */
    inline CreateGrantRequest& AddOperations(GrantOperation&& value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }

    /**
     * <p>The conditions under which the operations permitted by the grant are
     * allowed.</p> <p>You can use this value to allow the operations permitted by the
     * grant only when a specified encryption context is present. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline const GrantConstraints& GetConstraints() const{ return m_constraints; }

    /**
     * <p>The conditions under which the operations permitted by the grant are
     * allowed.</p> <p>You can use this value to allow the operations permitted by the
     * grant only when a specified encryption context is present. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetConstraints(const GrantConstraints& value) { m_constraintsHasBeenSet = true; m_constraints = value; }

    /**
     * <p>The conditions under which the operations permitted by the grant are
     * allowed.</p> <p>You can use this value to allow the operations permitted by the
     * grant only when a specified encryption context is present. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetConstraints(GrantConstraints&& value) { m_constraintsHasBeenSet = true; m_constraints = value; }

    /**
     * <p>The conditions under which the operations permitted by the grant are
     * allowed.</p> <p>You can use this value to allow the operations permitted by the
     * grant only when a specified encryption context is present. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline CreateGrantRequest& WithConstraints(const GrantConstraints& value) { SetConstraints(value); return *this;}

    /**
     * <p>The conditions under which the operations permitted by the grant are
     * allowed.</p> <p>You can use this value to allow the operations permitted by the
     * grant only when a specified encryption context is present. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline CreateGrantRequest& WithConstraints(GrantConstraints&& value) { SetConstraints(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGrantTokens() const{ return m_grantTokens; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetGrantTokens(const Aws::Vector<Aws::String>& value) { m_grantTokensHasBeenSet = true; m_grantTokens = value; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetGrantTokens(Aws::Vector<Aws::String>&& value) { m_grantTokensHasBeenSet = true; m_grantTokens = value; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline CreateGrantRequest& WithGrantTokens(const Aws::Vector<Aws::String>& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline CreateGrantRequest& WithGrantTokens(Aws::Vector<Aws::String>&& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline CreateGrantRequest& AddGrantTokens(const Aws::String& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline CreateGrantRequest& AddGrantTokens(Aws::String&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline CreateGrantRequest& AddGrantTokens(const char* value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A friendly name for identifying the grant. Use this value to prevent
     * unintended creation of duplicate grants when retrying this request.</p> <p>When
     * this value is absent, all <code>CreateGrant</code> requests result in a new
     * grant with a unique <code>GrantId</code> even if all the supplied parameters are
     * identical. This can result in unintended duplicates when you retry the
     * <code>CreateGrant</code> request.</p> <p>When this value is present, you can
     * retry a <code>CreateGrant</code> request with identical parameters; if the grant
     * already exists, the original <code>GrantId</code> is returned without creating a
     * new grant. Note that the returned grant token is unique with every
     * <code>CreateGrant</code> request, even when a duplicate <code>GrantId</code> is
     * returned. All grant tokens obtained in this way can be used interchangeably.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name for identifying the grant. Use this value to prevent
     * unintended creation of duplicate grants when retrying this request.</p> <p>When
     * this value is absent, all <code>CreateGrant</code> requests result in a new
     * grant with a unique <code>GrantId</code> even if all the supplied parameters are
     * identical. This can result in unintended duplicates when you retry the
     * <code>CreateGrant</code> request.</p> <p>When this value is present, you can
     * retry a <code>CreateGrant</code> request with identical parameters; if the grant
     * already exists, the original <code>GrantId</code> is returned without creating a
     * new grant. Note that the returned grant token is unique with every
     * <code>CreateGrant</code> request, even when a duplicate <code>GrantId</code> is
     * returned. All grant tokens obtained in this way can be used interchangeably.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name for identifying the grant. Use this value to prevent
     * unintended creation of duplicate grants when retrying this request.</p> <p>When
     * this value is absent, all <code>CreateGrant</code> requests result in a new
     * grant with a unique <code>GrantId</code> even if all the supplied parameters are
     * identical. This can result in unintended duplicates when you retry the
     * <code>CreateGrant</code> request.</p> <p>When this value is present, you can
     * retry a <code>CreateGrant</code> request with identical parameters; if the grant
     * already exists, the original <code>GrantId</code> is returned without creating a
     * new grant. Note that the returned grant token is unique with every
     * <code>CreateGrant</code> request, even when a duplicate <code>GrantId</code> is
     * returned. All grant tokens obtained in this way can be used interchangeably.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name for identifying the grant. Use this value to prevent
     * unintended creation of duplicate grants when retrying this request.</p> <p>When
     * this value is absent, all <code>CreateGrant</code> requests result in a new
     * grant with a unique <code>GrantId</code> even if all the supplied parameters are
     * identical. This can result in unintended duplicates when you retry the
     * <code>CreateGrant</code> request.</p> <p>When this value is present, you can
     * retry a <code>CreateGrant</code> request with identical parameters; if the grant
     * already exists, the original <code>GrantId</code> is returned without creating a
     * new grant. Note that the returned grant token is unique with every
     * <code>CreateGrant</code> request, even when a duplicate <code>GrantId</code> is
     * returned. All grant tokens obtained in this way can be used interchangeably.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name for identifying the grant. Use this value to prevent
     * unintended creation of duplicate grants when retrying this request.</p> <p>When
     * this value is absent, all <code>CreateGrant</code> requests result in a new
     * grant with a unique <code>GrantId</code> even if all the supplied parameters are
     * identical. This can result in unintended duplicates when you retry the
     * <code>CreateGrant</code> request.</p> <p>When this value is present, you can
     * retry a <code>CreateGrant</code> request with identical parameters; if the grant
     * already exists, the original <code>GrantId</code> is returned without creating a
     * new grant. Note that the returned grant token is unique with every
     * <code>CreateGrant</code> request, even when a duplicate <code>GrantId</code> is
     * returned. All grant tokens obtained in this way can be used interchangeably.</p>
     */
    inline CreateGrantRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name for identifying the grant. Use this value to prevent
     * unintended creation of duplicate grants when retrying this request.</p> <p>When
     * this value is absent, all <code>CreateGrant</code> requests result in a new
     * grant with a unique <code>GrantId</code> even if all the supplied parameters are
     * identical. This can result in unintended duplicates when you retry the
     * <code>CreateGrant</code> request.</p> <p>When this value is present, you can
     * retry a <code>CreateGrant</code> request with identical parameters; if the grant
     * already exists, the original <code>GrantId</code> is returned without creating a
     * new grant. Note that the returned grant token is unique with every
     * <code>CreateGrant</code> request, even when a duplicate <code>GrantId</code> is
     * returned. All grant tokens obtained in this way can be used interchangeably.</p>
     */
    inline CreateGrantRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name for identifying the grant. Use this value to prevent
     * unintended creation of duplicate grants when retrying this request.</p> <p>When
     * this value is absent, all <code>CreateGrant</code> requests result in a new
     * grant with a unique <code>GrantId</code> even if all the supplied parameters are
     * identical. This can result in unintended duplicates when you retry the
     * <code>CreateGrant</code> request.</p> <p>When this value is present, you can
     * retry a <code>CreateGrant</code> request with identical parameters; if the grant
     * already exists, the original <code>GrantId</code> is returned without creating a
     * new grant. Note that the returned grant token is unique with every
     * <code>CreateGrant</code> request, even when a duplicate <code>GrantId</code> is
     * returned. All grant tokens obtained in this way can be used interchangeably.</p>
     */
    inline CreateGrantRequest& WithName(const char* value) { SetName(value); return *this;}

  private:
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
    Aws::String m_granteePrincipal;
    bool m_granteePrincipalHasBeenSet;
    Aws::String m_retiringPrincipal;
    bool m_retiringPrincipalHasBeenSet;
    Aws::Vector<GrantOperation> m_operations;
    bool m_operationsHasBeenSet;
    GrantConstraints m_constraints;
    bool m_constraintsHasBeenSet;
    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
