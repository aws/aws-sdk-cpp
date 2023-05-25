/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TargetConfigurationRequest.h>
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

TargetConfigurationRequest::TargetConfigurationRequest() : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_offeringIdHasBeenSet(false)
{
}

TargetConfigurationRequest::TargetConfigurationRequest(const XmlNode& xmlNode) : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_offeringIdHasBeenSet(false)
{
  *this = xmlNode;
}

TargetConfigurationRequest& TargetConfigurationRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceCountNode = resultNode.FirstChild("InstanceCount");
    if(!instanceCountNode.IsNull())
    {
      m_instanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceCountNode.GetText()).c_str()).c_str());
      m_instanceCountHasBeenSet = true;
    }
    XmlNode offeringIdNode = resultNode.FirstChild("OfferingId");
    if(!offeringIdNode.IsNull())
    {
      m_offeringId = Aws::Utils::Xml::DecodeEscapedXmlText(offeringIdNode.GetText());
      m_offeringIdHasBeenSet = true;
    }
  }

  return *this;
}

void TargetConfigurationRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceCount=" << m_instanceCount << "&";
  }

  if(m_offeringIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OfferingId=" << StringUtils::URLEncode(m_offeringId.c_str()) << "&";
  }

}

void TargetConfigurationRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceCountHasBeenSet)
  {
      oStream << location << ".InstanceCount=" << m_instanceCount << "&";
  }
  if(m_offeringIdHasBeenSet)
  {
      oStream << location << ".OfferingId=" << StringUtils::URLEncode(m_offeringId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
