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

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API GetKeyPolicyRequest : public KMSRequest
  {
  public:
    GetKeyPolicyRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key.</p> <ul> <li> <p>Key ARN
     * Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key.</p> <ul> <li> <p>Key ARN
     * Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key.</p> <ul> <li> <p>Key ARN
     * Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key.</p> <ul> <li> <p>Key ARN
     * Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key.</p> <ul> <li> <p>Key ARN
     * Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline GetKeyPolicyRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key.</p> <ul> <li> <p>Key ARN
     * Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline GetKeyPolicyRequest& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key.</p> <ul> <li> <p>Key ARN
     * Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline GetKeyPolicyRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    /**
     * <p>String that contains the name of the policy. Currently, this must be
     * "default". Policy names can be discovered by calling <a>ListKeyPolicies</a>.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>String that contains the name of the policy. Currently, this must be
     * "default". Policy names can be discovered by calling <a>ListKeyPolicies</a>.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>String that contains the name of the policy. Currently, this must be
     * "default". Policy names can be discovered by calling <a>ListKeyPolicies</a>.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>String that contains the name of the policy. Currently, this must be
     * "default". Policy names can be discovered by calling <a>ListKeyPolicies</a>.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>String that contains the name of the policy. Currently, this must be
     * "default". Policy names can be discovered by calling <a>ListKeyPolicies</a>.</p>
     */
    inline GetKeyPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>String that contains the name of the policy. Currently, this must be
     * "default". Policy names can be discovered by calling <a>ListKeyPolicies</a>.</p>
     */
    inline GetKeyPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(value); return *this;}

    /**
     * <p>String that contains the name of the policy. Currently, this must be
     * "default". Policy names can be discovered by calling <a>ListKeyPolicies</a>.</p>
     */
    inline GetKeyPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

  private:
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
