﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Specifies the minimum and maximum for the <code>MemoryMiB</code> object when
   * you specify <a>InstanceRequirements</a> for an Auto Scaling group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/MemoryMiBRequest">AWS
   * API Reference</a></p>
   */
  class MemoryMiBRequest
  {
  public:
    AWS_AUTOSCALING_API MemoryMiBRequest();
    AWS_AUTOSCALING_API MemoryMiBRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API MemoryMiBRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The memory minimum in MiB.</p>
     */
    inline int GetMin() const{ return m_min; }
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
    inline void SetMin(int value) { m_minHasBeenSet = true; m_min = value; }
    inline MemoryMiBRequest& WithMin(int value) { SetMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The memory maximum in MiB.</p>
     */
    inline int GetMax() const{ return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    inline void SetMax(int value) { m_maxHasBeenSet = true; m_max = value; }
    inline MemoryMiBRequest& WithMax(int value) { SetMax(value); return *this;}
    ///@}
  private:

    int m_min;
    bool m_minHasBeenSet = false;

    int m_max;
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
