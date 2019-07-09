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

#include <aws/elasticbeanstalk/model/EnvironmentLink.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

EnvironmentLink::EnvironmentLink() : 
    m_linkNameHasBeenSet(false),
    m_environmentNameHasBeenSet(false)
{
}

EnvironmentLink::EnvironmentLink(const XmlNode& xmlNode) : 
    m_linkNameHasBeenSet(false),
    m_environmentNameHasBeenSet(false)
{
  *this = xmlNode;
}

EnvironmentLink& EnvironmentLink::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode linkNameNode = resultNode.FirstChild("LinkName");
    if(!linkNameNode.IsNull())
    {
      m_linkName = linkNameNode.GetText();
      m_linkNameHasBeenSet = true;
    }
    XmlNode environmentNameNode = resultNode.FirstChild("EnvironmentName");
    if(!environmentNameNode.IsNull())
    {
      m_environmentName = environmentNameNode.GetText();
      m_environmentNameHasBeenSet = true;
    }
  }

  return *this;
}

void EnvironmentLink::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_linkNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".LinkName=" << StringUtils::URLEncode(m_linkName.c_str()) << "&";
  }

  if(m_environmentNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }

}

void EnvironmentLink::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_linkNameHasBeenSet)
  {
      oStream << location << ".LinkName=" << StringUtils::URLEncode(m_linkName.c_str()) << "&";
  }
  if(m_environmentNameHasBeenSet)
  {
      oStream << location << ".EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
