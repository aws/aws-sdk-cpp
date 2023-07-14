/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ListAccessPointsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListAccessPointsResult::ListAccessPointsResult()
{
}

ListAccessPointsResult::ListAccessPointsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListAccessPointsResult& ListAccessPointsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode accessPointListNode = resultNode.FirstChild("AccessPointList");
    if(!accessPointListNode.IsNull())
    {
      XmlNode accessPointListMember = accessPointListNode.FirstChild("AccessPoint");
      while(!accessPointListMember.IsNull())
      {
        m_accessPointList.push_back(accessPointListMember);
        accessPointListMember = accessPointListMember.NextNode("AccessPoint");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  return *this;
}
