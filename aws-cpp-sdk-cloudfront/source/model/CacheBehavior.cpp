/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_trustedSignersHasBeenSet(false),
    m_trustedKeyGroupsHasBeenSet(false),
    m_viewerProtocolPolicy(ViewerProtocolPolicy::NOT_SET),
    m_viewerProtocolPolicyHasBeenSet(false),
    m_allowedMethodsHasBeenSet(false),
    m_smoothStreaming(false),
    m_smoothStreamingHasBeenSet(false),
    m_compress(false),
    m_compressHasBeenSet(false),
    m_lambdaFunctionAssociationsHasBeenSet(false),
    m_fieldLevelEncryptionIdHasBeenSet(false),
    m_realtimeLogConfigArnHasBeenSet(false),
    m_cachePolicyIdHasBeenSet(false),
    m_originRequestPolicyIdHasBeenSet(false)
{
}

CacheBehavior::CacheBehavior(const XmlNode& xmlNode) : 
    m_pathPatternHasBeenSet(false),
    m_targetOriginIdHasBeenSet(false),
    m_trustedSignersHasBeenSet(false),
    m_trustedKeyGroupsHasBeenSet(false),
    m_viewerProtocolPolicy(ViewerProtocolPolicy::NOT_SET),
    m_viewerProtocolPolicyHasBeenSet(false),
    m_allowedMethodsHasBeenSet(false),
    m_smoothStreaming(false),
    m_smoothStreamingHasBeenSet(false),
    m_compress(false),
    m_compressHasBeenSet(false),
    m_lambdaFunctionAssociationsHasBeenSet(false),
    m_fieldLevelEncryptionIdHasBeenSet(false),
    m_realtimeLogConfigArnHasBeenSet(false),
    m_cachePolicyIdHasBeenSet(false),
    m_originRequestPolicyIdHasBeenSet(false)
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
      m_pathPattern = Aws::Utils::Xml::DecodeEscapedXmlText(pathPatternNode.GetText());
      m_pathPatternHasBeenSet = true;
    }
    XmlNode targetOriginIdNode = resultNode.FirstChild("TargetOriginId");
    if(!targetOriginIdNode.IsNull())
    {
      m_targetOriginId = Aws::Utils::Xml::DecodeEscapedXmlText(targetOriginIdNode.GetText());
      m_targetOriginIdHasBeenSet = true;
    }
    XmlNode trustedSignersNode = resultNode.FirstChild("TrustedSigners");
    if(!trustedSignersNode.IsNull())
    {
      m_trustedSigners = trustedSignersNode;
      m_trustedSignersHasBeenSet = true;
    }
    XmlNode trustedKeyGroupsNode = resultNode.FirstChild("TrustedKeyGroups");
    if(!trustedKeyGroupsNode.IsNull())
    {
      m_trustedKeyGroups = trustedKeyGroupsNode;
      m_trustedKeyGroupsHasBeenSet = true;
    }
    XmlNode viewerProtocolPolicyNode = resultNode.FirstChild("ViewerProtocolPolicy");
    if(!viewerProtocolPolicyNode.IsNull())
    {
      m_viewerProtocolPolicy = ViewerProtocolPolicyMapper::GetViewerProtocolPolicyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(viewerProtocolPolicyNode.GetText()).c_str()).c_str());
      m_viewerProtocolPolicyHasBeenSet = true;
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
      m_smoothStreaming = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(smoothStreamingNode.GetText()).c_str()).c_str());
      m_smoothStreamingHasBeenSet = true;
    }
    XmlNode compressNode = resultNode.FirstChild("Compress");
    if(!compressNode.IsNull())
    {
      m_compress = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(compressNode.GetText()).c_str()).c_str());
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
      m_fieldLevelEncryptionId = Aws::Utils::Xml::DecodeEscapedXmlText(fieldLevelEncryptionIdNode.GetText());
      m_fieldLevelEncryptionIdHasBeenSet = true;
    }
    XmlNode realtimeLogConfigArnNode = resultNode.FirstChild("RealtimeLogConfigArn");
    if(!realtimeLogConfigArnNode.IsNull())
    {
      m_realtimeLogConfigArn = Aws::Utils::Xml::DecodeEscapedXmlText(realtimeLogConfigArnNode.GetText());
      m_realtimeLogConfigArnHasBeenSet = true;
    }
    XmlNode cachePolicyIdNode = resultNode.FirstChild("CachePolicyId");
    if(!cachePolicyIdNode.IsNull())
    {
      m_cachePolicyId = Aws::Utils::Xml::DecodeEscapedXmlText(cachePolicyIdNode.GetText());
      m_cachePolicyIdHasBeenSet = true;
    }
    XmlNode originRequestPolicyIdNode = resultNode.FirstChild("OriginRequestPolicyId");
    if(!originRequestPolicyIdNode.IsNull())
    {
      m_originRequestPolicyId = Aws::Utils::Xml::DecodeEscapedXmlText(originRequestPolicyIdNode.GetText());
      m_originRequestPolicyIdHasBeenSet = true;
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

  if(m_trustedSignersHasBeenSet)
  {
   XmlNode trustedSignersNode = parentNode.CreateChildElement("TrustedSigners");
   m_trustedSigners.AddToNode(trustedSignersNode);
  }

  if(m_trustedKeyGroupsHasBeenSet)
  {
   XmlNode trustedKeyGroupsNode = parentNode.CreateChildElement("TrustedKeyGroups");
   m_trustedKeyGroups.AddToNode(trustedKeyGroupsNode);
  }

  if(m_viewerProtocolPolicyHasBeenSet)
  {
   XmlNode viewerProtocolPolicyNode = parentNode.CreateChildElement("ViewerProtocolPolicy");
   viewerProtocolPolicyNode.SetText(ViewerProtocolPolicyMapper::GetNameForViewerProtocolPolicy(m_viewerProtocolPolicy));
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

  if(m_realtimeLogConfigArnHasBeenSet)
  {
   XmlNode realtimeLogConfigArnNode = parentNode.CreateChildElement("RealtimeLogConfigArn");
   realtimeLogConfigArnNode.SetText(m_realtimeLogConfigArn);
  }

  if(m_cachePolicyIdHasBeenSet)
  {
   XmlNode cachePolicyIdNode = parentNode.CreateChildElement("CachePolicyId");
   cachePolicyIdNode.SetText(m_cachePolicyId);
  }

  if(m_originRequestPolicyIdHasBeenSet)
  {
   XmlNode originRequestPolicyIdNode = parentNode.CreateChildElement("OriginRequestPolicyId");
   originRequestPolicyIdNode.SetText(m_originRequestPolicyId);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
