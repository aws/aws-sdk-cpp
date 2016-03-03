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
  class AWS_KMS_API PutKeyPolicyRequest : public KMSRequest
  {
  public:
    PutKeyPolicyRequest();
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
    inline PutKeyPolicyRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key. <ul> <li>Key ARN Example
     * -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li>
     * <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li>
     * </ul> </p>
     */
    inline PutKeyPolicyRequest& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key. <ul> <li>Key ARN Example
     * -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li>
     * <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li>
     * </ul> </p>
     */
    inline PutKeyPolicyRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    /**
     * <p>Name of the policy to be attached. Currently, the only supported name is
     * "default".</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>Name of the policy to be attached. Currently, the only supported name is
     * "default".</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>Name of the policy to be attached. Currently, the only supported name is
     * "default".</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>Name of the policy to be attached. Currently, the only supported name is
     * "default".</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>Name of the policy to be attached. Currently, the only supported name is
     * "default".</p>
     */
    inline PutKeyPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>Name of the policy to be attached. Currently, the only supported name is
     * "default".</p>
     */
    inline PutKeyPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(value); return *this;}

    /**
     * <p>Name of the policy to be attached. Currently, the only supported name is
     * "default".</p>
     */
    inline PutKeyPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

    /**
     * <p>The policy to attach to the key. This is required and delegates back to the
     * account. The key is the root of trust. The policy size limit is 32 KiB (32768
     * bytes). </p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The policy to attach to the key. This is required and delegates back to the
     * account. The key is the root of trust. The policy size limit is 32 KiB (32768
     * bytes). </p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The policy to attach to the key. This is required and delegates back to the
     * account. The key is the root of trust. The policy size limit is 32 KiB (32768
     * bytes). </p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The policy to attach to the key. This is required and delegates back to the
     * account. The key is the root of trust. The policy size limit is 32 KiB (32768
     * bytes). </p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The policy to attach to the key. This is required and delegates back to the
     * account. The key is the root of trust. The policy size limit is 32 KiB (32768
     * bytes). </p>
     */
    inline PutKeyPolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The policy to attach to the key. This is required and delegates back to the
     * account. The key is the root of trust. The policy size limit is 32 KiB (32768
     * bytes). </p>
     */
    inline PutKeyPolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(value); return *this;}

    /**
     * <p>The policy to attach to the key. This is required and delegates back to the
     * account. The key is the root of trust. The policy size limit is 32 KiB (32768
     * bytes). </p>
     */
    inline PutKeyPolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;
    Aws::String m_policy;
    bool m_policyHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
