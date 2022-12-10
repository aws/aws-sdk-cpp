/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ProcessingInstanceType.h>
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
   * <p>Configuration for the cluster used to run a processing job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProcessingClusterConfig">AWS
   * API Reference</a></p>
   */
  class ProcessingClusterConfig
  {
  public:
    AWS_SAGEMAKER_API ProcessingClusterConfig();
    AWS_SAGEMAKER_API ProcessingClusterConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProcessingClusterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of ML compute instances to use in the processing job. For
     * distributed processing jobs, specify a value greater than 1. The default value
     * is 1.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of ML compute instances to use in the processing job. For
     * distributed processing jobs, specify a value greater than 1. The default value
     * is 1.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The number of ML compute instances to use in the processing job. For
     * distributed processing jobs, specify a value greater than 1. The default value
     * is 1.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of ML compute instances to use in the processing job. For
     * distributed processing jobs, specify a value greater than 1. The default value
     * is 1.</p>
     */
    inline ProcessingClusterConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>The ML compute instance type for the processing job.</p>
     */
    inline const ProcessingInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The ML compute instance type for the processing job.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The ML compute instance type for the processing job.</p>
     */
    inline void SetInstanceType(const ProcessingInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The ML compute instance type for the processing job.</p>
     */
    inline void SetInstanceType(ProcessingInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The ML compute instance type for the processing job.</p>
     */
    inline ProcessingClusterConfig& WithInstanceType(const ProcessingInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The ML compute instance type for the processing job.</p>
     */
    inline ProcessingClusterConfig& WithInstanceType(ProcessingInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The size of the ML storage volume in gigabytes that you want to provision.
     * You must specify sufficient ML storage for your scenario.</p>  <p>Certain
     * Nitro-based instances include local storage with a fixed total size, dependent
     * on the instance type. When using these instances for processing, Amazon
     * SageMaker mounts the local instance storage instead of Amazon EBS gp2 storage.
     * You can't request a <code>VolumeSizeInGB</code> greater than the total size of
     * the local instance storage.</p> <p>For a list of instance types that support
     * local instance storage, including the total size per instance type, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> 
     */
    inline int GetVolumeSizeInGB() const{ return m_volumeSizeInGB; }

    /**
     * <p>The size of the ML storage volume in gigabytes that you want to provision.
     * You must specify sufficient ML storage for your scenario.</p>  <p>Certain
     * Nitro-based instances include local storage with a fixed total size, dependent
     * on the instance type. When using these instances for processing, Amazon
     * SageMaker mounts the local instance storage instead of Amazon EBS gp2 storage.
     * You can't request a <code>VolumeSizeInGB</code> greater than the total size of
     * the local instance storage.</p> <p>For a list of instance types that support
     * local instance storage, including the total size per instance type, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> 
     */
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }

    /**
     * <p>The size of the ML storage volume in gigabytes that you want to provision.
     * You must specify sufficient ML storage for your scenario.</p>  <p>Certain
     * Nitro-based instances include local storage with a fixed total size, dependent
     * on the instance type. When using these instances for processing, Amazon
     * SageMaker mounts the local instance storage instead of Amazon EBS gp2 storage.
     * You can't request a <code>VolumeSizeInGB</code> greater than the total size of
     * the local instance storage.</p> <p>For a list of instance types that support
     * local instance storage, including the total size per instance type, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> 
     */
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }

    /**
     * <p>The size of the ML storage volume in gigabytes that you want to provision.
     * You must specify sufficient ML storage for your scenario.</p>  <p>Certain
     * Nitro-based instances include local storage with a fixed total size, dependent
     * on the instance type. When using these instances for processing, Amazon
     * SageMaker mounts the local instance storage instead of Amazon EBS gp2 storage.
     * You can't request a <code>VolumeSizeInGB</code> greater than the total size of
     * the local instance storage.</p> <p>For a list of instance types that support
     * local instance storage, including the total size per instance type, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> 
     */
    inline ProcessingClusterConfig& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}


    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the processing job. </p>  <p>Certain
     * Nitro-based instances include local storage, dependent on the instance type.
     * Local storage volumes are encrypted using a hardware module on the instance. You
     * can't request a <code>VolumeKmsKeyId</code> when using an instance type with
     * local storage.</p> <p>For a list of instance types that support local instance
     * storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p> 
     */
    inline const Aws::String& GetVolumeKmsKeyId() const{ return m_volumeKmsKeyId; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the processing job. </p>  <p>Certain
     * Nitro-based instances include local storage, dependent on the instance type.
     * Local storage volumes are encrypted using a hardware module on the instance. You
     * can't request a <code>VolumeKmsKeyId</code> when using an instance type with
     * local storage.</p> <p>For a list of instance types that support local instance
     * storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p> 
     */
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the processing job. </p>  <p>Certain
     * Nitro-based instances include local storage, dependent on the instance type.
     * Local storage volumes are encrypted using a hardware module on the instance. You
     * can't request a <code>VolumeKmsKeyId</code> when using an instance type with
     * local storage.</p> <p>For a list of instance types that support local instance
     * storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p> 
     */
    inline void SetVolumeKmsKeyId(const Aws::String& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = value; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the processing job. </p>  <p>Certain
     * Nitro-based instances include local storage, dependent on the instance type.
     * Local storage volumes are encrypted using a hardware module on the instance. You
     * can't request a <code>VolumeKmsKeyId</code> when using an instance type with
     * local storage.</p> <p>For a list of instance types that support local instance
     * storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p> 
     */
    inline void SetVolumeKmsKeyId(Aws::String&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the processing job. </p>  <p>Certain
     * Nitro-based instances include local storage, dependent on the instance type.
     * Local storage volumes are encrypted using a hardware module on the instance. You
     * can't request a <code>VolumeKmsKeyId</code> when using an instance type with
     * local storage.</p> <p>For a list of instance types that support local instance
     * storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p> 
     */
    inline void SetVolumeKmsKeyId(const char* value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the processing job. </p>  <p>Certain
     * Nitro-based instances include local storage, dependent on the instance type.
     * Local storage volumes are encrypted using a hardware module on the instance. You
     * can't request a <code>VolumeKmsKeyId</code> when using an instance type with
     * local storage.</p> <p>For a list of instance types that support local instance
     * storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p> 
     */
    inline ProcessingClusterConfig& WithVolumeKmsKeyId(const Aws::String& value) { SetVolumeKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the processing job. </p>  <p>Certain
     * Nitro-based instances include local storage, dependent on the instance type.
     * Local storage volumes are encrypted using a hardware module on the instance. You
     * can't request a <code>VolumeKmsKeyId</code> when using an instance type with
     * local storage.</p> <p>For a list of instance types that support local instance
     * storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p> 
     */
    inline ProcessingClusterConfig& WithVolumeKmsKeyId(Aws::String&& value) { SetVolumeKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the processing job. </p>  <p>Certain
     * Nitro-based instances include local storage, dependent on the instance type.
     * Local storage volumes are encrypted using a hardware module on the instance. You
     * can't request a <code>VolumeKmsKeyId</code> when using an instance type with
     * local storage.</p> <p>For a list of instance types that support local instance
     * storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p> 
     */
    inline ProcessingClusterConfig& WithVolumeKmsKeyId(const char* value) { SetVolumeKmsKeyId(value); return *this;}

  private:

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    ProcessingInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_volumeSizeInGB;
    bool m_volumeSizeInGBHasBeenSet = false;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
