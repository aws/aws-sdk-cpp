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
#include <aws/kms/model/KeyUsageType.h>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API CreateKeyRequest : public KMSRequest
  {
  public:
    CreateKeyRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Policy to attach to the key. This is required and delegates back to the
     * account. The key is the root of trust. The policy size limit is 32 KiB (32768
     * bytes). </p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>Policy to attach to the key. This is required and delegates back to the
     * account. The key is the root of trust. The policy size limit is 32 KiB (32768
     * bytes). </p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>Policy to attach to the key. This is required and delegates back to the
     * account. The key is the root of trust. The policy size limit is 32 KiB (32768
     * bytes). </p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>Policy to attach to the key. This is required and delegates back to the
     * account. The key is the root of trust. The policy size limit is 32 KiB (32768
     * bytes). </p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>Policy to attach to the key. This is required and delegates back to the
     * account. The key is the root of trust. The policy size limit is 32 KiB (32768
     * bytes). </p>
     */
    inline CreateKeyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>Policy to attach to the key. This is required and delegates back to the
     * account. The key is the root of trust. The policy size limit is 32 KiB (32768
     * bytes). </p>
     */
    inline CreateKeyRequest& WithPolicy(Aws::String&& value) { SetPolicy(value); return *this;}

    /**
     * <p>Policy to attach to the key. This is required and delegates back to the
     * account. The key is the root of trust. The policy size limit is 32 KiB (32768
     * bytes). </p>
     */
    inline CreateKeyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}

    /**
     * <p>Description of the key. We recommend that you choose a description that helps
     * your customer decide whether the key is appropriate for a task. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the key. We recommend that you choose a description that helps
     * your customer decide whether the key is appropriate for a task. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the key. We recommend that you choose a description that helps
     * your customer decide whether the key is appropriate for a task. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the key. We recommend that you choose a description that helps
     * your customer decide whether the key is appropriate for a task. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the key. We recommend that you choose a description that helps
     * your customer decide whether the key is appropriate for a task. </p>
     */
    inline CreateKeyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the key. We recommend that you choose a description that helps
     * your customer decide whether the key is appropriate for a task. </p>
     */
    inline CreateKeyRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the key. We recommend that you choose a description that helps
     * your customer decide whether the key is appropriate for a task. </p>
     */
    inline CreateKeyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>Specifies the intended use of the key. Currently this defaults to
     * ENCRYPT/DECRYPT, and only symmetric encryption and decryption are supported.
     * </p>
     */
    inline const KeyUsageType& GetKeyUsage() const{ return m_keyUsage; }

    /**
     * <p>Specifies the intended use of the key. Currently this defaults to
     * ENCRYPT/DECRYPT, and only symmetric encryption and decryption are supported.
     * </p>
     */
    inline void SetKeyUsage(const KeyUsageType& value) { m_keyUsageHasBeenSet = true; m_keyUsage = value; }

    /**
     * <p>Specifies the intended use of the key. Currently this defaults to
     * ENCRYPT/DECRYPT, and only symmetric encryption and decryption are supported.
     * </p>
     */
    inline void SetKeyUsage(KeyUsageType&& value) { m_keyUsageHasBeenSet = true; m_keyUsage = value; }

    /**
     * <p>Specifies the intended use of the key. Currently this defaults to
     * ENCRYPT/DECRYPT, and only symmetric encryption and decryption are supported.
     * </p>
     */
    inline CreateKeyRequest& WithKeyUsage(const KeyUsageType& value) { SetKeyUsage(value); return *this;}

    /**
     * <p>Specifies the intended use of the key. Currently this defaults to
     * ENCRYPT/DECRYPT, and only symmetric encryption and decryption are supported.
     * </p>
     */
    inline CreateKeyRequest& WithKeyUsage(KeyUsageType&& value) { SetKeyUsage(value); return *this;}

  private:
    Aws::String m_policy;
    bool m_policyHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    KeyUsageType m_keyUsage;
    bool m_keyUsageHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
