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
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key. <ul> <li>Key ARN Example
     * -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li>
     * <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li>
     * </ul> </p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key. <ul> <li>Key ARN Example
     * -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li>
     * <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li>
     * </ul> </p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key. <ul> <li>Key ARN Example
     * -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li>
     * <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li>
     * </ul> </p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key. <ul> <li>Key ARN Example
     * -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li>
     * <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li>
     * </ul> </p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key. <ul> <li>Key ARN Example
     * -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li>
     * <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li>
     * </ul> </p>
     */
    inline CreateGrantRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key. <ul> <li>Key ARN Example
     * -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li>
     * <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li>
     * </ul> </p>
     */
    inline CreateGrantRequest& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key. <ul> <li>Key ARN Example
     * -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li>
     * <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li>
     * </ul> </p>
     */
    inline CreateGrantRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    /**
     * <p>Principal given permission by the grant to use the key identified by the
     * <code>keyId</code> parameter.</p>
     */
    inline const Aws::String& GetGranteePrincipal() const{ return m_granteePrincipal; }

    /**
     * <p>Principal given permission by the grant to use the key identified by the
     * <code>keyId</code> parameter.</p>
     */
    inline void SetGranteePrincipal(const Aws::String& value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal = value; }

    /**
     * <p>Principal given permission by the grant to use the key identified by the
     * <code>keyId</code> parameter.</p>
     */
    inline void SetGranteePrincipal(Aws::String&& value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal = value; }

    /**
     * <p>Principal given permission by the grant to use the key identified by the
     * <code>keyId</code> parameter.</p>
     */
    inline void SetGranteePrincipal(const char* value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal.assign(value); }

    /**
     * <p>Principal given permission by the grant to use the key identified by the
     * <code>keyId</code> parameter.</p>
     */
    inline CreateGrantRequest& WithGranteePrincipal(const Aws::String& value) { SetGranteePrincipal(value); return *this;}

    /**
     * <p>Principal given permission by the grant to use the key identified by the
     * <code>keyId</code> parameter.</p>
     */
    inline CreateGrantRequest& WithGranteePrincipal(Aws::String&& value) { SetGranteePrincipal(value); return *this;}

    /**
     * <p>Principal given permission by the grant to use the key identified by the
     * <code>keyId</code> parameter.</p>
     */
    inline CreateGrantRequest& WithGranteePrincipal(const char* value) { SetGranteePrincipal(value); return *this;}

    /**
     * <p>Principal given permission to retire the grant. For more information, see
     * <a>RetireGrant</a>.</p>
     */
    inline const Aws::String& GetRetiringPrincipal() const{ return m_retiringPrincipal; }

    /**
     * <p>Principal given permission to retire the grant. For more information, see
     * <a>RetireGrant</a>.</p>
     */
    inline void SetRetiringPrincipal(const Aws::String& value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal = value; }

    /**
     * <p>Principal given permission to retire the grant. For more information, see
     * <a>RetireGrant</a>.</p>
     */
    inline void SetRetiringPrincipal(Aws::String&& value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal = value; }

    /**
     * <p>Principal given permission to retire the grant. For more information, see
     * <a>RetireGrant</a>.</p>
     */
    inline void SetRetiringPrincipal(const char* value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal.assign(value); }

    /**
     * <p>Principal given permission to retire the grant. For more information, see
     * <a>RetireGrant</a>.</p>
     */
    inline CreateGrantRequest& WithRetiringPrincipal(const Aws::String& value) { SetRetiringPrincipal(value); return *this;}

    /**
     * <p>Principal given permission to retire the grant. For more information, see
     * <a>RetireGrant</a>.</p>
     */
    inline CreateGrantRequest& WithRetiringPrincipal(Aws::String&& value) { SetRetiringPrincipal(value); return *this;}

    /**
     * <p>Principal given permission to retire the grant. For more information, see
     * <a>RetireGrant</a>.</p>
     */
    inline CreateGrantRequest& WithRetiringPrincipal(const char* value) { SetRetiringPrincipal(value); return *this;}

    /**
     * <p>List of operations permitted by the grant. This can be any combination of one
     * or more of the following values: <ol> <li>Decrypt</li> <li>Encrypt</li>
     * <li>GenerateDataKey</li> <li>GenerateDataKeyWithoutPlaintext</li>
     * <li>ReEncryptFrom</li> <li>ReEncryptTo</li> <li>CreateGrant</li>
     * <li>RetireGrant</li> </ol> </p>
     */
    inline const Aws::Vector<GrantOperation>& GetOperations() const{ return m_operations; }

    /**
     * <p>List of operations permitted by the grant. This can be any combination of one
     * or more of the following values: <ol> <li>Decrypt</li> <li>Encrypt</li>
     * <li>GenerateDataKey</li> <li>GenerateDataKeyWithoutPlaintext</li>
     * <li>ReEncryptFrom</li> <li>ReEncryptTo</li> <li>CreateGrant</li>
     * <li>RetireGrant</li> </ol> </p>
     */
    inline void SetOperations(const Aws::Vector<GrantOperation>& value) { m_operationsHasBeenSet = true; m_operations = value; }

    /**
     * <p>List of operations permitted by the grant. This can be any combination of one
     * or more of the following values: <ol> <li>Decrypt</li> <li>Encrypt</li>
     * <li>GenerateDataKey</li> <li>GenerateDataKeyWithoutPlaintext</li>
     * <li>ReEncryptFrom</li> <li>ReEncryptTo</li> <li>CreateGrant</li>
     * <li>RetireGrant</li> </ol> </p>
     */
    inline void SetOperations(Aws::Vector<GrantOperation>&& value) { m_operationsHasBeenSet = true; m_operations = value; }

    /**
     * <p>List of operations permitted by the grant. This can be any combination of one
     * or more of the following values: <ol> <li>Decrypt</li> <li>Encrypt</li>
     * <li>GenerateDataKey</li> <li>GenerateDataKeyWithoutPlaintext</li>
     * <li>ReEncryptFrom</li> <li>ReEncryptTo</li> <li>CreateGrant</li>
     * <li>RetireGrant</li> </ol> </p>
     */
    inline CreateGrantRequest& WithOperations(const Aws::Vector<GrantOperation>& value) { SetOperations(value); return *this;}

    /**
     * <p>List of operations permitted by the grant. This can be any combination of one
     * or more of the following values: <ol> <li>Decrypt</li> <li>Encrypt</li>
     * <li>GenerateDataKey</li> <li>GenerateDataKeyWithoutPlaintext</li>
     * <li>ReEncryptFrom</li> <li>ReEncryptTo</li> <li>CreateGrant</li>
     * <li>RetireGrant</li> </ol> </p>
     */
    inline CreateGrantRequest& WithOperations(Aws::Vector<GrantOperation>&& value) { SetOperations(value); return *this;}

    /**
     * <p>List of operations permitted by the grant. This can be any combination of one
     * or more of the following values: <ol> <li>Decrypt</li> <li>Encrypt</li>
     * <li>GenerateDataKey</li> <li>GenerateDataKeyWithoutPlaintext</li>
     * <li>ReEncryptFrom</li> <li>ReEncryptTo</li> <li>CreateGrant</li>
     * <li>RetireGrant</li> </ol> </p>
     */
    inline CreateGrantRequest& AddOperations(const GrantOperation& value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }

    /**
     * <p>List of operations permitted by the grant. This can be any combination of one
     * or more of the following values: <ol> <li>Decrypt</li> <li>Encrypt</li>
     * <li>GenerateDataKey</li> <li>GenerateDataKeyWithoutPlaintext</li>
     * <li>ReEncryptFrom</li> <li>ReEncryptTo</li> <li>CreateGrant</li>
     * <li>RetireGrant</li> </ol> </p>
     */
    inline CreateGrantRequest& AddOperations(GrantOperation&& value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }

    /**
     * <p>Specifies the conditions under which the actions specified by the
     * <code>Operations</code> parameter are allowed. </p>
     */
    inline const GrantConstraints& GetConstraints() const{ return m_constraints; }

    /**
     * <p>Specifies the conditions under which the actions specified by the
     * <code>Operations</code> parameter are allowed. </p>
     */
    inline void SetConstraints(const GrantConstraints& value) { m_constraintsHasBeenSet = true; m_constraints = value; }

    /**
     * <p>Specifies the conditions under which the actions specified by the
     * <code>Operations</code> parameter are allowed. </p>
     */
    inline void SetConstraints(GrantConstraints&& value) { m_constraintsHasBeenSet = true; m_constraints = value; }

    /**
     * <p>Specifies the conditions under which the actions specified by the
     * <code>Operations</code> parameter are allowed. </p>
     */
    inline CreateGrantRequest& WithConstraints(const GrantConstraints& value) { SetConstraints(value); return *this;}

    /**
     * <p>Specifies the conditions under which the actions specified by the
     * <code>Operations</code> parameter are allowed. </p>
     */
    inline CreateGrantRequest& WithConstraints(GrantConstraints&& value) { SetConstraints(value); return *this;}

    /**
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetGrantTokens() const{ return m_grantTokens; }

    /**
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a>. </p>
     */
    inline void SetGrantTokens(const Aws::Vector<Aws::String>& value) { m_grantTokensHasBeenSet = true; m_grantTokens = value; }

    /**
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a>. </p>
     */
    inline void SetGrantTokens(Aws::Vector<Aws::String>&& value) { m_grantTokensHasBeenSet = true; m_grantTokens = value; }

    /**
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a>. </p>
     */
    inline CreateGrantRequest& WithGrantTokens(const Aws::Vector<Aws::String>& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a>. </p>
     */
    inline CreateGrantRequest& WithGrantTokens(Aws::Vector<Aws::String>&& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a>. </p>
     */
    inline CreateGrantRequest& AddGrantTokens(const Aws::String& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a>. </p>
     */
    inline CreateGrantRequest& AddGrantTokens(Aws::String&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a>. </p>
     */
    inline CreateGrantRequest& AddGrantTokens(const char* value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CreateGrantRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateGrantRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    
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
