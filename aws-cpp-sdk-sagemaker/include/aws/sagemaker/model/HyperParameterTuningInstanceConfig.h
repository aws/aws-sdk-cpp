/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrainingInstanceType.h>
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
   * <p>The configuration for hyperparameter tuning resources for use in training
   * jobs launched by the tuning job. These resources include compute instances and
   * storage volumes. Specify one or more compute instance configurations and
   * allocation strategies to select resources (optional).</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterTuningInstanceConfig">AWS
   * API Reference</a></p>
   */
  class HyperParameterTuningInstanceConfig
  {
  public:
    AWS_SAGEMAKER_API HyperParameterTuningInstanceConfig();
    AWS_SAGEMAKER_API HyperParameterTuningInstanceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HyperParameterTuningInstanceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The instance type used for processing of hyperparameter optimization jobs.
     * Choose from general purpose (no GPUs) instance types: ml.m5.xlarge,
     * ml.m5.2xlarge, and ml.m5.4xlarge or compute optimized (no GPUs) instance types:
     * ml.c5.xlarge and ml.c5.2xlarge. For more information about instance types, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebooks-available-instance-types.html">instance
     * type descriptions</a>.</p>
     */
    inline const TrainingInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type used for processing of hyperparameter optimization jobs.
     * Choose from general purpose (no GPUs) instance types: ml.m5.xlarge,
     * ml.m5.2xlarge, and ml.m5.4xlarge or compute optimized (no GPUs) instance types:
     * ml.c5.xlarge and ml.c5.2xlarge. For more information about instance types, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebooks-available-instance-types.html">instance
     * type descriptions</a>.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type used for processing of hyperparameter optimization jobs.
     * Choose from general purpose (no GPUs) instance types: ml.m5.xlarge,
     * ml.m5.2xlarge, and ml.m5.4xlarge or compute optimized (no GPUs) instance types:
     * ml.c5.xlarge and ml.c5.2xlarge. For more information about instance types, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebooks-available-instance-types.html">instance
     * type descriptions</a>.</p>
     */
    inline void SetInstanceType(const TrainingInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type used for processing of hyperparameter optimization jobs.
     * Choose from general purpose (no GPUs) instance types: ml.m5.xlarge,
     * ml.m5.2xlarge, and ml.m5.4xlarge or compute optimized (no GPUs) instance types:
     * ml.c5.xlarge and ml.c5.2xlarge. For more information about instance types, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebooks-available-instance-types.html">instance
     * type descriptions</a>.</p>
     */
    inline void SetInstanceType(TrainingInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type used for processing of hyperparameter optimization jobs.
     * Choose from general purpose (no GPUs) instance types: ml.m5.xlarge,
     * ml.m5.2xlarge, and ml.m5.4xlarge or compute optimized (no GPUs) instance types:
     * ml.c5.xlarge and ml.c5.2xlarge. For more information about instance types, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebooks-available-instance-types.html">instance
     * type descriptions</a>.</p>
     */
    inline HyperParameterTuningInstanceConfig& WithInstanceType(const TrainingInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type used for processing of hyperparameter optimization jobs.
     * Choose from general purpose (no GPUs) instance types: ml.m5.xlarge,
     * ml.m5.2xlarge, and ml.m5.4xlarge or compute optimized (no GPUs) instance types:
     * ml.c5.xlarge and ml.c5.2xlarge. For more information about instance types, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebooks-available-instance-types.html">instance
     * type descriptions</a>.</p>
     */
    inline HyperParameterTuningInstanceConfig& WithInstanceType(TrainingInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The number of instances of the type specified by <code>InstanceType</code>.
     * Choose an instance count larger than 1 for distributed training algorithms. See
     * <a href="https://docs.aws.amazon.com/data-parallel-use-api.html">SageMaker
     * distributed training jobs</a> for more informcration.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of instances of the type specified by <code>InstanceType</code>.
     * Choose an instance count larger than 1 for distributed training algorithms. See
     * <a href="https://docs.aws.amazon.com/data-parallel-use-api.html">SageMaker
     * distributed training jobs</a> for more informcration.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The number of instances of the type specified by <code>InstanceType</code>.
     * Choose an instance count larger than 1 for distributed training algorithms. See
     * <a href="https://docs.aws.amazon.com/data-parallel-use-api.html">SageMaker
     * distributed training jobs</a> for more informcration.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of instances of the type specified by <code>InstanceType</code>.
     * Choose an instance count larger than 1 for distributed training algorithms. See
     * <a href="https://docs.aws.amazon.com/data-parallel-use-api.html">SageMaker
     * distributed training jobs</a> for more informcration.</p>
     */
    inline HyperParameterTuningInstanceConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>The volume size in GB of the data to be processed for hyperparameter
     * optimization (optional).</p>
     */
    inline int GetVolumeSizeInGB() const{ return m_volumeSizeInGB; }

    /**
     * <p>The volume size in GB of the data to be processed for hyperparameter
     * optimization (optional).</p>
     */
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }

    /**
     * <p>The volume size in GB of the data to be processed for hyperparameter
     * optimization (optional).</p>
     */
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }

    /**
     * <p>The volume size in GB of the data to be processed for hyperparameter
     * optimization (optional).</p>
     */
    inline HyperParameterTuningInstanceConfig& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}

  private:

    TrainingInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    int m_volumeSizeInGB;
    bool m_volumeSizeInGBHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
