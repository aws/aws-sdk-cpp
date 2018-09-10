﻿/*
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
  class AWS_KMS_API CreateAliasRequest : public KMSRequest
  {
  public:
    CreateAliasRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAlias"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the alias name. This value must begin with <code>alias/</code>
     * followed by the alias name, such as <code>alias/ExampleAlias</code>. The alias
     * name cannot begin with <code>aws/</code>. The <code>alias/aws/</code> prefix is
     * reserved for AWS managed CMKs.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }

    /**
     * <p>Specifies the alias name. This value must begin with <code>alias/</code>
     * followed by the alias name, such as <code>alias/ExampleAlias</code>. The alias
     * name cannot begin with <code>aws/</code>. The <code>alias/aws/</code> prefix is
     * reserved for AWS managed CMKs.</p>
     */
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }

    /**
     * <p>Specifies the alias name. This value must begin with <code>alias/</code>
     * followed by the alias name, such as <code>alias/ExampleAlias</code>. The alias
     * name cannot begin with <code>aws/</code>. The <code>alias/aws/</code> prefix is
     * reserved for AWS managed CMKs.</p>
     */
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }

    /**
     * <p>Specifies the alias name. This value must begin with <code>alias/</code>
     * followed by the alias name, such as <code>alias/ExampleAlias</code>. The alias
     * name cannot begin with <code>aws/</code>. The <code>alias/aws/</code> prefix is
     * reserved for AWS managed CMKs.</p>
     */
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }

    /**
     * <p>Specifies the alias name. This value must begin with <code>alias/</code>
     * followed by the alias name, such as <code>alias/ExampleAlias</code>. The alias
     * name cannot begin with <code>aws/</code>. The <code>alias/aws/</code> prefix is
     * reserved for AWS managed CMKs.</p>
     */
    inline CreateAliasRequest& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}

    /**
     * <p>Specifies the alias name. This value must begin with <code>alias/</code>
     * followed by the alias name, such as <code>alias/ExampleAlias</code>. The alias
     * name cannot begin with <code>aws/</code>. The <code>alias/aws/</code> prefix is
     * reserved for AWS managed CMKs.</p>
     */
    inline CreateAliasRequest& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}

    /**
     * <p>Specifies the alias name. This value must begin with <code>alias/</code>
     * followed by the alias name, such as <code>alias/ExampleAlias</code>. The alias
     * name cannot begin with <code>aws/</code>. The <code>alias/aws/</code> prefix is
     * reserved for AWS managed CMKs.</p>
     */
    inline CreateAliasRequest& WithAliasName(const char* value) { SetAliasName(value); return *this;}


    /**
     * <p>Identifies the CMK for which you are creating the alias. This value cannot be
     * an alias.</p> <p>Specify the key ID or the Amazon Resource Name (ARN) of the
     * CMK.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetTargetKeyId() const{ return m_targetKeyId; }

    /**
     * <p>Identifies the CMK for which you are creating the alias. This value cannot be
     * an alias.</p> <p>Specify the key ID or the Amazon Resource Name (ARN) of the
     * CMK.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline void SetTargetKeyId(const Aws::String& value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId = value; }

    /**
     * <p>Identifies the CMK for which you are creating the alias. This value cannot be
     * an alias.</p> <p>Specify the key ID or the Amazon Resource Name (ARN) of the
     * CMK.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline void SetTargetKeyId(Aws::String&& value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId = std::move(value); }

    /**
     * <p>Identifies the CMK for which you are creating the alias. This value cannot be
     * an alias.</p> <p>Specify the key ID or the Amazon Resource Name (ARN) of the
     * CMK.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline void SetTargetKeyId(const char* value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId.assign(value); }

    /**
     * <p>Identifies the CMK for which you are creating the alias. This value cannot be
     * an alias.</p> <p>Specify the key ID or the Amazon Resource Name (ARN) of the
     * CMK.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline CreateAliasRequest& WithTargetKeyId(const Aws::String& value) { SetTargetKeyId(value); return *this;}

    /**
     * <p>Identifies the CMK for which you are creating the alias. This value cannot be
     * an alias.</p> <p>Specify the key ID or the Amazon Resource Name (ARN) of the
     * CMK.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline CreateAliasRequest& WithTargetKeyId(Aws::String&& value) { SetTargetKeyId(std::move(value)); return *this;}

    /**
     * <p>Identifies the CMK for which you are creating the alias. This value cannot be
     * an alias.</p> <p>Specify the key ID or the Amazon Resource Name (ARN) of the
     * CMK.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
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
