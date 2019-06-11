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
#include <aws/sagemaker/model/TransformInstanceType.h>
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
   * <p>Describes the resources, including ML instance types and ML instance count,
   * to use for transform job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TransformResources">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API TransformResources
  {
  public:
    TransformResources();
    TransformResources(Aws::Utils::Json::JsonView jsonValue);
    TransformResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ML compute instance type for the transform job. If you are using built-in
     * algorithms to transform moderately sized datasets, we recommend using
     * ml.m4.xlarge or <code>ml.m5.large</code>instance types.</p>
     */
    inline const TransformInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The ML compute instance type for the transform job. If you are using built-in
     * algorithms to transform moderately sized datasets, we recommend using
     * ml.m4.xlarge or <code>ml.m5.large</code>instance types.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The ML compute instance type for the transform job. If you are using built-in
     * algorithms to transform moderately sized datasets, we recommend using
     * ml.m4.xlarge or <code>ml.m5.large</code>instance types.</p>
     */
    inline void SetInstanceType(const TransformInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The ML compute instance type for the transform job. If you are using built-in
     * algorithms to transform moderately sized datasets, we recommend using
     * ml.m4.xlarge or <code>ml.m5.large</code>instance types.</p>
     */
    inline void SetInstanceType(TransformInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The ML compute instance type for the transform job. If you are using built-in
     * algorithms to transform moderately sized datasets, we recommend using
     * ml.m4.xlarge or <code>ml.m5.large</code>instance types.</p>
     */
    inline TransformResources& WithInstanceType(const TransformInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The ML compute instance type for the transform job. If you are using built-in
     * algorithms to transform moderately sized datasets, we recommend using
     * ml.m4.xlarge or <code>ml.m5.large</code>instance types.</p>
     */
    inline TransformResources& WithInstanceType(TransformInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The number of ML compute instances to use in the transform job. For
     * distributed transform jobs, specify a value greater than 1. The default value is
     * <code>1</code>.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of ML compute instances to use in the transform job. For
     * distributed transform jobs, specify a value greater than 1. The default value is
     * <code>1</code>.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The number of ML compute instances to use in the transform job. For
     * distributed transform jobs, specify a value greater than 1. The default value is
     * <code>1</code>.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of ML compute instances to use in the transform job. For
     * distributed transform jobs, specify a value greater than 1. The default value is
     * <code>1</code>.</p>
     */
    inline TransformResources& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt data on the storage volume attached to the ML compute instance(s) that
     * run the batch transform job. The <code>VolumeKmsKeyId</code> can be any of the
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
     * run the batch transform job. The <code>VolumeKmsKeyId</code> can be any of the
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
     * run the batch transform job. The <code>VolumeKmsKeyId</code> can be any of the
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
     * run the batch transform job. The <code>VolumeKmsKeyId</code> can be any of the
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
     * run the batch transform job. The <code>VolumeKmsKeyId</code> can be any of the
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
     * run the batch transform job. The <code>VolumeKmsKeyId</code> can be any of the
     * following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline TransformResources& WithVolumeKmsKeyId(const Aws::String& value) { SetVolumeKmsKeyId(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt data on the storage volume attached to the ML compute instance(s) that
     * run the batch transform job. The <code>VolumeKmsKeyId</code> can be any of the
     * following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline TransformResources& WithVolumeKmsKeyId(Aws::String&& value) { SetVolumeKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt data on the storage volume attached to the ML compute instance(s) that
     * run the batch transform job. The <code>VolumeKmsKeyId</code> can be any of the
     * following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline TransformResources& WithVolumeKmsKeyId(const char* value) { SetVolumeKmsKeyId(value); return *this;}

  private:

    TransformInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
