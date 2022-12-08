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
    AWS_EC2_API GpuInfo();
    AWS_EC2_API GpuInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API GpuInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Describes the GPU accelerators for the instance type.</p>
     */
    inline const Aws::Vector<GpuDeviceInfo>& GetGpus() const{ return m_gpus; }

    /**
     * <p>Describes the GPU accelerators for the instance type.</p>
     */
    inline bool GpusHasBeenSet() const { return m_gpusHasBeenSet; }

    /**
     * <p>Describes the GPU accelerators for the instance type.</p>
     */
    inline void SetGpus(const Aws::Vector<GpuDeviceInfo>& value) { m_gpusHasBeenSet = true; m_gpus = value; }

    /**
     * <p>Describes the GPU accelerators for the instance type.</p>
     */
    inline void SetGpus(Aws::Vector<GpuDeviceInfo>&& value) { m_gpusHasBeenSet = true; m_gpus = std::move(value); }

    /**
     * <p>Describes the GPU accelerators for the instance type.</p>
     */
    inline GpuInfo& WithGpus(const Aws::Vector<GpuDeviceInfo>& value) { SetGpus(value); return *this;}

    /**
     * <p>Describes the GPU accelerators for the instance type.</p>
     */
    inline GpuInfo& WithGpus(Aws::Vector<GpuDeviceInfo>&& value) { SetGpus(std::move(value)); return *this;}

    /**
     * <p>Describes the GPU accelerators for the instance type.</p>
     */
    inline GpuInfo& AddGpus(const GpuDeviceInfo& value) { m_gpusHasBeenSet = true; m_gpus.push_back(value); return *this; }

    /**
     * <p>Describes the GPU accelerators for the instance type.</p>
     */
    inline GpuInfo& AddGpus(GpuDeviceInfo&& value) { m_gpusHasBeenSet = true; m_gpus.push_back(std::move(value)); return *this; }


    /**
     * <p>The total size of the memory for the GPU accelerators for the instance type,
     * in MiB.</p>
     */
    inline int GetTotalGpuMemoryInMiB() const{ return m_totalGpuMemoryInMiB; }

    /**
     * <p>The total size of the memory for the GPU accelerators for the instance type,
     * in MiB.</p>
     */
    inline bool TotalGpuMemoryInMiBHasBeenSet() const { return m_totalGpuMemoryInMiBHasBeenSet; }

    /**
     * <p>The total size of the memory for the GPU accelerators for the instance type,
     * in MiB.</p>
     */
    inline void SetTotalGpuMemoryInMiB(int value) { m_totalGpuMemoryInMiBHasBeenSet = true; m_totalGpuMemoryInMiB = value; }

    /**
     * <p>The total size of the memory for the GPU accelerators for the instance type,
     * in MiB.</p>
     */
    inline GpuInfo& WithTotalGpuMemoryInMiB(int value) { SetTotalGpuMemoryInMiB(value); return *this;}

  private:

    Aws::Vector<GpuDeviceInfo> m_gpus;
    bool m_gpusHasBeenSet = false;

    int m_totalGpuMemoryInMiB;
    bool m_totalGpuMemoryInMiBHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
