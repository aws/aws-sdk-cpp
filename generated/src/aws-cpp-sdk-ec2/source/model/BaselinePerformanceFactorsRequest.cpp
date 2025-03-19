/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/BaselinePerformanceFactorsRequest.h>
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

BaselinePerformanceFactorsRequest::BaselinePerformanceFactorsRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

BaselinePerformanceFactorsRequest& BaselinePerformanceFactorsRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cpuNode = resultNode.FirstChild("Cpu");
    if(!cpuNode.IsNull())
    {
      m_cpu = cpuNode;
      m_cpuHasBeenSet = true;
    }
  }

  return *this;
}

void BaselinePerformanceFactorsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cpuHasBeenSet)
  {
      Aws::StringStream cpuLocationAndMemberSs;
      cpuLocationAndMemberSs << location << index << locationValue << ".Cpu";
      m_cpu.OutputToStream(oStream, cpuLocationAndMemberSs.str().c_str());
  }

}

void BaselinePerformanceFactorsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cpuHasBeenSet)
  {
      Aws::String cpuLocationAndMember(location);
      cpuLocationAndMember += ".Cpu";
      m_cpu.OutputToStream(oStream, cpuLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
