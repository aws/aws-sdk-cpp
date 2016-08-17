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
#include <aws/elasticloadbalancing/model/ConnectionDraining.h>
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

ConnectionDraining::ConnectionDraining() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false)
{
}

ConnectionDraining::ConnectionDraining(const XmlNode& xmlNode) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false)
{
  *this = xmlNode;
}

ConnectionDraining& ConnectionDraining::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(enabledNode.GetText().c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode timeoutNode = resultNode.FirstChild("Timeout");
    if(!timeoutNode.IsNull())
    {
      m_timeout = StringUtils::ConvertToInt32(StringUtils::Trim(timeoutNode.GetText().c_str()).c_str());
      m_timeoutHasBeenSet = true;
    }
  }

  return *this;
}

void ConnectionDraining::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << m_enabled << "&";
  }

  if(m_timeoutHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timeout=" << m_timeout << "&";
  }

}

void ConnectionDraining::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << m_enabled << "&";
  }
  if(m_timeoutHasBeenSet)
  {
      oStream << location << ".Timeout=" << m_timeout << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
