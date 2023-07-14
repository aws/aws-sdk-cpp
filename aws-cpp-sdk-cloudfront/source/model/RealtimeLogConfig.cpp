/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/RealtimeLogConfig.h>
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

RealtimeLogConfig::RealtimeLogConfig() : 
    m_aRNHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_samplingRate(0),
    m_samplingRateHasBeenSet(false),
    m_endPointsHasBeenSet(false),
    m_fieldsHasBeenSet(false)
{
}

RealtimeLogConfig::RealtimeLogConfig(const XmlNode& xmlNode) : 
    m_aRNHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_samplingRate(0),
    m_samplingRateHasBeenSet(false),
    m_endPointsHasBeenSet(false),
    m_fieldsHasBeenSet(false)
{
  *this = xmlNode;
}

RealtimeLogConfig& RealtimeLogConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode aRNNode = resultNode.FirstChild("ARN");
    if(!aRNNode.IsNull())
    {
      m_aRN = Aws::Utils::Xml::DecodeEscapedXmlText(aRNNode.GetText());
      m_aRNHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode samplingRateNode = resultNode.FirstChild("SamplingRate");
    if(!samplingRateNode.IsNull())
    {
      m_samplingRate = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(samplingRateNode.GetText()).c_str()).c_str());
      m_samplingRateHasBeenSet = true;
    }
    XmlNode endPointsNode = resultNode.FirstChild("EndPoints");
    if(!endPointsNode.IsNull())
    {
      XmlNode endPointsMember = endPointsNode.FirstChild("member");
      while(!endPointsMember.IsNull())
      {
        m_endPoints.push_back(endPointsMember);
        endPointsMember = endPointsMember.NextNode("member");
      }

      m_endPointsHasBeenSet = true;
    }
    XmlNode fieldsNode = resultNode.FirstChild("Fields");
    if(!fieldsNode.IsNull())
    {
      XmlNode fieldsMember = fieldsNode.FirstChild("Field");
      while(!fieldsMember.IsNull())
      {
        m_fields.push_back(fieldsMember.GetText());
        fieldsMember = fieldsMember.NextNode("Field");
      }

      m_fieldsHasBeenSet = true;
    }
  }

  return *this;
}

void RealtimeLogConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_aRNHasBeenSet)
  {
   XmlNode aRNNode = parentNode.CreateChildElement("ARN");
   aRNNode.SetText(m_aRN);
  }

  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_samplingRateHasBeenSet)
  {
   XmlNode samplingRateNode = parentNode.CreateChildElement("SamplingRate");
   ss << m_samplingRate;
   samplingRateNode.SetText(ss.str());
   ss.str("");
  }

  if(m_endPointsHasBeenSet)
  {
   XmlNode endPointsParentNode = parentNode.CreateChildElement("EndPoints");
   for(const auto& item : m_endPoints)
   {
     XmlNode endPointsNode = endPointsParentNode.CreateChildElement("EndPoint");
     item.AddToNode(endPointsNode);
   }
  }

  if(m_fieldsHasBeenSet)
  {
   XmlNode fieldsParentNode = parentNode.CreateChildElement("Fields");
   for(const auto& item : m_fields)
   {
     XmlNode fieldsNode = fieldsParentNode.CreateChildElement("Field");
     fieldsNode.SetText(item);
   }
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
