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
   * <p>Describes a Reserved Instance offering.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PricingDetail">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API PricingDetail
  {
  public:
    PricingDetail();
    PricingDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    PricingDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The number of reservations available for the price.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of reservations available for the price.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of reservations available for the price.</p>
     */
    inline PricingDetail& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The price per instance.</p>
     */
    inline double GetPrice() const{ return m_price; }

    /**
     * <p>The price per instance.</p>
     */
    inline void SetPrice(double value) { m_priceHasBeenSet = true; m_price = value; }

    /**
     * <p>The price per instance.</p>
     */
    inline PricingDetail& WithPrice(double value) { SetPrice(value); return *this;}

  private:

    int m_count;
    bool m_countHasBeenSet;

    double m_price;
    bool m_priceHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
