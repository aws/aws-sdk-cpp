/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_frequency(RecurringChargeFrequency::NOT_SET),
    m_frequencyHasBeenSet(false),
    m_amount(0.0),
    m_amountHasBeenSet(false)
{
}

RecurringCharge::RecurringCharge(const XmlNode& xmlNode) : 
    m_frequency(RecurringChargeFrequency::NOT_SET),
    m_frequencyHasBeenSet(false),
    m_amount(0.0),
    m_amountHasBeenSet(false)
{
  *this = xmlNode;
}

RecurringCharge& RecurringCharge::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode frequencyNode = resultNode.FirstChild("frequency");
    if(!frequencyNode.IsNull())
    {
      m_frequency = RecurringChargeFrequencyMapper::GetRecurringChargeFrequencyForName(StringUtils::Trim(frequencyNode.GetText().c_str()).c_str());
      m_frequencyHasBeenSet = true;
    }
    XmlNode amountNode = resultNode.FirstChild("amount");
    if(!amountNode.IsNull())
    {
      m_amount = StringUtils::ConvertToDouble(StringUtils::Trim(amountNode.GetText().c_str()).c_str());
      m_amountHasBeenSet = true;
    }
  }

  return *this;
}

void RecurringCharge::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_frequencyHasBeenSet)
  {
      oStream << location << index << locationValue << ".Frequency=" << RecurringChargeFrequencyMapper::GetNameForRecurringChargeFrequency(m_frequency) << "&";
  }

  if(m_amountHasBeenSet)
  {
        oStream << location << index << locationValue << ".Amount=" << StringUtils::URLEncode(m_amount) << "&";
  }

}

void RecurringCharge::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_frequencyHasBeenSet)
  {
      oStream << location << ".Frequency=" << RecurringChargeFrequencyMapper::GetNameForRecurringChargeFrequency(m_frequency) << "&";
  }
  if(m_amountHasBeenSet)
  {
        oStream << location << ".Amount=" << StringUtils::URLEncode(m_amount) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
