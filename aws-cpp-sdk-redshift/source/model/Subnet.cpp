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

#include <aws/redshift/model/Subnet.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

Subnet::Subnet() : 
    m_subnetIdentifierHasBeenSet(false),
    m_subnetAvailabilityZoneHasBeenSet(false),
    m_subnetStatusHasBeenSet(false)
{
}

Subnet::Subnet(const XmlNode& xmlNode) : 
    m_subnetIdentifierHasBeenSet(false),
    m_subnetAvailabilityZoneHasBeenSet(false),
    m_subnetStatusHasBeenSet(false)
{
  *this = xmlNode;
}

Subnet& Subnet::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode subnetIdentifierNode = resultNode.FirstChild("SubnetIdentifier");
    if(!subnetIdentifierNode.IsNull())
    {
      m_subnetIdentifier = subnetIdentifierNode.GetText();
      m_subnetIdentifierHasBeenSet = true;
    }
    XmlNode subnetAvailabilityZoneNode = resultNode.FirstChild("SubnetAvailabilityZone");
    if(!subnetAvailabilityZoneNode.IsNull())
    {
      m_subnetAvailabilityZone = subnetAvailabilityZoneNode;
      m_subnetAvailabilityZoneHasBeenSet = true;
    }
    XmlNode subnetStatusNode = resultNode.FirstChild("SubnetStatus");
    if(!subnetStatusNode.IsNull())
    {
      m_subnetStatus = subnetStatusNode.GetText();
      m_subnetStatusHasBeenSet = true;
    }
  }

  return *this;
}

void Subnet::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_subnetIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetIdentifier=" << StringUtils::URLEncode(m_subnetIdentifier.c_str()) << "&";
  }

  if(m_subnetAvailabilityZoneHasBeenSet)
  {
      Aws::StringStream subnetAvailabilityZoneLocationAndMemberSs;
      subnetAvailabilityZoneLocationAndMemberSs << location << index << locationValue << ".SubnetAvailabilityZone";
      m_subnetAvailabilityZone.OutputToStream(oStream, subnetAvailabilityZoneLocationAndMemberSs.str().c_str());
  }

  if(m_subnetStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetStatus=" << StringUtils::URLEncode(m_subnetStatus.c_str()) << "&";
  }

}

void Subnet::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_subnetIdentifierHasBeenSet)
  {
      oStream << location << ".SubnetIdentifier=" << StringUtils::URLEncode(m_subnetIdentifier.c_str()) << "&";
  }
  if(m_subnetAvailabilityZoneHasBeenSet)
  {
      Aws::String subnetAvailabilityZoneLocationAndMember(location);
      subnetAvailabilityZoneLocationAndMember += ".SubnetAvailabilityZone";
      m_subnetAvailabilityZone.OutputToStream(oStream, subnetAvailabilityZoneLocationAndMember.c_str());
  }
  if(m_subnetStatusHasBeenSet)
  {
      oStream << location << ".SubnetStatus=" << StringUtils::URLEncode(m_subnetStatus.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
