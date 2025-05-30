﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/TargetTrackingMetricDataQuery.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

TargetTrackingMetricDataQuery::TargetTrackingMetricDataQuery(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

TargetTrackingMetricDataQuery& TargetTrackingMetricDataQuery::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = Aws::Utils::Xml::DecodeEscapedXmlText(idNode.GetText());
      m_idHasBeenSet = true;
    }
    XmlNode expressionNode = resultNode.FirstChild("Expression");
    if(!expressionNode.IsNull())
    {
      m_expression = Aws::Utils::Xml::DecodeEscapedXmlText(expressionNode.GetText());
      m_expressionHasBeenSet = true;
    }
    XmlNode metricStatNode = resultNode.FirstChild("MetricStat");
    if(!metricStatNode.IsNull())
    {
      m_metricStat = metricStatNode;
      m_metricStatHasBeenSet = true;
    }
    XmlNode labelNode = resultNode.FirstChild("Label");
    if(!labelNode.IsNull())
    {
      m_label = Aws::Utils::Xml::DecodeEscapedXmlText(labelNode.GetText());
      m_labelHasBeenSet = true;
    }
    XmlNode periodNode = resultNode.FirstChild("Period");
    if(!periodNode.IsNull())
    {
      m_period = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(periodNode.GetText()).c_str()).c_str());
      m_periodHasBeenSet = true;
    }
    XmlNode returnDataNode = resultNode.FirstChild("ReturnData");
    if(!returnDataNode.IsNull())
    {
      m_returnData = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(returnDataNode.GetText()).c_str()).c_str());
      m_returnDataHasBeenSet = true;
    }
  }

  return *this;
}

void TargetTrackingMetricDataQuery::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << index << locationValue << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }

  if(m_expressionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Expression=" << StringUtils::URLEncode(m_expression.c_str()) << "&";
  }

  if(m_metricStatHasBeenSet)
  {
      Aws::StringStream metricStatLocationAndMemberSs;
      metricStatLocationAndMemberSs << location << index << locationValue << ".MetricStat";
      m_metricStat.OutputToStream(oStream, metricStatLocationAndMemberSs.str().c_str());
  }

  if(m_labelHasBeenSet)
  {
      oStream << location << index << locationValue << ".Label=" << StringUtils::URLEncode(m_label.c_str()) << "&";
  }

  if(m_periodHasBeenSet)
  {
      oStream << location << index << locationValue << ".Period=" << m_period << "&";
  }

  if(m_returnDataHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReturnData=" << std::boolalpha << m_returnData << "&";
  }

}

void TargetTrackingMetricDataQuery::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }
  if(m_expressionHasBeenSet)
  {
      oStream << location << ".Expression=" << StringUtils::URLEncode(m_expression.c_str()) << "&";
  }
  if(m_metricStatHasBeenSet)
  {
      Aws::String metricStatLocationAndMember(location);
      metricStatLocationAndMember += ".MetricStat";
      m_metricStat.OutputToStream(oStream, metricStatLocationAndMember.c_str());
  }
  if(m_labelHasBeenSet)
  {
      oStream << location << ".Label=" << StringUtils::URLEncode(m_label.c_str()) << "&";
  }
  if(m_periodHasBeenSet)
  {
      oStream << location << ".Period=" << m_period << "&";
  }
  if(m_returnDataHasBeenSet)
  {
      oStream << location << ".ReturnData=" << std::boolalpha << m_returnData << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
