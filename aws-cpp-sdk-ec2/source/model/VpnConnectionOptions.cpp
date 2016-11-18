﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/VpnConnectionOptions.h>
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

VpnConnectionOptions::VpnConnectionOptions() : 
    m_staticRoutesOnly(false),
    m_staticRoutesOnlyHasBeenSet(false)
{
}

VpnConnectionOptions::VpnConnectionOptions(const XmlNode& xmlNode) : 
    m_staticRoutesOnly(false),
    m_staticRoutesOnlyHasBeenSet(false)
{
  *this = xmlNode;
}

VpnConnectionOptions& VpnConnectionOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode staticRoutesOnlyNode = resultNode.FirstChild("staticRoutesOnly");
    if(!staticRoutesOnlyNode.IsNull())
    {
      m_staticRoutesOnly = StringUtils::ConvertToBool(StringUtils::Trim(staticRoutesOnlyNode.GetText().c_str()).c_str());
      m_staticRoutesOnlyHasBeenSet = true;
    }
  }

  return *this;
}

void VpnConnectionOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_staticRoutesOnlyHasBeenSet)
  {
      oStream << location << index << locationValue << ".StaticRoutesOnly=" << m_staticRoutesOnly << "&";
  }

}

void VpnConnectionOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_staticRoutesOnlyHasBeenSet)
  {
      oStream << location << ".StaticRoutesOnly=" << m_staticRoutesOnly << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
