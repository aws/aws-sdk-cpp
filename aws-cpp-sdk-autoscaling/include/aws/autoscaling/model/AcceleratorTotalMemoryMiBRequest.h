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
   * <p>Specifies the minimum and maximum for the
   * <code>AcceleratorTotalMemoryMiB</code> object when you specify
   * <a>InstanceRequirements</a> for an Auto Scaling group.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AcceleratorTotalMemoryMiBRequest">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API AcceleratorTotalMemoryMiBRequest
  {
  public:
    AcceleratorTotalMemoryMiBRequest();
    AcceleratorTotalMemoryMiBRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AcceleratorTotalMemoryMiBRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The memory minimum in MiB.</p>
     */
    inline int GetMin() const{ return m_min; }

    /**
     * <p>The memory minimum in MiB.</p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p>The memory minimum in MiB.</p>
     */
    inline void SetMin(int value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p>The memory minimum in MiB.</p>
     */
    inline AcceleratorTotalMemoryMiBRequest& WithMin(int value) { SetMin(value); return *this;}


    /**
     * <p>The memory maximum in MiB.</p>
     */
    inline int GetMax() const{ return m_max; }

    /**
     * <p>The memory maximum in MiB.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The memory maximum in MiB.</p>
     */
    inline void SetMax(int value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The memory maximum in MiB.</p>
     */
    inline AcceleratorTotalMemoryMiBRequest& WithMax(int value) { SetMax(value); return *this;}

  private:

    int m_min;
    bool m_minHasBeenSet;

    int m_max;
    bool m_maxHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
