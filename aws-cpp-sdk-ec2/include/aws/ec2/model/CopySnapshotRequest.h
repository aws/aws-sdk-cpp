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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CopySnapshot.</p>
   */
  class AWS_EC2_API CopySnapshotRequest : public EC2Request
  {
  public:
    CopySnapshotRequest();
    Aws::String SerializePayload() const override;

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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CopySnapshotRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the region that contains the snapshot to be copied.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * <p>The ID of the region that contains the snapshot to be copied.</p>
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * <p>The ID of the region that contains the snapshot to be copied.</p>
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * <p>The ID of the region that contains the snapshot to be copied.</p>
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }

    /**
     * <p>The ID of the region that contains the snapshot to be copied.</p>
     */
    inline CopySnapshotRequest& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The ID of the region that contains the snapshot to be copied.</p>
     */
    inline CopySnapshotRequest& WithSourceRegion(Aws::String&& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The ID of the region that contains the snapshot to be copied.</p>
     */
    inline CopySnapshotRequest& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The ID of the EBS snapshot to copy.</p>
     */
    inline const Aws::String& GetSourceSnapshotId() const{ return m_sourceSnapshotId; }

    /**
     * <p>The ID of the EBS snapshot to copy.</p>
     */
    inline void SetSourceSnapshotId(const Aws::String& value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId = value; }

    /**
     * <p>The ID of the EBS snapshot to copy.</p>
     */
    inline void SetSourceSnapshotId(Aws::String&& value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId = value; }

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
    inline CopySnapshotRequest& WithSourceSnapshotId(Aws::String&& value) { SetSourceSnapshotId(value); return *this;}

    /**
     * <p>The ID of the EBS snapshot to copy.</p>
     */
    inline CopySnapshotRequest& WithSourceSnapshotId(const char* value) { SetSourceSnapshotId(value); return *this;}

    /**
     * <p>A description for the EBS snapshot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the EBS snapshot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the EBS snapshot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

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
    inline CopySnapshotRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the EBS snapshot.</p>
     */
    inline CopySnapshotRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The destination region to use in the <code>PresignedUrl</code> parameter of a
     * snapshot copy operation. This parameter is only valid for specifying the
     * destination region in a <code>PresignedUrl</code> parameter, where it is
     * required.</p> <note> <p><code>CopySnapshot</code> sends the snapshot copy to the
     * regional endpoint that you send the HTTP request to, such as
     * <code>ec2.us-east-1.amazonaws.com</code> (in the AWS CLI, this is specified with
     * the <code>--region</code> parameter or the default region in your AWS
     * configuration file).</p> </note>
     */
    inline const Aws::String& GetDestinationRegion() const{ return m_destinationRegion; }

    /**
     * <p>The destination region to use in the <code>PresignedUrl</code> parameter of a
     * snapshot copy operation. This parameter is only valid for specifying the
     * destination region in a <code>PresignedUrl</code> parameter, where it is
     * required.</p> <note> <p><code>CopySnapshot</code> sends the snapshot copy to the
     * regional endpoint that you send the HTTP request to, such as
     * <code>ec2.us-east-1.amazonaws.com</code> (in the AWS CLI, this is specified with
     * the <code>--region</code> parameter or the default region in your AWS
     * configuration file).</p> </note>
     */
    inline void SetDestinationRegion(const Aws::String& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = value; }

    /**
     * <p>The destination region to use in the <code>PresignedUrl</code> parameter of a
     * snapshot copy operation. This parameter is only valid for specifying the
     * destination region in a <code>PresignedUrl</code> parameter, where it is
     * required.</p> <note> <p><code>CopySnapshot</code> sends the snapshot copy to the
     * regional endpoint that you send the HTTP request to, such as
     * <code>ec2.us-east-1.amazonaws.com</code> (in the AWS CLI, this is specified with
     * the <code>--region</code> parameter or the default region in your AWS
     * configuration file).</p> </note>
     */
    inline void SetDestinationRegion(Aws::String&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = value; }

    /**
     * <p>The destination region to use in the <code>PresignedUrl</code> parameter of a
     * snapshot copy operation. This parameter is only valid for specifying the
     * destination region in a <code>PresignedUrl</code> parameter, where it is
     * required.</p> <note> <p><code>CopySnapshot</code> sends the snapshot copy to the
     * regional endpoint that you send the HTTP request to, such as
     * <code>ec2.us-east-1.amazonaws.com</code> (in the AWS CLI, this is specified with
     * the <code>--region</code> parameter or the default region in your AWS
     * configuration file).</p> </note>
     */
    inline void SetDestinationRegion(const char* value) { m_destinationRegionHasBeenSet = true; m_destinationRegion.assign(value); }

    /**
     * <p>The destination region to use in the <code>PresignedUrl</code> parameter of a
     * snapshot copy operation. This parameter is only valid for specifying the
     * destination region in a <code>PresignedUrl</code> parameter, where it is
     * required.</p> <note> <p><code>CopySnapshot</code> sends the snapshot copy to the
     * regional endpoint that you send the HTTP request to, such as
     * <code>ec2.us-east-1.amazonaws.com</code> (in the AWS CLI, this is specified with
     * the <code>--region</code> parameter or the default region in your AWS
     * configuration file).</p> </note>
     */
    inline CopySnapshotRequest& WithDestinationRegion(const Aws::String& value) { SetDestinationRegion(value); return *this;}

    /**
     * <p>The destination region to use in the <code>PresignedUrl</code> parameter of a
     * snapshot copy operation. This parameter is only valid for specifying the
     * destination region in a <code>PresignedUrl</code> parameter, where it is
     * required.</p> <note> <p><code>CopySnapshot</code> sends the snapshot copy to the
     * regional endpoint that you send the HTTP request to, such as
     * <code>ec2.us-east-1.amazonaws.com</code> (in the AWS CLI, this is specified with
     * the <code>--region</code> parameter or the default region in your AWS
     * configuration file).</p> </note>
     */
    inline CopySnapshotRequest& WithDestinationRegion(Aws::String&& value) { SetDestinationRegion(value); return *this;}

    /**
     * <p>The destination region to use in the <code>PresignedUrl</code> parameter of a
     * snapshot copy operation. This parameter is only valid for specifying the
     * destination region in a <code>PresignedUrl</code> parameter, where it is
     * required.</p> <note> <p><code>CopySnapshot</code> sends the snapshot copy to the
     * regional endpoint that you send the HTTP request to, such as
     * <code>ec2.us-east-1.amazonaws.com</code> (in the AWS CLI, this is specified with
     * the <code>--region</code> parameter or the default region in your AWS
     * configuration file).</p> </note>
     */
    inline CopySnapshotRequest& WithDestinationRegion(const char* value) { SetDestinationRegion(value); return *this;}

    /**
     * <p>The pre-signed URL that facilitates copying an encrypted snapshot. This
     * parameter is only required when copying an encrypted snapshot with the Amazon
     * EC2 Query API; it is available as an optional parameter in all other cases. The
     * <code>PresignedUrl</code> should use the snapshot source endpoint, the
     * <code>CopySnapshot</code> action, and include the <code>SourceRegion</code>,
     * <code>SourceSnapshotId</code>, and <code>DestinationRegion</code> parameters.
     * The <code>PresignedUrl</code> must be signed using AWS Signature Version 4.
     * Because EBS snapshots are stored in Amazon S3, the signing algorithm for this
     * parameter uses the same logic that is described in <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests by Using Query Parameters (AWS Signature Version 4)</a> in the
     * <i>Amazon Simple Storage Service API Reference</i>. An invalid or improperly
     * signed <code>PresignedUrl</code> will cause the copy operation to fail
     * asynchronously, and the snapshot will move to an <code>error</code> state.</p>
     */
    inline const Aws::String& GetPresignedUrl() const{ return m_presignedUrl; }

    /**
     * <p>The pre-signed URL that facilitates copying an encrypted snapshot. This
     * parameter is only required when copying an encrypted snapshot with the Amazon
     * EC2 Query API; it is available as an optional parameter in all other cases. The
     * <code>PresignedUrl</code> should use the snapshot source endpoint, the
     * <code>CopySnapshot</code> action, and include the <code>SourceRegion</code>,
     * <code>SourceSnapshotId</code>, and <code>DestinationRegion</code> parameters.
     * The <code>PresignedUrl</code> must be signed using AWS Signature Version 4.
     * Because EBS snapshots are stored in Amazon S3, the signing algorithm for this
     * parameter uses the same logic that is described in <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests by Using Query Parameters (AWS Signature Version 4)</a> in the
     * <i>Amazon Simple Storage Service API Reference</i>. An invalid or improperly
     * signed <code>PresignedUrl</code> will cause the copy operation to fail
     * asynchronously, and the snapshot will move to an <code>error</code> state.</p>
     */
    inline void SetPresignedUrl(const Aws::String& value) { m_presignedUrlHasBeenSet = true; m_presignedUrl = value; }

    /**
     * <p>The pre-signed URL that facilitates copying an encrypted snapshot. This
     * parameter is only required when copying an encrypted snapshot with the Amazon
     * EC2 Query API; it is available as an optional parameter in all other cases. The
     * <code>PresignedUrl</code> should use the snapshot source endpoint, the
     * <code>CopySnapshot</code> action, and include the <code>SourceRegion</code>,
     * <code>SourceSnapshotId</code>, and <code>DestinationRegion</code> parameters.
     * The <code>PresignedUrl</code> must be signed using AWS Signature Version 4.
     * Because EBS snapshots are stored in Amazon S3, the signing algorithm for this
     * parameter uses the same logic that is described in <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests by Using Query Parameters (AWS Signature Version 4)</a> in the
     * <i>Amazon Simple Storage Service API Reference</i>. An invalid or improperly
     * signed <code>PresignedUrl</code> will cause the copy operation to fail
     * asynchronously, and the snapshot will move to an <code>error</code> state.</p>
     */
    inline void SetPresignedUrl(Aws::String&& value) { m_presignedUrlHasBeenSet = true; m_presignedUrl = value; }

    /**
     * <p>The pre-signed URL that facilitates copying an encrypted snapshot. This
     * parameter is only required when copying an encrypted snapshot with the Amazon
     * EC2 Query API; it is available as an optional parameter in all other cases. The
     * <code>PresignedUrl</code> should use the snapshot source endpoint, the
     * <code>CopySnapshot</code> action, and include the <code>SourceRegion</code>,
     * <code>SourceSnapshotId</code>, and <code>DestinationRegion</code> parameters.
     * The <code>PresignedUrl</code> must be signed using AWS Signature Version 4.
     * Because EBS snapshots are stored in Amazon S3, the signing algorithm for this
     * parameter uses the same logic that is described in <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests by Using Query Parameters (AWS Signature Version 4)</a> in the
     * <i>Amazon Simple Storage Service API Reference</i>. An invalid or improperly
     * signed <code>PresignedUrl</code> will cause the copy operation to fail
     * asynchronously, and the snapshot will move to an <code>error</code> state.</p>
     */
    inline void SetPresignedUrl(const char* value) { m_presignedUrlHasBeenSet = true; m_presignedUrl.assign(value); }

    /**
     * <p>The pre-signed URL that facilitates copying an encrypted snapshot. This
     * parameter is only required when copying an encrypted snapshot with the Amazon
     * EC2 Query API; it is available as an optional parameter in all other cases. The
     * <code>PresignedUrl</code> should use the snapshot source endpoint, the
     * <code>CopySnapshot</code> action, and include the <code>SourceRegion</code>,
     * <code>SourceSnapshotId</code>, and <code>DestinationRegion</code> parameters.
     * The <code>PresignedUrl</code> must be signed using AWS Signature Version 4.
     * Because EBS snapshots are stored in Amazon S3, the signing algorithm for this
     * parameter uses the same logic that is described in <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests by Using Query Parameters (AWS Signature Version 4)</a> in the
     * <i>Amazon Simple Storage Service API Reference</i>. An invalid or improperly
     * signed <code>PresignedUrl</code> will cause the copy operation to fail
     * asynchronously, and the snapshot will move to an <code>error</code> state.</p>
     */
    inline CopySnapshotRequest& WithPresignedUrl(const Aws::String& value) { SetPresignedUrl(value); return *this;}

    /**
     * <p>The pre-signed URL that facilitates copying an encrypted snapshot. This
     * parameter is only required when copying an encrypted snapshot with the Amazon
     * EC2 Query API; it is available as an optional parameter in all other cases. The
     * <code>PresignedUrl</code> should use the snapshot source endpoint, the
     * <code>CopySnapshot</code> action, and include the <code>SourceRegion</code>,
     * <code>SourceSnapshotId</code>, and <code>DestinationRegion</code> parameters.
     * The <code>PresignedUrl</code> must be signed using AWS Signature Version 4.
     * Because EBS snapshots are stored in Amazon S3, the signing algorithm for this
     * parameter uses the same logic that is described in <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests by Using Query Parameters (AWS Signature Version 4)</a> in the
     * <i>Amazon Simple Storage Service API Reference</i>. An invalid or improperly
     * signed <code>PresignedUrl</code> will cause the copy operation to fail
     * asynchronously, and the snapshot will move to an <code>error</code> state.</p>
     */
    inline CopySnapshotRequest& WithPresignedUrl(Aws::String&& value) { SetPresignedUrl(value); return *this;}

    /**
     * <p>The pre-signed URL that facilitates copying an encrypted snapshot. This
     * parameter is only required when copying an encrypted snapshot with the Amazon
     * EC2 Query API; it is available as an optional parameter in all other cases. The
     * <code>PresignedUrl</code> should use the snapshot source endpoint, the
     * <code>CopySnapshot</code> action, and include the <code>SourceRegion</code>,
     * <code>SourceSnapshotId</code>, and <code>DestinationRegion</code> parameters.
     * The <code>PresignedUrl</code> must be signed using AWS Signature Version 4.
     * Because EBS snapshots are stored in Amazon S3, the signing algorithm for this
     * parameter uses the same logic that is described in <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests by Using Query Parameters (AWS Signature Version 4)</a> in the
     * <i>Amazon Simple Storage Service API Reference</i>. An invalid or improperly
     * signed <code>PresignedUrl</code> will cause the copy operation to fail
     * asynchronously, and the snapshot will move to an <code>error</code> state.</p>
     */
    inline CopySnapshotRequest& WithPresignedUrl(const char* value) { SetPresignedUrl(value); return *this;}

    /**
     * <p>Specifies whether the destination snapshot should be encrypted. There is no
     * way to create an unencrypted snapshot copy from an encrypted snapshot; however,
     * you can encrypt a copy of an unencrypted snapshot with this flag. The default
     * CMK for EBS is used unless a non-default AWS Key Management Service (AWS KMS)
     * CMK is specified with <code>KmsKeyId</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Specifies whether the destination snapshot should be encrypted. There is no
     * way to create an unencrypted snapshot copy from an encrypted snapshot; however,
     * you can encrypt a copy of an unencrypted snapshot with this flag. The default
     * CMK for EBS is used unless a non-default AWS Key Management Service (AWS KMS)
     * CMK is specified with <code>KmsKeyId</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Specifies whether the destination snapshot should be encrypted. There is no
     * way to create an unencrypted snapshot copy from an encrypted snapshot; however,
     * you can encrypt a copy of an unencrypted snapshot with this flag. The default
     * CMK for EBS is used unless a non-default AWS Key Management Service (AWS KMS)
     * CMK is specified with <code>KmsKeyId</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline CopySnapshotRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}

    /**
     * <p>The full ARN of the AWS Key Management Service (AWS KMS) CMK to use when
     * creating the snapshot copy. This parameter is only required if you want to use a
     * non-default CMK; if this parameter is not specified, the default CMK for EBS is
     * used. The ARN contains the <code>arn:aws:kms</code> namespace, followed by the
     * region of the CMK, the AWS account ID of the CMK owner, the <code>key</code>
     * namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * The specified CMK must exist in the region that the snapshot is being copied to.
     * If a <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must
     * also be set.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The full ARN of the AWS Key Management Service (AWS KMS) CMK to use when
     * creating the snapshot copy. This parameter is only required if you want to use a
     * non-default CMK; if this parameter is not specified, the default CMK for EBS is
     * used. The ARN contains the <code>arn:aws:kms</code> namespace, followed by the
     * region of the CMK, the AWS account ID of the CMK owner, the <code>key</code>
     * namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * The specified CMK must exist in the region that the snapshot is being copied to.
     * If a <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must
     * also be set.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The full ARN of the AWS Key Management Service (AWS KMS) CMK to use when
     * creating the snapshot copy. This parameter is only required if you want to use a
     * non-default CMK; if this parameter is not specified, the default CMK for EBS is
     * used. The ARN contains the <code>arn:aws:kms</code> namespace, followed by the
     * region of the CMK, the AWS account ID of the CMK owner, the <code>key</code>
     * namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * The specified CMK must exist in the region that the snapshot is being copied to.
     * If a <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must
     * also be set.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The full ARN of the AWS Key Management Service (AWS KMS) CMK to use when
     * creating the snapshot copy. This parameter is only required if you want to use a
     * non-default CMK; if this parameter is not specified, the default CMK for EBS is
     * used. The ARN contains the <code>arn:aws:kms</code> namespace, followed by the
     * region of the CMK, the AWS account ID of the CMK owner, the <code>key</code>
     * namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * The specified CMK must exist in the region that the snapshot is being copied to.
     * If a <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must
     * also be set.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The full ARN of the AWS Key Management Service (AWS KMS) CMK to use when
     * creating the snapshot copy. This parameter is only required if you want to use a
     * non-default CMK; if this parameter is not specified, the default CMK for EBS is
     * used. The ARN contains the <code>arn:aws:kms</code> namespace, followed by the
     * region of the CMK, the AWS account ID of the CMK owner, the <code>key</code>
     * namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * The specified CMK must exist in the region that the snapshot is being copied to.
     * If a <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must
     * also be set.</p>
     */
    inline CopySnapshotRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The full ARN of the AWS Key Management Service (AWS KMS) CMK to use when
     * creating the snapshot copy. This parameter is only required if you want to use a
     * non-default CMK; if this parameter is not specified, the default CMK for EBS is
     * used. The ARN contains the <code>arn:aws:kms</code> namespace, followed by the
     * region of the CMK, the AWS account ID of the CMK owner, the <code>key</code>
     * namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * The specified CMK must exist in the region that the snapshot is being copied to.
     * If a <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must
     * also be set.</p>
     */
    inline CopySnapshotRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The full ARN of the AWS Key Management Service (AWS KMS) CMK to use when
     * creating the snapshot copy. This parameter is only required if you want to use a
     * non-default CMK; if this parameter is not specified, the default CMK for EBS is
     * used. The ARN contains the <code>arn:aws:kms</code> namespace, followed by the
     * region of the CMK, the AWS account ID of the CMK owner, the <code>key</code>
     * namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.
     * The specified CMK must exist in the region that the snapshot is being copied to.
     * If a <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must
     * also be set.</p>
     */
    inline CopySnapshotRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet;
    Aws::String m_sourceSnapshotId;
    bool m_sourceSnapshotIdHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet;
    Aws::String m_presignedUrl;
    bool m_presignedUrlHasBeenSet;
    bool m_encrypted;
    bool m_encryptedHasBeenSet;
    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
