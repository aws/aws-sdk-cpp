﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>

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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p> Describes the GPU accelerators for the instance type. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/Gpu">AWS
   * API Reference</a></p>
   */
  class Gpu
  {
  public:
    AWS_COMPUTEOPTIMIZER_API Gpu() = default;
    AWS_COMPUTEOPTIMIZER_API Gpu(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Gpu& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The number of GPUs for the instance type. </p>
     */
    inline int GetGpuCount() const { return m_gpuCount; }
    inline bool GpuCountHasBeenSet() const { return m_gpuCountHasBeenSet; }
    inline void SetGpuCount(int value) { m_gpuCountHasBeenSet = true; m_gpuCount = value; }
    inline Gpu& WithGpuCount(int value) { SetGpuCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total size of the memory for the GPU accelerators for the instance type,
     * in MiB. </p>
     */
    inline int GetGpuMemorySizeInMiB() const { return m_gpuMemorySizeInMiB; }
    inline bool GpuMemorySizeInMiBHasBeenSet() const { return m_gpuMemorySizeInMiBHasBeenSet; }
    inline void SetGpuMemorySizeInMiB(int value) { m_gpuMemorySizeInMiBHasBeenSet = true; m_gpuMemorySizeInMiB = value; }
    inline Gpu& WithGpuMemorySizeInMiB(int value) { SetGpuMemorySizeInMiB(value); return *this;}
    ///@}
  private:

    int m_gpuCount{0};
    bool m_gpuCountHasBeenSet = false;

    int m_gpuMemorySizeInMiB{0};
    bool m_gpuMemorySizeInMiBHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
