/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/TaskManagedEBSVolumeTerminationPolicy.h>
#include <aws/ecs/model/TaskFilesystemType.h>
#include <aws/ecs/model/EBSTagSpecification.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>The configuration for the Amazon EBS volume that Amazon ECS creates and
   * manages on your behalf. These settings are used to create each Amazon EBS
   * volume, with one volume created for each task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/TaskManagedEBSVolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class TaskManagedEBSVolumeConfiguration
  {
  public:
    AWS_ECS_API TaskManagedEBSVolumeConfiguration();
    AWS_ECS_API TaskManagedEBSVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API TaskManagedEBSVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the volume should be encrypted. If no value is specified,
     * encryption is turned on by default. This parameter maps 1:1 with the
     * <code>Encrypted</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Indicates whether the volume should be encrypted. If no value is specified,
     * encryption is turned on by default. This parameter maps 1:1 with the
     * <code>Encrypted</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Indicates whether the volume should be encrypted. If no value is specified,
     * encryption is turned on by default. This parameter maps 1:1 with the
     * <code>Encrypted</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Indicates whether the volume should be encrypted. If no value is specified,
     * encryption is turned on by default. This parameter maps 1:1 with the
     * <code>Encrypted</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline TaskManagedEBSVolumeConfiguration& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) identifier of the Amazon Web Services Key
     * Management Service key to use for Amazon EBS encryption. When encryption is
     * turned on and no Amazon Web Services Key Management Service key is specified,
     * the default Amazon Web Services managed key for Amazon EBS volumes is used. This
     * parameter maps 1:1 with the <code>KmsKeyId</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>  <p>Amazon Web
     * Services authenticates the Amazon Web Services Key Management Service key
     * asynchronously. Therefore, if you specify an ID, alias, or ARN that is invalid,
     * the action can appear to complete, but eventually fails.</p> 
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Resource Name (ARN) identifier of the Amazon Web Services Key
     * Management Service key to use for Amazon EBS encryption. When encryption is
     * turned on and no Amazon Web Services Key Management Service key is specified,
     * the default Amazon Web Services managed key for Amazon EBS volumes is used. This
     * parameter maps 1:1 with the <code>KmsKeyId</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>  <p>Amazon Web
     * Services authenticates the Amazon Web Services Key Management Service key
     * asynchronously. Therefore, if you specify an ID, alias, or ARN that is invalid,
     * the action can appear to complete, but eventually fails.</p> 
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) identifier of the Amazon Web Services Key
     * Management Service key to use for Amazon EBS encryption. When encryption is
     * turned on and no Amazon Web Services Key Management Service key is specified,
     * the default Amazon Web Services managed key for Amazon EBS volumes is used. This
     * parameter maps 1:1 with the <code>KmsKeyId</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>  <p>Amazon Web
     * Services authenticates the Amazon Web Services Key Management Service key
     * asynchronously. Therefore, if you specify an ID, alias, or ARN that is invalid,
     * the action can appear to complete, but eventually fails.</p> 
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) identifier of the Amazon Web Services Key
     * Management Service key to use for Amazon EBS encryption. When encryption is
     * turned on and no Amazon Web Services Key Management Service key is specified,
     * the default Amazon Web Services managed key for Amazon EBS volumes is used. This
     * parameter maps 1:1 with the <code>KmsKeyId</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>  <p>Amazon Web
     * Services authenticates the Amazon Web Services Key Management Service key
     * asynchronously. Therefore, if you specify an ID, alias, or ARN that is invalid,
     * the action can appear to complete, but eventually fails.</p> 
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) identifier of the Amazon Web Services Key
     * Management Service key to use for Amazon EBS encryption. When encryption is
     * turned on and no Amazon Web Services Key Management Service key is specified,
     * the default Amazon Web Services managed key for Amazon EBS volumes is used. This
     * parameter maps 1:1 with the <code>KmsKeyId</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>  <p>Amazon Web
     * Services authenticates the Amazon Web Services Key Management Service key
     * asynchronously. Therefore, if you specify an ID, alias, or ARN that is invalid,
     * the action can appear to complete, but eventually fails.</p> 
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) identifier of the Amazon Web Services Key
     * Management Service key to use for Amazon EBS encryption. When encryption is
     * turned on and no Amazon Web Services Key Management Service key is specified,
     * the default Amazon Web Services managed key for Amazon EBS volumes is used. This
     * parameter maps 1:1 with the <code>KmsKeyId</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>  <p>Amazon Web
     * Services authenticates the Amazon Web Services Key Management Service key
     * asynchronously. Therefore, if you specify an ID, alias, or ARN that is invalid,
     * the action can appear to complete, but eventually fails.</p> 
     */
    inline TaskManagedEBSVolumeConfiguration& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) identifier of the Amazon Web Services Key
     * Management Service key to use for Amazon EBS encryption. When encryption is
     * turned on and no Amazon Web Services Key Management Service key is specified,
     * the default Amazon Web Services managed key for Amazon EBS volumes is used. This
     * parameter maps 1:1 with the <code>KmsKeyId</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>  <p>Amazon Web
     * Services authenticates the Amazon Web Services Key Management Service key
     * asynchronously. Therefore, if you specify an ID, alias, or ARN that is invalid,
     * the action can appear to complete, but eventually fails.</p> 
     */
    inline TaskManagedEBSVolumeConfiguration& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) identifier of the Amazon Web Services Key
     * Management Service key to use for Amazon EBS encryption. When encryption is
     * turned on and no Amazon Web Services Key Management Service key is specified,
     * the default Amazon Web Services managed key for Amazon EBS volumes is used. This
     * parameter maps 1:1 with the <code>KmsKeyId</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>  <p>Amazon Web
     * Services authenticates the Amazon Web Services Key Management Service key
     * asynchronously. Therefore, if you specify an ID, alias, or ARN that is invalid,
     * the action can appear to complete, but eventually fails.</p> 
     */
    inline TaskManagedEBSVolumeConfiguration& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The volume type. This parameter maps 1:1 with the <code>VolumeType</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-volume-types.html">Amazon
     * EBS volume types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>The following
     * are the supported volume types.</p> <ul> <li> <p>General Purpose SSD:
     * <code>gp2</code>|<code>gp3</code> </p> </li> <li> <p>Provisioned IOPS SSD:
     * <code>io1</code>|<code>io2</code> </p> </li> <li> <p>Throughput Optimized HDD:
     * <code>st1</code> </p> </li> <li> <p>Cold HDD: <code>sc1</code> </p> </li> <li>
     * <p>Magnetic: <code>standard</code> </p>  <p>The magnetic volume type is
     * not supported on Fargate.</p>  </li> </ul>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The volume type. This parameter maps 1:1 with the <code>VolumeType</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-volume-types.html">Amazon
     * EBS volume types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>The following
     * are the supported volume types.</p> <ul> <li> <p>General Purpose SSD:
     * <code>gp2</code>|<code>gp3</code> </p> </li> <li> <p>Provisioned IOPS SSD:
     * <code>io1</code>|<code>io2</code> </p> </li> <li> <p>Throughput Optimized HDD:
     * <code>st1</code> </p> </li> <li> <p>Cold HDD: <code>sc1</code> </p> </li> <li>
     * <p>Magnetic: <code>standard</code> </p>  <p>The magnetic volume type is
     * not supported on Fargate.</p>  </li> </ul>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>The volume type. This parameter maps 1:1 with the <code>VolumeType</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-volume-types.html">Amazon
     * EBS volume types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>The following
     * are the supported volume types.</p> <ul> <li> <p>General Purpose SSD:
     * <code>gp2</code>|<code>gp3</code> </p> </li> <li> <p>Provisioned IOPS SSD:
     * <code>io1</code>|<code>io2</code> </p> </li> <li> <p>Throughput Optimized HDD:
     * <code>st1</code> </p> </li> <li> <p>Cold HDD: <code>sc1</code> </p> </li> <li>
     * <p>Magnetic: <code>standard</code> </p>  <p>The magnetic volume type is
     * not supported on Fargate.</p>  </li> </ul>
     */
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type. This parameter maps 1:1 with the <code>VolumeType</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-volume-types.html">Amazon
     * EBS volume types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>The following
     * are the supported volume types.</p> <ul> <li> <p>General Purpose SSD:
     * <code>gp2</code>|<code>gp3</code> </p> </li> <li> <p>Provisioned IOPS SSD:
     * <code>io1</code>|<code>io2</code> </p> </li> <li> <p>Throughput Optimized HDD:
     * <code>st1</code> </p> </li> <li> <p>Cold HDD: <code>sc1</code> </p> </li> <li>
     * <p>Magnetic: <code>standard</code> </p>  <p>The magnetic volume type is
     * not supported on Fargate.</p>  </li> </ul>
     */
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>The volume type. This parameter maps 1:1 with the <code>VolumeType</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-volume-types.html">Amazon
     * EBS volume types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>The following
     * are the supported volume types.</p> <ul> <li> <p>General Purpose SSD:
     * <code>gp2</code>|<code>gp3</code> </p> </li> <li> <p>Provisioned IOPS SSD:
     * <code>io1</code>|<code>io2</code> </p> </li> <li> <p>Throughput Optimized HDD:
     * <code>st1</code> </p> </li> <li> <p>Cold HDD: <code>sc1</code> </p> </li> <li>
     * <p>Magnetic: <code>standard</code> </p>  <p>The magnetic volume type is
     * not supported on Fargate.</p>  </li> </ul>
     */
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }

    /**
     * <p>The volume type. This parameter maps 1:1 with the <code>VolumeType</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-volume-types.html">Amazon
     * EBS volume types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>The following
     * are the supported volume types.</p> <ul> <li> <p>General Purpose SSD:
     * <code>gp2</code>|<code>gp3</code> </p> </li> <li> <p>Provisioned IOPS SSD:
     * <code>io1</code>|<code>io2</code> </p> </li> <li> <p>Throughput Optimized HDD:
     * <code>st1</code> </p> </li> <li> <p>Cold HDD: <code>sc1</code> </p> </li> <li>
     * <p>Magnetic: <code>standard</code> </p>  <p>The magnetic volume type is
     * not supported on Fargate.</p>  </li> </ul>
     */
    inline TaskManagedEBSVolumeConfiguration& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type. This parameter maps 1:1 with the <code>VolumeType</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-volume-types.html">Amazon
     * EBS volume types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>The following
     * are the supported volume types.</p> <ul> <li> <p>General Purpose SSD:
     * <code>gp2</code>|<code>gp3</code> </p> </li> <li> <p>Provisioned IOPS SSD:
     * <code>io1</code>|<code>io2</code> </p> </li> <li> <p>Throughput Optimized HDD:
     * <code>st1</code> </p> </li> <li> <p>Cold HDD: <code>sc1</code> </p> </li> <li>
     * <p>Magnetic: <code>standard</code> </p>  <p>The magnetic volume type is
     * not supported on Fargate.</p>  </li> </ul>
     */
    inline TaskManagedEBSVolumeConfiguration& WithVolumeType(Aws::String&& value) { SetVolumeType(std::move(value)); return *this;}

    /**
     * <p>The volume type. This parameter maps 1:1 with the <code>VolumeType</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-volume-types.html">Amazon
     * EBS volume types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>The following
     * are the supported volume types.</p> <ul> <li> <p>General Purpose SSD:
     * <code>gp2</code>|<code>gp3</code> </p> </li> <li> <p>Provisioned IOPS SSD:
     * <code>io1</code>|<code>io2</code> </p> </li> <li> <p>Throughput Optimized HDD:
     * <code>st1</code> </p> </li> <li> <p>Cold HDD: <code>sc1</code> </p> </li> <li>
     * <p>Magnetic: <code>standard</code> </p>  <p>The magnetic volume type is
     * not supported on Fargate.</p>  </li> </ul>
     */
    inline TaskManagedEBSVolumeConfiguration& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}


    /**
     * <p>The size of the volume in GiB. You must specify either a volume size or a
     * snapshot ID. If you specify a snapshot ID, the snapshot size is used for the
     * volume size by default. You can optionally specify a volume size greater than or
     * equal to the snapshot size. This parameter maps 1:1 with the <code>Size</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p> <p>The following are the
     * supported volume size values for each volume type.</p> <ul> <li> <p>
     * <code>gp2</code> and <code>gp3</code>: 1-16,384</p> </li> <li> <p>
     * <code>io1</code> and <code>io2</code>: 4-16,384</p> </li> <li> <p>
     * <code>st1</code> and <code>sc1</code>: 125-16,384</p> </li> <li> <p>
     * <code>standard</code>: 1-1,024</p> </li> </ul>
     */
    inline int GetSizeInGiB() const{ return m_sizeInGiB; }

    /**
     * <p>The size of the volume in GiB. You must specify either a volume size or a
     * snapshot ID. If you specify a snapshot ID, the snapshot size is used for the
     * volume size by default. You can optionally specify a volume size greater than or
     * equal to the snapshot size. This parameter maps 1:1 with the <code>Size</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p> <p>The following are the
     * supported volume size values for each volume type.</p> <ul> <li> <p>
     * <code>gp2</code> and <code>gp3</code>: 1-16,384</p> </li> <li> <p>
     * <code>io1</code> and <code>io2</code>: 4-16,384</p> </li> <li> <p>
     * <code>st1</code> and <code>sc1</code>: 125-16,384</p> </li> <li> <p>
     * <code>standard</code>: 1-1,024</p> </li> </ul>
     */
    inline bool SizeInGiBHasBeenSet() const { return m_sizeInGiBHasBeenSet; }

    /**
     * <p>The size of the volume in GiB. You must specify either a volume size or a
     * snapshot ID. If you specify a snapshot ID, the snapshot size is used for the
     * volume size by default. You can optionally specify a volume size greater than or
     * equal to the snapshot size. This parameter maps 1:1 with the <code>Size</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p> <p>The following are the
     * supported volume size values for each volume type.</p> <ul> <li> <p>
     * <code>gp2</code> and <code>gp3</code>: 1-16,384</p> </li> <li> <p>
     * <code>io1</code> and <code>io2</code>: 4-16,384</p> </li> <li> <p>
     * <code>st1</code> and <code>sc1</code>: 125-16,384</p> </li> <li> <p>
     * <code>standard</code>: 1-1,024</p> </li> </ul>
     */
    inline void SetSizeInGiB(int value) { m_sizeInGiBHasBeenSet = true; m_sizeInGiB = value; }

    /**
     * <p>The size of the volume in GiB. You must specify either a volume size or a
     * snapshot ID. If you specify a snapshot ID, the snapshot size is used for the
     * volume size by default. You can optionally specify a volume size greater than or
     * equal to the snapshot size. This parameter maps 1:1 with the <code>Size</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p> <p>The following are the
     * supported volume size values for each volume type.</p> <ul> <li> <p>
     * <code>gp2</code> and <code>gp3</code>: 1-16,384</p> </li> <li> <p>
     * <code>io1</code> and <code>io2</code>: 4-16,384</p> </li> <li> <p>
     * <code>st1</code> and <code>sc1</code>: 125-16,384</p> </li> <li> <p>
     * <code>standard</code>: 1-1,024</p> </li> </ul>
     */
    inline TaskManagedEBSVolumeConfiguration& WithSizeInGiB(int value) { SetSizeInGiB(value); return *this;}


    /**
     * <p>The snapshot that Amazon ECS uses to create the volume. You must specify
     * either a snapshot ID or a volume size. This parameter maps 1:1 with the
     * <code>SnapshotId</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The snapshot that Amazon ECS uses to create the volume. You must specify
     * either a snapshot ID or a volume size. This parameter maps 1:1 with the
     * <code>SnapshotId</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The snapshot that Amazon ECS uses to create the volume. You must specify
     * either a snapshot ID or a volume size. This parameter maps 1:1 with the
     * <code>SnapshotId</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The snapshot that Amazon ECS uses to create the volume. You must specify
     * either a snapshot ID or a volume size. This parameter maps 1:1 with the
     * <code>SnapshotId</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The snapshot that Amazon ECS uses to create the volume. You must specify
     * either a snapshot ID or a volume size. This parameter maps 1:1 with the
     * <code>SnapshotId</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The snapshot that Amazon ECS uses to create the volume. You must specify
     * either a snapshot ID or a volume size. This parameter maps 1:1 with the
     * <code>SnapshotId</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline TaskManagedEBSVolumeConfiguration& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The snapshot that Amazon ECS uses to create the volume. You must specify
     * either a snapshot ID or a volume size. This parameter maps 1:1 with the
     * <code>SnapshotId</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline TaskManagedEBSVolumeConfiguration& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The snapshot that Amazon ECS uses to create the volume. You must specify
     * either a snapshot ID or a volume size. This parameter maps 1:1 with the
     * <code>SnapshotId</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline TaskManagedEBSVolumeConfiguration& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The number of I/O operations per second (IOPS). For <code>gp3</code>,
     * <code>io1</code>, and <code>io2</code> volumes, this represents the number of
     * IOPS that are provisioned for the volume. For <code>gp2</code> volumes, this
     * represents the baseline performance of the volume and the rate at which the
     * volume accumulates I/O credits for bursting.</p> <p>The following are the
     * supported values for each volume type.</p> <ul> <li> <p> <code>gp3</code>: 3,000
     * - 16,000 IOPS</p> </li> <li> <p> <code>io1</code>: 100 - 64,000 IOPS</p> </li>
     * <li> <p> <code>io2</code>: 100 - 256,000 IOPS</p> </li> </ul> <p>This parameter
     * is required for <code>io1</code> and <code>io2</code> volume types. The default
     * for <code>gp3</code> volumes is <code>3,000 IOPS</code>. This parameter is not
     * supported for <code>st1</code>, <code>sc1</code>, or <code>standard</code>
     * volume types.</p> <p>This parameter maps 1:1 with the <code>Iops</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The number of I/O operations per second (IOPS). For <code>gp3</code>,
     * <code>io1</code>, and <code>io2</code> volumes, this represents the number of
     * IOPS that are provisioned for the volume. For <code>gp2</code> volumes, this
     * represents the baseline performance of the volume and the rate at which the
     * volume accumulates I/O credits for bursting.</p> <p>The following are the
     * supported values for each volume type.</p> <ul> <li> <p> <code>gp3</code>: 3,000
     * - 16,000 IOPS</p> </li> <li> <p> <code>io1</code>: 100 - 64,000 IOPS</p> </li>
     * <li> <p> <code>io2</code>: 100 - 256,000 IOPS</p> </li> </ul> <p>This parameter
     * is required for <code>io1</code> and <code>io2</code> volume types. The default
     * for <code>gp3</code> volumes is <code>3,000 IOPS</code>. This parameter is not
     * supported for <code>st1</code>, <code>sc1</code>, or <code>standard</code>
     * volume types.</p> <p>This parameter maps 1:1 with the <code>Iops</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The number of I/O operations per second (IOPS). For <code>gp3</code>,
     * <code>io1</code>, and <code>io2</code> volumes, this represents the number of
     * IOPS that are provisioned for the volume. For <code>gp2</code> volumes, this
     * represents the baseline performance of the volume and the rate at which the
     * volume accumulates I/O credits for bursting.</p> <p>The following are the
     * supported values for each volume type.</p> <ul> <li> <p> <code>gp3</code>: 3,000
     * - 16,000 IOPS</p> </li> <li> <p> <code>io1</code>: 100 - 64,000 IOPS</p> </li>
     * <li> <p> <code>io2</code>: 100 - 256,000 IOPS</p> </li> </ul> <p>This parameter
     * is required for <code>io1</code> and <code>io2</code> volume types. The default
     * for <code>gp3</code> volumes is <code>3,000 IOPS</code>. This parameter is not
     * supported for <code>st1</code>, <code>sc1</code>, or <code>standard</code>
     * volume types.</p> <p>This parameter maps 1:1 with the <code>Iops</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The number of I/O operations per second (IOPS). For <code>gp3</code>,
     * <code>io1</code>, and <code>io2</code> volumes, this represents the number of
     * IOPS that are provisioned for the volume. For <code>gp2</code> volumes, this
     * represents the baseline performance of the volume and the rate at which the
     * volume accumulates I/O credits for bursting.</p> <p>The following are the
     * supported values for each volume type.</p> <ul> <li> <p> <code>gp3</code>: 3,000
     * - 16,000 IOPS</p> </li> <li> <p> <code>io1</code>: 100 - 64,000 IOPS</p> </li>
     * <li> <p> <code>io2</code>: 100 - 256,000 IOPS</p> </li> </ul> <p>This parameter
     * is required for <code>io1</code> and <code>io2</code> volume types. The default
     * for <code>gp3</code> volumes is <code>3,000 IOPS</code>. This parameter is not
     * supported for <code>st1</code>, <code>sc1</code>, or <code>standard</code>
     * volume types.</p> <p>This parameter maps 1:1 with the <code>Iops</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline TaskManagedEBSVolumeConfiguration& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The throughput to provision for a volume, in MiB/s, with a maximum of 1,000
     * MiB/s. This parameter maps 1:1 with the <code>Throughput</code> parameter of the
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>  <p>This
     * parameter is only supported for the <code>gp3</code> volume type.</p>
     * 
     */
    inline int GetThroughput() const{ return m_throughput; }

    /**
     * <p>The throughput to provision for a volume, in MiB/s, with a maximum of 1,000
     * MiB/s. This parameter maps 1:1 with the <code>Throughput</code> parameter of the
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>  <p>This
     * parameter is only supported for the <code>gp3</code> volume type.</p>
     * 
     */
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }

    /**
     * <p>The throughput to provision for a volume, in MiB/s, with a maximum of 1,000
     * MiB/s. This parameter maps 1:1 with the <code>Throughput</code> parameter of the
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>  <p>This
     * parameter is only supported for the <code>gp3</code> volume type.</p>
     * 
     */
    inline void SetThroughput(int value) { m_throughputHasBeenSet = true; m_throughput = value; }

    /**
     * <p>The throughput to provision for a volume, in MiB/s, with a maximum of 1,000
     * MiB/s. This parameter maps 1:1 with the <code>Throughput</code> parameter of the
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>  <p>This
     * parameter is only supported for the <code>gp3</code> volume type.</p>
     * 
     */
    inline TaskManagedEBSVolumeConfiguration& WithThroughput(int value) { SetThroughput(value); return *this;}


    /**
     * <p>The tags to apply to the volume. Amazon ECS applies service-managed tags by
     * default. This parameter maps 1:1 with the <code>TagSpecifications.N</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::Vector<EBSTagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the volume. Amazon ECS applies service-managed tags by
     * default. This parameter maps 1:1 with the <code>TagSpecifications.N</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the volume. Amazon ECS applies service-managed tags by
     * default. This parameter maps 1:1 with the <code>TagSpecifications.N</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<EBSTagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the volume. Amazon ECS applies service-managed tags by
     * default. This parameter maps 1:1 with the <code>TagSpecifications.N</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<EBSTagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the volume. Amazon ECS applies service-managed tags by
     * default. This parameter maps 1:1 with the <code>TagSpecifications.N</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline TaskManagedEBSVolumeConfiguration& WithTagSpecifications(const Aws::Vector<EBSTagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the volume. Amazon ECS applies service-managed tags by
     * default. This parameter maps 1:1 with the <code>TagSpecifications.N</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline TaskManagedEBSVolumeConfiguration& WithTagSpecifications(Aws::Vector<EBSTagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the volume. Amazon ECS applies service-managed tags by
     * default. This parameter maps 1:1 with the <code>TagSpecifications.N</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline TaskManagedEBSVolumeConfiguration& AddTagSpecifications(const EBSTagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the volume. Amazon ECS applies service-managed tags by
     * default. This parameter maps 1:1 with the <code>TagSpecifications.N</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline TaskManagedEBSVolumeConfiguration& AddTagSpecifications(EBSTagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the IAM role to associate with this volume. This is the Amazon ECS
     * infrastructure IAM role that is used to manage your Amazon Web Services
     * infrastructure. We recommend using the Amazon ECS-managed
     * <code>AmazonECSInfrastructureRolePolicyForVolumes</code> IAM policy with this
     * role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/infrastructure_IAM_role.html">Amazon
     * ECS infrastructure IAM role</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role to associate with this volume. This is the Amazon ECS
     * infrastructure IAM role that is used to manage your Amazon Web Services
     * infrastructure. We recommend using the Amazon ECS-managed
     * <code>AmazonECSInfrastructureRolePolicyForVolumes</code> IAM policy with this
     * role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/infrastructure_IAM_role.html">Amazon
     * ECS infrastructure IAM role</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role to associate with this volume. This is the Amazon ECS
     * infrastructure IAM role that is used to manage your Amazon Web Services
     * infrastructure. We recommend using the Amazon ECS-managed
     * <code>AmazonECSInfrastructureRolePolicyForVolumes</code> IAM policy with this
     * role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/infrastructure_IAM_role.html">Amazon
     * ECS infrastructure IAM role</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role to associate with this volume. This is the Amazon ECS
     * infrastructure IAM role that is used to manage your Amazon Web Services
     * infrastructure. We recommend using the Amazon ECS-managed
     * <code>AmazonECSInfrastructureRolePolicyForVolumes</code> IAM policy with this
     * role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/infrastructure_IAM_role.html">Amazon
     * ECS infrastructure IAM role</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role to associate with this volume. This is the Amazon ECS
     * infrastructure IAM role that is used to manage your Amazon Web Services
     * infrastructure. We recommend using the Amazon ECS-managed
     * <code>AmazonECSInfrastructureRolePolicyForVolumes</code> IAM policy with this
     * role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/infrastructure_IAM_role.html">Amazon
     * ECS infrastructure IAM role</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role to associate with this volume. This is the Amazon ECS
     * infrastructure IAM role that is used to manage your Amazon Web Services
     * infrastructure. We recommend using the Amazon ECS-managed
     * <code>AmazonECSInfrastructureRolePolicyForVolumes</code> IAM policy with this
     * role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/infrastructure_IAM_role.html">Amazon
     * ECS infrastructure IAM role</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline TaskManagedEBSVolumeConfiguration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role to associate with this volume. This is the Amazon ECS
     * infrastructure IAM role that is used to manage your Amazon Web Services
     * infrastructure. We recommend using the Amazon ECS-managed
     * <code>AmazonECSInfrastructureRolePolicyForVolumes</code> IAM policy with this
     * role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/infrastructure_IAM_role.html">Amazon
     * ECS infrastructure IAM role</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline TaskManagedEBSVolumeConfiguration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role to associate with this volume. This is the Amazon ECS
     * infrastructure IAM role that is used to manage your Amazon Web Services
     * infrastructure. We recommend using the Amazon ECS-managed
     * <code>AmazonECSInfrastructureRolePolicyForVolumes</code> IAM policy with this
     * role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/infrastructure_IAM_role.html">Amazon
     * ECS infrastructure IAM role</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline TaskManagedEBSVolumeConfiguration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The termination policy for the volume when the task exits. This provides a
     * way to control whether Amazon ECS terminates the Amazon EBS volume when the task
     * stops.</p>
     */
    inline const TaskManagedEBSVolumeTerminationPolicy& GetTerminationPolicy() const{ return m_terminationPolicy; }

    /**
     * <p>The termination policy for the volume when the task exits. This provides a
     * way to control whether Amazon ECS terminates the Amazon EBS volume when the task
     * stops.</p>
     */
    inline bool TerminationPolicyHasBeenSet() const { return m_terminationPolicyHasBeenSet; }

    /**
     * <p>The termination policy for the volume when the task exits. This provides a
     * way to control whether Amazon ECS terminates the Amazon EBS volume when the task
     * stops.</p>
     */
    inline void SetTerminationPolicy(const TaskManagedEBSVolumeTerminationPolicy& value) { m_terminationPolicyHasBeenSet = true; m_terminationPolicy = value; }

    /**
     * <p>The termination policy for the volume when the task exits. This provides a
     * way to control whether Amazon ECS terminates the Amazon EBS volume when the task
     * stops.</p>
     */
    inline void SetTerminationPolicy(TaskManagedEBSVolumeTerminationPolicy&& value) { m_terminationPolicyHasBeenSet = true; m_terminationPolicy = std::move(value); }

    /**
     * <p>The termination policy for the volume when the task exits. This provides a
     * way to control whether Amazon ECS terminates the Amazon EBS volume when the task
     * stops.</p>
     */
    inline TaskManagedEBSVolumeConfiguration& WithTerminationPolicy(const TaskManagedEBSVolumeTerminationPolicy& value) { SetTerminationPolicy(value); return *this;}

    /**
     * <p>The termination policy for the volume when the task exits. This provides a
     * way to control whether Amazon ECS terminates the Amazon EBS volume when the task
     * stops.</p>
     */
    inline TaskManagedEBSVolumeConfiguration& WithTerminationPolicy(TaskManagedEBSVolumeTerminationPolicy&& value) { SetTerminationPolicy(std::move(value)); return *this;}


    /**
     * <p>The Linux filesystem type for the volume. For volumes created from a
     * snapshot, you must specify the same filesystem type that the volume was using
     * when the snapshot was created. If there is a filesystem type mismatch, the task
     * will fail to start.</p> <p>The available filesystem types are&#x2028;
     * <code>ext3</code>, <code>ext4</code>, and <code>xfs</code>. If no value is
     * specified, the <code>xfs</code> filesystem type is used by default.</p>
     */
    inline const TaskFilesystemType& GetFilesystemType() const{ return m_filesystemType; }

    /**
     * <p>The Linux filesystem type for the volume. For volumes created from a
     * snapshot, you must specify the same filesystem type that the volume was using
     * when the snapshot was created. If there is a filesystem type mismatch, the task
     * will fail to start.</p> <p>The available filesystem types are&#x2028;
     * <code>ext3</code>, <code>ext4</code>, and <code>xfs</code>. If no value is
     * specified, the <code>xfs</code> filesystem type is used by default.</p>
     */
    inline bool FilesystemTypeHasBeenSet() const { return m_filesystemTypeHasBeenSet; }

    /**
     * <p>The Linux filesystem type for the volume. For volumes created from a
     * snapshot, you must specify the same filesystem type that the volume was using
     * when the snapshot was created. If there is a filesystem type mismatch, the task
     * will fail to start.</p> <p>The available filesystem types are&#x2028;
     * <code>ext3</code>, <code>ext4</code>, and <code>xfs</code>. If no value is
     * specified, the <code>xfs</code> filesystem type is used by default.</p>
     */
    inline void SetFilesystemType(const TaskFilesystemType& value) { m_filesystemTypeHasBeenSet = true; m_filesystemType = value; }

    /**
     * <p>The Linux filesystem type for the volume. For volumes created from a
     * snapshot, you must specify the same filesystem type that the volume was using
     * when the snapshot was created. If there is a filesystem type mismatch, the task
     * will fail to start.</p> <p>The available filesystem types are&#x2028;
     * <code>ext3</code>, <code>ext4</code>, and <code>xfs</code>. If no value is
     * specified, the <code>xfs</code> filesystem type is used by default.</p>
     */
    inline void SetFilesystemType(TaskFilesystemType&& value) { m_filesystemTypeHasBeenSet = true; m_filesystemType = std::move(value); }

    /**
     * <p>The Linux filesystem type for the volume. For volumes created from a
     * snapshot, you must specify the same filesystem type that the volume was using
     * when the snapshot was created. If there is a filesystem type mismatch, the task
     * will fail to start.</p> <p>The available filesystem types are&#x2028;
     * <code>ext3</code>, <code>ext4</code>, and <code>xfs</code>. If no value is
     * specified, the <code>xfs</code> filesystem type is used by default.</p>
     */
    inline TaskManagedEBSVolumeConfiguration& WithFilesystemType(const TaskFilesystemType& value) { SetFilesystemType(value); return *this;}

    /**
     * <p>The Linux filesystem type for the volume. For volumes created from a
     * snapshot, you must specify the same filesystem type that the volume was using
     * when the snapshot was created. If there is a filesystem type mismatch, the task
     * will fail to start.</p> <p>The available filesystem types are&#x2028;
     * <code>ext3</code>, <code>ext4</code>, and <code>xfs</code>. If no value is
     * specified, the <code>xfs</code> filesystem type is used by default.</p>
     */
    inline TaskManagedEBSVolumeConfiguration& WithFilesystemType(TaskFilesystemType&& value) { SetFilesystemType(std::move(value)); return *this;}

  private:

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    int m_sizeInGiB;
    bool m_sizeInGiBHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    int m_throughput;
    bool m_throughputHasBeenSet = false;

    Aws::Vector<EBSTagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    TaskManagedEBSVolumeTerminationPolicy m_terminationPolicy;
    bool m_terminationPolicyHasBeenSet = false;

    TaskFilesystemType m_filesystemType;
    bool m_filesystemTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
