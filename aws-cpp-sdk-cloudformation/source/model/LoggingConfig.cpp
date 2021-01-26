/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
