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

#include <aws/rds/model/RecurringCharge.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

RecurringCharge::RecurringCharge() : 
    m_recurringChargeAmount(0.0),
    m_recurringChargeAmountHasBeenSet(false),
    m_recurringChargeFrequencyHasBeenSet(false)
{
}

RecurringCharge::RecurringCharge(const XmlNode& xmlNode) : 
    m_recurringChargeAmount(0.0),
    m_recurringChargeAmountHasBeenSet(false),
    m_recurringChargeFrequencyHasBeenSet(false)
{
  *this = xmlNode;
}

RecurringCharge& RecurringCharge::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode recurringChargeAmountNode = resultNode.FirstChild("RecurringChargeAmount");
    if(!recurringChargeAmountNode.IsNull())
    {
      m_recurringChargeAmount = StringUtils::ConvertToDouble(StringUtils::Trim(recurringChargeAmountNode.GetText().c_str()).c_str());
      m_recurringChargeAmountHasBeenSet = true;
    }
    XmlNode recurringChargeFrequencyNode = resultNode.FirstChild("RecurringChargeFrequency");
    if(!recurringChargeFrequencyNode.IsNull())
    {
      m_recurringChargeFrequency = recurringChargeFrequencyNode.GetText();
      m_recurringChargeFrequencyHasBeenSet = true;
    }
  }

  return *this;
}

void RecurringCharge::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_recurringChargeAmountHasBeenSet)
  {
        oStream << location << index << locationValue << ".RecurringChargeAmount=" << StringUtils::URLEncode(m_recurringChargeAmount) << "&";
  }

  if(m_recurringChargeFrequencyHasBeenSet)
  {
      oStream << location << index << locationValue << ".RecurringChargeFrequency=" << StringUtils::URLEncode(m_recurringChargeFrequency.c_str()) << "&";
  }

}

void RecurringCharge::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_recurringChargeAmountHasBeenSet)
  {
        oStream << location << ".RecurringChargeAmount=" << StringUtils::URLEncode(m_recurringChargeAmount) << "&";
  }
  if(m_recurringChargeFrequencyHasBeenSet)
  {
      oStream << location << ".RecurringChargeFrequency=" << StringUtils::URLEncode(m_recurringChargeFrequency.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
