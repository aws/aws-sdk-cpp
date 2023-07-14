﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/StreamingDistribution.h>
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

StreamingDistribution::StreamingDistribution() : 
    m_idHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_activeTrustedSignersHasBeenSet(false),
    m_streamingDistributionConfigHasBeenSet(false)
{
}

StreamingDistribution::StreamingDistribution(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_activeTrustedSignersHasBeenSet(false),
    m_streamingDistributionConfigHasBeenSet(false)
{
  *this = xmlNode;
}

StreamingDistribution& StreamingDistribution::operator =(const XmlNode& xmlNode)
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
    XmlNode aRNNode = resultNode.FirstChild("ARN");
    if(!aRNNode.IsNull())
    {
      m_aRN = Aws::Utils::Xml::DecodeEscapedXmlText(aRNNode.GetText());
      m_aRNHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode lastModifiedTimeNode = resultNode.FirstChild("LastModifiedTime");
    if(!lastModifiedTimeNode.IsNull())
    {
      m_lastModifiedTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastModifiedTimeNode.GetText()).c_str()).c_str(), DateFormat::ISO_8601);
      m_lastModifiedTimeHasBeenSet = true;
    }
    XmlNode domainNameNode = resultNode.FirstChild("DomainName");
    if(!domainNameNode.IsNull())
    {
      m_domainName = Aws::Utils::Xml::DecodeEscapedXmlText(domainNameNode.GetText());
      m_domainNameHasBeenSet = true;
    }
    XmlNode activeTrustedSignersNode = resultNode.FirstChild("ActiveTrustedSigners");
    if(!activeTrustedSignersNode.IsNull())
    {
      m_activeTrustedSigners = activeTrustedSignersNode;
      m_activeTrustedSignersHasBeenSet = true;
    }
    XmlNode streamingDistributionConfigNode = resultNode.FirstChild("StreamingDistributionConfig");
    if(!streamingDistributionConfigNode.IsNull())
    {
      m_streamingDistributionConfig = streamingDistributionConfigNode;
      m_streamingDistributionConfigHasBeenSet = true;
    }
  }

  return *this;
}

void StreamingDistribution::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_aRNHasBeenSet)
  {
   XmlNode aRNNode = parentNode.CreateChildElement("ARN");
   aRNNode.SetText(m_aRN);
  }

  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(m_status);
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   XmlNode lastModifiedTimeNode = parentNode.CreateChildElement("LastModifiedTime");
   lastModifiedTimeNode.SetText(m_lastModifiedTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_domainNameHasBeenSet)
  {
   XmlNode domainNameNode = parentNode.CreateChildElement("DomainName");
   domainNameNode.SetText(m_domainName);
  }

  if(m_activeTrustedSignersHasBeenSet)
  {
   XmlNode activeTrustedSignersNode = parentNode.CreateChildElement("ActiveTrustedSigners");
   m_activeTrustedSigners.AddToNode(activeTrustedSignersNode);
  }

  if(m_streamingDistributionConfigHasBeenSet)
  {
   XmlNode streamingDistributionConfigNode = parentNode.CreateChildElement("StreamingDistributionConfig");
   m_streamingDistributionConfig.AddToNode(streamingDistributionConfigNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
