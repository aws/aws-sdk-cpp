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

#include <aws/rds/model/DBProxyTarget.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

DBProxyTarget::DBProxyTarget() : 
    m_targetArnHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_trackedClusterIdHasBeenSet(false),
    m_rdsResourceIdHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_type(TargetType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

DBProxyTarget::DBProxyTarget(const XmlNode& xmlNode) : 
    m_targetArnHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_trackedClusterIdHasBeenSet(false),
    m_rdsResourceIdHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_type(TargetType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = xmlNode;
}

DBProxyTarget& DBProxyTarget::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode targetArnNode = resultNode.FirstChild("TargetArn");
    if(!targetArnNode.IsNull())
    {
      m_targetArn = Aws::Utils::Xml::DecodeEscapedXmlText(targetArnNode.GetText());
      m_targetArnHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = Aws::Utils::Xml::DecodeEscapedXmlText(endpointNode.GetText());
      m_endpointHasBeenSet = true;
    }
    XmlNode trackedClusterIdNode = resultNode.FirstChild("TrackedClusterId");
    if(!trackedClusterIdNode.IsNull())
    {
      m_trackedClusterId = Aws::Utils::Xml::DecodeEscapedXmlText(trackedClusterIdNode.GetText());
      m_trackedClusterIdHasBeenSet = true;
    }
    XmlNode rdsResourceIdNode = resultNode.FirstChild("RdsResourceId");
    if(!rdsResourceIdNode.IsNull())
    {
      m_rdsResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(rdsResourceIdNode.GetText());
      m_rdsResourceIdHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = TargetTypeMapper::GetTargetTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
      m_typeHasBeenSet = true;
    }
  }

  return *this;
}

void DBProxyTarget::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_targetArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetArn=" << StringUtils::URLEncode(m_targetArn.c_str()) << "&";
  }

  if(m_endpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }

  if(m_trackedClusterIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TrackedClusterId=" << StringUtils::URLEncode(m_trackedClusterId.c_str()) << "&";
  }

  if(m_rdsResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RdsResourceId=" << StringUtils::URLEncode(m_rdsResourceId.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << TargetTypeMapper::GetNameForTargetType(m_type) << "&";
  }

}

void DBProxyTarget::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_targetArnHasBeenSet)
  {
      oStream << location << ".TargetArn=" << StringUtils::URLEncode(m_targetArn.c_str()) << "&";
  }
  if(m_endpointHasBeenSet)
  {
      oStream << location << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }
  if(m_trackedClusterIdHasBeenSet)
  {
      oStream << location << ".TrackedClusterId=" << StringUtils::URLEncode(m_trackedClusterId.c_str()) << "&";
  }
  if(m_rdsResourceIdHasBeenSet)
  {
      oStream << location << ".RdsResourceId=" << StringUtils::URLEncode(m_rdsResourceId.c_str()) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << TargetTypeMapper::GetNameForTargetType(m_type) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
