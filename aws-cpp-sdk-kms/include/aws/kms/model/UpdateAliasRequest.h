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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API UpdateAliasRequest : public KMSRequest
  {
  public:
    UpdateAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAlias"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the name of the alias to change. This value must begin with
     * <code>alias/</code> followed by the alias name, such as
     * <code>alias/ExampleAlias</code>.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }

    /**
     * <p>Specifies the name of the alias to change. This value must begin with
     * <code>alias/</code> followed by the alias name, such as
     * <code>alias/ExampleAlias</code>.</p>
     */
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }

    /**
     * <p>Specifies the name of the alias to change. This value must begin with
     * <code>alias/</code> followed by the alias name, such as
     * <code>alias/ExampleAlias</code>.</p>
     */
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }

    /**
     * <p>Specifies the name of the alias to change. This value must begin with
     * <code>alias/</code> followed by the alias name, such as
     * <code>alias/ExampleAlias</code>.</p>
     */
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }

    /**
     * <p>Specifies the name of the alias to change. This value must begin with
     * <code>alias/</code> followed by the alias name, such as
     * <code>alias/ExampleAlias</code>.</p>
     */
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }

    /**
     * <p>Specifies the name of the alias to change. This value must begin with
     * <code>alias/</code> followed by the alias name, such as
     * <code>alias/ExampleAlias</code>.</p>
     */
    inline UpdateAliasRequest& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}

    /**
     * <p>Specifies the name of the alias to change. This value must begin with
     * <code>alias/</code> followed by the alias name, such as
     * <code>alias/ExampleAlias</code>.</p>
     */
    inline UpdateAliasRequest& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the alias to change. This value must begin with
     * <code>alias/</code> followed by the alias name, such as
     * <code>alias/ExampleAlias</code>.</p>
     */
    inline UpdateAliasRequest& WithAliasName(const char* value) { SetAliasName(value); return *this;}


    /**
     * <p>Unique identifier of the customer master key (CMK) to be mapped to the alias.
     * When the update operation completes, the alias will point to this CMK.</p>
     * <p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p> <p>To verify that the alias is mapped to the correct
     * CMK, use <a>ListAliases</a>.</p>
     */
    inline const Aws::String& GetTargetKeyId() const{ return m_targetKeyId; }

    /**
     * <p>Unique identifier of the customer master key (CMK) to be mapped to the alias.
     * When the update operation completes, the alias will point to this CMK.</p>
     * <p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p> <p>To verify that the alias is mapped to the correct
     * CMK, use <a>ListAliases</a>.</p>
     */
    inline bool TargetKeyIdHasBeenSet() const { return m_targetKeyIdHasBeenSet; }

    /**
     * <p>Unique identifier of the customer master key (CMK) to be mapped to the alias.
     * When the update operation completes, the alias will point to this CMK.</p>
     * <p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p> <p>To verify that the alias is mapped to the correct
     * CMK, use <a>ListAliases</a>.</p>
     */
    inline void SetTargetKeyId(const Aws::String& value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId = value; }

    /**
     * <p>Unique identifier of the customer master key (CMK) to be mapped to the alias.
     * When the update operation completes, the alias will point to this CMK.</p>
     * <p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p> <p>To verify that the alias is mapped to the correct
     * CMK, use <a>ListAliases</a>.</p>
     */
    inline void SetTargetKeyId(Aws::String&& value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId = std::move(value); }

    /**
     * <p>Unique identifier of the customer master key (CMK) to be mapped to the alias.
     * When the update operation completes, the alias will point to this CMK.</p>
     * <p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p> <p>To verify that the alias is mapped to the correct
     * CMK, use <a>ListAliases</a>.</p>
     */
    inline void SetTargetKeyId(const char* value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId.assign(value); }

    /**
     * <p>Unique identifier of the customer master key (CMK) to be mapped to the alias.
     * When the update operation completes, the alias will point to this CMK.</p>
     * <p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p> <p>To verify that the alias is mapped to the correct
     * CMK, use <a>ListAliases</a>.</p>
     */
    inline UpdateAliasRequest& WithTargetKeyId(const Aws::String& value) { SetTargetKeyId(value); return *this;}

    /**
     * <p>Unique identifier of the customer master key (CMK) to be mapped to the alias.
     * When the update operation completes, the alias will point to this CMK.</p>
     * <p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p> <p>To verify that the alias is mapped to the correct
     * CMK, use <a>ListAliases</a>.</p>
     */
    inline UpdateAliasRequest& WithTargetKeyId(Aws::String&& value) { SetTargetKeyId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of the customer master key (CMK) to be mapped to the alias.
     * When the update operation completes, the alias will point to this CMK.</p>
     * <p>Specify the key ID or the Amazon Resource Name (ARN) of the CMK.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p> <p>To verify that the alias is mapped to the correct
     * CMK, use <a>ListAliases</a>.</p>
     */
    inline UpdateAliasRequest& WithTargetKeyId(const char* value) { SetTargetKeyId(value); return *this;}

  private:

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet;

    Aws::String m_targetKeyId;
    bool m_targetKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
