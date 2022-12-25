/**
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
   * <p>Specifies the minimum and maximum for the <code>TotalLocalStorageGB</code>
   * object when you specify <a>InstanceRequirements</a> for an Auto Scaling
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/TotalLocalStorageGBRequest">AWS
   * API Reference</a></p>
   */
  class TotalLocalStorageGBRequest
  {
  public:
    AWS_AUTOSCALING_API TotalLocalStorageGBRequest();
    AWS_AUTOSCALING_API TotalLocalStorageGBRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API TotalLocalStorageGBRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The storage minimum in GB.</p>
     */
    inline double GetMin() const{ return m_min; }

    /**
     * <p>The storage minimum in GB.</p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p>The storage minimum in GB.</p>
     */
    inline void SetMin(double value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p>The storage minimum in GB.</p>
     */
    inline TotalLocalStorageGBRequest& WithMin(double value) { SetMin(value); return *this;}


    /**
     * <p>The storage maximum in GB.</p>
     */
    inline double GetMax() const{ return m_max; }

    /**
     * <p>The storage maximum in GB.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The storage maximum in GB.</p>
     */
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The storage maximum in GB.</p>
     */
    inline TotalLocalStorageGBRequest& WithMax(double value) { SetMax(value); return *this;}

  private:

    double m_min;
    bool m_minHasBeenSet = false;

    double m_max;
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
