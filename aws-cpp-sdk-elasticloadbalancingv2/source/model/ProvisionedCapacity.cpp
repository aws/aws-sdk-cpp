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

#include <aws/elasticloadbalancingv2/model/ProvisionedCapacity.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

ProvisionedCapacity::ProvisionedCapacity() : 
    m_minimumLBCapacityUnits(0),
    m_minimumLBCapacityUnitsHasBeenSet(false),
    m_status(ProvisionedCapacityStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_decreasesRemaining(0),
    m_decreasesRemainingHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

ProvisionedCapacity::ProvisionedCapacity(const XmlNode& xmlNode) : 
    m_minimumLBCapacityUnits(0),
    m_minimumLBCapacityUnitsHasBeenSet(false),
    m_status(ProvisionedCapacityStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_decreasesRemaining(0),
    m_decreasesRemainingHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = xmlNode;
}

ProvisionedCapacity& ProvisionedCapacity::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode minimumLBCapacityUnitsNode = resultNode.FirstChild("MinimumLBCapacityUnits");
    if(!minimumLBCapacityUnitsNode.IsNull())
    {
      m_minimumLBCapacityUnits = StringUtils::ConvertToInt32(StringUtils::Trim(minimumLBCapacityUnitsNode.GetText().c_str()).c_str());
      m_minimumLBCapacityUnitsHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ProvisionedCapacityStatusMapper::GetProvisionedCapacityStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode decreasesRemainingNode = resultNode.FirstChild("DecreasesRemaining");
    if(!decreasesRemainingNode.IsNull())
    {
      m_decreasesRemaining = StringUtils::ConvertToInt32(StringUtils::Trim(decreasesRemainingNode.GetText().c_str()).c_str());
      m_decreasesRemainingHasBeenSet = true;
    }
    XmlNode lastModifiedTimeNode = resultNode.FirstChild("LastModifiedTime");
    if(!lastModifiedTimeNode.IsNull())
    {
      m_lastModifiedTime = DateTime(StringUtils::Trim(lastModifiedTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_lastModifiedTimeHasBeenSet = true;
    }
  }

  return *this;
}

void ProvisionedCapacity::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_minimumLBCapacityUnitsHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinimumLBCapacityUnits=" << m_minimumLBCapacityUnits << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << ProvisionedCapacityStatusMapper::GetNameForProvisionedCapacityStatus(m_status) << "&";
  }

  if(m_decreasesRemainingHasBeenSet)
  {
      oStream << location << index << locationValue << ".DecreasesRemaining=" << m_decreasesRemaining << "&";
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastModifiedTime=" << StringUtils::URLEncode(m_lastModifiedTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void ProvisionedCapacity::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_minimumLBCapacityUnitsHasBeenSet)
  {
      oStream << location << ".MinimumLBCapacityUnits=" << m_minimumLBCapacityUnits << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << ProvisionedCapacityStatusMapper::GetNameForProvisionedCapacityStatus(m_status) << "&";
  }
  if(m_decreasesRemainingHasBeenSet)
  {
      oStream << location << ".DecreasesRemaining=" << m_decreasesRemaining << "&";
  }
  if(m_lastModifiedTimeHasBeenSet)
  {
      oStream << location << ".LastModifiedTime=" << StringUtils::URLEncode(m_lastModifiedTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
