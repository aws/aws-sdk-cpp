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
#include <aws/cloudfront/model/LoggingConfig.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

LoggingConfig::LoggingConfig() : 
    m_enabled(false),
    m_includeCookies(false)
{
}

LoggingConfig::LoggingConfig(const XmlNode& xmlNode) : 
    m_enabled(false),
    m_includeCookies(false)
{
  *this = xmlNode;
}

LoggingConfig& LoggingConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(enabledNode.GetText().c_str()).c_str());
    XmlNode includeCookiesNode = resultNode.FirstChild("IncludeCookies");
    m_includeCookies = StringUtils::ConvertToBool(StringUtils::Trim(includeCookiesNode.GetText().c_str()).c_str());
    XmlNode bucketNode = resultNode.FirstChild("Bucket");
    m_bucket = StringUtils::Trim(bucketNode.GetText().c_str());
    XmlNode prefixNode = resultNode.FirstChild("Prefix");
    m_prefix = StringUtils::Trim(prefixNode.GetText().c_str());
  }

  return *this;
}

void LoggingConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  XmlNode enabledNode = parentNode.CreateChildElement("Enabled");
  ss << m_enabled;
  enabledNode.SetText(ss.str());
  ss.str("");
  XmlNode includeCookiesNode = parentNode.CreateChildElement("IncludeCookies");
  ss << m_includeCookies;
  includeCookiesNode.SetText(ss.str());
  ss.str("");
  XmlNode bucketNode = parentNode.CreateChildElement("Bucket");
  bucketNode.SetText(m_bucket);
  XmlNode prefixNode = parentNode.CreateChildElement("Prefix");
  prefixNode.SetText(m_prefix);
}
