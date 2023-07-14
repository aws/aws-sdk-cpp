/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/DescribePendingMaintenanceActionsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Neptune::Model;
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
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Neptune::Model::DescribePendingMaintenanceActionsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
