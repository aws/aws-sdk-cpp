/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/FpgaDeviceMemoryInfo.h>
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
   * <p>Describes the FPGA accelerator for the instance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FpgaDeviceInfo">AWS
   * API Reference</a></p>
   */
  class FpgaDeviceInfo
  {
  public:
    AWS_EC2_API FpgaDeviceInfo();
    AWS_EC2_API FpgaDeviceInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FpgaDeviceInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the FPGA accelerator.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the FPGA accelerator.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the FPGA accelerator.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the FPGA accelerator.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the FPGA accelerator.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the FPGA accelerator.</p>
     */
    inline FpgaDeviceInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the FPGA accelerator.</p>
     */
    inline FpgaDeviceInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the FPGA accelerator.</p>
     */
    inline FpgaDeviceInfo& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The manufacturer of the FPGA accelerator.</p>
     */
    inline const Aws::String& GetManufacturer() const{ return m_manufacturer; }

    /**
     * <p>The manufacturer of the FPGA accelerator.</p>
     */
    inline bool ManufacturerHasBeenSet() const { return m_manufacturerHasBeenSet; }

    /**
     * <p>The manufacturer of the FPGA accelerator.</p>
     */
    inline void SetManufacturer(const Aws::String& value) { m_manufacturerHasBeenSet = true; m_manufacturer = value; }

    /**
     * <p>The manufacturer of the FPGA accelerator.</p>
     */
    inline void SetManufacturer(Aws::String&& value) { m_manufacturerHasBeenSet = true; m_manufacturer = std::move(value); }

    /**
     * <p>The manufacturer of the FPGA accelerator.</p>
     */
    inline void SetManufacturer(const char* value) { m_manufacturerHasBeenSet = true; m_manufacturer.assign(value); }

    /**
     * <p>The manufacturer of the FPGA accelerator.</p>
     */
    inline FpgaDeviceInfo& WithManufacturer(const Aws::String& value) { SetManufacturer(value); return *this;}

    /**
     * <p>The manufacturer of the FPGA accelerator.</p>
     */
    inline FpgaDeviceInfo& WithManufacturer(Aws::String&& value) { SetManufacturer(std::move(value)); return *this;}

    /**
     * <p>The manufacturer of the FPGA accelerator.</p>
     */
    inline FpgaDeviceInfo& WithManufacturer(const char* value) { SetManufacturer(value); return *this;}


    /**
     * <p>The count of FPGA accelerators for the instance type.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The count of FPGA accelerators for the instance type.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The count of FPGA accelerators for the instance type.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The count of FPGA accelerators for the instance type.</p>
     */
    inline FpgaDeviceInfo& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>Describes the memory for the FPGA accelerator for the instance type.</p>
     */
    inline const FpgaDeviceMemoryInfo& GetMemoryInfo() const{ return m_memoryInfo; }

    /**
     * <p>Describes the memory for the FPGA accelerator for the instance type.</p>
     */
    inline bool MemoryInfoHasBeenSet() const { return m_memoryInfoHasBeenSet; }

    /**
     * <p>Describes the memory for the FPGA accelerator for the instance type.</p>
     */
    inline void SetMemoryInfo(const FpgaDeviceMemoryInfo& value) { m_memoryInfoHasBeenSet = true; m_memoryInfo = value; }

    /**
     * <p>Describes the memory for the FPGA accelerator for the instance type.</p>
     */
    inline void SetMemoryInfo(FpgaDeviceMemoryInfo&& value) { m_memoryInfoHasBeenSet = true; m_memoryInfo = std::move(value); }

    /**
     * <p>Describes the memory for the FPGA accelerator for the instance type.</p>
     */
    inline FpgaDeviceInfo& WithMemoryInfo(const FpgaDeviceMemoryInfo& value) { SetMemoryInfo(value); return *this;}

    /**
     * <p>Describes the memory for the FPGA accelerator for the instance type.</p>
     */
    inline FpgaDeviceInfo& WithMemoryInfo(FpgaDeviceMemoryInfo&& value) { SetMemoryInfo(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_manufacturer;
    bool m_manufacturerHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;

    FpgaDeviceMemoryInfo m_memoryInfo;
    bool m_memoryInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
