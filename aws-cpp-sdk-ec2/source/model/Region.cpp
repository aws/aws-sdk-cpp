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

#include <aws/ec2/model/Region.h>
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

Region::Region() : 
    m_endpointHasBeenSet(false),
    m_regionNameHasBeenSet(false)
{
}

Region::Region(const XmlNode& xmlNode) : 
    m_endpointHasBeenSet(false),
    m_regionNameHasBeenSet(false)
{
  *this = xmlNode;
}

Region& Region::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode endpointNode = resultNode.FirstChild("regionEndpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = endpointNode.GetText();
      m_endpointHasBeenSet = true;
    }
    XmlNode regionNameNode = resultNode.FirstChild("regionName");
    if(!regionNameNode.IsNull())
    {
      m_regionName = regionNameNode.GetText();
      m_regionNameHasBeenSet = true;
    }
  }

  return *this;
}

void Region::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_endpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }

  if(m_regionNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".RegionName=" << StringUtils::URLEncode(m_regionName.c_str()) << "&";
  }

}

void Region::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_endpointHasBeenSet)
  {
      oStream << location << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }
  if(m_regionNameHasBeenSet)
  {
      oStream << location << ".RegionName=" << StringUtils::URLEncode(m_regionName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
