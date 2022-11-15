/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/LoadForecast.h>
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

LoadForecast::LoadForecast() : 
    m_timestampsHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_metricSpecificationHasBeenSet(false)
{
}

LoadForecast::LoadForecast(const XmlNode& xmlNode) : 
    m_timestampsHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_metricSpecificationHasBeenSet(false)
{
  *this = xmlNode;
}

LoadForecast& LoadForecast::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode timestampsNode = resultNode.FirstChild("Timestamps");
    if(!timestampsNode.IsNull())
    {
      XmlNode timestampsMember = timestampsNode.FirstChild("member");
      while(!timestampsMember.IsNull())
      {
        m_timestamps.push_back(DateTime(StringUtils::Trim(timestampsMember.GetText().c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601));
        timestampsMember = timestampsMember.NextNode("member");
      }

      m_timestampsHasBeenSet = true;
    }
    XmlNode valuesNode = resultNode.FirstChild("Values");
    if(!valuesNode.IsNull())
    {
      XmlNode valuesMember = valuesNode.FirstChild("member");
      while(!valuesMember.IsNull())
      {
         m_values.push_back(StringUtils::ConvertToDouble(StringUtils::Trim(valuesMember.GetText().c_str()).c_str()));
        valuesMember = valuesMember.NextNode("member");
      }

      m_valuesHasBeenSet = true;
    }
    XmlNode metricSpecificationNode = resultNode.FirstChild("MetricSpecification");
    if(!metricSpecificationNode.IsNull())
    {
      m_metricSpecification = metricSpecificationNode;
      m_metricSpecificationHasBeenSet = true;
    }
  }

  return *this;
}

void LoadForecast::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_timestampsHasBeenSet)
  {
      unsigned timestampsIdx = 1;
      for(auto& item : m_timestamps)
      {
        oStream << location << index << locationValue << ".Timestamps.member." << timestampsIdx++ << "=" << StringUtils::URLEncode(item.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
      }
  }

  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        oStream << location << index << locationValue << ".Values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item) << "&";
      }
  }

  if(m_metricSpecificationHasBeenSet)
  {
      Aws::StringStream metricSpecificationLocationAndMemberSs;
      metricSpecificationLocationAndMemberSs << location << index << locationValue << ".MetricSpecification";
      m_metricSpecification.OutputToStream(oStream, metricSpecificationLocationAndMemberSs.str().c_str());
  }

}

void LoadForecast::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_timestampsHasBeenSet)
  {
      unsigned timestampsIdx = 1;
      for(auto& item : m_timestamps)
      {
        oStream << location << ".Timestamps.member." << timestampsIdx++ << "=" << StringUtils::URLEncode(item.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
      }
  }
  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
          oStream << location << ".Values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item) << "&";
      }
  }
  if(m_metricSpecificationHasBeenSet)
  {
      Aws::String metricSpecificationLocationAndMember(location);
      metricSpecificationLocationAndMember += ".MetricSpecification";
      m_metricSpecification.OutputToStream(oStream, metricSpecificationLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
