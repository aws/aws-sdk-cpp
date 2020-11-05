/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VolumeType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API CreateVolumeRequest : public EC2Request
  {
  public:
    CreateVolumeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVolume"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Availability Zone in which to create the volume.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in which to create the volume.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone in which to create the volume.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which to create the volume.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in which to create the volume.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which to create the volume.</p>
     */
    inline CreateVolumeRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which to create the volume.</p>
     */
    inline CreateVolumeRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which to create the volume.</p>
     */
    inline CreateVolumeRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>Specifies whether the volume should be encrypted. The effect of setting the
     * encryption state to <code>true</code> depends on the volume origin (new or from
     * a snapshot), starting encryption state, ownership, and whether encryption by
     * default is enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#encryption-by-default">Encryption
     * by default</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Encrypted Amazon EBS volumes must be attached to instances that support
     * Amazon EBS encryption. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#EBSEncryption_supported_instances">Supported
     * instance types</a>.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Specifies whether the volume should be encrypted. The effect of setting the
     * encryption state to <code>true</code> depends on the volume origin (new or from
     * a snapshot), starting encryption state, ownership, and whether encryption by
     * default is enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#encryption-by-default">Encryption
     * by default</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Encrypted Amazon EBS volumes must be attached to instances that support
     * Amazon EBS encryption. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#EBSEncryption_supported_instances">Supported
     * instance types</a>.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Specifies whether the volume should be encrypted. The effect of setting the
     * encryption state to <code>true</code> depends on the volume origin (new or from
     * a snapshot), starting encryption state, ownership, and whether encryption by
     * default is enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#encryption-by-default">Encryption
     * by default</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Encrypted Amazon EBS volumes must be attached to instances that support
     * Amazon EBS encryption. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#EBSEncryption_supported_instances">Supported
     * instance types</a>.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Specifies whether the volume should be encrypted. The effect of setting the
     * encryption state to <code>true</code> depends on the volume origin (new or from
     * a snapshot), starting encryption state, ownership, and whether encryption by
     * default is enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#encryption-by-default">Encryption
     * by default</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Encrypted Amazon EBS volumes must be attached to instances that support
     * Amazon EBS encryption. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#EBSEncryption_supported_instances">Supported
     * instance types</a>.</p>
     */
    inline CreateVolumeRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The number of I/O operations per second (IOPS) to provision for an
     * <code>io1</code> or <code>io2</code> volume, with a maximum ratio of 50 IOPS/GiB
     * for <code>io1</code>, and 500 IOPS/GiB for <code>io2</code>. Range is 100 to
     * 64,000 IOPS for volumes in most Regions. Maximum IOPS of 64,000 is guaranteed
     * only on <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Nitro-based
     * instances</a>. Other instance families guarantee performance up to 32,000 IOPS.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>This parameter is valid only for Provisioned IOPS SSD (<code>io1</code> and
     * <code>io2</code>) volumes.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The number of I/O operations per second (IOPS) to provision for an
     * <code>io1</code> or <code>io2</code> volume, with a maximum ratio of 50 IOPS/GiB
     * for <code>io1</code>, and 500 IOPS/GiB for <code>io2</code>. Range is 100 to
     * 64,000 IOPS for volumes in most Regions. Maximum IOPS of 64,000 is guaranteed
     * only on <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Nitro-based
     * instances</a>. Other instance families guarantee performance up to 32,000 IOPS.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>This parameter is valid only for Provisioned IOPS SSD (<code>io1</code> and
     * <code>io2</code>) volumes.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The number of I/O operations per second (IOPS) to provision for an
     * <code>io1</code> or <code>io2</code> volume, with a maximum ratio of 50 IOPS/GiB
     * for <code>io1</code>, and 500 IOPS/GiB for <code>io2</code>. Range is 100 to
     * 64,000 IOPS for volumes in most Regions. Maximum IOPS of 64,000 is guaranteed
     * only on <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Nitro-based
     * instances</a>. Other instance families guarantee performance up to 32,000 IOPS.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>This parameter is valid only for Provisioned IOPS SSD (<code>io1</code> and
     * <code>io2</code>) volumes.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The number of I/O operations per second (IOPS) to provision for an
     * <code>io1</code> or <code>io2</code> volume, with a maximum ratio of 50 IOPS/GiB
     * for <code>io1</code>, and 500 IOPS/GiB for <code>io2</code>. Range is 100 to
     * 64,000 IOPS for volumes in most Regions. Maximum IOPS of 64,000 is guaranteed
     * only on <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Nitro-based
     * instances</a>. Other instance families guarantee performance up to 32,000 IOPS.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>This parameter is valid only for Provisioned IOPS SSD (<code>io1</code> and
     * <code>io2</code>) volumes.</p>
     */
    inline CreateVolumeRequest& WithIops(int value) { SetIops(value); return *this;}


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
     * fails.</p>
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
     * fails.</p>
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
     * fails.</p>
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
     * fails.</p>
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
     * fails.</p>
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
     * fails.</p>
     */
    inline CreateVolumeRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

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
     * fails.</p>
     */
    inline CreateVolumeRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

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
     * fails.</p>
     */
    inline CreateVolumeRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline CreateVolumeRequest& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline CreateVolumeRequest& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline CreateVolumeRequest& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}


    /**
     * <p>The size of the volume, in GiBs. You must specify either a snapshot ID or a
     * volume size.</p> <p>Constraints: 1-16,384 for <code>gp2</code>, 4-16,384 for
     * <code>io1</code> and <code>io2</code>, 500-16,384 for <code>st1</code>,
     * 500-16,384 for <code>sc1</code>, and 1-1,024 for <code>standard</code>. If you
     * specify a snapshot, the volume size must be equal to or larger than the snapshot
     * size.</p> <p>Default: If you're creating the volume from a snapshot and don't
     * specify a volume size, the default is the snapshot size.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>The size of the volume, in GiBs. You must specify either a snapshot ID or a
     * volume size.</p> <p>Constraints: 1-16,384 for <code>gp2</code>, 4-16,384 for
     * <code>io1</code> and <code>io2</code>, 500-16,384 for <code>st1</code>,
     * 500-16,384 for <code>sc1</code>, and 1-1,024 for <code>standard</code>. If you
     * specify a snapshot, the volume size must be equal to or larger than the snapshot
     * size.</p> <p>Default: If you're creating the volume from a snapshot and don't
     * specify a volume size, the default is the snapshot size.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size of the volume, in GiBs. You must specify either a snapshot ID or a
     * volume size.</p> <p>Constraints: 1-16,384 for <code>gp2</code>, 4-16,384 for
     * <code>io1</code> and <code>io2</code>, 500-16,384 for <code>st1</code>,
     * 500-16,384 for <code>sc1</code>, and 1-1,024 for <code>standard</code>. If you
     * specify a snapshot, the volume size must be equal to or larger than the snapshot
     * size.</p> <p>Default: If you're creating the volume from a snapshot and don't
     * specify a volume size, the default is the snapshot size.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the volume, in GiBs. You must specify either a snapshot ID or a
     * volume size.</p> <p>Constraints: 1-16,384 for <code>gp2</code>, 4-16,384 for
     * <code>io1</code> and <code>io2</code>, 500-16,384 for <code>st1</code>,
     * 500-16,384 for <code>sc1</code>, and 1-1,024 for <code>standard</code>. If you
     * specify a snapshot, the volume size must be equal to or larger than the snapshot
     * size.</p> <p>Default: If you're creating the volume from a snapshot and don't
     * specify a volume size, the default is the snapshot size.</p>
     */
    inline CreateVolumeRequest& WithSize(int value) { SetSize(value); return *this;}


    /**
     * <p>The snapshot from which to create the volume. You must specify either a
     * snapshot ID or a volume size.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The snapshot from which to create the volume. You must specify either a
     * snapshot ID or a volume size.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The snapshot from which to create the volume. You must specify either a
     * snapshot ID or a volume size.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The snapshot from which to create the volume. You must specify either a
     * snapshot ID or a volume size.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The snapshot from which to create the volume. You must specify either a
     * snapshot ID or a volume size.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The snapshot from which to create the volume. You must specify either a
     * snapshot ID or a volume size.</p>
     */
    inline CreateVolumeRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The snapshot from which to create the volume. You must specify either a
     * snapshot ID or a volume size.</p>
     */
    inline CreateVolumeRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The snapshot from which to create the volume. You must specify either a
     * snapshot ID or a volume size.</p>
     */
    inline CreateVolumeRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The volume type. This can be <code>gp2</code> for General Purpose SSD,
     * <code>io1</code> or <code>io2</code> for Provisioned IOPS SSD, <code>st1</code>
     * for Throughput Optimized HDD, <code>sc1</code> for Cold HDD, or
     * <code>standard</code> for Magnetic volumes.</p> <p>Default: <code>gp2</code>
     * </p>
     */
    inline const VolumeType& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The volume type. This can be <code>gp2</code> for General Purpose SSD,
     * <code>io1</code> or <code>io2</code> for Provisioned IOPS SSD, <code>st1</code>
     * for Throughput Optimized HDD, <code>sc1</code> for Cold HDD, or
     * <code>standard</code> for Magnetic volumes.</p> <p>Default: <code>gp2</code>
     * </p>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>The volume type. This can be <code>gp2</code> for General Purpose SSD,
     * <code>io1</code> or <code>io2</code> for Provisioned IOPS SSD, <code>st1</code>
     * for Throughput Optimized HDD, <code>sc1</code> for Cold HDD, or
     * <code>standard</code> for Magnetic volumes.</p> <p>Default: <code>gp2</code>
     * </p>
     */
    inline void SetVolumeType(const VolumeType& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type. This can be <code>gp2</code> for General Purpose SSD,
     * <code>io1</code> or <code>io2</code> for Provisioned IOPS SSD, <code>st1</code>
     * for Throughput Optimized HDD, <code>sc1</code> for Cold HDD, or
     * <code>standard</code> for Magnetic volumes.</p> <p>Default: <code>gp2</code>
     * </p>
     */
    inline void SetVolumeType(VolumeType&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>The volume type. This can be <code>gp2</code> for General Purpose SSD,
     * <code>io1</code> or <code>io2</code> for Provisioned IOPS SSD, <code>st1</code>
     * for Throughput Optimized HDD, <code>sc1</code> for Cold HDD, or
     * <code>standard</code> for Magnetic volumes.</p> <p>Default: <code>gp2</code>
     * </p>
     */
    inline CreateVolumeRequest& WithVolumeType(const VolumeType& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type. This can be <code>gp2</code> for General Purpose SSD,
     * <code>io1</code> or <code>io2</code> for Provisioned IOPS SSD, <code>st1</code>
     * for Throughput Optimized HDD, <code>sc1</code> for Cold HDD, or
     * <code>standard</code> for Magnetic volumes.</p> <p>Default: <code>gp2</code>
     * </p>
     */
    inline CreateVolumeRequest& WithVolumeType(VolumeType&& value) { SetVolumeType(std::move(value)); return *this;}


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
    inline CreateVolumeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The tags to apply to the volume during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the volume during creation.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the volume during creation.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the volume during creation.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the volume during creation.</p>
     */
    inline CreateVolumeRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the volume during creation.</p>
     */
    inline CreateVolumeRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the volume during creation.</p>
     */
    inline CreateVolumeRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the volume during creation.</p>
     */
    inline CreateVolumeRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether to enable Amazon EBS Multi-Attach. If you enable
     * Multi-Attach, you can attach the volume to up to 16 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Nitro-based
     * instances</a> in the same Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-volumes-multi.html">
     * Amazon EBS Multi-Attach</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline bool GetMultiAttachEnabled() const{ return m_multiAttachEnabled; }

    /**
     * <p>Specifies whether to enable Amazon EBS Multi-Attach. If you enable
     * Multi-Attach, you can attach the volume to up to 16 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Nitro-based
     * instances</a> in the same Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-volumes-multi.html">
     * Amazon EBS Multi-Attach</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline bool MultiAttachEnabledHasBeenSet() const { return m_multiAttachEnabledHasBeenSet; }

    /**
     * <p>Specifies whether to enable Amazon EBS Multi-Attach. If you enable
     * Multi-Attach, you can attach the volume to up to 16 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Nitro-based
     * instances</a> in the same Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-volumes-multi.html">
     * Amazon EBS Multi-Attach</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline void SetMultiAttachEnabled(bool value) { m_multiAttachEnabledHasBeenSet = true; m_multiAttachEnabled = value; }

    /**
     * <p>Specifies whether to enable Amazon EBS Multi-Attach. If you enable
     * Multi-Attach, you can attach the volume to up to 16 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Nitro-based
     * instances</a> in the same Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-volumes-multi.html">
     * Amazon EBS Multi-Attach</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline CreateVolumeRequest& WithMultiAttachEnabled(bool value) { SetMultiAttachEnabled(value); return *this;}

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet;

    int m_size;
    bool m_sizeHasBeenSet;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet;

    VolumeType m_volumeType;
    bool m_volumeTypeHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet;

    bool m_multiAttachEnabled;
    bool m_multiAttachEnabledHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
