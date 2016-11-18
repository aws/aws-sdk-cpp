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
#include <aws/iam/model/Position.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace IAM
{
namespace Model
{

Position::Position() : 
    m_line(0),
    m_lineHasBeenSet(false),
    m_column(0),
    m_columnHasBeenSet(false)
{
}

Position::Position(const XmlNode& xmlNode) : 
    m_line(0),
    m_lineHasBeenSet(false),
    m_column(0),
    m_columnHasBeenSet(false)
{
  *this = xmlNode;
}

Position& Position::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode lineNode = resultNode.FirstChild("Line");
    if(!lineNode.IsNull())
    {
      m_line = StringUtils::ConvertToInt32(StringUtils::Trim(lineNode.GetText().c_str()).c_str());
      m_lineHasBeenSet = true;
    }
    XmlNode columnNode = resultNode.FirstChild("Column");
    if(!columnNode.IsNull())
    {
      m_column = StringUtils::ConvertToInt32(StringUtils::Trim(columnNode.GetText().c_str()).c_str());
      m_columnHasBeenSet = true;
    }
  }

  return *this;
}

void Position::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_lineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Line=" << m_line << "&";
  }

  if(m_columnHasBeenSet)
  {
      oStream << location << index << locationValue << ".Column=" << m_column << "&";
  }

}

void Position::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_lineHasBeenSet)
  {
      oStream << location << ".Line=" << m_line << "&";
  }
  if(m_columnHasBeenSet)
  {
      oStream << location << ".Column=" << m_column << "&";
  }
}

} // namespace Model
} // namespace IAM
} // namespace Aws
