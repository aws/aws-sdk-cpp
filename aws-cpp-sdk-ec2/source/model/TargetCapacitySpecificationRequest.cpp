/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TargetCapacitySpecificationRequest.h>
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

TargetCapacitySpecificationRequest::TargetCapacitySpecificationRequest() : 
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

TargetCapacitySpecificationRequest::TargetCapacitySpecificationRequest(const XmlNode& xmlNode) : 
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

TargetCapacitySpecificationRequest& TargetCapacitySpecificationRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode totalTargetCapacityNode = resultNode.FirstChild("TotalTargetCapacity");
    if(!totalTargetCapacityNode.IsNull())
    {
      m_totalTargetCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalTargetCapacityNode.GetText()).c_str()).c_str());
      m_totalTargetCapacityHasBeenSet = true;
    }
    XmlNode onDemandTargetCapacityNode = resultNode.FirstChild("OnDemandTargetCapacity");
    if(!onDemandTargetCapacityNode.IsNull())
    {
      m_onDemandTargetCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(onDemandTargetCapacityNode.GetText()).c_str()).c_str());
      m_onDemandTargetCapacityHasBeenSet = true;
    }
    XmlNode spotTargetCapacityNode = resultNode.FirstChild("SpotTargetCapacity");
    if(!spotTargetCapacityNode.IsNull())
    {
      m_spotTargetCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(spotTargetCapacityNode.GetText()).c_str()).c_str());
      m_spotTargetCapacityHasBeenSet = true;
    }
    XmlNode defaultTargetCapacityTypeNode = resultNode.FirstChild("DefaultTargetCapacityType");
    if(!defaultTargetCapacityTypeNode.IsNull())
    {
      m_defaultTargetCapacityType = DefaultTargetCapacityTypeMapper::GetDefaultTargetCapacityTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultTargetCapacityTypeNode.GetText()).c_str()).c_str());
      m_defaultTargetCapacityTypeHasBeenSet = true;
    }
  }

  return *this;
}

void TargetCapacitySpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
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

void TargetCapacitySpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
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
