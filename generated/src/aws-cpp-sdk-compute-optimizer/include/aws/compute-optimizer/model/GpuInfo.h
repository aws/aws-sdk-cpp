/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/Gpu.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p> Describes the GPU accelerator settings for the instance type. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GpuInfo">AWS
   * API Reference</a></p>
   */
  class GpuInfo
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GpuInfo() = default;
    AWS_COMPUTEOPTIMIZER_API GpuInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API GpuInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Describes the GPU accelerators for the instance type. </p>
     */
    inline const Aws::Vector<Gpu>& GetGpus() const { return m_gpus; }
    inline bool GpusHasBeenSet() const { return m_gpusHasBeenSet; }
    template<typename GpusT = Aws::Vector<Gpu>>
    void SetGpus(GpusT&& value) { m_gpusHasBeenSet = true; m_gpus = std::forward<GpusT>(value); }
    template<typename GpusT = Aws::Vector<Gpu>>
    GpuInfo& WithGpus(GpusT&& value) { SetGpus(std::forward<GpusT>(value)); return *this;}
    template<typename GpusT = Gpu>
    GpuInfo& AddGpus(GpusT&& value) { m_gpusHasBeenSet = true; m_gpus.emplace_back(std::forward<GpusT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Gpu> m_gpus;
    bool m_gpusHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
