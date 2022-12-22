/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/VpcConfig.h>
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
   * <p>Configure encryption on the storage volume attached to the ML compute
   * instance used to run automated data labeling model training and inference.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobResourceConfig">AWS
   * API Reference</a></p>
   */
  class LabelingJobResourceConfig
  {
  public:
    AWS_SAGEMAKER_API LabelingJobResourceConfig();
    AWS_SAGEMAKER_API LabelingJobResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LabelingJobResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the training and inference jobs used for
     * automated data labeling. </p> <p>You can only specify a
     * <code>VolumeKmsKeyId</code> when you create a labeling job with automated data
     * labeling enabled using the API operation <code>CreateLabelingJob</code>. You
     * cannot specify an Amazon Web Services KMS key to encrypt the storage volume used
     * for automated data labeling model training and inference when you create a
     * labeling job using the console. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-security.html">Output
     * Data and Storage Volume Encryption</a>.</p> <p>The <code>VolumeKmsKeyId</code>
     * can be any of the following formats:</p> <ul> <li> <p>KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetVolumeKmsKeyId() const{ return m_volumeKmsKeyId; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the training and inference jobs used for
     * automated data labeling. </p> <p>You can only specify a
     * <code>VolumeKmsKeyId</code> when you create a labeling job with automated data
     * labeling enabled using the API operation <code>CreateLabelingJob</code>. You
     * cannot specify an Amazon Web Services KMS key to encrypt the storage volume used
     * for automated data labeling model training and inference when you create a
     * labeling job using the console. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-security.html">Output
     * Data and Storage Volume Encryption</a>.</p> <p>The <code>VolumeKmsKeyId</code>
     * can be any of the following formats:</p> <ul> <li> <p>KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the training and inference jobs used for
     * automated data labeling. </p> <p>You can only specify a
     * <code>VolumeKmsKeyId</code> when you create a labeling job with automated data
     * labeling enabled using the API operation <code>CreateLabelingJob</code>. You
     * cannot specify an Amazon Web Services KMS key to encrypt the storage volume used
     * for automated data labeling model training and inference when you create a
     * labeling job using the console. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-security.html">Output
     * Data and Storage Volume Encryption</a>.</p> <p>The <code>VolumeKmsKeyId</code>
     * can be any of the following formats:</p> <ul> <li> <p>KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetVolumeKmsKeyId(const Aws::String& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = value; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the training and inference jobs used for
     * automated data labeling. </p> <p>You can only specify a
     * <code>VolumeKmsKeyId</code> when you create a labeling job with automated data
     * labeling enabled using the API operation <code>CreateLabelingJob</code>. You
     * cannot specify an Amazon Web Services KMS key to encrypt the storage volume used
     * for automated data labeling model training and inference when you create a
     * labeling job using the console. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-security.html">Output
     * Data and Storage Volume Encryption</a>.</p> <p>The <code>VolumeKmsKeyId</code>
     * can be any of the following formats:</p> <ul> <li> <p>KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetVolumeKmsKeyId(Aws::String&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the training and inference jobs used for
     * automated data labeling. </p> <p>You can only specify a
     * <code>VolumeKmsKeyId</code> when you create a labeling job with automated data
     * labeling enabled using the API operation <code>CreateLabelingJob</code>. You
     * cannot specify an Amazon Web Services KMS key to encrypt the storage volume used
     * for automated data labeling model training and inference when you create a
     * labeling job using the console. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-security.html">Output
     * Data and Storage Volume Encryption</a>.</p> <p>The <code>VolumeKmsKeyId</code>
     * can be any of the following formats:</p> <ul> <li> <p>KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetVolumeKmsKeyId(const char* value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the training and inference jobs used for
     * automated data labeling. </p> <p>You can only specify a
     * <code>VolumeKmsKeyId</code> when you create a labeling job with automated data
     * labeling enabled using the API operation <code>CreateLabelingJob</code>. You
     * cannot specify an Amazon Web Services KMS key to encrypt the storage volume used
     * for automated data labeling model training and inference when you create a
     * labeling job using the console. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-security.html">Output
     * Data and Storage Volume Encryption</a>.</p> <p>The <code>VolumeKmsKeyId</code>
     * can be any of the following formats:</p> <ul> <li> <p>KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline LabelingJobResourceConfig& WithVolumeKmsKeyId(const Aws::String& value) { SetVolumeKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the training and inference jobs used for
     * automated data labeling. </p> <p>You can only specify a
     * <code>VolumeKmsKeyId</code> when you create a labeling job with automated data
     * labeling enabled using the API operation <code>CreateLabelingJob</code>. You
     * cannot specify an Amazon Web Services KMS key to encrypt the storage volume used
     * for automated data labeling model training and inference when you create a
     * labeling job using the console. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-security.html">Output
     * Data and Storage Volume Encryption</a>.</p> <p>The <code>VolumeKmsKeyId</code>
     * can be any of the following formats:</p> <ul> <li> <p>KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline LabelingJobResourceConfig& WithVolumeKmsKeyId(Aws::String&& value) { SetVolumeKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the training and inference jobs used for
     * automated data labeling. </p> <p>You can only specify a
     * <code>VolumeKmsKeyId</code> when you create a labeling job with automated data
     * labeling enabled using the API operation <code>CreateLabelingJob</code>. You
     * cannot specify an Amazon Web Services KMS key to encrypt the storage volume used
     * for automated data labeling model training and inference when you create a
     * labeling job using the console. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-security.html">Output
     * Data and Storage Volume Encryption</a>.</p> <p>The <code>VolumeKmsKeyId</code>
     * can be any of the following formats:</p> <ul> <li> <p>KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline LabelingJobResourceConfig& WithVolumeKmsKeyId(const char* value) { SetVolumeKmsKeyId(value); return *this;}


    
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    
    inline LabelingJobResourceConfig& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    
    inline LabelingJobResourceConfig& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}

  private:

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
