/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ProcessorInfo.h>
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

ProcessorInfo::ProcessorInfo() : 
    m_supportedArchitecturesHasBeenSet(false),
    m_sustainedClockSpeedInGhz(0.0),
    m_sustainedClockSpeedInGhzHasBeenSet(false)
{
}

ProcessorInfo::ProcessorInfo(const XmlNode& xmlNode) : 
    m_supportedArchitecturesHasBeenSet(false),
    m_sustainedClockSpeedInGhz(0.0),
    m_sustainedClockSpeedInGhzHasBeenSet(false)
{
  *this = xmlNode;
}

ProcessorInfo& ProcessorInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode supportedArchitecturesNode = resultNode.FirstChild("supportedArchitectures");
    if(!supportedArchitecturesNode.IsNull())
    {
      XmlNode supportedArchitecturesMember = supportedArchitecturesNode.FirstChild("item");
      while(!supportedArchitecturesMember.IsNull())
      {
        m_supportedArchitectures.push_back(ArchitectureTypeMapper::GetArchitectureTypeForName(StringUtils::Trim(supportedArchitecturesMember.GetText().c_str())));
        supportedArchitecturesMember = supportedArchitecturesMember.NextNode("item");
      }

      m_supportedArchitecturesHasBeenSet = true;
    }
    XmlNode sustainedClockSpeedInGhzNode = resultNode.FirstChild("sustainedClockSpeedInGhz");
    if(!sustainedClockSpeedInGhzNode.IsNull())
    {
      m_sustainedClockSpeedInGhz = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sustainedClockSpeedInGhzNode.GetText()).c_str()).c_str());
      m_sustainedClockSpeedInGhzHasBeenSet = true;
    }
  }

  return *this;
}

void ProcessorInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_supportedArchitecturesHasBeenSet)
  {
      unsigned supportedArchitecturesIdx = 1;
      for(auto& item : m_supportedArchitectures)
      {
        oStream << location << index << locationValue << ".SupportedArchitectures." << supportedArchitecturesIdx++ << "=" << ArchitectureTypeMapper::GetNameForArchitectureType(item) << "&";
      }
  }

  if(m_sustainedClockSpeedInGhzHasBeenSet)
  {
        oStream << location << index << locationValue << ".SustainedClockSpeedInGhz=" << StringUtils::URLEncode(m_sustainedClockSpeedInGhz) << "&";
  }

}

void ProcessorInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_supportedArchitecturesHasBeenSet)
  {
      unsigned supportedArchitecturesIdx = 1;
      for(auto& item : m_supportedArchitectures)
      {
        oStream << location << ".SupportedArchitectures." << supportedArchitecturesIdx++ << "=" << ArchitectureTypeMapper::GetNameForArchitectureType(item) << "&";
      }
  }
  if(m_sustainedClockSpeedInGhzHasBeenSet)
  {
        oStream << location << ".SustainedClockSpeedInGhz=" << StringUtils::URLEncode(m_sustainedClockSpeedInGhz) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
