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

#include <aws/ec2/model/InstanceCapacity.h>
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

InstanceCapacity::InstanceCapacity() : 
    m_availableCapacity(0),
    m_availableCapacityHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_totalCapacity(0),
    m_totalCapacityHasBeenSet(false)
{
}

InstanceCapacity::InstanceCapacity(const XmlNode& xmlNode) : 
    m_availableCapacity(0),
    m_availableCapacityHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_totalCapacity(0),
    m_totalCapacityHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceCapacity& InstanceCapacity::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode availableCapacityNode = resultNode.FirstChild("availableCapacity");
    if(!availableCapacityNode.IsNull())
    {
      m_availableCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(availableCapacityNode.GetText().c_str()).c_str());
      m_availableCapacityHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = instanceTypeNode.GetText();
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode totalCapacityNode = resultNode.FirstChild("totalCapacity");
    if(!totalCapacityNode.IsNull())
    {
      m_totalCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(totalCapacityNode.GetText().c_str()).c_str());
      m_totalCapacityHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceCapacity::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_availableCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailableCapacity=" << m_availableCapacity << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_totalCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalCapacity=" << m_totalCapacity << "&";
  }

}

void InstanceCapacity::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_availableCapacityHasBeenSet)
  {
      oStream << location << ".AvailableCapacity=" << m_availableCapacity << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
  if(m_totalCapacityHasBeenSet)
  {
      oStream << location << ".TotalCapacity=" << m_totalCapacity << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
