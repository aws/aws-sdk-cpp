/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
      m_dashboardArn = dashboardArnNode.GetText();
    }
    XmlNode dashboardBodyNode = resultNode.FirstChild("DashboardBody");
    if(!dashboardBodyNode.IsNull())
    {
      m_dashboardBody = dashboardBodyNode.GetText();
    }
    XmlNode dashboardNameNode = resultNode.FirstChild("DashboardName");
    if(!dashboardNameNode.IsNull())
    {
      m_dashboardName = dashboardNameNode.GetText();
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudWatch::Model::GetDashboardResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
