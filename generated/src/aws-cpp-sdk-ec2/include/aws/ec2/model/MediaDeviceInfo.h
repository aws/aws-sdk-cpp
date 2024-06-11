﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/MediaDeviceMemoryInfo.h>
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
   * <p>Describes the media accelerators for the instance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MediaDeviceInfo">AWS
   * API Reference</a></p>
   */
  class MediaDeviceInfo
  {
  public:
    AWS_EC2_API MediaDeviceInfo();
    AWS_EC2_API MediaDeviceInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API MediaDeviceInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The number of media accelerators for the instance type.</p>
     */
    inline int GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline MediaDeviceInfo& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the media accelerator.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline MediaDeviceInfo& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MediaDeviceInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MediaDeviceInfo& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The manufacturer of the media accelerator.</p>
     */
    inline const Aws::String& GetManufacturer() const{ return m_manufacturer; }
    inline bool ManufacturerHasBeenSet() const { return m_manufacturerHasBeenSet; }
    inline void SetManufacturer(const Aws::String& value) { m_manufacturerHasBeenSet = true; m_manufacturer = value; }
    inline void SetManufacturer(Aws::String&& value) { m_manufacturerHasBeenSet = true; m_manufacturer = std::move(value); }
    inline void SetManufacturer(const char* value) { m_manufacturerHasBeenSet = true; m_manufacturer.assign(value); }
    inline MediaDeviceInfo& WithManufacturer(const Aws::String& value) { SetManufacturer(value); return *this;}
    inline MediaDeviceInfo& WithManufacturer(Aws::String&& value) { SetManufacturer(std::move(value)); return *this;}
    inline MediaDeviceInfo& WithManufacturer(const char* value) { SetManufacturer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the memory available to the media accelerator.</p>
     */
    inline const MediaDeviceMemoryInfo& GetMemoryInfo() const{ return m_memoryInfo; }
    inline bool MemoryInfoHasBeenSet() const { return m_memoryInfoHasBeenSet; }
    inline void SetMemoryInfo(const MediaDeviceMemoryInfo& value) { m_memoryInfoHasBeenSet = true; m_memoryInfo = value; }
    inline void SetMemoryInfo(MediaDeviceMemoryInfo&& value) { m_memoryInfoHasBeenSet = true; m_memoryInfo = std::move(value); }
    inline MediaDeviceInfo& WithMemoryInfo(const MediaDeviceMemoryInfo& value) { SetMemoryInfo(value); return *this;}
    inline MediaDeviceInfo& WithMemoryInfo(MediaDeviceMemoryInfo&& value) { SetMemoryInfo(std::move(value)); return *this;}
    ///@}
  private:

    int m_count;
    bool m_countHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_manufacturer;
    bool m_manufacturerHasBeenSet = false;

    MediaDeviceMemoryInfo m_memoryInfo;
    bool m_memoryInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
