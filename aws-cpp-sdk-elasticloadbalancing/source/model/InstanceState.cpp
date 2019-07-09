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

#include <aws/elasticloadbalancing/model/InstanceState.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

InstanceState::InstanceState() : 
    m_instanceIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_reasonCodeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

InstanceState::InstanceState(const XmlNode& xmlNode) : 
    m_instanceIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_reasonCodeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceState& InstanceState::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdNode = resultNode.FirstChild("InstanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = instanceIdNode.GetText();
      m_instanceIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("State");
    if(!stateNode.IsNull())
    {
      m_state = stateNode.GetText();
      m_stateHasBeenSet = true;
    }
    XmlNode reasonCodeNode = resultNode.FirstChild("ReasonCode");
    if(!reasonCodeNode.IsNull())
    {
      m_reasonCode = reasonCodeNode.GetText();
      m_reasonCodeHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceState::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }

  if(m_reasonCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReasonCode=" << StringUtils::URLEncode(m_reasonCode.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

}

void InstanceState::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }
  if(m_reasonCodeHasBeenSet)
  {
      oStream << location << ".ReasonCode=" << StringUtils::URLEncode(m_reasonCode.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
