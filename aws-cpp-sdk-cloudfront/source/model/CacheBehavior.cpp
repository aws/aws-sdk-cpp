/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

CacheBehavior::CacheBehavior() : 
    m_pathPatternHasBeenSet(false),
    m_targetOriginIdHasBeenSet(false),
    m_forwardedValuesHasBeenSet(false),
    m_trustedSignersHasBeenSet(false),
    m_viewerProtocolPolicy(ViewerProtocolPolicy::NOT_SET),
    m_viewerProtocolPolicyHasBeenSet(false),
    m_minTTL(0),
    m_minTTLHasBeenSet(false),
    m_allowedMethodsHasBeenSet(false),
    m_smoothStreaming(false),
    m_smoothStreamingHasBeenSet(false),
    m_defaultTTL(0),
    m_defaultTTLHasBeenSet(false),
    m_maxTTL(0),
    m_maxTTLHasBeenSet(false),
    m_compress(false),
    m_compressHasBeenSet(false),
    m_lambdaFunctionAssociationsHasBeenSet(false),
    m_fieldLevelEncryptionIdHasBeenSet(false)
{
}

CacheBehavior::CacheBehavior(const XmlNode& xmlNode) : 
    m_pathPatternHasBeenSet(false),
    m_targetOriginIdHasBeenSet(false),
    m_forwardedValuesHasBeenSet(false),
    m_trustedSignersHasBeenSet(false),
    m_viewerProtocolPolicy(ViewerProtocolPolicy::NOT_SET),
    m_viewerProtocolPolicyHasBeenSet(false),
    m_minTTL(0),
    m_minTTLHasBeenSet(false),
    m_allowedMethodsHasBeenSet(false),
    m_smoothStreaming(false),
    m_smoothStreamingHasBeenSet(false),
    m_defaultTTL(0),
    m_defaultTTLHasBeenSet(false),
    m_maxTTL(0),
    m_maxTTLHasBeenSet(false),
    m_compress(false),
    m_compressHasBeenSet(false),
    m_lambdaFunctionAssociationsHasBeenSet(false),
    m_fieldLevelEncryptionIdHasBeenSet(false)
{
  *this = xmlNode;
}

CacheBehavior& CacheBehavior::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode pathPatternNode = resultNode.FirstChild("PathPattern");
    if(!pathPatternNode.IsNull())
    {
      m_pathPattern = pathPatternNode.GetText();
      m_pathPatternHasBeenSet = true;
    }
    XmlNode targetOriginIdNode = resultNode.FirstChild("TargetOriginId");
    if(!targetOriginIdNode.IsNull())
    {
      m_targetOriginId = targetOriginIdNode.GetText();
      m_targetOriginIdHasBeenSet = true;
    }
    XmlNode forwardedValuesNode = resultNode.FirstChild("ForwardedValues");
    if(!forwardedValuesNode.IsNull())
    {
      m_forwardedValues = forwardedValuesNode;
      m_forwardedValuesHasBeenSet = true;
    }
    XmlNode trustedSignersNode = resultNode.FirstChild("TrustedSigners");
    if(!trustedSignersNode.IsNull())
    {
      m_trustedSigners = trustedSignersNode;
      m_trustedSignersHasBeenSet = true;
    }
    XmlNode viewerProtocolPolicyNode = resultNode.FirstChild("ViewerProtocolPolicy");
    if(!viewerProtocolPolicyNode.IsNull())
    {
      m_viewerProtocolPolicy = ViewerProtocolPolicyMapper::GetViewerProtocolPolicyForName(StringUtils::Trim(viewerProtocolPolicyNode.GetText().c_str()).c_str());
      m_viewerProtocolPolicyHasBeenSet = true;
    }
    XmlNode minTTLNode = resultNode.FirstChild("MinTTL");
    if(!minTTLNode.IsNull())
    {
      m_minTTL = StringUtils::ConvertToInt64(StringUtils::Trim(minTTLNode.GetText().c_str()).c_str());
      m_minTTLHasBeenSet = true;
    }
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
    XmlNode defaultTTLNode = resultNode.FirstChild("DefaultTTL");
    if(!defaultTTLNode.IsNull())
    {
      m_defaultTTL = StringUtils::ConvertToInt64(StringUtils::Trim(defaultTTLNode.GetText().c_str()).c_str());
      m_defaultTTLHasBeenSet = true;
    }
    XmlNode maxTTLNode = resultNode.FirstChild("MaxTTL");
    if(!maxTTLNode.IsNull())
    {
      m_maxTTL = StringUtils::ConvertToInt64(StringUtils::Trim(maxTTLNode.GetText().c_str()).c_str());
      m_maxTTLHasBeenSet = true;
    }
    XmlNode compressNode = resultNode.FirstChild("Compress");
    if(!compressNode.IsNull())
    {
      m_compress = StringUtils::ConvertToBool(StringUtils::Trim(compressNode.GetText().c_str()).c_str());
      m_compressHasBeenSet = true;
    }
    XmlNode lambdaFunctionAssociationsNode = resultNode.FirstChild("LambdaFunctionAssociations");
    if(!lambdaFunctionAssociationsNode.IsNull())
    {
      m_lambdaFunctionAssociations = lambdaFunctionAssociationsNode;
      m_lambdaFunctionAssociationsHasBeenSet = true;
    }
    XmlNode fieldLevelEncryptionIdNode = resultNode.FirstChild("FieldLevelEncryptionId");
    if(!fieldLevelEncryptionIdNode.IsNull())
    {
      m_fieldLevelEncryptionId = fieldLevelEncryptionIdNode.GetText();
      m_fieldLevelEncryptionIdHasBeenSet = true;
    }
  }

  return *this;
}

void CacheBehavior::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_pathPatternHasBeenSet)
  {
   XmlNode pathPatternNode = parentNode.CreateChildElement("PathPattern");
   pathPatternNode.SetText(m_pathPattern);
  }

  if(m_targetOriginIdHasBeenSet)
  {
   XmlNode targetOriginIdNode = parentNode.CreateChildElement("TargetOriginId");
   targetOriginIdNode.SetText(m_targetOriginId);
  }

  if(m_forwardedValuesHasBeenSet)
  {
   XmlNode forwardedValuesNode = parentNode.CreateChildElement("ForwardedValues");
   m_forwardedValues.AddToNode(forwardedValuesNode);
  }

  if(m_trustedSignersHasBeenSet)
  {
   XmlNode trustedSignersNode = parentNode.CreateChildElement("TrustedSigners");
   m_trustedSigners.AddToNode(trustedSignersNode);
  }

  if(m_viewerProtocolPolicyHasBeenSet)
  {
   XmlNode viewerProtocolPolicyNode = parentNode.CreateChildElement("ViewerProtocolPolicy");
   viewerProtocolPolicyNode.SetText(ViewerProtocolPolicyMapper::GetNameForViewerProtocolPolicy(m_viewerProtocolPolicy));
  }

  if(m_minTTLHasBeenSet)
  {
   XmlNode minTTLNode = parentNode.CreateChildElement("MinTTL");
   ss << m_minTTL;
   minTTLNode.SetText(ss.str());
   ss.str("");
  }

  if(m_allowedMethodsHasBeenSet)
  {
   XmlNode allowedMethodsNode = parentNode.CreateChildElement("AllowedMethods");
   m_allowedMethods.AddToNode(allowedMethodsNode);
  }

  if(m_smoothStreamingHasBeenSet)
  {
   XmlNode smoothStreamingNode = parentNode.CreateChildElement("SmoothStreaming");
   ss << std::boolalpha << m_smoothStreaming;
   smoothStreamingNode.SetText(ss.str());
   ss.str("");
  }

  if(m_defaultTTLHasBeenSet)
  {
   XmlNode defaultTTLNode = parentNode.CreateChildElement("DefaultTTL");
   ss << m_defaultTTL;
   defaultTTLNode.SetText(ss.str());
   ss.str("");
  }

  if(m_maxTTLHasBeenSet)
  {
   XmlNode maxTTLNode = parentNode.CreateChildElement("MaxTTL");
   ss << m_maxTTL;
   maxTTLNode.SetText(ss.str());
   ss.str("");
  }

  if(m_compressHasBeenSet)
  {
   XmlNode compressNode = parentNode.CreateChildElement("Compress");
   ss << std::boolalpha << m_compress;
   compressNode.SetText(ss.str());
   ss.str("");
  }

  if(m_lambdaFunctionAssociationsHasBeenSet)
  {
   XmlNode lambdaFunctionAssociationsNode = parentNode.CreateChildElement("LambdaFunctionAssociations");
   m_lambdaFunctionAssociations.AddToNode(lambdaFunctionAssociationsNode);
  }

  if(m_fieldLevelEncryptionIdHasBeenSet)
  {
   XmlNode fieldLevelEncryptionIdNode = parentNode.CreateChildElement("FieldLevelEncryptionId");
   fieldLevelEncryptionIdNode.SetText(m_fieldLevelEncryptionId);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
