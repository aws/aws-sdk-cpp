/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/crt/cbor/Cbor.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ComputeOptimizer {
namespace Model {

/**
 * <p> Describes the GPU accelerators for the instance type. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/Gpu">AWS
 * API Reference</a></p>
 */
class Gpu {
 public:
  AWS_COMPUTEOPTIMIZER_API Gpu() = default;
  AWS_COMPUTEOPTIMIZER_API Gpu(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZER_API Gpu& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZER_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p> The number of GPUs for the instance type. </p>
   */
  inline int64_t GetGpuCount() const { return m_gpuCount; }
  inline bool GpuCountHasBeenSet() const { return m_gpuCountHasBeenSet; }
  inline void SetGpuCount(int64_t value) {
    m_gpuCountHasBeenSet = true;
    m_gpuCount = value;
  }
  inline Gpu& WithGpuCount(int64_t value) {
    SetGpuCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The total size of the memory for the GPU accelerators for the instance type,
   * in MiB. </p>
   */
  inline int64_t GetGpuMemorySizeInMiB() const { return m_gpuMemorySizeInMiB; }
  inline bool GpuMemorySizeInMiBHasBeenSet() const { return m_gpuMemorySizeInMiBHasBeenSet; }
  inline void SetGpuMemorySizeInMiB(int64_t value) {
    m_gpuMemorySizeInMiBHasBeenSet = true;
    m_gpuMemorySizeInMiB = value;
  }
  inline Gpu& WithGpuMemorySizeInMiB(int64_t value) {
    SetGpuMemorySizeInMiB(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_gpuCount{0};

  int64_t m_gpuMemorySizeInMiB{0};
  bool m_gpuCountHasBeenSet = false;
  bool m_gpuMemorySizeInMiBHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws
