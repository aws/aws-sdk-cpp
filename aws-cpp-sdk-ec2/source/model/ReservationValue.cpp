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

#include <aws/ec2/model/ReservationValue.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

ReservationValue::ReservationValue() : 
    m_remainingTotalValueHasBeenSet(false),
    m_remainingUpfrontValueHasBeenSet(false),
    m_hourlyPriceHasBeenSet(false)
{
}

ReservationValue::ReservationValue(const XmlNode& xmlNode) : 
    m_remainingTotalValueHasBeenSet(false),
    m_remainingUpfrontValueHasBeenSet(false),
    m_hourlyPriceHasBeenSet(false)
{
  *this = xmlNode;
}

ReservationValue& ReservationValue::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode remainingTotalValueNode = resultNode.FirstChild("remainingTotalValue");
    if(!remainingTotalValueNode.IsNull())
    {
      m_remainingTotalValue = StringUtils::Trim(remainingTotalValueNode.GetText().c_str());
      m_remainingTotalValueHasBeenSet = true;
    }
    XmlNode remainingUpfrontValueNode = resultNode.FirstChild("remainingUpfrontValue");
    if(!remainingUpfrontValueNode.IsNull())
    {
      m_remainingUpfrontValue = StringUtils::Trim(remainingUpfrontValueNode.GetText().c_str());
      m_remainingUpfrontValueHasBeenSet = true;
    }
    XmlNode hourlyPriceNode = resultNode.FirstChild("hourlyPrice");
    if(!hourlyPriceNode.IsNull())
    {
      m_hourlyPrice = StringUtils::Trim(hourlyPriceNode.GetText().c_str());
      m_hourlyPriceHasBeenSet = true;
    }
  }

  return *this;
}

void ReservationValue::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_remainingTotalValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".RemainingTotalValue=" << StringUtils::URLEncode(m_remainingTotalValue.c_str()) << "&";
  }

  if(m_remainingUpfrontValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".RemainingUpfrontValue=" << StringUtils::URLEncode(m_remainingUpfrontValue.c_str()) << "&";
  }

  if(m_hourlyPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".HourlyPrice=" << StringUtils::URLEncode(m_hourlyPrice.c_str()) << "&";
  }

}

void ReservationValue::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_remainingTotalValueHasBeenSet)
  {
      oStream << location << ".RemainingTotalValue=" << StringUtils::URLEncode(m_remainingTotalValue.c_str()) << "&";
  }
  if(m_remainingUpfrontValueHasBeenSet)
  {
      oStream << location << ".RemainingUpfrontValue=" << StringUtils::URLEncode(m_remainingUpfrontValue.c_str()) << "&";
  }
  if(m_hourlyPriceHasBeenSet)
  {
      oStream << location << ".HourlyPrice=" << StringUtils::URLEncode(m_hourlyPrice.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
