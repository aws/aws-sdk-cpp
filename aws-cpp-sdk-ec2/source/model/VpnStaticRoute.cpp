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

#include <aws/ec2/model/VpnStaticRoute.h>
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

VpnStaticRoute::VpnStaticRoute() : 
    m_destinationCidrBlockHasBeenSet(false),
    m_source(VpnStaticRouteSource::NOT_SET),
    m_sourceHasBeenSet(false),
    m_state(VpnState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

VpnStaticRoute::VpnStaticRoute(const XmlNode& xmlNode) : 
    m_destinationCidrBlockHasBeenSet(false),
    m_source(VpnStaticRouteSource::NOT_SET),
    m_sourceHasBeenSet(false),
    m_state(VpnState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = xmlNode;
}

VpnStaticRoute& VpnStaticRoute::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode destinationCidrBlockNode = resultNode.FirstChild("destinationCidrBlock");
    if(!destinationCidrBlockNode.IsNull())
    {
      m_destinationCidrBlock = destinationCidrBlockNode.GetText();
      m_destinationCidrBlockHasBeenSet = true;
    }
    XmlNode sourceNode = resultNode.FirstChild("source");
    if(!sourceNode.IsNull())
    {
      m_source = VpnStaticRouteSourceMapper::GetVpnStaticRouteSourceForName(StringUtils::Trim(sourceNode.GetText().c_str()).c_str());
      m_sourceHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = VpnStateMapper::GetVpnStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void VpnStaticRoute::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_destinationCidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }

  if(m_sourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Source=" << VpnStaticRouteSourceMapper::GetNameForVpnStaticRouteSource(m_source) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << VpnStateMapper::GetNameForVpnState(m_state) << "&";
  }

}

void VpnStaticRoute::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_destinationCidrBlockHasBeenSet)
  {
      oStream << location << ".DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }
  if(m_sourceHasBeenSet)
  {
      oStream << location << ".Source=" << VpnStaticRouteSourceMapper::GetNameForVpnStaticRouteSource(m_source) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << VpnStateMapper::GetNameForVpnState(m_state) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
