/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/GetHostedZoneLimitResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetHostedZoneLimitResult::GetHostedZoneLimitResult() : 
    m_count(0)
{
}

GetHostedZoneLimitResult::GetHostedZoneLimitResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_count(0)
{
  *this = result;
}

GetHostedZoneLimitResult& GetHostedZoneLimitResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode limitNode = resultNode.FirstChild("Limit");
    if(!limitNode.IsNull())
    {
      m_limit = limitNode;
    }
    XmlNode countNode = resultNode.FirstChild("Count");
    if(!countNode.IsNull())
    {
      m_count = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(countNode.GetText()).c_str()).c_str());
    }
  }

  return *this;
}
