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

#include <aws/autoscaling/model/PredefinedMetricSpecification.h>
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

PredefinedMetricSpecification::PredefinedMetricSpecification() : 
    m_predefinedMetricType(MetricType::NOT_SET),
    m_predefinedMetricTypeHasBeenSet(false),
    m_resourceLabelHasBeenSet(false)
{
}

PredefinedMetricSpecification::PredefinedMetricSpecification(const XmlNode& xmlNode) : 
    m_predefinedMetricType(MetricType::NOT_SET),
    m_predefinedMetricTypeHasBeenSet(false),
    m_resourceLabelHasBeenSet(false)
{
  *this = xmlNode;
}

PredefinedMetricSpecification& PredefinedMetricSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode predefinedMetricTypeNode = resultNode.FirstChild("PredefinedMetricType");
    if(!predefinedMetricTypeNode.IsNull())
    {
      m_predefinedMetricType = MetricTypeMapper::GetMetricTypeForName(StringUtils::Trim(predefinedMetricTypeNode.GetText().c_str()).c_str());
      m_predefinedMetricTypeHasBeenSet = true;
    }
    XmlNode resourceLabelNode = resultNode.FirstChild("ResourceLabel");
    if(!resourceLabelNode.IsNull())
    {
      m_resourceLabel = resourceLabelNode.GetText();
      m_resourceLabelHasBeenSet = true;
    }
  }

  return *this;
}

void PredefinedMetricSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_predefinedMetricTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".PredefinedMetricType=" << MetricTypeMapper::GetNameForMetricType(m_predefinedMetricType) << "&";
  }

  if(m_resourceLabelHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceLabel=" << StringUtils::URLEncode(m_resourceLabel.c_str()) << "&";
  }

}

void PredefinedMetricSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_predefinedMetricTypeHasBeenSet)
  {
      oStream << location << ".PredefinedMetricType=" << MetricTypeMapper::GetNameForMetricType(m_predefinedMetricType) << "&";
  }
  if(m_resourceLabelHasBeenSet)
  {
      oStream << location << ".ResourceLabel=" << StringUtils::URLEncode(m_resourceLabel.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
