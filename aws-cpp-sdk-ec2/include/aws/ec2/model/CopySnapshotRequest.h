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
   * <p>Contains the parameters for CopySnapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CopySnapshotRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CopySnapshotRequest : public EC2Request
  {
  public:
    CopySnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopySnapshot"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A description for the EBS snapshot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the EBS snapshot.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the EBS snapshot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the EBS snapshot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the EBS snapshot.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the EBS snapshot.</p>
     */
    inline CopySnapshotRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the EBS snapshot.</p>
     */
    inline CopySnapshotRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the EBS snapshot.</p>
     */
    inline CopySnapshotRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The destination Region to use in the <code>PresignedUrl</code> parameter of a
     * snapshot copy operation. This parameter is only valid for specifying the
     * destination Region in a <code>PresignedUrl</code> parameter, where it is
     * required.</p> <p>The snapshot copy is sent to the regional endpoint that you
     * sent the HTTP request to (for example,
     * <code>ec2.us-east-1.amazonaws.com</code>). With the AWS CLI, this is specified
     * using the <code>--region</code> parameter or the default Region in your AWS
     * configuration file.</p>
     */
    inline const Aws::String& GetDestinationRegion() const{ return m_destinationRegion; }

    /**
     * <p>The destination Region to use in the <code>PresignedUrl</code> parameter of a
     * snapshot copy operation. This parameter is only valid for specifying the
     * destination Region in a <code>PresignedUrl</code> parameter, where it is
     * required.</p> <p>The snapshot copy is sent to the regional endpoint that you
     * sent the HTTP request to (for example,
     * <code>ec2.us-east-1.amazonaws.com</code>). With the AWS CLI, this is specified
     * using the <code>--region</code> parameter or the default Region in your AWS
     * configuration file.</p>
     */
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }

    /**
     * <p>The destination Region to use in the <code>PresignedUrl</code> parameter of a
     * snapshot copy operation. This parameter is only valid for specifying the
     * destination Region in a <code>PresignedUrl</code> parameter, where it is
     * required.</p> <p>The snapshot copy is sent to the regional endpoint that you
     * sent the HTTP request to (for example,
     * <code>ec2.us-east-1.amazonaws.com</code>). With the AWS CLI, this is specified
     * using the <code>--region</code> parameter or the default Region in your AWS
     * configuration file.</p>
     */
    inline void SetDestinationRegion(const Aws::String& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = value; }

    /**
     * <p>The destination Region to use in the <code>PresignedUrl</code> parameter of a
     * snapshot copy operation. This parameter is only valid for specifying the
     * destination Region in a <code>PresignedUrl</code> parameter, where it is
     * required.</p> <p>The snapshot copy is sent to the regional endpoint that you
     * sent the HTTP request to (for example,
     * <code>ec2.us-east-1.amazonaws.com</code>). With the AWS CLI, this is specified
     * using the <code>--region</code> parameter or the default Region in your AWS
     * configuration file.</p>
     */
    inline void SetDestinationRegion(Aws::String&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::move(value); }

    /**
     * <p>The destination Region to use in the <code>PresignedUrl</code> parameter of a
     * snapshot copy operation. This parameter is only valid for specifying the
     * destination Region in a <code>PresignedUrl</code> parameter, where it is
     * required.</p> <p>The snapshot copy is sent to the regional endpoint that you
     * sent the HTTP request to (for example,
     * <code>ec2.us-east-1.amazonaws.com</code>). With the AWS CLI, this is specified
     * using the <code>--region</code> parameter or the default Region in your AWS
     * configuration file.</p>
     */
    inline void SetDestinationRegion(const char* value) { m_destinationRegionHasBeenSet = true; m_destinationRegion.assign(value); }

    /**
     * <p>The destination Region to use in the <code>PresignedUrl</code> parameter of a
     * snapshot copy operation. This parameter is only valid for specifying the
     * destination Region in a <code>PresignedUrl</code> parameter, where it is
     * required.</p> <p>The snapshot copy is sent to the regional endpoint that you
     * sent the HTTP request to (for example,
     * <code>ec2.us-east-1.amazonaws.com</code>). With the AWS CLI, this is specified
     * using the <code>--region</code> parameter or the default Region in your AWS
     * configuration file.</p>
     */
    inline CopySnapshotRequest& WithDestinationRegion(const Aws::String& value) { SetDestinationRegion(value); return *this;}

    /**
     * <p>The destination Region to use in the <code>PresignedUrl</code> parameter of a
     * snapshot copy operation. This parameter is only valid for specifying the
     * destination Region in a <code>PresignedUrl</code> parameter, where it is
     * required.</p> <p>The snapshot copy is sent to the regional endpoint that you
     * sent the HTTP request to (for example,
     * <code>ec2.us-east-1.amazonaws.com</code>). With the AWS CLI, this is specified
     * using the <code>--region</code> parameter or the default Region in your AWS
     * configuration file.</p>
     */
    inline CopySnapshotRequest& WithDestinationRegion(Aws::String&& value) { SetDestinationRegion(std::move(value)); return *this;}

    /**
     * <p>The destination Region to use in the <code>PresignedUrl</code> parameter of a
     * snapshot copy operation. This parameter is only valid for specifying the
     * destination Region in a <code>PresignedUrl</code> parameter, where it is
     * required.</p> <p>The snapshot copy is sent to the regional endpoint that you
     * sent the HTTP request to (for example,
     * <code>ec2.us-east-1.amazonaws.com</code>). With the AWS CLI, this is specified
     * using the <code>--region</code> parameter or the default Region in your AWS
     * configuration file.</p>
     */
    inline CopySnapshotRequest& WithDestinationRegion(const char* value) { SetDestinationRegion(value); return *this;}


    /**
     * <p>To encrypt a copy of an unencrypted snapshot if encryption by default is not
     * enabled, enable encryption using this parameter. Otherwise, omit this parameter.
     * Encrypted snapshots are encrypted, even if you omit this parameter and
     * encryption by default is not enabled. You cannot set this parameter to false.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>To encrypt a copy of an unencrypted snapshot if encryption by default is not
     * enabled, enable encryption using this parameter. Otherwise, omit this parameter.
     * Encrypted snapshots are encrypted, even if you omit this parameter and
     * encryption by default is not enabled. You cannot set this parameter to false.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>To encrypt a copy of an unencrypted snapshot if encryption by default is not
     * enabled, enable encryption using this parameter. Otherwise, omit this parameter.
     * Encrypted snapshots are encrypted, even if you omit this parameter and
     * encryption by default is not enabled. You cannot set this parameter to false.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>To encrypt a copy of an unencrypted snapshot if encryption by default is not
     * enabled, enable encryption using this parameter. Otherwise, omit this parameter.
     * Encrypted snapshots are encrypted, even if you omit this parameter and
     * encryption by default is not enabled. You cannot set this parameter to false.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline CopySnapshotRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


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
    inline CopySnapshotRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

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
    inline CopySnapshotRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

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
    inline CopySnapshotRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>When you copy an encrypted source snapshot using the Amazon EC2 Query API,
     * you must supply a pre-signed URL. This parameter is optional for unencrypted
     * snapshots. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html">Query
     * Requests</a>.</p> <p>The <code>PresignedUrl</code> should use the snapshot
     * source endpoint, the <code>CopySnapshot</code> action, and include the
     * <code>SourceRegion</code>, <code>SourceSnapshotId</code>, and
     * <code>DestinationRegion</code> parameters. The <code>PresignedUrl</code> must be
     * signed using AWS Signature Version 4. Because EBS snapshots are stored in Amazon
     * S3, the signing algorithm for this parameter uses the same logic that is
     * described in <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests by Using Query Parameters (AWS Signature Version 4)</a> in the
     * <i>Amazon Simple Storage Service API Reference</i>. An invalid or improperly
     * signed <code>PresignedUrl</code> will cause the copy operation to fail
     * asynchronously, and the snapshot will move to an <code>error</code> state.</p>
     */
    inline const Aws::String& GetPresignedUrl() const{ return m_presignedUrl; }

    /**
     * <p>When you copy an encrypted source snapshot using the Amazon EC2 Query API,
     * you must supply a pre-signed URL. This parameter is optional for unencrypted
     * snapshots. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html">Query
     * Requests</a>.</p> <p>The <code>PresignedUrl</code> should use the snapshot
     * source endpoint, the <code>CopySnapshot</code> action, and include the
     * <code>SourceRegion</code>, <code>SourceSnapshotId</code>, and
     * <code>DestinationRegion</code> parameters. The <code>PresignedUrl</code> must be
     * signed using AWS Signature Version 4. Because EBS snapshots are stored in Amazon
     * S3, the signing algorithm for this parameter uses the same logic that is
     * described in <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests by Using Query Parameters (AWS Signature Version 4)</a> in the
     * <i>Amazon Simple Storage Service API Reference</i>. An invalid or improperly
     * signed <code>PresignedUrl</code> will cause the copy operation to fail
     * asynchronously, and the snapshot will move to an <code>error</code> state.</p>
     */
    inline bool PresignedUrlHasBeenSet() const { return m_presignedUrlHasBeenSet; }

    /**
     * <p>When you copy an encrypted source snapshot using the Amazon EC2 Query API,
     * you must supply a pre-signed URL. This parameter is optional for unencrypted
     * snapshots. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html">Query
     * Requests</a>.</p> <p>The <code>PresignedUrl</code> should use the snapshot
     * source endpoint, the <code>CopySnapshot</code> action, and include the
     * <code>SourceRegion</code>, <code>SourceSnapshotId</code>, and
     * <code>DestinationRegion</code> parameters. The <code>PresignedUrl</code> must be
     * signed using AWS Signature Version 4. Because EBS snapshots are stored in Amazon
     * S3, the signing algorithm for this parameter uses the same logic that is
     * described in <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests by Using Query Parameters (AWS Signature Version 4)</a> in the
     * <i>Amazon Simple Storage Service API Reference</i>. An invalid or improperly
     * signed <code>PresignedUrl</code> will cause the copy operation to fail
     * asynchronously, and the snapshot will move to an <code>error</code> state.</p>
     */
    inline void SetPresignedUrl(const Aws::String& value) { m_presignedUrlHasBeenSet = true; m_presignedUrl = value; }

    /**
     * <p>When you copy an encrypted source snapshot using the Amazon EC2 Query API,
     * you must supply a pre-signed URL. This parameter is optional for unencrypted
     * snapshots. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html">Query
     * Requests</a>.</p> <p>The <code>PresignedUrl</code> should use the snapshot
     * source endpoint, the <code>CopySnapshot</code> action, and include the
     * <code>SourceRegion</code>, <code>SourceSnapshotId</code>, and
     * <code>DestinationRegion</code> parameters. The <code>PresignedUrl</code> must be
     * signed using AWS Signature Version 4. Because EBS snapshots are stored in Amazon
     * S3, the signing algorithm for this parameter uses the same logic that is
     * described in <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests by Using Query Parameters (AWS Signature Version 4)</a> in the
     * <i>Amazon Simple Storage Service API Reference</i>. An invalid or improperly
     * signed <code>PresignedUrl</code> will cause the copy operation to fail
     * asynchronously, and the snapshot will move to an <code>error</code> state.</p>
     */
    inline void SetPresignedUrl(Aws::String&& value) { m_presignedUrlHasBeenSet = true; m_presignedUrl = std::move(value); }

    /**
     * <p>When you copy an encrypted source snapshot using the Amazon EC2 Query API,
     * you must supply a pre-signed URL. This parameter is optional for unencrypted
     * snapshots. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html">Query
     * Requests</a>.</p> <p>The <code>PresignedUrl</code> should use the snapshot
     * source endpoint, the <code>CopySnapshot</code> action, and include the
     * <code>SourceRegion</code>, <code>SourceSnapshotId</code>, and
     * <code>DestinationRegion</code> parameters. The <code>PresignedUrl</code> must be
     * signed using AWS Signature Version 4. Because EBS snapshots are stored in Amazon
     * S3, the signing algorithm for this parameter uses the same logic that is
     * described in <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests by Using Query Parameters (AWS Signature Version 4)</a> in the
     * <i>Amazon Simple Storage Service API Reference</i>. An invalid or improperly
     * signed <code>PresignedUrl</code> will cause the copy operation to fail
     * asynchronously, and the snapshot will move to an <code>error</code> state.</p>
     */
    inline void SetPresignedUrl(const char* value) { m_presignedUrlHasBeenSet = true; m_presignedUrl.assign(value); }

    /**
     * <p>When you copy an encrypted source snapshot using the Amazon EC2 Query API,
     * you must supply a pre-signed URL. This parameter is optional for unencrypted
     * snapshots. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html">Query
     * Requests</a>.</p> <p>The <code>PresignedUrl</code> should use the snapshot
     * source endpoint, the <code>CopySnapshot</code> action, and include the
     * <code>SourceRegion</code>, <code>SourceSnapshotId</code>, and
     * <code>DestinationRegion</code> parameters. The <code>PresignedUrl</code> must be
     * signed using AWS Signature Version 4. Because EBS snapshots are stored in Amazon
     * S3, the signing algorithm for this parameter uses the same logic that is
     * described in <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests by Using Query Parameters (AWS Signature Version 4)</a> in the
     * <i>Amazon Simple Storage Service API Reference</i>. An invalid or improperly
     * signed <code>PresignedUrl</code> will cause the copy operation to fail
     * asynchronously, and the snapshot will move to an <code>error</code> state.</p>
     */
    inline CopySnapshotRequest& WithPresignedUrl(const Aws::String& value) { SetPresignedUrl(value); return *this;}

    /**
     * <p>When you copy an encrypted source snapshot using the Amazon EC2 Query API,
     * you must supply a pre-signed URL. This parameter is optional for unencrypted
     * snapshots. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html">Query
     * Requests</a>.</p> <p>The <code>PresignedUrl</code> should use the snapshot
     * source endpoint, the <code>CopySnapshot</code> action, and include the
     * <code>SourceRegion</code>, <code>SourceSnapshotId</code>, and
     * <code>DestinationRegion</code> parameters. The <code>PresignedUrl</code> must be
     * signed using AWS Signature Version 4. Because EBS snapshots are stored in Amazon
     * S3, the signing algorithm for this parameter uses the same logic that is
     * described in <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests by Using Query Parameters (AWS Signature Version 4)</a> in the
     * <i>Amazon Simple Storage Service API Reference</i>. An invalid or improperly
     * signed <code>PresignedUrl</code> will cause the copy operation to fail
     * asynchronously, and the snapshot will move to an <code>error</code> state.</p>
     */
    inline CopySnapshotRequest& WithPresignedUrl(Aws::String&& value) { SetPresignedUrl(std::move(value)); return *this;}

    /**
     * <p>When you copy an encrypted source snapshot using the Amazon EC2 Query API,
     * you must supply a pre-signed URL. This parameter is optional for unencrypted
     * snapshots. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html">Query
     * Requests</a>.</p> <p>The <code>PresignedUrl</code> should use the snapshot
     * source endpoint, the <code>CopySnapshot</code> action, and include the
     * <code>SourceRegion</code>, <code>SourceSnapshotId</code>, and
     * <code>DestinationRegion</code> parameters. The <code>PresignedUrl</code> must be
     * signed using AWS Signature Version 4. Because EBS snapshots are stored in Amazon
     * S3, the signing algorithm for this parameter uses the same logic that is
     * described in <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests by Using Query Parameters (AWS Signature Version 4)</a> in the
     * <i>Amazon Simple Storage Service API Reference</i>. An invalid or improperly
     * signed <code>PresignedUrl</code> will cause the copy operation to fail
     * asynchronously, and the snapshot will move to an <code>error</code> state.</p>
     */
    inline CopySnapshotRequest& WithPresignedUrl(const char* value) { SetPresignedUrl(value); return *this;}


    /**
     * <p>The ID of the Region that contains the snapshot to be copied.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * <p>The ID of the Region that contains the snapshot to be copied.</p>
     */
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }

    /**
     * <p>The ID of the Region that contains the snapshot to be copied.</p>
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * <p>The ID of the Region that contains the snapshot to be copied.</p>
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }

    /**
     * <p>The ID of the Region that contains the snapshot to be copied.</p>
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }

    /**
     * <p>The ID of the Region that contains the snapshot to be copied.</p>
     */
    inline CopySnapshotRequest& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The ID of the Region that contains the snapshot to be copied.</p>
     */
    inline CopySnapshotRequest& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    /**
     * <p>The ID of the Region that contains the snapshot to be copied.</p>
     */
    inline CopySnapshotRequest& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}


    /**
     * <p>The ID of the EBS snapshot to copy.</p>
     */
    inline const Aws::String& GetSourceSnapshotId() const{ return m_sourceSnapshotId; }

    /**
     * <p>The ID of the EBS snapshot to copy.</p>
     */
    inline bool SourceSnapshotIdHasBeenSet() const { return m_sourceSnapshotIdHasBeenSet; }

    /**
     * <p>The ID of the EBS snapshot to copy.</p>
     */
    inline void SetSourceSnapshotId(const Aws::String& value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId = value; }

    /**
     * <p>The ID of the EBS snapshot to copy.</p>
     */
    inline void SetSourceSnapshotId(Aws::String&& value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId = std::move(value); }

    /**
     * <p>The ID of the EBS snapshot to copy.</p>
     */
    inline void SetSourceSnapshotId(const char* value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId.assign(value); }

    /**
     * <p>The ID of the EBS snapshot to copy.</p>
     */
    inline CopySnapshotRequest& WithSourceSnapshotId(const Aws::String& value) { SetSourceSnapshotId(value); return *this;}

    /**
     * <p>The ID of the EBS snapshot to copy.</p>
     */
    inline CopySnapshotRequest& WithSourceSnapshotId(Aws::String&& value) { SetSourceSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EBS snapshot to copy.</p>
     */
    inline CopySnapshotRequest& WithSourceSnapshotId(const char* value) { SetSourceSnapshotId(value); return *this;}


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
    inline CopySnapshotRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_presignedUrl;
    bool m_presignedUrlHasBeenSet;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet;

    Aws::String m_sourceSnapshotId;
    bool m_sourceSnapshotIdHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
