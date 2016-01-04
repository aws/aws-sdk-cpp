/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/cloudfront/model/CustomOriginConfig.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CustomOriginConfig::CustomOriginConfig() : 
    m_hTTPPort(0),
    m_hTTPPortHasBeenSet(false),
    m_hTTPSPort(0),
    m_hTTPSPortHasBeenSet(false),
    m_originProtocolPolicyHasBeenSet(false)
{
}

CustomOriginConfig::CustomOriginConfig(const XmlNode& xmlNode) : 
    m_hTTPPort(0),
    m_hTTPPortHasBeenSet(false),
    m_hTTPSPort(0),
    m_hTTPSPortHasBeenSet(false),
    m_originProtocolPolicyHasBeenSet(false)
{
  *this = xmlNode;
}

CustomOriginConfig& CustomOriginConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode hTTPPortNode = resultNode.FirstChild("HTTPPort");
    if(!hTTPPortNode.IsNull())
    {
      m_hTTPPort = StringUtils::ConvertToInt32(StringUtils::Trim(hTTPPortNode.GetText().c_str()).c_str());
      m_hTTPPortHasBeenSet = true;
    }
    XmlNode hTTPSPortNode = resultNode.FirstChild("HTTPSPort");
    if(!hTTPSPortNode.IsNull())
    {
      m_hTTPSPort = StringUtils::ConvertToInt32(StringUtils::Trim(hTTPSPortNode.GetText().c_str()).c_str());
      m_hTTPSPortHasBeenSet = true;
    }
    XmlNode originProtocolPolicyNode = resultNode.FirstChild("OriginProtocolPolicy");
    if(!originProtocolPolicyNode.IsNull())
    {
      m_originProtocolPolicy = OriginProtocolPolicyMapper::GetOriginProtocolPolicyForName(StringUtils::Trim(originProtocolPolicyNode.GetText().c_str()).c_str());
      m_originProtocolPolicyHasBeenSet = true;
    }
  }

  return *this;
}

void CustomOriginConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_hTTPPortHasBeenSet)
  {
   XmlNode hTTPPortNode = parentNode.CreateChildElement("HTTPPort");
  ss << m_hTTPPort;
   hTTPPortNode.SetText(ss.str());
  ss.str("");
  }

  if(m_hTTPSPortHasBeenSet)
  {
   XmlNode hTTPSPortNode = parentNode.CreateChildElement("HTTPSPort");
  ss << m_hTTPSPort;
   hTTPSPortNode.SetText(ss.str());
  ss.str("");
  }

  if(m_originProtocolPolicyHasBeenSet)
  {
   XmlNode originProtocolPolicyNode = parentNode.CreateChildElement("OriginProtocolPolicy");
   originProtocolPolicyNode.SetText(OriginProtocolPolicyMapper::GetNameForOriginProtocolPolicy(m_originProtocolPolicy));
  }

}
