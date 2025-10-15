/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MetricDataResponse.h>
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

MetricDataResponse::MetricDataResponse(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

MetricDataResponse& MetricDataResponse::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dimensionNode = resultNode.FirstChild("dimension");
    if(!dimensionNode.IsNull())
    {
      m_dimension = dimensionNode;
      m_dimensionHasBeenSet = true;
    }
    XmlNode timestampNode = resultNode.FirstChild("timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_timestampHasBeenSet = true;
    }
    XmlNode metricValuesNode = resultNode.FirstChild("metricValueSet");
    if(!metricValuesNode.IsNull())
    {
      XmlNode metricValuesMember = metricValuesNode.FirstChild("item");
      m_metricValuesHasBeenSet = !metricValuesMember.IsNull();
      while(!metricValuesMember.IsNull())
      {
        m_metricValues.push_back(metricValuesMember);
        metricValuesMember = metricValuesMember.NextNode("item");
      }

      m_metricValuesHasBeenSet = true;
    }
  }

  return *this;
}

void MetricDataResponse::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dimensionHasBeenSet)
  {
      Aws::StringStream dimensionLocationAndMemberSs;
      dimensionLocationAndMemberSs << location << index << locationValue << ".Dimension";
      m_dimension.OutputToStream(oStream, dimensionLocationAndMemberSs.str().c_str());
  }

  if(m_timestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_metricValuesHasBeenSet)
  {
      unsigned metricValuesIdx = 1;
      for(auto& item : m_metricValues)
      {
        Aws::StringStream metricValuesSs;
        metricValuesSs << location << index << locationValue << ".MetricValueSet." << metricValuesIdx++;
        item.OutputToStream(oStream, metricValuesSs.str().c_str());
      }
  }

}

void MetricDataResponse::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dimensionHasBeenSet)
  {
      Aws::String dimensionLocationAndMember(location);
      dimensionLocationAndMember += ".Dimension";
      m_dimension.OutputToStream(oStream, dimensionLocationAndMember.c_str());
  }
  if(m_timestampHasBeenSet)
  {
      oStream << location << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_metricValuesHasBeenSet)
  {
      unsigned metricValuesIdx = 1;
      for(auto& item : m_metricValues)
      {
        Aws::StringStream metricValuesSs;
        metricValuesSs << location << ".MetricValueSet." << metricValuesIdx++;
        item.OutputToStream(oStream, metricValuesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
