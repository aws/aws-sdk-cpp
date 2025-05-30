﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/StatusCodes.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

StatusCodes::StatusCodes(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

StatusCodes& StatusCodes::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode status2xxNode = resultNode.FirstChild("Status2xx");
    if(!status2xxNode.IsNull())
    {
      m_status2xx = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(status2xxNode.GetText()).c_str()).c_str());
      m_status2xxHasBeenSet = true;
    }
    XmlNode status3xxNode = resultNode.FirstChild("Status3xx");
    if(!status3xxNode.IsNull())
    {
      m_status3xx = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(status3xxNode.GetText()).c_str()).c_str());
      m_status3xxHasBeenSet = true;
    }
    XmlNode status4xxNode = resultNode.FirstChild("Status4xx");
    if(!status4xxNode.IsNull())
    {
      m_status4xx = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(status4xxNode.GetText()).c_str()).c_str());
      m_status4xxHasBeenSet = true;
    }
    XmlNode status5xxNode = resultNode.FirstChild("Status5xx");
    if(!status5xxNode.IsNull())
    {
      m_status5xx = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(status5xxNode.GetText()).c_str()).c_str());
      m_status5xxHasBeenSet = true;
    }
  }

  return *this;
}

void StatusCodes::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_status2xxHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status2xx=" << m_status2xx << "&";
  }

  if(m_status3xxHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status3xx=" << m_status3xx << "&";
  }

  if(m_status4xxHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status4xx=" << m_status4xx << "&";
  }

  if(m_status5xxHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status5xx=" << m_status5xx << "&";
  }

}

void StatusCodes::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_status2xxHasBeenSet)
  {
      oStream << location << ".Status2xx=" << m_status2xx << "&";
  }
  if(m_status3xxHasBeenSet)
  {
      oStream << location << ".Status3xx=" << m_status3xx << "&";
  }
  if(m_status4xxHasBeenSet)
  {
      oStream << location << ".Status4xx=" << m_status4xx << "&";
  }
  if(m_status5xxHasBeenSet)
  {
      oStream << location << ".Status5xx=" << m_status5xx << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
