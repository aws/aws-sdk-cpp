/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/GpuDeviceInfo.h>
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
   * <p>Describes the GPU accelerators for the instance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GpuInfo">AWS API
   * Reference</a></p>
   */
  class GpuInfo
  {
  public:
    AWS_EC2_API GpuInfo() = default;
    AWS_EC2_API GpuInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API GpuInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Describes the GPU accelerators for the instance type.</p>
     */
    inline const Aws::Vector<GpuDeviceInfo>& GetGpus() const { return m_gpus; }
    inline bool GpusHasBeenSet() const { return m_gpusHasBeenSet; }
    template<typename GpusT = Aws::Vector<GpuDeviceInfo>>
    void SetGpus(GpusT&& value) { m_gpusHasBeenSet = true; m_gpus = std::forward<GpusT>(value); }
    template<typename GpusT = Aws::Vector<GpuDeviceInfo>>
    GpuInfo& WithGpus(GpusT&& value) { SetGpus(std::forward<GpusT>(value)); return *this;}
    template<typename GpusT = GpuDeviceInfo>
    GpuInfo& AddGpus(GpusT&& value) { m_gpusHasBeenSet = true; m_gpus.emplace_back(std::forward<GpusT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total size of the memory for the GPU accelerators for the instance type,
     * in MiB.</p>
     */
    inline int GetTotalGpuMemoryInMiB() const { return m_totalGpuMemoryInMiB; }
    inline bool TotalGpuMemoryInMiBHasBeenSet() const { return m_totalGpuMemoryInMiBHasBeenSet; }
    inline void SetTotalGpuMemoryInMiB(int value) { m_totalGpuMemoryInMiBHasBeenSet = true; m_totalGpuMemoryInMiB = value; }
    inline GpuInfo& WithTotalGpuMemoryInMiB(int value) { SetTotalGpuMemoryInMiB(value); return *this;}
    ///@}
  private:

    Aws::Vector<GpuDeviceInfo> m_gpus;
    bool m_gpusHasBeenSet = false;

    int m_totalGpuMemoryInMiB{0};
    bool m_totalGpuMemoryInMiBHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
