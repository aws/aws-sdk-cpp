﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/Latency.h>
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

Latency::Latency(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

Latency& Latency::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode p999Node = resultNode.FirstChild("P999");
    if(!p999Node.IsNull())
    {
      m_p999 = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(p999Node.GetText()).c_str()).c_str());
      m_p999HasBeenSet = true;
    }
    XmlNode p99Node = resultNode.FirstChild("P99");
    if(!p99Node.IsNull())
    {
      m_p99 = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(p99Node.GetText()).c_str()).c_str());
      m_p99HasBeenSet = true;
    }
    XmlNode p95Node = resultNode.FirstChild("P95");
    if(!p95Node.IsNull())
    {
      m_p95 = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(p95Node.GetText()).c_str()).c_str());
      m_p95HasBeenSet = true;
    }
    XmlNode p90Node = resultNode.FirstChild("P90");
    if(!p90Node.IsNull())
    {
      m_p90 = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(p90Node.GetText()).c_str()).c_str());
      m_p90HasBeenSet = true;
    }
    XmlNode p85Node = resultNode.FirstChild("P85");
    if(!p85Node.IsNull())
    {
      m_p85 = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(p85Node.GetText()).c_str()).c_str());
      m_p85HasBeenSet = true;
    }
    XmlNode p75Node = resultNode.FirstChild("P75");
    if(!p75Node.IsNull())
    {
      m_p75 = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(p75Node.GetText()).c_str()).c_str());
      m_p75HasBeenSet = true;
    }
    XmlNode p50Node = resultNode.FirstChild("P50");
    if(!p50Node.IsNull())
    {
      m_p50 = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(p50Node.GetText()).c_str()).c_str());
      m_p50HasBeenSet = true;
    }
    XmlNode p10Node = resultNode.FirstChild("P10");
    if(!p10Node.IsNull())
    {
      m_p10 = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(p10Node.GetText()).c_str()).c_str());
      m_p10HasBeenSet = true;
    }
  }

  return *this;
}

void Latency::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_p999HasBeenSet)
  {
        oStream << location << index << locationValue << ".P999=" << StringUtils::URLEncode(m_p999) << "&";
  }

  if(m_p99HasBeenSet)
  {
        oStream << location << index << locationValue << ".P99=" << StringUtils::URLEncode(m_p99) << "&";
  }

  if(m_p95HasBeenSet)
  {
        oStream << location << index << locationValue << ".P95=" << StringUtils::URLEncode(m_p95) << "&";
  }

  if(m_p90HasBeenSet)
  {
        oStream << location << index << locationValue << ".P90=" << StringUtils::URLEncode(m_p90) << "&";
  }

  if(m_p85HasBeenSet)
  {
        oStream << location << index << locationValue << ".P85=" << StringUtils::URLEncode(m_p85) << "&";
  }

  if(m_p75HasBeenSet)
  {
        oStream << location << index << locationValue << ".P75=" << StringUtils::URLEncode(m_p75) << "&";
  }

  if(m_p50HasBeenSet)
  {
        oStream << location << index << locationValue << ".P50=" << StringUtils::URLEncode(m_p50) << "&";
  }

  if(m_p10HasBeenSet)
  {
        oStream << location << index << locationValue << ".P10=" << StringUtils::URLEncode(m_p10) << "&";
  }

}

void Latency::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_p999HasBeenSet)
  {
      oStream << location << ".P999=" << StringUtils::URLEncode(m_p999) << "&";
  }
  if(m_p99HasBeenSet)
  {
      oStream << location << ".P99=" << StringUtils::URLEncode(m_p99) << "&";
  }
  if(m_p95HasBeenSet)
  {
      oStream << location << ".P95=" << StringUtils::URLEncode(m_p95) << "&";
  }
  if(m_p90HasBeenSet)
  {
      oStream << location << ".P90=" << StringUtils::URLEncode(m_p90) << "&";
  }
  if(m_p85HasBeenSet)
  {
      oStream << location << ".P85=" << StringUtils::URLEncode(m_p85) << "&";
  }
  if(m_p75HasBeenSet)
  {
      oStream << location << ".P75=" << StringUtils::URLEncode(m_p75) << "&";
  }
  if(m_p50HasBeenSet)
  {
      oStream << location << ".P50=" << StringUtils::URLEncode(m_p50) << "&";
  }
  if(m_p10HasBeenSet)
  {
      oStream << location << ".P10=" << StringUtils::URLEncode(m_p10) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
