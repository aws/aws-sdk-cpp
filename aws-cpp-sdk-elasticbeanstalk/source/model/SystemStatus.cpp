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
#include <aws/elasticbeanstalk/model/SystemStatus.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

SystemStatus::SystemStatus() : 
    m_cPUUtilizationHasBeenSet(false),
    m_loadAverageHasBeenSet(false)
{
}

SystemStatus::SystemStatus(const XmlNode& xmlNode) : 
    m_cPUUtilizationHasBeenSet(false),
    m_loadAverageHasBeenSet(false)
{
  *this = xmlNode;
}

SystemStatus& SystemStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cPUUtilizationNode = resultNode.FirstChild("CPUUtilization");
    if(!cPUUtilizationNode.IsNull())
    {
      m_cPUUtilization = cPUUtilizationNode;
      m_cPUUtilizationHasBeenSet = true;
    }
    XmlNode loadAverageNode = resultNode.FirstChild("LoadAverage");
    if(!loadAverageNode.IsNull())
    {
      XmlNode loadAverageMember = loadAverageNode.FirstChild("member");
      while(!loadAverageMember.IsNull())
      {
         m_loadAverage.push_back(StringUtils::ConvertToDouble(StringUtils::Trim(loadAverageMember.GetText().c_str()).c_str()));
        loadAverageMember = loadAverageMember.NextNode("member");
      }

      m_loadAverageHasBeenSet = true;
    }
  }

  return *this;
}

void SystemStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cPUUtilizationHasBeenSet)
  {
      Aws::StringStream cPUUtilizationLocationAndMemberSs;
      cPUUtilizationLocationAndMemberSs << location << index << locationValue << ".CPUUtilization";
      m_cPUUtilization.OutputToStream(oStream, cPUUtilizationLocationAndMemberSs.str().c_str());
  }

  if(m_loadAverageHasBeenSet)
  {
      unsigned loadAverageIdx = 1;
      for(auto& item : m_loadAverage)
      {
        oStream << location << index << locationValue << ".LoadAverage.member." << loadAverageIdx++ << "=" << StringUtils::URLEncode(item) << "&";
      }
  }

}

void SystemStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cPUUtilizationHasBeenSet)
  {
      Aws::String cPUUtilizationLocationAndMember(location);
      cPUUtilizationLocationAndMember += ".CPUUtilization";
      m_cPUUtilization.OutputToStream(oStream, cPUUtilizationLocationAndMember.c_str());
  }
  if(m_loadAverageHasBeenSet)
  {
      unsigned loadAverageIdx = 1;
      for(auto& item : m_loadAverage)
      {
          oStream << location << ".LoadAverage.member." << loadAverageIdx++ << "=" << StringUtils::URLEncode(item) << "&";
      }
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
