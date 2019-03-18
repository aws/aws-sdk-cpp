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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/Disk.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the hardware for the instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InstanceHardware">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API InstanceHardware
  {
  public:
    InstanceHardware();
    InstanceHardware(Aws::Utils::Json::JsonView jsonValue);
    InstanceHardware& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of vCPUs the instance has.</p>
     */
    inline int GetCpuCount() const{ return m_cpuCount; }

    /**
     * <p>The number of vCPUs the instance has.</p>
     */
    inline bool CpuCountHasBeenSet() const { return m_cpuCountHasBeenSet; }

    /**
     * <p>The number of vCPUs the instance has.</p>
     */
    inline void SetCpuCount(int value) { m_cpuCountHasBeenSet = true; m_cpuCount = value; }

    /**
     * <p>The number of vCPUs the instance has.</p>
     */
    inline InstanceHardware& WithCpuCount(int value) { SetCpuCount(value); return *this;}


    /**
     * <p>The disks attached to the instance.</p>
     */
    inline const Aws::Vector<Disk>& GetDisks() const{ return m_disks; }

    /**
     * <p>The disks attached to the instance.</p>
     */
    inline bool DisksHasBeenSet() const { return m_disksHasBeenSet; }

    /**
     * <p>The disks attached to the instance.</p>
     */
    inline void SetDisks(const Aws::Vector<Disk>& value) { m_disksHasBeenSet = true; m_disks = value; }

    /**
     * <p>The disks attached to the instance.</p>
     */
    inline void SetDisks(Aws::Vector<Disk>&& value) { m_disksHasBeenSet = true; m_disks = std::move(value); }

    /**
     * <p>The disks attached to the instance.</p>
     */
    inline InstanceHardware& WithDisks(const Aws::Vector<Disk>& value) { SetDisks(value); return *this;}

    /**
     * <p>The disks attached to the instance.</p>
     */
    inline InstanceHardware& WithDisks(Aws::Vector<Disk>&& value) { SetDisks(std::move(value)); return *this;}

    /**
     * <p>The disks attached to the instance.</p>
     */
    inline InstanceHardware& AddDisks(const Disk& value) { m_disksHasBeenSet = true; m_disks.push_back(value); return *this; }

    /**
     * <p>The disks attached to the instance.</p>
     */
    inline InstanceHardware& AddDisks(Disk&& value) { m_disksHasBeenSet = true; m_disks.push_back(std::move(value)); return *this; }


    /**
     * <p>The amount of RAM in GB on the instance (e.g., <code>1.0</code>).</p>
     */
    inline double GetRamSizeInGb() const{ return m_ramSizeInGb; }

    /**
     * <p>The amount of RAM in GB on the instance (e.g., <code>1.0</code>).</p>
     */
    inline bool RamSizeInGbHasBeenSet() const { return m_ramSizeInGbHasBeenSet; }

    /**
     * <p>The amount of RAM in GB on the instance (e.g., <code>1.0</code>).</p>
     */
    inline void SetRamSizeInGb(double value) { m_ramSizeInGbHasBeenSet = true; m_ramSizeInGb = value; }

    /**
     * <p>The amount of RAM in GB on the instance (e.g., <code>1.0</code>).</p>
     */
    inline InstanceHardware& WithRamSizeInGb(double value) { SetRamSizeInGb(value); return *this;}

  private:

    int m_cpuCount;
    bool m_cpuCountHasBeenSet;

    Aws::Vector<Disk> m_disks;
    bool m_disksHasBeenSet;

    double m_ramSizeInGb;
    bool m_ramSizeInGbHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
