﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/GpuDeviceMemoryInfo.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GpuDeviceInfo">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API GpuDeviceInfo
  {
  public:
    GpuDeviceInfo();
    GpuDeviceInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    GpuDeviceInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the GPU accelerator.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the GPU accelerator.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the GPU accelerator.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the GPU accelerator.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the GPU accelerator.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the GPU accelerator.</p>
     */
    inline GpuDeviceInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the GPU accelerator.</p>
     */
    inline GpuDeviceInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the GPU accelerator.</p>
     */
    inline GpuDeviceInfo& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The manufacturer of the GPU accelerator.</p>
     */
    inline const Aws::String& GetManufacturer() const{ return m_manufacturer; }

    /**
     * <p>The manufacturer of the GPU accelerator.</p>
     */
    inline bool ManufacturerHasBeenSet() const { return m_manufacturerHasBeenSet; }

    /**
     * <p>The manufacturer of the GPU accelerator.</p>
     */
    inline void SetManufacturer(const Aws::String& value) { m_manufacturerHasBeenSet = true; m_manufacturer = value; }

    /**
     * <p>The manufacturer of the GPU accelerator.</p>
     */
    inline void SetManufacturer(Aws::String&& value) { m_manufacturerHasBeenSet = true; m_manufacturer = std::move(value); }

    /**
     * <p>The manufacturer of the GPU accelerator.</p>
     */
    inline void SetManufacturer(const char* value) { m_manufacturerHasBeenSet = true; m_manufacturer.assign(value); }

    /**
     * <p>The manufacturer of the GPU accelerator.</p>
     */
    inline GpuDeviceInfo& WithManufacturer(const Aws::String& value) { SetManufacturer(value); return *this;}

    /**
     * <p>The manufacturer of the GPU accelerator.</p>
     */
    inline GpuDeviceInfo& WithManufacturer(Aws::String&& value) { SetManufacturer(std::move(value)); return *this;}

    /**
     * <p>The manufacturer of the GPU accelerator.</p>
     */
    inline GpuDeviceInfo& WithManufacturer(const char* value) { SetManufacturer(value); return *this;}


    /**
     * <p>The number of GPUs for the instance type.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of GPUs for the instance type.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of GPUs for the instance type.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of GPUs for the instance type.</p>
     */
    inline GpuDeviceInfo& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>Describes the memory available to the GPU accelerator.</p>
     */
    inline const GpuDeviceMemoryInfo& GetMemoryInfo() const{ return m_memoryInfo; }

    /**
     * <p>Describes the memory available to the GPU accelerator.</p>
     */
    inline bool MemoryInfoHasBeenSet() const { return m_memoryInfoHasBeenSet; }

    /**
     * <p>Describes the memory available to the GPU accelerator.</p>
     */
    inline void SetMemoryInfo(const GpuDeviceMemoryInfo& value) { m_memoryInfoHasBeenSet = true; m_memoryInfo = value; }

    /**
     * <p>Describes the memory available to the GPU accelerator.</p>
     */
    inline void SetMemoryInfo(GpuDeviceMemoryInfo&& value) { m_memoryInfoHasBeenSet = true; m_memoryInfo = std::move(value); }

    /**
     * <p>Describes the memory available to the GPU accelerator.</p>
     */
    inline GpuDeviceInfo& WithMemoryInfo(const GpuDeviceMemoryInfo& value) { SetMemoryInfo(value); return *this;}

    /**
     * <p>Describes the memory available to the GPU accelerator.</p>
     */
    inline GpuDeviceInfo& WithMemoryInfo(GpuDeviceMemoryInfo&& value) { SetMemoryInfo(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_manufacturer;
    bool m_manufacturerHasBeenSet;

    int m_count;
    bool m_countHasBeenSet;

    GpuDeviceMemoryInfo m_memoryInfo;
    bool m_memoryInfoHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
