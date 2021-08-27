/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/GetDashboardResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetDashboardResult::GetDashboardResult()
{
}

GetDashboardResult::GetDashboardResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetDashboardResult& GetDashboardResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetDashboardResult"))
  {
    resultNode = rootNode.FirstChild("GetDashboardResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dashboardArnNode = resultNode.FirstChild("DashboardArn");
    if(!dashboardArnNode.IsNull())
    {
      m_dashboardArn = Aws::Utils::Xml::DecodeEscapedXmlText(dashboardArnNode.GetText());
    }
    XmlNode dashboardBodyNode = resultNode.FirstChild("DashboardBody");
    if(!dashboardBodyNode.IsNull())
    {
      m_dashboardBody = Aws::Utils::Xml::DecodeEscapedXmlText(dashboardBodyNode.GetText());
    }
    XmlNode dashboardNameNode = resultNode.FirstChild("DashboardName");
    if(!dashboardNameNode.IsNull())
    {
      m_dashboardName = Aws::Utils::Xml::DecodeEscapedXmlText(dashboardNameNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudWatch::Model::GetDashboardResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
