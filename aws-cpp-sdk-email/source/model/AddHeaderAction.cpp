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

#include <aws/email/model/AddHeaderAction.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

AddHeaderAction::AddHeaderAction() : 
    m_headerNameHasBeenSet(false),
    m_headerValueHasBeenSet(false)
{
}

AddHeaderAction::AddHeaderAction(const XmlNode& xmlNode) : 
    m_headerNameHasBeenSet(false),
    m_headerValueHasBeenSet(false)
{
  *this = xmlNode;
}

AddHeaderAction& AddHeaderAction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode headerNameNode = resultNode.FirstChild("HeaderName");
    if(!headerNameNode.IsNull())
    {
      m_headerName = headerNameNode.GetText();
      m_headerNameHasBeenSet = true;
    }
    XmlNode headerValueNode = resultNode.FirstChild("HeaderValue");
    if(!headerValueNode.IsNull())
    {
      m_headerValue = headerValueNode.GetText();
      m_headerValueHasBeenSet = true;
    }
  }

  return *this;
}

void AddHeaderAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_headerNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".HeaderName=" << StringUtils::URLEncode(m_headerName.c_str()) << "&";
  }

  if(m_headerValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".HeaderValue=" << StringUtils::URLEncode(m_headerValue.c_str()) << "&";
  }

}

void AddHeaderAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_headerNameHasBeenSet)
  {
      oStream << location << ".HeaderName=" << StringUtils::URLEncode(m_headerName.c_str()) << "&";
  }
  if(m_headerValueHasBeenSet)
  {
      oStream << location << ".HeaderValue=" << StringUtils::URLEncode(m_headerValue.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
