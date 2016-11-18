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
#include <aws/elasticbeanstalk/model/ApplicationMetrics.h>
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

ApplicationMetrics::ApplicationMetrics() : 
    m_duration(0),
    m_durationHasBeenSet(false),
    m_requestCount(0),
    m_requestCountHasBeenSet(false),
    m_statusCodesHasBeenSet(false),
    m_latencyHasBeenSet(false)
{
}

ApplicationMetrics::ApplicationMetrics(const XmlNode& xmlNode) : 
    m_duration(0),
    m_durationHasBeenSet(false),
    m_requestCount(0),
    m_requestCountHasBeenSet(false),
    m_statusCodesHasBeenSet(false),
    m_latencyHasBeenSet(false)
{
  *this = xmlNode;
}

ApplicationMetrics& ApplicationMetrics::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode durationNode = resultNode.FirstChild("Duration");
    if(!durationNode.IsNull())
    {
      m_duration = StringUtils::ConvertToInt32(StringUtils::Trim(durationNode.GetText().c_str()).c_str());
      m_durationHasBeenSet = true;
    }
    XmlNode requestCountNode = resultNode.FirstChild("RequestCount");
    if(!requestCountNode.IsNull())
    {
      m_requestCount = StringUtils::ConvertToInt32(StringUtils::Trim(requestCountNode.GetText().c_str()).c_str());
      m_requestCountHasBeenSet = true;
    }
    XmlNode statusCodesNode = resultNode.FirstChild("StatusCodes");
    if(!statusCodesNode.IsNull())
    {
      m_statusCodes = statusCodesNode;
      m_statusCodesHasBeenSet = true;
    }
    XmlNode latencyNode = resultNode.FirstChild("Latency");
    if(!latencyNode.IsNull())
    {
      m_latency = latencyNode;
      m_latencyHasBeenSet = true;
    }
  }

  return *this;
}

void ApplicationMetrics::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_durationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Duration=" << m_duration << "&";
  }

  if(m_requestCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequestCount=" << m_requestCount << "&";
  }

  if(m_statusCodesHasBeenSet)
  {
      Aws::StringStream statusCodesLocationAndMemberSs;
      statusCodesLocationAndMemberSs << location << index << locationValue << ".StatusCodes";
      m_statusCodes.OutputToStream(oStream, statusCodesLocationAndMemberSs.str().c_str());
  }

  if(m_latencyHasBeenSet)
  {
      Aws::StringStream latencyLocationAndMemberSs;
      latencyLocationAndMemberSs << location << index << locationValue << ".Latency";
      m_latency.OutputToStream(oStream, latencyLocationAndMemberSs.str().c_str());
  }

}

void ApplicationMetrics::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_durationHasBeenSet)
  {
      oStream << location << ".Duration=" << m_duration << "&";
  }
  if(m_requestCountHasBeenSet)
  {
      oStream << location << ".RequestCount=" << m_requestCount << "&";
  }
  if(m_statusCodesHasBeenSet)
  {
      Aws::String statusCodesLocationAndMember(location);
      statusCodesLocationAndMember += ".StatusCodes";
      m_statusCodes.OutputToStream(oStream, statusCodesLocationAndMember.c_str());
  }
  if(m_latencyHasBeenSet)
  {
      Aws::String latencyLocationAndMember(location);
      latencyLocationAndMember += ".Latency";
      m_latency.OutputToStream(oStream, latencyLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
