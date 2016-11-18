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
#include <aws/elasticloadbalancing/model/ConnectionSettings.h>
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

ConnectionSettings::ConnectionSettings() : 
    m_idleTimeout(0),
    m_idleTimeoutHasBeenSet(false)
{
}

ConnectionSettings::ConnectionSettings(const XmlNode& xmlNode) : 
    m_idleTimeout(0),
    m_idleTimeoutHasBeenSet(false)
{
  *this = xmlNode;
}

ConnectionSettings& ConnectionSettings::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idleTimeoutNode = resultNode.FirstChild("IdleTimeout");
    if(!idleTimeoutNode.IsNull())
    {
      m_idleTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(idleTimeoutNode.GetText().c_str()).c_str());
      m_idleTimeoutHasBeenSet = true;
    }
  }

  return *this;
}

void ConnectionSettings::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_idleTimeoutHasBeenSet)
  {
      oStream << location << index << locationValue << ".IdleTimeout=" << m_idleTimeout << "&";
  }

}

void ConnectionSettings::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_idleTimeoutHasBeenSet)
  {
      oStream << location << ".IdleTimeout=" << m_idleTimeout << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
