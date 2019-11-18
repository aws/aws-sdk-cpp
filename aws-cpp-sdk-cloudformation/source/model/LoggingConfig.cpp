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

#include <aws/cloudformation/model/LoggingConfig.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

LoggingConfig::LoggingConfig() : 
    m_logRoleArnHasBeenSet(false),
    m_logGroupNameHasBeenSet(false)
{
}

LoggingConfig::LoggingConfig(const XmlNode& xmlNode) : 
    m_logRoleArnHasBeenSet(false),
    m_logGroupNameHasBeenSet(false)
{
  *this = xmlNode;
}

LoggingConfig& LoggingConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode logRoleArnNode = resultNode.FirstChild("LogRoleArn");
    if(!logRoleArnNode.IsNull())
    {
      m_logRoleArn = Aws::Utils::Xml::DecodeEscapedXmlText(logRoleArnNode.GetText());
      m_logRoleArnHasBeenSet = true;
    }
    XmlNode logGroupNameNode = resultNode.FirstChild("LogGroupName");
    if(!logGroupNameNode.IsNull())
    {
      m_logGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(logGroupNameNode.GetText());
      m_logGroupNameHasBeenSet = true;
    }
  }

  return *this;
}

void LoggingConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_logRoleArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogRoleArn=" << StringUtils::URLEncode(m_logRoleArn.c_str()) << "&";
  }

  if(m_logGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogGroupName=" << StringUtils::URLEncode(m_logGroupName.c_str()) << "&";
  }

}

void LoggingConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_logRoleArnHasBeenSet)
  {
      oStream << location << ".LogRoleArn=" << StringUtils::URLEncode(m_logRoleArn.c_str()) << "&";
  }
  if(m_logGroupNameHasBeenSet)
  {
      oStream << location << ".LogGroupName=" << StringUtils::URLEncode(m_logGroupName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
