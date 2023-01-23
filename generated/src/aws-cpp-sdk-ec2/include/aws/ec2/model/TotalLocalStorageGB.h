/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>The minimum and maximum amount of total local storage, in GB.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TotalLocalStorageGB">AWS
   * API Reference</a></p>
   */
  class TotalLocalStorageGB
  {
  public:
    AWS_EC2_API TotalLocalStorageGB();
    AWS_EC2_API TotalLocalStorageGB(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TotalLocalStorageGB& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The minimum amount of total local storage, in GB. If this parameter is not
     * specified, there is no minimum limit.</p>
     */
    inline double GetMin() const{ return m_min; }

    /**
     * <p>The minimum amount of total local storage, in GB. If this parameter is not
     * specified, there is no minimum limit.</p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p>The minimum amount of total local storage, in GB. If this parameter is not
     * specified, there is no minimum limit.</p>
     */
    inline void SetMin(double value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p>The minimum amount of total local storage, in GB. If this parameter is not
     * specified, there is no minimum limit.</p>
     */
    inline TotalLocalStorageGB& WithMin(double value) { SetMin(value); return *this;}


    /**
     * <p>The maximum amount of total local storage, in GB. If this parameter is not
     * specified, there is no maximum limit.</p>
     */
    inline double GetMax() const{ return m_max; }

    /**
     * <p>The maximum amount of total local storage, in GB. If this parameter is not
     * specified, there is no maximum limit.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The maximum amount of total local storage, in GB. If this parameter is not
     * specified, there is no maximum limit.</p>
     */
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The maximum amount of total local storage, in GB. If this parameter is not
     * specified, there is no maximum limit.</p>
     */
    inline TotalLocalStorageGB& WithMax(double value) { SetMax(value); return *this;}

  private:

    double m_min;
    bool m_minHasBeenSet = false;

    double m_max;
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
