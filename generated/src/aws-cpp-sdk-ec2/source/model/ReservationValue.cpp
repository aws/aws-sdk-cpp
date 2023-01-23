/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_hourlyPriceHasBeenSet(false),
    m_remainingTotalValueHasBeenSet(false),
    m_remainingUpfrontValueHasBeenSet(false)
{
}

ReservationValue::ReservationValue(const XmlNode& xmlNode) : 
    m_hourlyPriceHasBeenSet(false),
    m_remainingTotalValueHasBeenSet(false),
    m_remainingUpfrontValueHasBeenSet(false)
{
  *this = xmlNode;
}

ReservationValue& ReservationValue::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode hourlyPriceNode = resultNode.FirstChild("hourlyPrice");
    if(!hourlyPriceNode.IsNull())
    {
      m_hourlyPrice = Aws::Utils::Xml::DecodeEscapedXmlText(hourlyPriceNode.GetText());
      m_hourlyPriceHasBeenSet = true;
    }
    XmlNode remainingTotalValueNode = resultNode.FirstChild("remainingTotalValue");
    if(!remainingTotalValueNode.IsNull())
    {
      m_remainingTotalValue = Aws::Utils::Xml::DecodeEscapedXmlText(remainingTotalValueNode.GetText());
      m_remainingTotalValueHasBeenSet = true;
    }
    XmlNode remainingUpfrontValueNode = resultNode.FirstChild("remainingUpfrontValue");
    if(!remainingUpfrontValueNode.IsNull())
    {
      m_remainingUpfrontValue = Aws::Utils::Xml::DecodeEscapedXmlText(remainingUpfrontValueNode.GetText());
      m_remainingUpfrontValueHasBeenSet = true;
    }
  }

  return *this;
}

void ReservationValue::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_hourlyPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".HourlyPrice=" << StringUtils::URLEncode(m_hourlyPrice.c_str()) << "&";
  }

  if(m_remainingTotalValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".RemainingTotalValue=" << StringUtils::URLEncode(m_remainingTotalValue.c_str()) << "&";
  }

  if(m_remainingUpfrontValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".RemainingUpfrontValue=" << StringUtils::URLEncode(m_remainingUpfrontValue.c_str()) << "&";
  }

}

void ReservationValue::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_hourlyPriceHasBeenSet)
  {
      oStream << location << ".HourlyPrice=" << StringUtils::URLEncode(m_hourlyPrice.c_str()) << "&";
  }
  if(m_remainingTotalValueHasBeenSet)
  {
      oStream << location << ".RemainingTotalValue=" << StringUtils::URLEncode(m_remainingTotalValue.c_str()) << "&";
  }
  if(m_remainingUpfrontValueHasBeenSet)
  {
      oStream << location << ".RemainingUpfrontValue=" << StringUtils::URLEncode(m_remainingUpfrontValue.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
