/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RecurringCharge.h>
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

RecurringCharge::RecurringCharge() : 
    m_amount(0.0),
    m_amountHasBeenSet(false),
    m_frequency(RecurringChargeFrequency::NOT_SET),
    m_frequencyHasBeenSet(false)
{
}

RecurringCharge::RecurringCharge(const XmlNode& xmlNode) : 
    m_amount(0.0),
    m_amountHasBeenSet(false),
    m_frequency(RecurringChargeFrequency::NOT_SET),
    m_frequencyHasBeenSet(false)
{
  *this = xmlNode;
}

RecurringCharge& RecurringCharge::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode amountNode = resultNode.FirstChild("amount");
    if(!amountNode.IsNull())
    {
      m_amount = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(amountNode.GetText()).c_str()).c_str());
      m_amountHasBeenSet = true;
    }
    XmlNode frequencyNode = resultNode.FirstChild("frequency");
    if(!frequencyNode.IsNull())
    {
      m_frequency = RecurringChargeFrequencyMapper::GetRecurringChargeFrequencyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(frequencyNode.GetText()).c_str()).c_str());
      m_frequencyHasBeenSet = true;
    }
  }

  return *this;
}

void RecurringCharge::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_amountHasBeenSet)
  {
        oStream << location << index << locationValue << ".Amount=" << StringUtils::URLEncode(m_amount) << "&";
  }

  if(m_frequencyHasBeenSet)
  {
      oStream << location << index << locationValue << ".Frequency=" << RecurringChargeFrequencyMapper::GetNameForRecurringChargeFrequency(m_frequency) << "&";
  }

}

void RecurringCharge::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_amountHasBeenSet)
  {
        oStream << location << ".Amount=" << StringUtils::URLEncode(m_amount) << "&";
  }
  if(m_frequencyHasBeenSet)
  {
      oStream << location << ".Frequency=" << RecurringChargeFrequencyMapper::GetNameForRecurringChargeFrequency(m_frequency) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
