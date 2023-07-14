/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/GetHostedZoneCountResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetHostedZoneCountResult::GetHostedZoneCountResult() : 
    m_hostedZoneCount(0)
{
}

GetHostedZoneCountResult::GetHostedZoneCountResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_hostedZoneCount(0)
{
  *this = result;
}

GetHostedZoneCountResult& GetHostedZoneCountResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode hostedZoneCountNode = resultNode.FirstChild("HostedZoneCount");
    if(!hostedZoneCountNode.IsNull())
    {
      m_hostedZoneCount = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(hostedZoneCountNode.GetText()).c_str()).c_str());
    }
  }

  return *this;
}
