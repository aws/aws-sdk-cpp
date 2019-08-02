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

#include <aws/ec2/model/HibernationOptions.h>
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

HibernationOptions::HibernationOptions() : 
    m_configured(false),
    m_configuredHasBeenSet(false)
{
}

HibernationOptions::HibernationOptions(const XmlNode& xmlNode) : 
    m_configured(false),
    m_configuredHasBeenSet(false)
{
  *this = xmlNode;
}

HibernationOptions& HibernationOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode configuredNode = resultNode.FirstChild("configured");
    if(!configuredNode.IsNull())
    {
      m_configured = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(configuredNode.GetText()).c_str()).c_str());
      m_configuredHasBeenSet = true;
    }
  }

  return *this;
}

void HibernationOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_configuredHasBeenSet)
  {
      oStream << location << index << locationValue << ".Configured=" << std::boolalpha << m_configured << "&";
  }

}

void HibernationOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_configuredHasBeenSet)
  {
      oStream << location << ".Configured=" << std::boolalpha << m_configured << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
