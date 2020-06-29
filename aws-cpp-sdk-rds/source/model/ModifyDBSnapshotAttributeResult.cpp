/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyDBSnapshotAttributeResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ModifyDBSnapshotAttributeResult::ModifyDBSnapshotAttributeResult()
{
}

ModifyDBSnapshotAttributeResult::ModifyDBSnapshotAttributeResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ModifyDBSnapshotAttributeResult& ModifyDBSnapshotAttributeResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyDBSnapshotAttributeResult"))
  {
    resultNode = rootNode.FirstChild("ModifyDBSnapshotAttributeResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBSnapshotAttributesResultNode = resultNode.FirstChild("DBSnapshotAttributesResult");
    if(!dBSnapshotAttributesResultNode.IsNull())
    {
      m_dBSnapshotAttributesResult = dBSnapshotAttributesResultNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::ModifyDBSnapshotAttributeResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
