/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/HostProperties.h>
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

HostProperties::HostProperties() : 
    m_cores(0),
    m_coresHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_sockets(0),
    m_socketsHasBeenSet(false),
    m_totalVCpus(0),
    m_totalVCpusHasBeenSet(false)
{
}

HostProperties::HostProperties(const XmlNode& xmlNode) : 
    m_cores(0),
    m_coresHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_sockets(0),
    m_socketsHasBeenSet(false),
    m_totalVCpus(0),
    m_totalVCpusHasBeenSet(false)
{
  *this = xmlNode;
}

HostProperties& HostProperties::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode coresNode = resultNode.FirstChild("cores");
    if(!coresNode.IsNull())
    {
      m_cores = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(coresNode.GetText()).c_str()).c_str());
      m_coresHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode instanceFamilyNode = resultNode.FirstChild("instanceFamily");
    if(!instanceFamilyNode.IsNull())
    {
      m_instanceFamily = Aws::Utils::Xml::DecodeEscapedXmlText(instanceFamilyNode.GetText());
      m_instanceFamilyHasBeenSet = true;
    }
    XmlNode socketsNode = resultNode.FirstChild("sockets");
    if(!socketsNode.IsNull())
    {
      m_sockets = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(socketsNode.GetText()).c_str()).c_str());
      m_socketsHasBeenSet = true;
    }
    XmlNode totalVCpusNode = resultNode.FirstChild("totalVCpus");
    if(!totalVCpusNode.IsNull())
    {
      m_totalVCpus = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalVCpusNode.GetText()).c_str()).c_str());
      m_totalVCpusHasBeenSet = true;
    }
  }

  return *this;
}

void HostProperties::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_coresHasBeenSet)
  {
      oStream << location << index << locationValue << ".Cores=" << m_cores << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_instanceFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceFamily=" << StringUtils::URLEncode(m_instanceFamily.c_str()) << "&";
  }

  if(m_socketsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Sockets=" << m_sockets << "&";
  }

  if(m_totalVCpusHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalVCpus=" << m_totalVCpus << "&";
  }

}

void HostProperties::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_coresHasBeenSet)
  {
      oStream << location << ".Cores=" << m_cores << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
  if(m_instanceFamilyHasBeenSet)
  {
      oStream << location << ".InstanceFamily=" << StringUtils::URLEncode(m_instanceFamily.c_str()) << "&";
  }
  if(m_socketsHasBeenSet)
  {
      oStream << location << ".Sockets=" << m_sockets << "&";
  }
  if(m_totalVCpusHasBeenSet)
  {
      oStream << location << ".TotalVCpus=" << m_totalVCpus << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
