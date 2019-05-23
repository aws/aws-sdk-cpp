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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API ModifyEbsDefaultKmsKeyIdRequest : public EC2Request
  {
  public:
    ModifyEbsDefaultKmsKeyIdRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyEbsDefaultKmsKeyId"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>An identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use to encrypt the volume. This parameter is only required if you
     * want to use a non-default CMK; if this parameter is not specified, the default
     * CMK for EBS is used. If a <code>KmsKeyId</code> is specified, the
     * <code>Encrypted</code> flag must also be set. </p> <p>The CMK identifier may be
     * provided in any of the following formats: </p> <ul> <li> <p>Key ID</p> </li>
     * <li> <p>Key alias</p> </li> <li> <p>ARN using key ID. The ID ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>key</code> namespace, and then the CMK
     * ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * </p> </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>An identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use to encrypt the volume. This parameter is only required if you
     * want to use a non-default CMK; if this parameter is not specified, the default
     * CMK for EBS is used. If a <code>KmsKeyId</code> is specified, the
     * <code>Encrypted</code> flag must also be set. </p> <p>The CMK identifier may be
     * provided in any of the following formats: </p> <ul> <li> <p>Key ID</p> </li>
     * <li> <p>Key alias</p> </li> <li> <p>ARN using key ID. The ID ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>key</code> namespace, and then the CMK
     * ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * </p> </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>An identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use to encrypt the volume. This parameter is only required if you
     * want to use a non-default CMK; if this parameter is not specified, the default
     * CMK for EBS is used. If a <code>KmsKeyId</code> is specified, the
     * <code>Encrypted</code> flag must also be set. </p> <p>The CMK identifier may be
     * provided in any of the following formats: </p> <ul> <li> <p>Key ID</p> </li>
     * <li> <p>Key alias</p> </li> <li> <p>ARN using key ID. The ID ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>key</code> namespace, and then the CMK
     * ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * </p> </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>An identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use to encrypt the volume. This parameter is only required if you
     * want to use a non-default CMK; if this parameter is not specified, the default
     * CMK for EBS is used. If a <code>KmsKeyId</code> is specified, the
     * <code>Encrypted</code> flag must also be set. </p> <p>The CMK identifier may be
     * provided in any of the following formats: </p> <ul> <li> <p>Key ID</p> </li>
     * <li> <p>Key alias</p> </li> <li> <p>ARN using key ID. The ID ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>key</code> namespace, and then the CMK
     * ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * </p> </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>An identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use to encrypt the volume. This parameter is only required if you
     * want to use a non-default CMK; if this parameter is not specified, the default
     * CMK for EBS is used. If a <code>KmsKeyId</code> is specified, the
     * <code>Encrypted</code> flag must also be set. </p> <p>The CMK identifier may be
     * provided in any of the following formats: </p> <ul> <li> <p>Key ID</p> </li>
     * <li> <p>Key alias</p> </li> <li> <p>ARN using key ID. The ID ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>key</code> namespace, and then the CMK
     * ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * </p> </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>An identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use to encrypt the volume. This parameter is only required if you
     * want to use a non-default CMK; if this parameter is not specified, the default
     * CMK for EBS is used. If a <code>KmsKeyId</code> is specified, the
     * <code>Encrypted</code> flag must also be set. </p> <p>The CMK identifier may be
     * provided in any of the following formats: </p> <ul> <li> <p>Key ID</p> </li>
     * <li> <p>Key alias</p> </li> <li> <p>ARN using key ID. The ID ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>key</code> namespace, and then the CMK
     * ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * </p> </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul>
     */
    inline ModifyEbsDefaultKmsKeyIdRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>An identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use to encrypt the volume. This parameter is only required if you
     * want to use a non-default CMK; if this parameter is not specified, the default
     * CMK for EBS is used. If a <code>KmsKeyId</code> is specified, the
     * <code>Encrypted</code> flag must also be set. </p> <p>The CMK identifier may be
     * provided in any of the following formats: </p> <ul> <li> <p>Key ID</p> </li>
     * <li> <p>Key alias</p> </li> <li> <p>ARN using key ID. The ID ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>key</code> namespace, and then the CMK
     * ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * </p> </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul>
     */
    inline ModifyEbsDefaultKmsKeyIdRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>An identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use to encrypt the volume. This parameter is only required if you
     * want to use a non-default CMK; if this parameter is not specified, the default
     * CMK for EBS is used. If a <code>KmsKeyId</code> is specified, the
     * <code>Encrypted</code> flag must also be set. </p> <p>The CMK identifier may be
     * provided in any of the following formats: </p> <ul> <li> <p>Key ID</p> </li>
     * <li> <p>Key alias</p> </li> <li> <p>ARN using key ID. The ID ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>key</code> namespace, and then the CMK
     * ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * </p> </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul>
     */
    inline ModifyEbsDefaultKmsKeyIdRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ModifyEbsDefaultKmsKeyIdRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
