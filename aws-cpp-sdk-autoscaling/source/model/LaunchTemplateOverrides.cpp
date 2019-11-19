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

#include <aws/autoscaling/model/LaunchTemplateOverrides.h>
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

LaunchTemplateOverrides::LaunchTemplateOverrides() : 
    m_instanceTypeHasBeenSet(false),
    m_weightedCapacityHasBeenSet(false)
{
}

LaunchTemplateOverrides::LaunchTemplateOverrides(const XmlNode& xmlNode) : 
    m_instanceTypeHasBeenSet(false),
    m_weightedCapacityHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchTemplateOverrides& LaunchTemplateOverrides::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceTypeNode = resultNode.FirstChild("InstanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode weightedCapacityNode = resultNode.FirstChild("WeightedCapacity");
    if(!weightedCapacityNode.IsNull())
    {
      m_weightedCapacity = Aws::Utils::Xml::DecodeEscapedXmlText(weightedCapacityNode.GetText());
      m_weightedCapacityHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplateOverrides::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_weightedCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".WeightedCapacity=" << StringUtils::URLEncode(m_weightedCapacity.c_str()) << "&";
  }

}

void LaunchTemplateOverrides::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
  if(m_weightedCapacityHasBeenSet)
  {
      oStream << location << ".WeightedCapacity=" << StringUtils::URLEncode(m_weightedCapacity.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
