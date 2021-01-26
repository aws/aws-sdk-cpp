/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
     * 1234abcd-12ab-34cd-56ef-1234567890ab.</p> </li> <li> <p>Key alias. For example,
     * alias/ExampleAlias.</p> </li> <li> <p>Key ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:key/1234abcd-12ab-34cd-56ef-1234567890ab.</p>
     * </li> <li> <p>Alias ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:alias/ExampleAlias.</p> </li> </ul> <p>AWS
     * authenticates the CMK asynchronously. Therefore, if you specify an ID, alias, or
     * ARN that is not valid, the action can appear to complete, but eventually
     * fails.</p> <p>Amazon EBS does not support asymmetric CMKs.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The identifier of the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use for Amazon EBS encryption. If this parameter is not specified,
     * your AWS managed CMK for EBS is used. If <code>KmsKeyId</code> is specified, the
     * encrypted state must be <code>true</code>.</p> <p>You can specify the CMK using
     * any of the following:</p> <ul> <li> <p>Key ID. For example,
     * 1234abcd-12ab-34cd-56ef-1234567890ab.</p> </li> <li> <p>Key alias. For example,
     * alias/ExampleAlias.</p> </li> <li> <p>Key ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:key/1234abcd-12ab-34cd-56ef-1234567890ab.</p>
     * </li> <li> <p>Alias ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:alias/ExampleAlias.</p> </li> </ul> <p>AWS
     * authenticates the CMK asynchronously. Therefore, if you specify an ID, alias, or
     * ARN that is not valid, the action can appear to complete, but eventually
     * fails.</p> <p>Amazon EBS does not support asymmetric CMKs.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The identifier of the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use for Amazon EBS encryption. If this parameter is not specified,
     * your AWS managed CMK for EBS is used. If <code>KmsKeyId</code> is specified, the
     * encrypted state must be <code>true</code>.</p> <p>You can specify the CMK using
     * any of the following:</p> <ul> <li> <p>Key ID. For example,
     * 1234abcd-12ab-34cd-56ef-1234567890ab.</p> </li> <li> <p>Key alias. For example,
     * alias/ExampleAlias.</p> </li> <li> <p>Key ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:key/1234abcd-12ab-34cd-56ef-1234567890ab.</p>
     * </li> <li> <p>Alias ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:alias/ExampleAlias.</p> </li> </ul> <p>AWS
     * authenticates the CMK asynchronously. Therefore, if you specify an ID, alias, or
     * ARN that is not valid, the action can appear to complete, but eventually
     * fails.</p> <p>Amazon EBS does not support asymmetric CMKs.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The identifier of the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use for Amazon EBS encryption. If this parameter is not specified,
     * your AWS managed CMK for EBS is used. If <code>KmsKeyId</code> is specified, the
     * encrypted state must be <code>true</code>.</p> <p>You can specify the CMK using
     * any of the following:</p> <ul> <li> <p>Key ID. For example,
     * 1234abcd-12ab-34cd-56ef-1234567890ab.</p> </li> <li> <p>Key alias. For example,
     * alias/ExampleAlias.</p> </li> <li> <p>Key ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:key/1234abcd-12ab-34cd-56ef-1234567890ab.</p>
     * </li> <li> <p>Alias ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:alias/ExampleAlias.</p> </li> </ul> <p>AWS
     * authenticates the CMK asynchronously. Therefore, if you specify an ID, alias, or
     * ARN that is not valid, the action can appear to complete, but eventually
     * fails.</p> <p>Amazon EBS does not support asymmetric CMKs.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The identifier of the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use for Amazon EBS encryption. If this parameter is not specified,
     * your AWS managed CMK for EBS is used. If <code>KmsKeyId</code> is specified, the
     * encrypted state must be <code>true</code>.</p> <p>You can specify the CMK using
     * any of the following:</p> <ul> <li> <p>Key ID. For example,
     * 1234abcd-12ab-34cd-56ef-1234567890ab.</p> </li> <li> <p>Key alias. For example,
     * alias/ExampleAlias.</p> </li> <li> <p>Key ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:key/1234abcd-12ab-34cd-56ef-1234567890ab.</p>
     * </li> <li> <p>Alias ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:alias/ExampleAlias.</p> </li> </ul> <p>AWS
     * authenticates the CMK asynchronously. Therefore, if you specify an ID, alias, or
     * ARN that is not valid, the action can appear to complete, but eventually
     * fails.</p> <p>Amazon EBS does not support asymmetric CMKs.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The identifier of the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use for Amazon EBS encryption. If this parameter is not specified,
     * your AWS managed CMK for EBS is used. If <code>KmsKeyId</code> is specified, the
     * encrypted state must be <code>true</code>.</p> <p>You can specify the CMK using
     * any of the following:</p> <ul> <li> <p>Key ID. For example,
     * 1234abcd-12ab-34cd-56ef-1234567890ab.</p> </li> <li> <p>Key alias. For example,
     * alias/ExampleAlias.</p> </li> <li> <p>Key ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:key/1234abcd-12ab-34cd-56ef-1234567890ab.</p>
     * </li> <li> <p>Alias ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:alias/ExampleAlias.</p> </li> </ul> <p>AWS
     * authenticates the CMK asynchronously. Therefore, if you specify an ID, alias, or
     * ARN that is not valid, the action can appear to complete, but eventually
     * fails.</p> <p>Amazon EBS does not support asymmetric CMKs.</p>
     */
    inline ModifyEbsDefaultKmsKeyIdRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The identifier of the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use for Amazon EBS encryption. If this parameter is not specified,
     * your AWS managed CMK for EBS is used. If <code>KmsKeyId</code> is specified, the
     * encrypted state must be <code>true</code>.</p> <p>You can specify the CMK using
     * any of the following:</p> <ul> <li> <p>Key ID. For example,
     * 1234abcd-12ab-34cd-56ef-1234567890ab.</p> </li> <li> <p>Key alias. For example,
     * alias/ExampleAlias.</p> </li> <li> <p>Key ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:key/1234abcd-12ab-34cd-56ef-1234567890ab.</p>
     * </li> <li> <p>Alias ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:alias/ExampleAlias.</p> </li> </ul> <p>AWS
     * authenticates the CMK asynchronously. Therefore, if you specify an ID, alias, or
     * ARN that is not valid, the action can appear to complete, but eventually
     * fails.</p> <p>Amazon EBS does not support asymmetric CMKs.</p>
     */
    inline ModifyEbsDefaultKmsKeyIdRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use for Amazon EBS encryption. If this parameter is not specified,
     * your AWS managed CMK for EBS is used. If <code>KmsKeyId</code> is specified, the
     * encrypted state must be <code>true</code>.</p> <p>You can specify the CMK using
     * any of the following:</p> <ul> <li> <p>Key ID. For example,
     * 1234abcd-12ab-34cd-56ef-1234567890ab.</p> </li> <li> <p>Key alias. For example,
     * alias/ExampleAlias.</p> </li> <li> <p>Key ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:key/1234abcd-12ab-34cd-56ef-1234567890ab.</p>
     * </li> <li> <p>Alias ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:alias/ExampleAlias.</p> </li> </ul> <p>AWS
     * authenticates the CMK asynchronously. Therefore, if you specify an ID, alias, or
     * ARN that is not valid, the action can appear to complete, but eventually
     * fails.</p> <p>Amazon EBS does not support asymmetric CMKs.</p>
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
