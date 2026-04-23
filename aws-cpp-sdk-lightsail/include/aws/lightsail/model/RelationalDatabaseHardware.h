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
  class AWS_LIGHTSAIL_API RelationalDatabaseHardware
  {
  public:
    RelationalDatabaseHardware();
    RelationalDatabaseHardware(Aws::Utils::Json::JsonView jsonValue);
    RelationalDatabaseHardware& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of vCPUs for the database.</p>
     */
    inline int GetCpuCount() const{ return m_cpuCount; }

    /**
     * <p>The number of vCPUs for the database.</p>
     */
    inline bool CpuCountHasBeenSet() const { return m_cpuCountHasBeenSet; }

    /**
     * <p>The number of vCPUs for the database.</p>
     */
    inline void SetCpuCount(int value) { m_cpuCountHasBeenSet = true; m_cpuCount = value; }

    /**
     * <p>The number of vCPUs for the database.</p>
     */
    inline RelationalDatabaseHardware& WithCpuCount(int value) { SetCpuCount(value); return *this;}


    /**
     * <p>The size of the disk for the database.</p>
     */
    inline int GetDiskSizeInGb() const{ return m_diskSizeInGb; }

    /**
     * <p>The size of the disk for the database.</p>
     */
    inline bool DiskSizeInGbHasBeenSet() const { return m_diskSizeInGbHasBeenSet; }

    /**
     * <p>The size of the disk for the database.</p>
     */
    inline void SetDiskSizeInGb(int value) { m_diskSizeInGbHasBeenSet = true; m_diskSizeInGb = value; }

    /**
     * <p>The size of the disk for the database.</p>
     */
    inline RelationalDatabaseHardware& WithDiskSizeInGb(int value) { SetDiskSizeInGb(value); return *this;}


    /**
     * <p>The amount of RAM in GB for the database.</p>
     */
    inline double GetRamSizeInGb() const{ return m_ramSizeInGb; }

    /**
     * <p>The amount of RAM in GB for the database.</p>
     */
    inline bool RamSizeInGbHasBeenSet() const { return m_ramSizeInGbHasBeenSet; }

    /**
     * <p>The amount of RAM in GB for the database.</p>
     */
    inline void SetRamSizeInGb(double value) { m_ramSizeInGbHasBeenSet = true; m_ramSizeInGb = value; }

    /**
     * <p>The amount of RAM in GB for the database.</p>
     */
    inline RelationalDatabaseHardware& WithRamSizeInGb(double value) { SetRamSizeInGb(value); return *this;}

  private:

    int m_cpuCount;
    bool m_cpuCountHasBeenSet;

    int m_diskSizeInGb;
    bool m_diskSizeInGbHasBeenSet;

    double m_ramSizeInGb;
    bool m_ramSizeInGbHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
