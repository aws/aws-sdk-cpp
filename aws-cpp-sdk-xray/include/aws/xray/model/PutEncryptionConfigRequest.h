/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/EncryptionType.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class AWS_XRAY_API PutEncryptionConfigRequest : public XRayRequest
  {
  public:
    PutEncryptionConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEncryptionConfig"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>An AWS KMS customer master key (CMK) in one of the following formats:</p>
     * <ul> <li> <p> <b>Alias</b> - The name of the key. For example,
     * <code>alias/MyKey</code>.</p> </li> <li> <p> <b>Key ID</b> - The KMS key ID of
     * the key. For example, <code>ae4aa6d49-a4d8-9df9-a475-4ff6d7898456</code>.</p>
     * </li> <li> <p> <b>ARN</b> - The full Amazon Resource Name of the key ID or
     * alias. For example,
     * <code>arn:aws:kms:us-east-2:123456789012:key/ae4aa6d49-a4d8-9df9-a475-4ff6d7898456</code>.
     * Use this format to specify a key in a different account.</p> </li> </ul> <p>Omit
     * this key if you set <code>Type</code> to <code>NONE</code>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>An AWS KMS customer master key (CMK) in one of the following formats:</p>
     * <ul> <li> <p> <b>Alias</b> - The name of the key. For example,
     * <code>alias/MyKey</code>.</p> </li> <li> <p> <b>Key ID</b> - The KMS key ID of
     * the key. For example, <code>ae4aa6d49-a4d8-9df9-a475-4ff6d7898456</code>.</p>
     * </li> <li> <p> <b>ARN</b> - The full Amazon Resource Name of the key ID or
     * alias. For example,
     * <code>arn:aws:kms:us-east-2:123456789012:key/ae4aa6d49-a4d8-9df9-a475-4ff6d7898456</code>.
     * Use this format to specify a key in a different account.</p> </li> </ul> <p>Omit
     * this key if you set <code>Type</code> to <code>NONE</code>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>An AWS KMS customer master key (CMK) in one of the following formats:</p>
     * <ul> <li> <p> <b>Alias</b> - The name of the key. For example,
     * <code>alias/MyKey</code>.</p> </li> <li> <p> <b>Key ID</b> - The KMS key ID of
     * the key. For example, <code>ae4aa6d49-a4d8-9df9-a475-4ff6d7898456</code>.</p>
     * </li> <li> <p> <b>ARN</b> - The full Amazon Resource Name of the key ID or
     * alias. For example,
     * <code>arn:aws:kms:us-east-2:123456789012:key/ae4aa6d49-a4d8-9df9-a475-4ff6d7898456</code>.
     * Use this format to specify a key in a different account.</p> </li> </ul> <p>Omit
     * this key if you set <code>Type</code> to <code>NONE</code>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>An AWS KMS customer master key (CMK) in one of the following formats:</p>
     * <ul> <li> <p> <b>Alias</b> - The name of the key. For example,
     * <code>alias/MyKey</code>.</p> </li> <li> <p> <b>Key ID</b> - The KMS key ID of
     * the key. For example, <code>ae4aa6d49-a4d8-9df9-a475-4ff6d7898456</code>.</p>
     * </li> <li> <p> <b>ARN</b> - The full Amazon Resource Name of the key ID or
     * alias. For example,
     * <code>arn:aws:kms:us-east-2:123456789012:key/ae4aa6d49-a4d8-9df9-a475-4ff6d7898456</code>.
     * Use this format to specify a key in a different account.</p> </li> </ul> <p>Omit
     * this key if you set <code>Type</code> to <code>NONE</code>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>An AWS KMS customer master key (CMK) in one of the following formats:</p>
     * <ul> <li> <p> <b>Alias</b> - The name of the key. For example,
     * <code>alias/MyKey</code>.</p> </li> <li> <p> <b>Key ID</b> - The KMS key ID of
     * the key. For example, <code>ae4aa6d49-a4d8-9df9-a475-4ff6d7898456</code>.</p>
     * </li> <li> <p> <b>ARN</b> - The full Amazon Resource Name of the key ID or
     * alias. For example,
     * <code>arn:aws:kms:us-east-2:123456789012:key/ae4aa6d49-a4d8-9df9-a475-4ff6d7898456</code>.
     * Use this format to specify a key in a different account.</p> </li> </ul> <p>Omit
     * this key if you set <code>Type</code> to <code>NONE</code>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>An AWS KMS customer master key (CMK) in one of the following formats:</p>
     * <ul> <li> <p> <b>Alias</b> - The name of the key. For example,
     * <code>alias/MyKey</code>.</p> </li> <li> <p> <b>Key ID</b> - The KMS key ID of
     * the key. For example, <code>ae4aa6d49-a4d8-9df9-a475-4ff6d7898456</code>.</p>
     * </li> <li> <p> <b>ARN</b> - The full Amazon Resource Name of the key ID or
     * alias. For example,
     * <code>arn:aws:kms:us-east-2:123456789012:key/ae4aa6d49-a4d8-9df9-a475-4ff6d7898456</code>.
     * Use this format to specify a key in a different account.</p> </li> </ul> <p>Omit
     * this key if you set <code>Type</code> to <code>NONE</code>.</p>
     */
    inline PutEncryptionConfigRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>An AWS KMS customer master key (CMK) in one of the following formats:</p>
     * <ul> <li> <p> <b>Alias</b> - The name of the key. For example,
     * <code>alias/MyKey</code>.</p> </li> <li> <p> <b>Key ID</b> - The KMS key ID of
     * the key. For example, <code>ae4aa6d49-a4d8-9df9-a475-4ff6d7898456</code>.</p>
     * </li> <li> <p> <b>ARN</b> - The full Amazon Resource Name of the key ID or
     * alias. For example,
     * <code>arn:aws:kms:us-east-2:123456789012:key/ae4aa6d49-a4d8-9df9-a475-4ff6d7898456</code>.
     * Use this format to specify a key in a different account.</p> </li> </ul> <p>Omit
     * this key if you set <code>Type</code> to <code>NONE</code>.</p>
     */
    inline PutEncryptionConfigRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>An AWS KMS customer master key (CMK) in one of the following formats:</p>
     * <ul> <li> <p> <b>Alias</b> - The name of the key. For example,
     * <code>alias/MyKey</code>.</p> </li> <li> <p> <b>Key ID</b> - The KMS key ID of
     * the key. For example, <code>ae4aa6d49-a4d8-9df9-a475-4ff6d7898456</code>.</p>
     * </li> <li> <p> <b>ARN</b> - The full Amazon Resource Name of the key ID or
     * alias. For example,
     * <code>arn:aws:kms:us-east-2:123456789012:key/ae4aa6d49-a4d8-9df9-a475-4ff6d7898456</code>.
     * Use this format to specify a key in a different account.</p> </li> </ul> <p>Omit
     * this key if you set <code>Type</code> to <code>NONE</code>.</p>
     */
    inline PutEncryptionConfigRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The type of encryption. Set to <code>KMS</code> to use your own key for
     * encryption. Set to <code>NONE</code> for default encryption.</p>
     */
    inline const EncryptionType& GetType() const{ return m_type; }

    /**
     * <p>The type of encryption. Set to <code>KMS</code> to use your own key for
     * encryption. Set to <code>NONE</code> for default encryption.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of encryption. Set to <code>KMS</code> to use your own key for
     * encryption. Set to <code>NONE</code> for default encryption.</p>
     */
    inline void SetType(const EncryptionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of encryption. Set to <code>KMS</code> to use your own key for
     * encryption. Set to <code>NONE</code> for default encryption.</p>
     */
    inline void SetType(EncryptionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of encryption. Set to <code>KMS</code> to use your own key for
     * encryption. Set to <code>NONE</code> for default encryption.</p>
     */
    inline PutEncryptionConfigRequest& WithType(const EncryptionType& value) { SetType(value); return *this;}

    /**
     * <p>The type of encryption. Set to <code>KMS</code> to use your own key for
     * encryption. Set to <code>NONE</code> for default encryption.</p>
     */
    inline PutEncryptionConfigRequest& WithType(EncryptionType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;

    EncryptionType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
