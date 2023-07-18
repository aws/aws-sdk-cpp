/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ResponseHeadersPolicyServerTimingHeadersConfig.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

ResponseHeadersPolicyServerTimingHeadersConfig::ResponseHeadersPolicyServerTimingHeadersConfig() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_samplingRate(0.0),
    m_samplingRateHasBeenSet(false)
{
}

ResponseHeadersPolicyServerTimingHeadersConfig::ResponseHeadersPolicyServerTimingHeadersConfig(const XmlNode& xmlNode) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_samplingRate(0.0),
    m_samplingRateHasBeenSet(false)
{
  *this = xmlNode;
}

ResponseHeadersPolicyServerTimingHeadersConfig& ResponseHeadersPolicyServerTimingHeadersConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode samplingRateNode = resultNode.FirstChild("SamplingRate");
    if(!samplingRateNode.IsNull())
    {
      m_samplingRate = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(samplingRateNode.GetText()).c_str()).c_str());
      m_samplingRateHasBeenSet = true;
    }
  }

  return *this;
}

void ResponseHeadersPolicyServerTimingHeadersConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_enabledHasBeenSet)
  {
   XmlNode enabledNode = parentNode.CreateChildElement("Enabled");
   ss << std::boolalpha << m_enabled;
   enabledNode.SetText(ss.str());
   ss.str("");
  }

  if(m_samplingRateHasBeenSet)
  {
   XmlNode samplingRateNode = parentNode.CreateChildElement("SamplingRate");
   ss << m_samplingRate;
   samplingRateNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
