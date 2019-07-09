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

#include <aws/rds/model/DescribeDBLogFilesDetails.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

DescribeDBLogFilesDetails::DescribeDBLogFilesDetails() : 
    m_logFileNameHasBeenSet(false),
    m_lastWritten(0),
    m_lastWrittenHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
}

DescribeDBLogFilesDetails::DescribeDBLogFilesDetails(const XmlNode& xmlNode) : 
    m_logFileNameHasBeenSet(false),
    m_lastWritten(0),
    m_lastWrittenHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
  *this = xmlNode;
}

DescribeDBLogFilesDetails& DescribeDBLogFilesDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode logFileNameNode = resultNode.FirstChild("LogFileName");
    if(!logFileNameNode.IsNull())
    {
      m_logFileName = logFileNameNode.GetText();
      m_logFileNameHasBeenSet = true;
    }
    XmlNode lastWrittenNode = resultNode.FirstChild("LastWritten");
    if(!lastWrittenNode.IsNull())
    {
      m_lastWritten = StringUtils::ConvertToInt64(StringUtils::Trim(lastWrittenNode.GetText().c_str()).c_str());
      m_lastWrittenHasBeenSet = true;
    }
    XmlNode sizeNode = resultNode.FirstChild("Size");
    if(!sizeNode.IsNull())
    {
      m_size = StringUtils::ConvertToInt64(StringUtils::Trim(sizeNode.GetText().c_str()).c_str());
      m_sizeHasBeenSet = true;
    }
  }

  return *this;
}

void DescribeDBLogFilesDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_logFileNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogFileName=" << StringUtils::URLEncode(m_logFileName.c_str()) << "&";
  }

  if(m_lastWrittenHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastWritten=" << m_lastWritten << "&";
  }

  if(m_sizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Size=" << m_size << "&";
  }

}

void DescribeDBLogFilesDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_logFileNameHasBeenSet)
  {
      oStream << location << ".LogFileName=" << StringUtils::URLEncode(m_logFileName.c_str()) << "&";
  }
  if(m_lastWrittenHasBeenSet)
  {
      oStream << location << ".LastWritten=" << m_lastWritten << "&";
  }
  if(m_sizeHasBeenSet)
  {
      oStream << location << ".Size=" << m_size << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
