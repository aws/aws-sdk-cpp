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

#include <aws/neptune/model/DBSecurityGroupMembership.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Neptune
{
namespace Model
{

DBSecurityGroupMembership::DBSecurityGroupMembership() : 
    m_dBSecurityGroupNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

DBSecurityGroupMembership::DBSecurityGroupMembership(const XmlNode& xmlNode) : 
    m_dBSecurityGroupNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

DBSecurityGroupMembership& DBSecurityGroupMembership::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBSecurityGroupNameNode = resultNode.FirstChild("DBSecurityGroupName");
    if(!dBSecurityGroupNameNode.IsNull())
    {
      m_dBSecurityGroupName = dBSecurityGroupNameNode.GetText();
      m_dBSecurityGroupNameHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void DBSecurityGroupMembership::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBSecurityGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSecurityGroupName=" << StringUtils::URLEncode(m_dBSecurityGroupName.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

}

void DBSecurityGroupMembership::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBSecurityGroupNameHasBeenSet)
  {
      oStream << location << ".DBSecurityGroupName=" << StringUtils::URLEncode(m_dBSecurityGroupName.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Neptune
} // namespace Aws
