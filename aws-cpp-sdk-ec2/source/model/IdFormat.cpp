/*
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
#include <aws/ec2/model/IdFormat.h>
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

IdFormat::IdFormat() : 
    m_resourceHasBeenSet(false),
    m_useLongIds(false),
    m_useLongIdsHasBeenSet(false),
    m_deadlineHasBeenSet(false)
{
}

IdFormat::IdFormat(const XmlNode& xmlNode) : 
    m_resourceHasBeenSet(false),
    m_useLongIds(false),
    m_useLongIdsHasBeenSet(false),
    m_deadlineHasBeenSet(false)
{
  *this = xmlNode;
}

IdFormat& IdFormat::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resourceNode = resultNode.FirstChild("resource");
    if(!resourceNode.IsNull())
    {
      m_resource = StringUtils::Trim(resourceNode.GetText().c_str());
      m_resourceHasBeenSet = true;
    }
    XmlNode useLongIdsNode = resultNode.FirstChild("useLongIds");
    if(!useLongIdsNode.IsNull())
    {
      m_useLongIds = StringUtils::ConvertToBool(StringUtils::Trim(useLongIdsNode.GetText().c_str()).c_str());
      m_useLongIdsHasBeenSet = true;
    }
    XmlNode deadlineNode = resultNode.FirstChild("deadline");
    if(!deadlineNode.IsNull())
    {
      m_deadline = DateTime(StringUtils::Trim(deadlineNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_deadlineHasBeenSet = true;
    }
  }

  return *this;
}

void IdFormat::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Resource=" << StringUtils::URLEncode(m_resource.c_str()) << "&";
  }

  if(m_useLongIdsHasBeenSet)
  {
      oStream << location << index << locationValue << ".UseLongIds=" << m_useLongIds << "&";
  }

  if(m_deadlineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Deadline=" << StringUtils::URLEncode(m_deadline.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void IdFormat::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourceHasBeenSet)
  {
      oStream << location << ".Resource=" << StringUtils::URLEncode(m_resource.c_str()) << "&";
  }
  if(m_useLongIdsHasBeenSet)
  {
      oStream << location << ".UseLongIds=" << m_useLongIds << "&";
  }
  if(m_deadlineHasBeenSet)
  {
      oStream << location << ".Deadline=" << StringUtils::URLEncode(m_deadline.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
