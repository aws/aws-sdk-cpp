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
  class AWS_KMS_API CreateAliasRequest : public KMSRequest
  {
  public:
    CreateAliasRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>String that contains the display name. The name must start with the word
     * "alias" followed by a forward slash (alias/). Aliases that begin with
     * "alias/AWS" are reserved.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }

    /**
     * <p>String that contains the display name. The name must start with the word
     * "alias" followed by a forward slash (alias/). Aliases that begin with
     * "alias/AWS" are reserved.</p>
     */
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }

    /**
     * <p>String that contains the display name. The name must start with the word
     * "alias" followed by a forward slash (alias/). Aliases that begin with
     * "alias/AWS" are reserved.</p>
     */
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }

    /**
     * <p>String that contains the display name. The name must start with the word
     * "alias" followed by a forward slash (alias/). Aliases that begin with
     * "alias/AWS" are reserved.</p>
     */
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }

    /**
     * <p>String that contains the display name. The name must start with the word
     * "alias" followed by a forward slash (alias/). Aliases that begin with
     * "alias/AWS" are reserved.</p>
     */
    inline CreateAliasRequest& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}

    /**
     * <p>String that contains the display name. The name must start with the word
     * "alias" followed by a forward slash (alias/). Aliases that begin with
     * "alias/AWS" are reserved.</p>
     */
    inline CreateAliasRequest& WithAliasName(Aws::String&& value) { SetAliasName(value); return *this;}

    /**
     * <p>String that contains the display name. The name must start with the word
     * "alias" followed by a forward slash (alias/). Aliases that begin with
     * "alias/AWS" are reserved.</p>
     */
    inline CreateAliasRequest& WithAliasName(const char* value) { SetAliasName(value); return *this;}

    /**
     * <p>An identifier of the key for which you are creating the alias. This value
     * cannot be another alias but can be a globally unique identifier or a fully
     * specified ARN to a key.</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline const Aws::String& GetTargetKeyId() const{ return m_targetKeyId; }

    /**
     * <p>An identifier of the key for which you are creating the alias. This value
     * cannot be another alias but can be a globally unique identifier or a fully
     * specified ARN to a key.</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline void SetTargetKeyId(const Aws::String& value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId = value; }

    /**
     * <p>An identifier of the key for which you are creating the alias. This value
     * cannot be another alias but can be a globally unique identifier or a fully
     * specified ARN to a key.</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline void SetTargetKeyId(Aws::String&& value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId = value; }

    /**
     * <p>An identifier of the key for which you are creating the alias. This value
     * cannot be another alias but can be a globally unique identifier or a fully
     * specified ARN to a key.</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline void SetTargetKeyId(const char* value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId.assign(value); }

    /**
     * <p>An identifier of the key for which you are creating the alias. This value
     * cannot be another alias but can be a globally unique identifier or a fully
     * specified ARN to a key.</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline CreateAliasRequest& WithTargetKeyId(const Aws::String& value) { SetTargetKeyId(value); return *this;}

    /**
     * <p>An identifier of the key for which you are creating the alias. This value
     * cannot be another alias but can be a globally unique identifier or a fully
     * specified ARN to a key.</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline CreateAliasRequest& WithTargetKeyId(Aws::String&& value) { SetTargetKeyId(value); return *this;}

    /**
     * <p>An identifier of the key for which you are creating the alias. This value
     * cannot be another alias but can be a globally unique identifier or a fully
     * specified ARN to a key.</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline CreateAliasRequest& WithTargetKeyId(const char* value) { SetTargetKeyId(value); return *this;}

  private:
    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet;
    Aws::String m_targetKeyId;
    bool m_targetKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
