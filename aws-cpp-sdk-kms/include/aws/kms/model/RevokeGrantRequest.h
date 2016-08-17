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
  class AWS_KMS_API RevokeGrantRequest : public KMSRequest
  {
  public:
    RevokeGrantRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A unique identifier for the customer master key associated with the grant.
     * This value can be a globally unique identifier or the fully specified ARN to a
     * key.</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>A unique identifier for the customer master key associated with the grant.
     * This value can be a globally unique identifier or the fully specified ARN to a
     * key.</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>A unique identifier for the customer master key associated with the grant.
     * This value can be a globally unique identifier or the fully specified ARN to a
     * key.</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>A unique identifier for the customer master key associated with the grant.
     * This value can be a globally unique identifier or the fully specified ARN to a
     * key.</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>A unique identifier for the customer master key associated with the grant.
     * This value can be a globally unique identifier or the fully specified ARN to a
     * key.</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline RevokeGrantRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the customer master key associated with the grant.
     * This value can be a globally unique identifier or the fully specified ARN to a
     * key.</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline RevokeGrantRequest& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the customer master key associated with the grant.
     * This value can be a globally unique identifier or the fully specified ARN to a
     * key.</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline RevokeGrantRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    /**
     * <p>Identifier of the grant to be revoked.</p>
     */
    inline const Aws::String& GetGrantId() const{ return m_grantId; }

    /**
     * <p>Identifier of the grant to be revoked.</p>
     */
    inline void SetGrantId(const Aws::String& value) { m_grantIdHasBeenSet = true; m_grantId = value; }

    /**
     * <p>Identifier of the grant to be revoked.</p>
     */
    inline void SetGrantId(Aws::String&& value) { m_grantIdHasBeenSet = true; m_grantId = value; }

    /**
     * <p>Identifier of the grant to be revoked.</p>
     */
    inline void SetGrantId(const char* value) { m_grantIdHasBeenSet = true; m_grantId.assign(value); }

    /**
     * <p>Identifier of the grant to be revoked.</p>
     */
    inline RevokeGrantRequest& WithGrantId(const Aws::String& value) { SetGrantId(value); return *this;}

    /**
     * <p>Identifier of the grant to be revoked.</p>
     */
    inline RevokeGrantRequest& WithGrantId(Aws::String&& value) { SetGrantId(value); return *this;}

    /**
     * <p>Identifier of the grant to be revoked.</p>
     */
    inline RevokeGrantRequest& WithGrantId(const char* value) { SetGrantId(value); return *this;}

  private:
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
    Aws::String m_grantId;
    bool m_grantIdHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
