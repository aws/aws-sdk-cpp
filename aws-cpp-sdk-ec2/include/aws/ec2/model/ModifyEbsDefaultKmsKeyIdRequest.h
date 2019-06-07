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
     * <p>The identifier of the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use for Amazon EBS encryption. If this parameter is not specified,
     * your AWS managed CMK for EBS is used. If <code>KmsKeyId</code> is specified, the
     * encrypted state must be <code>true</code>.</p> <p>You can specify the CMK using
     * any of the following:</p> <ul> <li> <p>Key ID. For example,
     * key/1234abcd-12ab-34cd-56ef-1234567890ab.</p> </li> <li> <p>Key alias. For
     * example, alias/ExampleAlias.</p> </li> <li> <p>Key ARN. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>Alias ARN. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> </ul> <p>AWS authenticates the CMK asynchronously. Therefore, if you
     * specify an ID, alias, or ARN that is not valid, the action can appear to
     * complete, but eventually fails.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The identifier of the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use for Amazon EBS encryption. If this parameter is not specified,
     * your AWS managed CMK for EBS is used. If <code>KmsKeyId</code> is specified, the
     * encrypted state must be <code>true</code>.</p> <p>You can specify the CMK using
     * any of the following:</p> <ul> <li> <p>Key ID. For example,
     * key/1234abcd-12ab-34cd-56ef-1234567890ab.</p> </li> <li> <p>Key alias. For
     * example, alias/ExampleAlias.</p> </li> <li> <p>Key ARN. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>Alias ARN. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> </ul> <p>AWS authenticates the CMK asynchronously. Therefore, if you
     * specify an ID, alias, or ARN that is not valid, the action can appear to
     * complete, but eventually fails.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The identifier of the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use for Amazon EBS encryption. If this parameter is not specified,
     * your AWS managed CMK for EBS is used. If <code>KmsKeyId</code> is specified, the
     * encrypted state must be <code>true</code>.</p> <p>You can specify the CMK using
     * any of the following:</p> <ul> <li> <p>Key ID. For example,
     * key/1234abcd-12ab-34cd-56ef-1234567890ab.</p> </li> <li> <p>Key alias. For
     * example, alias/ExampleAlias.</p> </li> <li> <p>Key ARN. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>Alias ARN. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> </ul> <p>AWS authenticates the CMK asynchronously. Therefore, if you
     * specify an ID, alias, or ARN that is not valid, the action can appear to
     * complete, but eventually fails.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The identifier of the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use for Amazon EBS encryption. If this parameter is not specified,
     * your AWS managed CMK for EBS is used. If <code>KmsKeyId</code> is specified, the
     * encrypted state must be <code>true</code>.</p> <p>You can specify the CMK using
     * any of the following:</p> <ul> <li> <p>Key ID. For example,
     * key/1234abcd-12ab-34cd-56ef-1234567890ab.</p> </li> <li> <p>Key alias. For
     * example, alias/ExampleAlias.</p> </li> <li> <p>Key ARN. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>Alias ARN. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> </ul> <p>AWS authenticates the CMK asynchronously. Therefore, if you
     * specify an ID, alias, or ARN that is not valid, the action can appear to
     * complete, but eventually fails.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The identifier of the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use for Amazon EBS encryption. If this parameter is not specified,
     * your AWS managed CMK for EBS is used. If <code>KmsKeyId</code> is specified, the
     * encrypted state must be <code>true</code>.</p> <p>You can specify the CMK using
     * any of the following:</p> <ul> <li> <p>Key ID. For example,
     * key/1234abcd-12ab-34cd-56ef-1234567890ab.</p> </li> <li> <p>Key alias. For
     * example, alias/ExampleAlias.</p> </li> <li> <p>Key ARN. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>Alias ARN. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> </ul> <p>AWS authenticates the CMK asynchronously. Therefore, if you
     * specify an ID, alias, or ARN that is not valid, the action can appear to
     * complete, but eventually fails.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The identifier of the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use for Amazon EBS encryption. If this parameter is not specified,
     * your AWS managed CMK for EBS is used. If <code>KmsKeyId</code> is specified, the
     * encrypted state must be <code>true</code>.</p> <p>You can specify the CMK using
     * any of the following:</p> <ul> <li> <p>Key ID. For example,
     * key/1234abcd-12ab-34cd-56ef-1234567890ab.</p> </li> <li> <p>Key alias. For
     * example, alias/ExampleAlias.</p> </li> <li> <p>Key ARN. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>Alias ARN. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> </ul> <p>AWS authenticates the CMK asynchronously. Therefore, if you
     * specify an ID, alias, or ARN that is not valid, the action can appear to
     * complete, but eventually fails.</p>
     */
    inline ModifyEbsDefaultKmsKeyIdRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The identifier of the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use for Amazon EBS encryption. If this parameter is not specified,
     * your AWS managed CMK for EBS is used. If <code>KmsKeyId</code> is specified, the
     * encrypted state must be <code>true</code>.</p> <p>You can specify the CMK using
     * any of the following:</p> <ul> <li> <p>Key ID. For example,
     * key/1234abcd-12ab-34cd-56ef-1234567890ab.</p> </li> <li> <p>Key alias. For
     * example, alias/ExampleAlias.</p> </li> <li> <p>Key ARN. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>Alias ARN. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> </ul> <p>AWS authenticates the CMK asynchronously. Therefore, if you
     * specify an ID, alias, or ARN that is not valid, the action can appear to
     * complete, but eventually fails.</p>
     */
    inline ModifyEbsDefaultKmsKeyIdRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use for Amazon EBS encryption. If this parameter is not specified,
     * your AWS managed CMK for EBS is used. If <code>KmsKeyId</code> is specified, the
     * encrypted state must be <code>true</code>.</p> <p>You can specify the CMK using
     * any of the following:</p> <ul> <li> <p>Key ID. For example,
     * key/1234abcd-12ab-34cd-56ef-1234567890ab.</p> </li> <li> <p>Key alias. For
     * example, alias/ExampleAlias.</p> </li> <li> <p>Key ARN. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>Alias ARN. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> </ul> <p>AWS authenticates the CMK asynchronously. Therefore, if you
     * specify an ID, alias, or ARN that is not valid, the action can appear to
     * complete, but eventually fails.</p>
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
