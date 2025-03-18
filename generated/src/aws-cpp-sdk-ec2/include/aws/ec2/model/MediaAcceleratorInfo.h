﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/MediaDeviceInfo.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MediaAcceleratorInfo">AWS
   * API Reference</a></p>
   */
  class MediaAcceleratorInfo
  {
  public:
    AWS_EC2_API MediaAcceleratorInfo() = default;
    AWS_EC2_API MediaAcceleratorInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API MediaAcceleratorInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Describes the media accelerators for the instance type.</p>
     */
    inline const Aws::Vector<MediaDeviceInfo>& GetAccelerators() const { return m_accelerators; }
    inline bool AcceleratorsHasBeenSet() const { return m_acceleratorsHasBeenSet; }
    template<typename AcceleratorsT = Aws::Vector<MediaDeviceInfo>>
    void SetAccelerators(AcceleratorsT&& value) { m_acceleratorsHasBeenSet = true; m_accelerators = std::forward<AcceleratorsT>(value); }
    template<typename AcceleratorsT = Aws::Vector<MediaDeviceInfo>>
    MediaAcceleratorInfo& WithAccelerators(AcceleratorsT&& value) { SetAccelerators(std::forward<AcceleratorsT>(value)); return *this;}
    template<typename AcceleratorsT = MediaDeviceInfo>
    MediaAcceleratorInfo& AddAccelerators(AcceleratorsT&& value) { m_acceleratorsHasBeenSet = true; m_accelerators.emplace_back(std::forward<AcceleratorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total size of the memory for the media accelerators for the instance
     * type, in MiB.</p>
     */
    inline int GetTotalMediaMemoryInMiB() const { return m_totalMediaMemoryInMiB; }
    inline bool TotalMediaMemoryInMiBHasBeenSet() const { return m_totalMediaMemoryInMiBHasBeenSet; }
    inline void SetTotalMediaMemoryInMiB(int value) { m_totalMediaMemoryInMiBHasBeenSet = true; m_totalMediaMemoryInMiB = value; }
    inline MediaAcceleratorInfo& WithTotalMediaMemoryInMiB(int value) { SetTotalMediaMemoryInMiB(value); return *this;}
    ///@}
  private:

    Aws::Vector<MediaDeviceInfo> m_accelerators;
    bool m_acceleratorsHasBeenSet = false;

    int m_totalMediaMemoryInMiB{0};
    bool m_totalMediaMemoryInMiBHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
