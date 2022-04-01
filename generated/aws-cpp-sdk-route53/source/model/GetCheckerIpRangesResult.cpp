/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/GetCheckerIpRangesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetCheckerIpRangesResult::GetCheckerIpRangesResult()
{
}

GetCheckerIpRangesResult::GetCheckerIpRangesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetCheckerIpRangesResult& GetCheckerIpRangesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode checkerIpRangesNode = resultNode.FirstChild("CheckerIpRanges");
    if(!checkerIpRangesNode.IsNull())
    {
      XmlNode checkerIpRangesMember = checkerIpRangesNode.FirstChild("member");
      while(!checkerIpRangesMember.IsNull())
      {
        m_checkerIpRanges.push_back(checkerIpRangesMember.GetText());
        checkerIpRangesMember = checkerIpRangesMember.NextNode("member");
      }

    }
  }

  return *this;
}
