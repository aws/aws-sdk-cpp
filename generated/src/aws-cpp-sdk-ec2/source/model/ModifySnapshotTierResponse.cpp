/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifySnapshotTierResponse.h>
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

ModifySnapshotTierResponse::ModifySnapshotTierResponse()
{
}

ModifySnapshotTierResponse::ModifySnapshotTierResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ModifySnapshotTierResponse& ModifySnapshotTierResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifySnapshotTierResponse"))
  {
    resultNode = rootNode.FirstChild("ModifySnapshotTierResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode snapshotIdNode = resultNode.FirstChild("snapshotId");
    if(!snapshotIdNode.IsNull())
    {
      m_snapshotId = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotIdNode.GetText());
    }
    XmlNode tieringStartTimeNode = resultNode.FirstChild("tieringStartTime");
    if(!tieringStartTimeNode.IsNull())
    {
      m_tieringStartTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(tieringStartTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ModifySnapshotTierResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
