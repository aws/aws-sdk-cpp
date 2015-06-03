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
#include <aws/cloudfront/model/StreamingDistribution.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

StreamingDistribution::StreamingDistribution() : 
    m_lastModifiedTime(0.0),
    m_lastModifiedTimeHasBeenSet(false)
{
}

StreamingDistribution::StreamingDistribution(const XmlNode& xmlNode) : 
    m_lastModifiedTime(0.0),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = xmlNode;
}

StreamingDistribution& StreamingDistribution::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    m_id = StringUtils::Trim(idNode.GetText().c_str());
    XmlNode statusNode = resultNode.FirstChild("Status");
    m_status = StringUtils::Trim(statusNode.GetText().c_str());
    XmlNode lastModifiedTimeNode = resultNode.FirstChild("LastModifiedTime");
    if(!lastModifiedTimeNode.IsNull())
    {
      m_lastModifiedTime = StringUtils::ConvertToDouble(StringUtils::Trim(lastModifiedTimeNode.GetText().c_str()).c_str());
      m_lastModifiedTimeHasBeenSet = true;
    }
    XmlNode domainNameNode = resultNode.FirstChild("DomainName");
    m_domainName = StringUtils::Trim(domainNameNode.GetText().c_str());
    XmlNode activeTrustedSignersNode = resultNode.FirstChild("ActiveTrustedSigners");
    m_activeTrustedSigners = activeTrustedSignersNode;
    XmlNode streamingDistributionConfigNode = resultNode.FirstChild("StreamingDistributionConfig");
    m_streamingDistributionConfig = streamingDistributionConfigNode;
  }

  return *this;
}

void StreamingDistribution::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  XmlNode idNode = parentNode.CreateChildElement("Id");
  idNode.SetText(m_id);
  XmlNode statusNode = parentNode.CreateChildElement("Status");
  statusNode.SetText(m_status);
  if(m_lastModifiedTimeHasBeenSet)
  {
   XmlNode lastModifiedTimeNode = parentNode.CreateChildElement("LastModifiedTime");
  ss << m_lastModifiedTime;
   lastModifiedTimeNode.SetText(ss.str());
  ss.str("");
  }

  XmlNode domainNameNode = parentNode.CreateChildElement("DomainName");
  domainNameNode.SetText(m_domainName);
  XmlNode activeTrustedSignersNode = parentNode.CreateChildElement("ActiveTrustedSigners");
  m_activeTrustedSigners.AddToNode(activeTrustedSignersNode);
  XmlNode streamingDistributionConfigNode = parentNode.CreateChildElement("StreamingDistributionConfig");
  m_streamingDistributionConfig.AddToNode(streamingDistributionConfigNode);
}
