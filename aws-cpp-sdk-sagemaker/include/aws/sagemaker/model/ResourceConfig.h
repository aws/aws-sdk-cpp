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
     * must specify sufficient ML storage for your scenario. </p> <note> <p> Amazon
     * SageMaker supports only the General Purpose SSD (gp2) ML storage volume type.
     * </p> </note>
     */
    inline int GetVolumeSizeInGB() const{ return m_volumeSizeInGB; }

    /**
     * <p>The size of the ML storage volume that you want to provision. </p> <p>ML
     * storage volumes store model artifacts and incremental states. Training
     * algorithms might also use the ML storage volume for scratch space. If you want
     * to store the training data in the ML storage volume, choose <code>File</code> as
     * the <code>TrainingInputMode</code> in the algorithm specification. </p> <p>You
     * must specify sufficient ML storage for your scenario. </p> <note> <p> Amazon
     * SageMaker supports only the General Purpose SSD (gp2) ML storage volume type.
     * </p> </note>
     */
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }

    /**
     * <p>The size of the ML storage volume that you want to provision. </p> <p>ML
     * storage volumes store model artifacts and incremental states. Training
     * algorithms might also use the ML storage volume for scratch space. If you want
     * to store the training data in the ML storage volume, choose <code>File</code> as
     * the <code>TrainingInputMode</code> in the algorithm specification. </p> <p>You
     * must specify sufficient ML storage for your scenario. </p> <note> <p> Amazon
     * SageMaker supports only the General Purpose SSD (gp2) ML storage volume type.
     * </p> </note>
     */
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }

    /**
     * <p>The size of the ML storage volume that you want to provision. </p> <p>ML
     * storage volumes store model artifacts and incremental states. Training
     * algorithms might also use the ML storage volume for scratch space. If you want
     * to store the training data in the ML storage volume, choose <code>File</code> as
     * the <code>TrainingInputMode</code> in the algorithm specification. </p> <p>You
     * must specify sufficient ML storage for your scenario. </p> <note> <p> Amazon
     * SageMaker supports only the General Purpose SSD (gp2) ML storage volume type.
     * </p> </note>
     */
    inline ResourceConfig& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}


    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt data on the storage volume attached to the ML compute instance(s) that
     * run the training job. The <code>VolumeKmsKeyId</code> can be any of the
     * following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetVolumeKmsKeyId() const{ return m_volumeKmsKeyId; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt data on the storage volume attached to the ML compute instance(s) that
     * run the training job. The <code>VolumeKmsKeyId</code> can be any of the
     * following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt data on the storage volume attached to the ML compute instance(s) that
     * run the training job. The <code>VolumeKmsKeyId</code> can be any of the
     * following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetVolumeKmsKeyId(const Aws::String& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt data on the storage volume attached to the ML compute instance(s) that
     * run the training job. The <code>VolumeKmsKeyId</code> can be any of the
     * following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetVolumeKmsKeyId(Aws::String&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::move(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt data on the storage volume attached to the ML compute instance(s) that
     * run the training job. The <code>VolumeKmsKeyId</code> can be any of the
     * following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetVolumeKmsKeyId(const char* value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId.assign(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt data on the storage volume attached to the ML compute instance(s) that
     * run the training job. The <code>VolumeKmsKeyId</code> can be any of the
     * following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline ResourceConfig& WithVolumeKmsKeyId(const Aws::String& value) { SetVolumeKmsKeyId(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt data on the storage volume attached to the ML compute instance(s) that
     * run the training job. The <code>VolumeKmsKeyId</code> can be any of the
     * following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline ResourceConfig& WithVolumeKmsKeyId(Aws::String&& value) { SetVolumeKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt data on the storage volume attached to the ML compute instance(s) that
     * run the training job. The <code>VolumeKmsKeyId</code> can be any of the
     * following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
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
