﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/InstanceHealthSummary.h>
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

InstanceHealthSummary::InstanceHealthSummary(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

InstanceHealthSummary& InstanceHealthSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode noDataNode = resultNode.FirstChild("NoData");
    if(!noDataNode.IsNull())
    {
      m_noData = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(noDataNode.GetText()).c_str()).c_str());
      m_noDataHasBeenSet = true;
    }
    XmlNode unknownNode = resultNode.FirstChild("Unknown");
    if(!unknownNode.IsNull())
    {
      m_unknown = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(unknownNode.GetText()).c_str()).c_str());
      m_unknownHasBeenSet = true;
    }
    XmlNode pendingNode = resultNode.FirstChild("Pending");
    if(!pendingNode.IsNull())
    {
      m_pending = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(pendingNode.GetText()).c_str()).c_str());
      m_pendingHasBeenSet = true;
    }
    XmlNode okNode = resultNode.FirstChild("Ok");
    if(!okNode.IsNull())
    {
      m_ok = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(okNode.GetText()).c_str()).c_str());
      m_okHasBeenSet = true;
    }
    XmlNode infoNode = resultNode.FirstChild("Info");
    if(!infoNode.IsNull())
    {
      m_info = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(infoNode.GetText()).c_str()).c_str());
      m_infoHasBeenSet = true;
    }
    XmlNode warningNode = resultNode.FirstChild("Warning");
    if(!warningNode.IsNull())
    {
      m_warning = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(warningNode.GetText()).c_str()).c_str());
      m_warningHasBeenSet = true;
    }
    XmlNode degradedNode = resultNode.FirstChild("Degraded");
    if(!degradedNode.IsNull())
    {
      m_degraded = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(degradedNode.GetText()).c_str()).c_str());
      m_degradedHasBeenSet = true;
    }
    XmlNode severeNode = resultNode.FirstChild("Severe");
    if(!severeNode.IsNull())
    {
      m_severe = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(severeNode.GetText()).c_str()).c_str());
      m_severeHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceHealthSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_noDataHasBeenSet)
  {
      oStream << location << index << locationValue << ".NoData=" << m_noData << "&";
  }

  if(m_unknownHasBeenSet)
  {
      oStream << location << index << locationValue << ".Unknown=" << m_unknown << "&";
  }

  if(m_pendingHasBeenSet)
  {
      oStream << location << index << locationValue << ".Pending=" << m_pending << "&";
  }

  if(m_okHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ok=" << m_ok << "&";
  }

  if(m_infoHasBeenSet)
  {
      oStream << location << index << locationValue << ".Info=" << m_info << "&";
  }

  if(m_warningHasBeenSet)
  {
      oStream << location << index << locationValue << ".Warning=" << m_warning << "&";
  }

  if(m_degradedHasBeenSet)
  {
      oStream << location << index << locationValue << ".Degraded=" << m_degraded << "&";
  }

  if(m_severeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Severe=" << m_severe << "&";
  }

}

void InstanceHealthSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_noDataHasBeenSet)
  {
      oStream << location << ".NoData=" << m_noData << "&";
  }
  if(m_unknownHasBeenSet)
  {
      oStream << location << ".Unknown=" << m_unknown << "&";
  }
  if(m_pendingHasBeenSet)
  {
      oStream << location << ".Pending=" << m_pending << "&";
  }
  if(m_okHasBeenSet)
  {
      oStream << location << ".Ok=" << m_ok << "&";
  }
  if(m_infoHasBeenSet)
  {
      oStream << location << ".Info=" << m_info << "&";
  }
  if(m_warningHasBeenSet)
  {
      oStream << location << ".Warning=" << m_warning << "&";
  }
  if(m_degradedHasBeenSet)
  {
      oStream << location << ".Degraded=" << m_degraded << "&";
  }
  if(m_severeHasBeenSet)
  {
      oStream << location << ".Severe=" << m_severe << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
