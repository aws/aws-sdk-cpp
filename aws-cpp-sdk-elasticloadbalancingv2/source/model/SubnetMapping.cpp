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

#include <aws/elasticloadbalancingv2/model/SubnetMapping.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

SubnetMapping::SubnetMapping() : 
    m_subnetIdHasBeenSet(false),
    m_allocationIdHasBeenSet(false),
    m_staticIp(false),
    m_staticIpHasBeenSet(false)
{
}

SubnetMapping::SubnetMapping(const XmlNode& xmlNode) : 
    m_subnetIdHasBeenSet(false),
    m_allocationIdHasBeenSet(false),
    m_staticIp(false),
    m_staticIpHasBeenSet(false)
{
  *this = xmlNode;
}

SubnetMapping& SubnetMapping::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode subnetIdNode = resultNode.FirstChild("SubnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = StringUtils::Trim(subnetIdNode.GetText().c_str());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode allocationIdNode = resultNode.FirstChild("AllocationId");
    if(!allocationIdNode.IsNull())
    {
      m_allocationId = StringUtils::Trim(allocationIdNode.GetText().c_str());
      m_allocationIdHasBeenSet = true;
    }
    XmlNode staticIpNode = resultNode.FirstChild("StaticIp");
    if(!staticIpNode.IsNull())
    {
      m_staticIp = StringUtils::ConvertToBool(StringUtils::Trim(staticIpNode.GetText().c_str()).c_str());
      m_staticIpHasBeenSet = true;
    }
  }

  return *this;
}

void SubnetMapping::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_allocationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }

  if(m_staticIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".StaticIp=" << std::boolalpha << m_staticIp << "&";
  }

}

void SubnetMapping::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_allocationIdHasBeenSet)
  {
      oStream << location << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }
  if(m_staticIpHasBeenSet)
  {
      oStream << location << ".StaticIp=" << std::boolalpha << m_staticIp << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
