/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateSnapshotsResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

CreateSnapshotsResponse::CreateSnapshotsResponse()
{
}

CreateSnapshotsResponse::CreateSnapshotsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateSnapshotsResponse& CreateSnapshotsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateSnapshotsResponse"))
  {
    resultNode = rootNode.FirstChild("CreateSnapshotsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode snapshotsNode = resultNode.FirstChild("snapshotSet");
    if(!snapshotsNode.IsNull())
    {
      XmlNode snapshotsMember = snapshotsNode.FirstChild("item");
      while(!snapshotsMember.IsNull())
      {
        m_snapshots.push_back(snapshotsMember);
        snapshotsMember = snapshotsMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CreateSnapshotsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
