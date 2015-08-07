/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/model/GrantConstraints.h>
#include <aws/kms/model/GrantOperation.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{
  /*
    <p>Contains information about each entry in the grant list.</p>
  */
  class AWS_KMS_API GrantListEntry
  {
  public:
    GrantListEntry();
    GrantListEntry(const Aws::Utils::Json::JsonValue& jsonValue);
    GrantListEntry& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    
    inline GrantListEntry&  WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    
    inline GrantListEntry& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    /*
     <p>Unique grant identifier.</p>
    */
    inline const Aws::String& GetGrantId() const{ return m_grantId; }
    /*
     <p>Unique grant identifier.</p>
    */
    inline void SetGrantId(const Aws::String& value) { m_grantIdHasBeenSet = true; m_grantId = value; }

    /*
     <p>Unique grant identifier.</p>
    */
    inline void SetGrantId(const char* value) { m_grantIdHasBeenSet = true; m_grantId.assign(value); }

    /*
     <p>Unique grant identifier.</p>
    */
    inline GrantListEntry&  WithGrantId(const Aws::String& value) { SetGrantId(value); return *this;}

    /*
     <p>Unique grant identifier.</p>
    */
    inline GrantListEntry& WithGrantId(const char* value) { SetGrantId(value); return *this;}

    /*
     <p>The principal that receives the grant permission.</p>
    */
    inline const Aws::String& GetGranteePrincipal() const{ return m_granteePrincipal; }
    /*
     <p>The principal that receives the grant permission.</p>
    */
    inline void SetGranteePrincipal(const Aws::String& value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal = value; }

    /*
     <p>The principal that receives the grant permission.</p>
    */
    inline void SetGranteePrincipal(const char* value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal.assign(value); }

    /*
     <p>The principal that receives the grant permission.</p>
    */
    inline GrantListEntry&  WithGranteePrincipal(const Aws::String& value) { SetGranteePrincipal(value); return *this;}

    /*
     <p>The principal that receives the grant permission.</p>
    */
    inline GrantListEntry& WithGranteePrincipal(const char* value) { SetGranteePrincipal(value); return *this;}

    /*
     <p>The principal that can retire the account.</p>
    */
    inline const Aws::String& GetRetiringPrincipal() const{ return m_retiringPrincipal; }
    /*
     <p>The principal that can retire the account.</p>
    */
    inline void SetRetiringPrincipal(const Aws::String& value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal = value; }

    /*
     <p>The principal that can retire the account.</p>
    */
    inline void SetRetiringPrincipal(const char* value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal.assign(value); }

    /*
     <p>The principal that can retire the account.</p>
    */
    inline GrantListEntry&  WithRetiringPrincipal(const Aws::String& value) { SetRetiringPrincipal(value); return *this;}

    /*
     <p>The principal that can retire the account.</p>
    */
    inline GrantListEntry& WithRetiringPrincipal(const char* value) { SetRetiringPrincipal(value); return *this;}

    /*
     <p>The account under which the grant was issued.</p>
    */
    inline const Aws::String& GetIssuingAccount() const{ return m_issuingAccount; }
    /*
     <p>The account under which the grant was issued.</p>
    */
    inline void SetIssuingAccount(const Aws::String& value) { m_issuingAccountHasBeenSet = true; m_issuingAccount = value; }

    /*
     <p>The account under which the grant was issued.</p>
    */
    inline void SetIssuingAccount(const char* value) { m_issuingAccountHasBeenSet = true; m_issuingAccount.assign(value); }

    /*
     <p>The account under which the grant was issued.</p>
    */
    inline GrantListEntry&  WithIssuingAccount(const Aws::String& value) { SetIssuingAccount(value); return *this;}

    /*
     <p>The account under which the grant was issued.</p>
    */
    inline GrantListEntry& WithIssuingAccount(const char* value) { SetIssuingAccount(value); return *this;}

    /*
     <p>List of operations permitted by the grant. This can be any combination of one or more of the following values: <ol> <li>Decrypt</li> <li>Encrypt</li> <li>GenerateDataKey</li> <li>GenerateDataKeyWithoutPlaintext</li> <li>ReEncryptFrom</li> <li>ReEncryptTo</li> <li>CreateGrant</li> </ol></p>
    */
    inline const Aws::Vector<GrantOperation>& GetOperations() const{ return m_operations; }
    /*
     <p>List of operations permitted by the grant. This can be any combination of one or more of the following values: <ol> <li>Decrypt</li> <li>Encrypt</li> <li>GenerateDataKey</li> <li>GenerateDataKeyWithoutPlaintext</li> <li>ReEncryptFrom</li> <li>ReEncryptTo</li> <li>CreateGrant</li> </ol></p>
    */
    inline void SetOperations(const Aws::Vector<GrantOperation>& value) { m_operationsHasBeenSet = true; m_operations = value; }

    /*
     <p>List of operations permitted by the grant. This can be any combination of one or more of the following values: <ol> <li>Decrypt</li> <li>Encrypt</li> <li>GenerateDataKey</li> <li>GenerateDataKeyWithoutPlaintext</li> <li>ReEncryptFrom</li> <li>ReEncryptTo</li> <li>CreateGrant</li> </ol></p>
    */
    inline GrantListEntry&  WithOperations(const Aws::Vector<GrantOperation>& value) { SetOperations(value); return *this;}

    /*
     <p>List of operations permitted by the grant. This can be any combination of one or more of the following values: <ol> <li>Decrypt</li> <li>Encrypt</li> <li>GenerateDataKey</li> <li>GenerateDataKeyWithoutPlaintext</li> <li>ReEncryptFrom</li> <li>ReEncryptTo</li> <li>CreateGrant</li> </ol></p>
    */
    inline GrantListEntry& AddOperations(const GrantOperation& value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }

    /*
     <p>Specifies the conditions under which the actions specified by the <code>Operations</code> parameter are allowed. </p>
    */
    inline const GrantConstraints& GetConstraints() const{ return m_constraints; }
    /*
     <p>Specifies the conditions under which the actions specified by the <code>Operations</code> parameter are allowed. </p>
    */
    inline void SetConstraints(const GrantConstraints& value) { m_constraintsHasBeenSet = true; m_constraints = value; }

    /*
     <p>Specifies the conditions under which the actions specified by the <code>Operations</code> parameter are allowed. </p>
    */
    inline GrantListEntry&  WithConstraints(const GrantConstraints& value) { SetConstraints(value); return *this;}

  private:
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
    Aws::String m_grantId;
    bool m_grantIdHasBeenSet;
    Aws::String m_granteePrincipal;
    bool m_granteePrincipalHasBeenSet;
    Aws::String m_retiringPrincipal;
    bool m_retiringPrincipalHasBeenSet;
    Aws::String m_issuingAccount;
    bool m_issuingAccountHasBeenSet;
    Aws::Vector<GrantOperation> m_operations;
    bool m_operationsHasBeenSet;
    GrantConstraints m_constraints;
    bool m_constraintsHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
