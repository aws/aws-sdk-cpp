﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrainingInstanceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Describes the resources, including ML compute instances and ML storage
   * volumes, to use for model training. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ResourceConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ResourceConfig
  {
  public:
    ResourceConfig();
    ResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    ResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ML compute instance type. </p>
     */
    inline const TrainingInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The ML compute instance type. </p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The ML compute instance type. </p>
     */
    inline void SetInstanceType(const TrainingInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The ML compute instance type. </p>
     */
    inline void SetInstanceType(TrainingInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The ML compute instance type. </p>
     */
    inline ResourceConfig& WithInstanceType(const TrainingInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The ML compute instance type. </p>
     */
    inline ResourceConfig& WithInstanceType(TrainingInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The number of ML compute instances to use. For distributed training, provide
     * a value greater than 1. </p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of ML compute instances to use. For distributed training, provide
     * a value greater than 1. </p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The number of ML compute instances to use. For distributed training, provide
     * a value greater than 1. </p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of ML compute instances to use. For distributed training, provide
     * a value greater than 1. </p>
     */
    inline ResourceConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>The size of the ML storage volume that you want to provision. </p> <p>ML
     * storage volumes store model artifacts and incremental states. Training
     * algorithms might also use the ML storage volume for scratch space. If you want
     * to store the training data in the ML storage volume, choose <code>File</code> as
     * the <code>TrainingInputMode</code> in the algorithm specification. </p> <p>You
     * must specify sufficient ML storage for your scenario. </p>  <p> Amazon
     * SageMaker supports only the General Purpose SSD (gp2) ML storage volume type.
     * </p>   <p>Certain Nitro-based instances include local storage with
     * a fixed total size, dependent on the instance type. When using these instances
     * for training, Amazon SageMaker mounts the local instance storage instead of
     * Amazon EBS gp2 storage. You can't request a <code>VolumeSizeInGB</code> greater
     * than the total size of the local instance storage.</p> <p>For a list of instance
     * types that support local instance storage, including the total size per instance
     * type, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> 
     */
    inline int GetVolumeSizeInGB() const{ return m_volumeSizeInGB; }

    /**
     * <p>The size of the ML storage volume that you want to provision. </p> <p>ML
     * storage volumes store model artifacts and incremental states. Training
     * algorithms might also use the ML storage volume for scratch space. If you want
     * to store the training data in the ML storage volume, choose <code>File</code> as
     * the <code>TrainingInputMode</code> in the algorithm specification. </p> <p>You
     * must specify sufficient ML storage for your scenario. </p>  <p> Amazon
     * SageMaker supports only the General Purpose SSD (gp2) ML storage volume type.
     * </p>   <p>Certain Nitro-based instances include local storage with
     * a fixed total size, dependent on the instance type. When using these instances
     * for training, Amazon SageMaker mounts the local instance storage instead of
     * Amazon EBS gp2 storage. You can't request a <code>VolumeSizeInGB</code> greater
     * than the total size of the local instance storage.</p> <p>For a list of instance
     * types that support local instance storage, including the total size per instance
     * type, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> 
     */
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }

    /**
     * <p>The size of the ML storage volume that you want to provision. </p> <p>ML
     * storage volumes store model artifacts and incremental states. Training
     * algorithms might also use the ML storage volume for scratch space. If you want
     * to store the training data in the ML storage volume, choose <code>File</code> as
     * the <code>TrainingInputMode</code> in the algorithm specification. </p> <p>You
     * must specify sufficient ML storage for your scenario. </p>  <p> Amazon
     * SageMaker supports only the General Purpose SSD (gp2) ML storage volume type.
     * </p>   <p>Certain Nitro-based instances include local storage with
     * a fixed total size, dependent on the instance type. When using these instances
     * for training, Amazon SageMaker mounts the local instance storage instead of
     * Amazon EBS gp2 storage. You can't request a <code>VolumeSizeInGB</code> greater
     * than the total size of the local instance storage.</p> <p>For a list of instance
     * types that support local instance storage, including the total size per instance
     * type, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> 
     */
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }

    /**
     * <p>The size of the ML storage volume that you want to provision. </p> <p>ML
     * storage volumes store model artifacts and incremental states. Training
     * algorithms might also use the ML storage volume for scratch space. If you want
     * to store the training data in the ML storage volume, choose <code>File</code> as
     * the <code>TrainingInputMode</code> in the algorithm specification. </p> <p>You
     * must specify sufficient ML storage for your scenario. </p>  <p> Amazon
     * SageMaker supports only the General Purpose SSD (gp2) ML storage volume type.
     * </p>   <p>Certain Nitro-based instances include local storage with
     * a fixed total size, dependent on the instance type. When using these instances
     * for training, Amazon SageMaker mounts the local instance storage instead of
     * Amazon EBS gp2 storage. You can't request a <code>VolumeSizeInGB</code> greater
     * than the total size of the local instance storage.</p> <p>For a list of instance
     * types that support local instance storage, including the total size per instance
     * type, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> 
     */
    inline ResourceConfig& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}


    /**
     * <p>The Amazon Web Services KMS key that Amazon SageMaker uses to encrypt data on
     * the storage volume attached to the ML compute instance(s) that run the training
     * job.</p>  <p>Certain Nitro-based instances include local storage,
     * dependent on the instance type. Local storage volumes are encrypted using a
     * hardware module on the instance. You can't request a <code>VolumeKmsKeyId</code>
     * when using an instance type with local storage.</p> <p>For a list of instance
     * types that support local instance storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p>  <p>The <code>VolumeKmsKeyId</code> can
     * be in any of the following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetVolumeKmsKeyId() const{ return m_volumeKmsKeyId; }

    /**
     * <p>The Amazon Web Services KMS key that Amazon SageMaker uses to encrypt data on
     * the storage volume attached to the ML compute instance(s) that run the training
     * job.</p>  <p>Certain Nitro-based instances include local storage,
     * dependent on the instance type. Local storage volumes are encrypted using a
     * hardware module on the instance. You can't request a <code>VolumeKmsKeyId</code>
     * when using an instance type with local storage.</p> <p>For a list of instance
     * types that support local instance storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p>  <p>The <code>VolumeKmsKeyId</code> can
     * be in any of the following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services KMS key that Amazon SageMaker uses to encrypt data on
     * the storage volume attached to the ML compute instance(s) that run the training
     * job.</p>  <p>Certain Nitro-based instances include local storage,
     * dependent on the instance type. Local storage volumes are encrypted using a
     * hardware module on the instance. You can't request a <code>VolumeKmsKeyId</code>
     * when using an instance type with local storage.</p> <p>For a list of instance
     * types that support local instance storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p>  <p>The <code>VolumeKmsKeyId</code> can
     * be in any of the following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetVolumeKmsKeyId(const Aws::String& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = value; }

    /**
     * <p>The Amazon Web Services KMS key that Amazon SageMaker uses to encrypt data on
     * the storage volume attached to the ML compute instance(s) that run the training
     * job.</p>  <p>Certain Nitro-based instances include local storage,
     * dependent on the instance type. Local storage volumes are encrypted using a
     * hardware module on the instance. You can't request a <code>VolumeKmsKeyId</code>
     * when using an instance type with local storage.</p> <p>For a list of instance
     * types that support local instance storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p>  <p>The <code>VolumeKmsKeyId</code> can
     * be in any of the following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetVolumeKmsKeyId(Aws::String&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key that Amazon SageMaker uses to encrypt data on
     * the storage volume attached to the ML compute instance(s) that run the training
     * job.</p>  <p>Certain Nitro-based instances include local storage,
     * dependent on the instance type. Local storage volumes are encrypted using a
     * hardware module on the instance. You can't request a <code>VolumeKmsKeyId</code>
     * when using an instance type with local storage.</p> <p>For a list of instance
     * types that support local instance storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p>  <p>The <code>VolumeKmsKeyId</code> can
     * be in any of the following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetVolumeKmsKeyId(const char* value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key that Amazon SageMaker uses to encrypt data on
     * the storage volume attached to the ML compute instance(s) that run the training
     * job.</p>  <p>Certain Nitro-based instances include local storage,
     * dependent on the instance type. Local storage volumes are encrypted using a
     * hardware module on the instance. You can't request a <code>VolumeKmsKeyId</code>
     * when using an instance type with local storage.</p> <p>For a list of instance
     * types that support local instance storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p>  <p>The <code>VolumeKmsKeyId</code> can
     * be in any of the following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline ResourceConfig& WithVolumeKmsKeyId(const Aws::String& value) { SetVolumeKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key that Amazon SageMaker uses to encrypt data on
     * the storage volume attached to the ML compute instance(s) that run the training
     * job.</p>  <p>Certain Nitro-based instances include local storage,
     * dependent on the instance type. Local storage volumes are encrypted using a
     * hardware module on the instance. You can't request a <code>VolumeKmsKeyId</code>
     * when using an instance type with local storage.</p> <p>For a list of instance
     * types that support local instance storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p>  <p>The <code>VolumeKmsKeyId</code> can
     * be in any of the following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline ResourceConfig& WithVolumeKmsKeyId(Aws::String&& value) { SetVolumeKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key that Amazon SageMaker uses to encrypt data on
     * the storage volume attached to the ML compute instance(s) that run the training
     * job.</p>  <p>Certain Nitro-based instances include local storage,
     * dependent on the instance type. Local storage volumes are encrypted using a
     * hardware module on the instance. You can't request a <code>VolumeKmsKeyId</code>
     * when using an instance type with local storage.</p> <p>For a list of instance
     * types that support local instance storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p>  <p>The <code>VolumeKmsKeyId</code> can
     * be in any of the following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline ResourceConfig& WithVolumeKmsKeyId(const char* value) { SetVolumeKmsKeyId(value); return *this;}

  private:

    TrainingInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet;

    int m_volumeSizeInGB;
    bool m_volumeSizeInGBHasBeenSet;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
