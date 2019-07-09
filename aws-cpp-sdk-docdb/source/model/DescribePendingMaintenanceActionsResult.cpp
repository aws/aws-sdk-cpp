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

#include <aws/docdb/model/DescribePendingMaintenanceActionsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::DocDB::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribePendingMaintenanceActionsResult::DescribePendingMaintenanceActionsResult()
{
}

DescribePendingMaintenanceActionsResult::DescribePendingMaintenanceActionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribePendingMaintenanceActionsResult& DescribePendingMaintenanceActionsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribePendingMaintenanceActionsResult"))
  {
    resultNode = rootNode.FirstChild("DescribePendingMaintenanceActionsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode pendingMaintenanceActionsNode = resultNode.FirstChild("PendingMaintenanceActions");
    if(!pendingMaintenanceActionsNode.IsNull())
    {
      XmlNode pendingMaintenanceActionsMember = pendingMaintenanceActionsNode.FirstChild("ResourcePendingMaintenanceActions");
      while(!pendingMaintenanceActionsMember.IsNull())
      {
        m_pendingMaintenanceActions.push_back(pendingMaintenanceActionsMember);
        pendingMaintenanceActionsMember = pendingMaintenanceActionsMember.NextNode("ResourcePendingMaintenanceActions");
      }

    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = markerNode.GetText();
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::DocDB::Model::DescribePendingMaintenanceActionsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
