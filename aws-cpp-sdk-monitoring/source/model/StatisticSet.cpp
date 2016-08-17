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
#include <aws/monitoring/model/StatisticSet.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

StatisticSet::StatisticSet() : 
    m_sampleCount(0.0),
    m_sampleCountHasBeenSet(false),
    m_sum(0.0),
    m_sumHasBeenSet(false),
    m_minimum(0.0),
    m_minimumHasBeenSet(false),
    m_maximum(0.0),
    m_maximumHasBeenSet(false)
{
}

StatisticSet::StatisticSet(const XmlNode& xmlNode) : 
    m_sampleCount(0.0),
    m_sampleCountHasBeenSet(false),
    m_sum(0.0),
    m_sumHasBeenSet(false),
    m_minimum(0.0),
    m_minimumHasBeenSet(false),
    m_maximum(0.0),
    m_maximumHasBeenSet(false)
{
  *this = xmlNode;
}

StatisticSet& StatisticSet::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sampleCountNode = resultNode.FirstChild("SampleCount");
    if(!sampleCountNode.IsNull())
    {
      m_sampleCount = StringUtils::ConvertToDouble(StringUtils::Trim(sampleCountNode.GetText().c_str()).c_str());
      m_sampleCountHasBeenSet = true;
    }
    XmlNode sumNode = resultNode.FirstChild("Sum");
    if(!sumNode.IsNull())
    {
      m_sum = StringUtils::ConvertToDouble(StringUtils::Trim(sumNode.GetText().c_str()).c_str());
      m_sumHasBeenSet = true;
    }
    XmlNode minimumNode = resultNode.FirstChild("Minimum");
    if(!minimumNode.IsNull())
    {
      m_minimum = StringUtils::ConvertToDouble(StringUtils::Trim(minimumNode.GetText().c_str()).c_str());
      m_minimumHasBeenSet = true;
    }
    XmlNode maximumNode = resultNode.FirstChild("Maximum");
    if(!maximumNode.IsNull())
    {
      m_maximum = StringUtils::ConvertToDouble(StringUtils::Trim(maximumNode.GetText().c_str()).c_str());
      m_maximumHasBeenSet = true;
    }
  }

  return *this;
}

void StatisticSet::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sampleCountHasBeenSet)
  {
        oStream << location << index << locationValue << ".SampleCount=" << StringUtils::URLEncode(m_sampleCount) << "&";
  }

  if(m_sumHasBeenSet)
  {
        oStream << location << index << locationValue << ".Sum=" << StringUtils::URLEncode(m_sum) << "&";
  }

  if(m_minimumHasBeenSet)
  {
        oStream << location << index << locationValue << ".Minimum=" << StringUtils::URLEncode(m_minimum) << "&";
  }

  if(m_maximumHasBeenSet)
  {
        oStream << location << index << locationValue << ".Maximum=" << StringUtils::URLEncode(m_maximum) << "&";
  }

}

void StatisticSet::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sampleCountHasBeenSet)
  {
        oStream << location << ".SampleCount=" << StringUtils::URLEncode(m_sampleCount) << "&";
  }
  if(m_sumHasBeenSet)
  {
        oStream << location << ".Sum=" << StringUtils::URLEncode(m_sum) << "&";
  }
  if(m_minimumHasBeenSet)
  {
        oStream << location << ".Minimum=" << StringUtils::URLEncode(m_minimum) << "&";
  }
  if(m_maximumHasBeenSet)
  {
        oStream << location << ".Maximum=" << StringUtils::URLEncode(m_maximum) << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
