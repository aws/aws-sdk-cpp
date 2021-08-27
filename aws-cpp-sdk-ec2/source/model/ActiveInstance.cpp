/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ActiveInstance.h>
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

ActiveInstance::ActiveInstance() : 
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_spotInstanceRequestIdHasBeenSet(false),
    m_instanceHealth(InstanceHealthStatus::NOT_SET),
    m_instanceHealthHasBeenSet(false)
{
}

ActiveInstance::ActiveInstance(const XmlNode& xmlNode) : 
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_spotInstanceRequestIdHasBeenSet(false),
    m_instanceHealth(InstanceHealthStatus::NOT_SET),
    m_instanceHealthHasBeenSet(false)
{
  *this = xmlNode;
}

ActiveInstance& ActiveInstance::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode spotInstanceRequestIdNode = resultNode.FirstChild("spotInstanceRequestId");
    if(!spotInstanceRequestIdNode.IsNull())
    {
      m_spotInstanceRequestId = Aws::Utils::Xml::DecodeEscapedXmlText(spotInstanceRequestIdNode.GetText());
      m_spotInstanceRequestIdHasBeenSet = true;
    }
    XmlNode instanceHealthNode = resultNode.FirstChild("instanceHealth");
    if(!instanceHealthNode.IsNull())
    {
      m_instanceHealth = InstanceHealthStatusMapper::GetInstanceHealthStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceHealthNode.GetText()).c_str()).c_str());
      m_instanceHealthHasBeenSet = true;
    }
  }

  return *this;
}

void ActiveInstance::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_spotInstanceRequestIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotInstanceRequestId=" << StringUtils::URLEncode(m_spotInstanceRequestId.c_str()) << "&";
  }

  if(m_instanceHealthHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceHealth=" << InstanceHealthStatusMapper::GetNameForInstanceHealthStatus(m_instanceHealth) << "&";
  }

}

void ActiveInstance::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
  if(m_spotInstanceRequestIdHasBeenSet)
  {
      oStream << location << ".SpotInstanceRequestId=" << StringUtils::URLEncode(m_spotInstanceRequestId.c_str()) << "&";
  }
  if(m_instanceHealthHasBeenSet)
  {
      oStream << location << ".InstanceHealth=" << InstanceHealthStatusMapper::GetNameForInstanceHealthStatus(m_instanceHealth) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
