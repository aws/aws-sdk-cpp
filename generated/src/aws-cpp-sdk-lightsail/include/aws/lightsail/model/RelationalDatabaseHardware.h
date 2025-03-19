/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>

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
   * <p>Describes the hardware of a database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RelationalDatabaseHardware">AWS
   * API Reference</a></p>
   */
  class RelationalDatabaseHardware
  {
  public:
    AWS_LIGHTSAIL_API RelationalDatabaseHardware() = default;
    AWS_LIGHTSAIL_API RelationalDatabaseHardware(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API RelationalDatabaseHardware& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of vCPUs for the database.</p>
     */
    inline int GetCpuCount() const { return m_cpuCount; }
    inline bool CpuCountHasBeenSet() const { return m_cpuCountHasBeenSet; }
    inline void SetCpuCount(int value) { m_cpuCountHasBeenSet = true; m_cpuCount = value; }
    inline RelationalDatabaseHardware& WithCpuCount(int value) { SetCpuCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the disk for the database.</p>
     */
    inline int GetDiskSizeInGb() const { return m_diskSizeInGb; }
    inline bool DiskSizeInGbHasBeenSet() const { return m_diskSizeInGbHasBeenSet; }
    inline void SetDiskSizeInGb(int value) { m_diskSizeInGbHasBeenSet = true; m_diskSizeInGb = value; }
    inline RelationalDatabaseHardware& WithDiskSizeInGb(int value) { SetDiskSizeInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of RAM in GB for the database.</p>
     */
    inline double GetRamSizeInGb() const { return m_ramSizeInGb; }
    inline bool RamSizeInGbHasBeenSet() const { return m_ramSizeInGbHasBeenSet; }
    inline void SetRamSizeInGb(double value) { m_ramSizeInGbHasBeenSet = true; m_ramSizeInGb = value; }
    inline RelationalDatabaseHardware& WithRamSizeInGb(double value) { SetRamSizeInGb(value); return *this;}
    ///@}
  private:

    int m_cpuCount{0};
    bool m_cpuCountHasBeenSet = false;

    int m_diskSizeInGb{0};
    bool m_diskSizeInGbHasBeenSet = false;

    double m_ramSizeInGb{0.0};
    bool m_ramSizeInGbHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
