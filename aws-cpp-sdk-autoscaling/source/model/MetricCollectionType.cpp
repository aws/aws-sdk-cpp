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

#include <aws/autoscaling/model/MetricCollectionType.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

MetricCollectionType::MetricCollectionType() : 
    m_metricHasBeenSet(false)
{
}

MetricCollectionType::MetricCollectionType(const XmlNode& xmlNode) : 
    m_metricHasBeenSet(false)
{
  *this = xmlNode;
}

MetricCollectionType& MetricCollectionType::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode metricNode = resultNode.FirstChild("Metric");
    if(!metricNode.IsNull())
    {
      m_metric = metricNode.GetText();
      m_metricHasBeenSet = true;
    }
  }

  return *this;
}

void MetricCollectionType::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_metricHasBeenSet)
  {
      oStream << location << index << locationValue << ".Metric=" << StringUtils::URLEncode(m_metric.c_str()) << "&";
  }

}

void MetricCollectionType::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_metricHasBeenSet)
  {
      oStream << location << ".Metric=" << StringUtils::URLEncode(m_metric.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
