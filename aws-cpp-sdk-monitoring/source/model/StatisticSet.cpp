/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/monitoring/model/StatisticSet.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

StatisticSet::StatisticSet() : 
    m_sampleCount(0.0),
    m_sum(0.0),
    m_minimum(0.0),
    m_maximum(0.0)
{
}

StatisticSet::StatisticSet(const XmlNode& xmlNode) : 
    m_sampleCount(0.0),
    m_sum(0.0),
    m_minimum(0.0),
    m_maximum(0.0)
{
  *this = xmlNode;
}

StatisticSet& StatisticSet::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sampleCountNode = resultNode.FirstChild("SampleCount");
    m_sampleCount = StringUtils::ConvertToDouble(StringUtils::Trim(sampleCountNode.GetText().c_str()).c_str());
    XmlNode sumNode = resultNode.FirstChild("Sum");
    m_sum = StringUtils::ConvertToDouble(StringUtils::Trim(sumNode.GetText().c_str()).c_str());
    XmlNode minimumNode = resultNode.FirstChild("Minimum");
    m_minimum = StringUtils::ConvertToDouble(StringUtils::Trim(minimumNode.GetText().c_str()).c_str());
    XmlNode maximumNode = resultNode.FirstChild("Maximum");
    m_maximum = StringUtils::ConvertToDouble(StringUtils::Trim(maximumNode.GetText().c_str()).c_str());
  }

  return *this;
}

void StatisticSet::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".SampleCount=" << m_sampleCount << "&";
  oStream << location << index << locationValue << ".Sum=" << m_sum << "&";
  oStream << location << index << locationValue << ".Minimum=" << m_minimum << "&";
  oStream << location << index << locationValue << ".Maximum=" << m_maximum << "&";
}

void StatisticSet::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".SampleCount=" << m_sampleCount << "&";
  oStream << location << ".Sum=" << m_sum << "&";
  oStream << location << ".Minimum=" << m_minimum << "&";
  oStream << location << ".Maximum=" << m_maximum << "&";
}
