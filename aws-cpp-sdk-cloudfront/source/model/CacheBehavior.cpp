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
#include <aws/cloudfront/model/CacheBehavior.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CacheBehavior::CacheBehavior() : 
    m_minTTL(0),
    m_allowedMethodsHasBeenSet(false),
    m_smoothStreaming(false),
    m_smoothStreamingHasBeenSet(false)
{
}

CacheBehavior::CacheBehavior(const XmlNode& xmlNode) : 
    m_minTTL(0),
    m_allowedMethodsHasBeenSet(false),
    m_smoothStreaming(false),
    m_smoothStreamingHasBeenSet(false)
{
  *this = xmlNode;
}

CacheBehavior& CacheBehavior::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode pathPatternNode = resultNode.FirstChild("PathPattern");
    m_pathPattern = StringUtils::Trim(pathPatternNode.GetText().c_str());
    XmlNode targetOriginIdNode = resultNode.FirstChild("TargetOriginId");
    m_targetOriginId = StringUtils::Trim(targetOriginIdNode.GetText().c_str());
    XmlNode forwardedValuesNode = resultNode.FirstChild("ForwardedValues");
    m_forwardedValues = forwardedValuesNode;
    XmlNode trustedSignersNode = resultNode.FirstChild("TrustedSigners");
    m_trustedSigners = trustedSignersNode;
    XmlNode viewerProtocolPolicyNode = resultNode.FirstChild("ViewerProtocolPolicy");
    m_viewerProtocolPolicy = ViewerProtocolPolicyMapper::GetViewerProtocolPolicyForName(StringUtils::Trim(viewerProtocolPolicyNode.GetText().c_str()).c_str());
    XmlNode minTTLNode = resultNode.FirstChild("MinTTL");
    m_minTTL = StringUtils::ConvertToInt64(StringUtils::Trim(minTTLNode.GetText().c_str()).c_str());
    XmlNode allowedMethodsNode = resultNode.FirstChild("AllowedMethods");
    if(!allowedMethodsNode.IsNull())
    {
      m_allowedMethods = allowedMethodsNode;
      m_allowedMethodsHasBeenSet = true;
    }
    XmlNode smoothStreamingNode = resultNode.FirstChild("SmoothStreaming");
    if(!smoothStreamingNode.IsNull())
    {
      m_smoothStreaming = StringUtils::ConvertToBool(StringUtils::Trim(smoothStreamingNode.GetText().c_str()).c_str());
      m_smoothStreamingHasBeenSet = true;
    }
  }

  return *this;
}

void CacheBehavior::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  XmlNode pathPatternNode = parentNode.CreateChildElement("PathPattern");
  pathPatternNode.SetText(m_pathPattern);
  XmlNode targetOriginIdNode = parentNode.CreateChildElement("TargetOriginId");
  targetOriginIdNode.SetText(m_targetOriginId);
  XmlNode forwardedValuesNode = parentNode.CreateChildElement("ForwardedValues");
  m_forwardedValues.AddToNode(forwardedValuesNode);
  XmlNode trustedSignersNode = parentNode.CreateChildElement("TrustedSigners");
  m_trustedSigners.AddToNode(trustedSignersNode);
  XmlNode viewerProtocolPolicyNode = parentNode.CreateChildElement("ViewerProtocolPolicy");
  viewerProtocolPolicyNode.SetText(ViewerProtocolPolicyMapper::GetNameForViewerProtocolPolicy(m_viewerProtocolPolicy));
  XmlNode minTTLNode = parentNode.CreateChildElement("MinTTL");
  ss << m_minTTL;
  minTTLNode.SetText(ss.str());
  ss.str("");
  if(m_allowedMethodsHasBeenSet)
  {
   XmlNode allowedMethodsNode = parentNode.CreateChildElement("AllowedMethods");
   m_allowedMethods.AddToNode(allowedMethodsNode);
  }

  if(m_smoothStreamingHasBeenSet)
  {
   XmlNode smoothStreamingNode = parentNode.CreateChildElement("SmoothStreaming");
  ss << m_smoothStreaming;
   smoothStreamingNode.SetText(ss.str());
  ss.str("");
  }

}
