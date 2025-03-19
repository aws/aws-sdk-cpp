/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/autoscaling/model/CpuPerformanceFactorRequest.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p> The baseline performance to consider, using an instance family as a baseline
   * reference. The instance family establishes the lowest acceptable level of
   * performance. Auto Scaling uses this baseline to guide instance type selection,
   * but there is no guarantee that the selected instance types will always exceed
   * the baseline for every application. </p> <p>Currently, this parameter only
   * supports CPU performance as a baseline performance factor. For example,
   * specifying <code>c6i</code> uses the CPU performance of the <code>c6i</code>
   * family as the baseline reference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/BaselinePerformanceFactorsRequest">AWS
   * API Reference</a></p>
   */
  class BaselinePerformanceFactorsRequest
  {
  public:
    AWS_AUTOSCALING_API BaselinePerformanceFactorsRequest() = default;
    AWS_AUTOSCALING_API BaselinePerformanceFactorsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API BaselinePerformanceFactorsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> The CPU performance to consider, using an instance family as the baseline
     * reference. </p>
     */
    inline const CpuPerformanceFactorRequest& GetCpu() const { return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    template<typename CpuT = CpuPerformanceFactorRequest>
    void SetCpu(CpuT&& value) { m_cpuHasBeenSet = true; m_cpu = std::forward<CpuT>(value); }
    template<typename CpuT = CpuPerformanceFactorRequest>
    BaselinePerformanceFactorsRequest& WithCpu(CpuT&& value) { SetCpu(std::forward<CpuT>(value)); return *this;}
    ///@}
  private:

    CpuPerformanceFactorRequest m_cpu;
    bool m_cpuHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
