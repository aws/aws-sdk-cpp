﻿/*
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

#include <aws/ec2/model/TargetCapacitySpecification.h>
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

TargetCapacitySpecification::TargetCapacitySpecification() : 
    m_totalTargetCapacity(0),
    m_totalTargetCapacityHasBeenSet(false),
    m_onDemandTargetCapacity(0),
    m_onDemandTargetCapacityHasBeenSet(false),
    m_spotTargetCapacity(0),
    m_spotTargetCapacityHasBeenSet(false),
    m_defaultTargetCapacityType(DefaultTargetCapacityType::NOT_SET),
    m_defaultTargetCapacityTypeHasBeenSet(false)
{
}

TargetCapacitySpecification::TargetCapacitySpecification(const XmlNode& xmlNode) : 
    m_totalTargetCapacity(0),
    m_totalTargetCapacityHasBeenSet(false),
    m_onDemandTargetCapacity(0),
    m_onDemandTargetCapacityHasBeenSet(false),
    m_spotTargetCapacity(0),
    m_spotTargetCapacityHasBeenSet(false),
    m_defaultTargetCapacityType(DefaultTargetCapacityType::NOT_SET),
    m_defaultTargetCapacityTypeHasBeenSet(false)
{
  *this = xmlNode;
}

TargetCapacitySpecification& TargetCapacitySpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode totalTargetCapacityNode = resultNode.FirstChild("totalTargetCapacity");
    if(!totalTargetCapacityNode.IsNull())
    {
      m_totalTargetCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(totalTargetCapacityNode.GetText().c_str()).c_str());
      m_totalTargetCapacityHasBeenSet = true;
    }
    XmlNode onDemandTargetCapacityNode = resultNode.FirstChild("onDemandTargetCapacity");
    if(!onDemandTargetCapacityNode.IsNull())
    {
      m_onDemandTargetCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(onDemandTargetCapacityNode.GetText().c_str()).c_str());
      m_onDemandTargetCapacityHasBeenSet = true;
    }
    XmlNode spotTargetCapacityNode = resultNode.FirstChild("spotTargetCapacity");
    if(!spotTargetCapacityNode.IsNull())
    {
      m_spotTargetCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(spotTargetCapacityNode.GetText().c_str()).c_str());
      m_spotTargetCapacityHasBeenSet = true;
    }
    XmlNode defaultTargetCapacityTypeNode = resultNode.FirstChild("defaultTargetCapacityType");
    if(!defaultTargetCapacityTypeNode.IsNull())
    {
      m_defaultTargetCapacityType = DefaultTargetCapacityTypeMapper::GetDefaultTargetCapacityTypeForName(StringUtils::Trim(defaultTargetCapacityTypeNode.GetText().c_str()).c_str());
      m_defaultTargetCapacityTypeHasBeenSet = true;
    }
  }

  return *this;
}

void TargetCapacitySpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_totalTargetCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalTargetCapacity=" << m_totalTargetCapacity << "&";
  }

  if(m_onDemandTargetCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".OnDemandTargetCapacity=" << m_onDemandTargetCapacity << "&";
  }

  if(m_spotTargetCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotTargetCapacity=" << m_spotTargetCapacity << "&";
  }

  if(m_defaultTargetCapacityTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultTargetCapacityType=" << DefaultTargetCapacityTypeMapper::GetNameForDefaultTargetCapacityType(m_defaultTargetCapacityType) << "&";
  }

}

void TargetCapacitySpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_totalTargetCapacityHasBeenSet)
  {
      oStream << location << ".TotalTargetCapacity=" << m_totalTargetCapacity << "&";
  }
  if(m_onDemandTargetCapacityHasBeenSet)
  {
      oStream << location << ".OnDemandTargetCapacity=" << m_onDemandTargetCapacity << "&";
  }
  if(m_spotTargetCapacityHasBeenSet)
  {
      oStream << location << ".SpotTargetCapacity=" << m_spotTargetCapacity << "&";
  }
  if(m_defaultTargetCapacityTypeHasBeenSet)
  {
      oStream << location << ".DefaultTargetCapacityType=" << DefaultTargetCapacityTypeMapper::GetNameForDefaultTargetCapacityType(m_defaultTargetCapacityType) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
