﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CloudWatchLogOptions.h>
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

CloudWatchLogOptions::CloudWatchLogOptions(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CloudWatchLogOptions& CloudWatchLogOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode logEnabledNode = resultNode.FirstChild("logEnabled");
    if(!logEnabledNode.IsNull())
    {
      m_logEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(logEnabledNode.GetText()).c_str()).c_str());
      m_logEnabledHasBeenSet = true;
    }
    XmlNode logGroupArnNode = resultNode.FirstChild("logGroupArn");
    if(!logGroupArnNode.IsNull())
    {
      m_logGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(logGroupArnNode.GetText());
      m_logGroupArnHasBeenSet = true;
    }
    XmlNode logOutputFormatNode = resultNode.FirstChild("logOutputFormat");
    if(!logOutputFormatNode.IsNull())
    {
      m_logOutputFormat = Aws::Utils::Xml::DecodeEscapedXmlText(logOutputFormatNode.GetText());
      m_logOutputFormatHasBeenSet = true;
    }
  }

  return *this;
}

void CloudWatchLogOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_logEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogEnabled=" << std::boolalpha << m_logEnabled << "&";
  }

  if(m_logGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogGroupArn=" << StringUtils::URLEncode(m_logGroupArn.c_str()) << "&";
  }

  if(m_logOutputFormatHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogOutputFormat=" << StringUtils::URLEncode(m_logOutputFormat.c_str()) << "&";
  }

}

void CloudWatchLogOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_logEnabledHasBeenSet)
  {
      oStream << location << ".LogEnabled=" << std::boolalpha << m_logEnabled << "&";
  }
  if(m_logGroupArnHasBeenSet)
  {
      oStream << location << ".LogGroupArn=" << StringUtils::URLEncode(m_logGroupArn.c_str()) << "&";
  }
  if(m_logOutputFormatHasBeenSet)
  {
      oStream << location << ".LogOutputFormat=" << StringUtils::URLEncode(m_logOutputFormat.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
