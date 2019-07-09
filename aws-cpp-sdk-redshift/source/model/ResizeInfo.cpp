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

#include <aws/redshift/model/ResizeInfo.h>
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

ResizeInfo::ResizeInfo() : 
    m_resizeTypeHasBeenSet(false),
    m_allowCancelResize(false),
    m_allowCancelResizeHasBeenSet(false)
{
}

ResizeInfo::ResizeInfo(const XmlNode& xmlNode) : 
    m_resizeTypeHasBeenSet(false),
    m_allowCancelResize(false),
    m_allowCancelResizeHasBeenSet(false)
{
  *this = xmlNode;
}

ResizeInfo& ResizeInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resizeTypeNode = resultNode.FirstChild("ResizeType");
    if(!resizeTypeNode.IsNull())
    {
      m_resizeType = resizeTypeNode.GetText();
      m_resizeTypeHasBeenSet = true;
    }
    XmlNode allowCancelResizeNode = resultNode.FirstChild("AllowCancelResize");
    if(!allowCancelResizeNode.IsNull())
    {
      m_allowCancelResize = StringUtils::ConvertToBool(StringUtils::Trim(allowCancelResizeNode.GetText().c_str()).c_str());
      m_allowCancelResizeHasBeenSet = true;
    }
  }

  return *this;
}

void ResizeInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resizeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResizeType=" << StringUtils::URLEncode(m_resizeType.c_str()) << "&";
  }

  if(m_allowCancelResizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowCancelResize=" << std::boolalpha << m_allowCancelResize << "&";
  }

}

void ResizeInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resizeTypeHasBeenSet)
  {
      oStream << location << ".ResizeType=" << StringUtils::URLEncode(m_resizeType.c_str()) << "&";
  }
  if(m_allowCancelResizeHasBeenSet)
  {
      oStream << location << ".AllowCancelResize=" << std::boolalpha << m_allowCancelResize << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
