/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribePartnersResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribePartnersResult::DescribePartnersResult()
{
}

DescribePartnersResult::DescribePartnersResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribePartnersResult& DescribePartnersResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribePartnersResult"))
  {
    resultNode = rootNode.FirstChild("DescribePartnersResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode partnerIntegrationInfoListNode = resultNode.FirstChild("PartnerIntegrationInfoList");
    if(!partnerIntegrationInfoListNode.IsNull())
    {
      XmlNode partnerIntegrationInfoListMember = partnerIntegrationInfoListNode.FirstChild("PartnerIntegrationInfo");
      while(!partnerIntegrationInfoListMember.IsNull())
      {
        m_partnerIntegrationInfoList.push_back(partnerIntegrationInfoListMember);
        partnerIntegrationInfoListMember = partnerIntegrationInfoListMember.NextNode("PartnerIntegrationInfo");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribePartnersResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
