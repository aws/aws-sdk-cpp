/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/CpuPerformanceFactor.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>The baseline performance to consider, using an instance family as a baseline
   * reference. The instance family establishes the lowest acceptable level of
   * performance. Amazon EC2 uses this baseline to guide instance type selection, but
   * there is no guarantee that the selected instance types will always exceed the
   * baseline for every application.</p> <p>Currently, this parameter only supports
   * CPU performance as a baseline performance factor. For example, specifying
   * <code>c6i</code> would use the CPU performance of the <code>c6i</code> family as
   * the baseline reference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/BaselinePerformanceFactors">AWS
   * API Reference</a></p>
   */
  class BaselinePerformanceFactors
  {
  public:
    AWS_EC2_API BaselinePerformanceFactors() = default;
    AWS_EC2_API BaselinePerformanceFactors(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API BaselinePerformanceFactors& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The CPU performance to consider, using an instance family as the baseline
     * reference.</p>
     */
    inline const CpuPerformanceFactor& GetCpu() const { return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    template<typename CpuT = CpuPerformanceFactor>
    void SetCpu(CpuT&& value) { m_cpuHasBeenSet = true; m_cpu = std::forward<CpuT>(value); }
    template<typename CpuT = CpuPerformanceFactor>
    BaselinePerformanceFactors& WithCpu(CpuT&& value) { SetCpu(std::forward<CpuT>(value)); return *this;}
    ///@}
  private:

    CpuPerformanceFactor m_cpu;
    bool m_cpuHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
