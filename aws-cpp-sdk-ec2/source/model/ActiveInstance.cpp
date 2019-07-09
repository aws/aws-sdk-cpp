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
      m_instanceId = instanceIdNode.GetText();
      m_instanceIdHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = instanceTypeNode.GetText();
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode spotInstanceRequestIdNode = resultNode.FirstChild("spotInstanceRequestId");
    if(!spotInstanceRequestIdNode.IsNull())
    {
      m_spotInstanceRequestId = spotInstanceRequestIdNode.GetText();
      m_spotInstanceRequestIdHasBeenSet = true;
    }
    XmlNode instanceHealthNode = resultNode.FirstChild("instanceHealth");
    if(!instanceHealthNode.IsNull())
    {
      m_instanceHealth = InstanceHealthStatusMapper::GetInstanceHealthStatusForName(StringUtils::Trim(instanceHealthNode.GetText().c_str()).c_str());
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
