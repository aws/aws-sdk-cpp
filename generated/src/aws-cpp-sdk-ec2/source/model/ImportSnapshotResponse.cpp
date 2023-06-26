/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImportSnapshotResponse.h>
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

ImportSnapshotResponse::ImportSnapshotResponse()
{
}

ImportSnapshotResponse::ImportSnapshotResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ImportSnapshotResponse& ImportSnapshotResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ImportSnapshotResponse"))
  {
    resultNode = rootNode.FirstChild("ImportSnapshotResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
    }
    XmlNode importTaskIdNode = resultNode.FirstChild("importTaskId");
    if(!importTaskIdNode.IsNull())
    {
      m_importTaskId = Aws::Utils::Xml::DecodeEscapedXmlText(importTaskIdNode.GetText());
    }
    XmlNode snapshotTaskDetailNode = resultNode.FirstChild("snapshotTaskDetail");
    if(!snapshotTaskDetailNode.IsNull())
    {
      m_snapshotTaskDetail = snapshotTaskDetailNode;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ImportSnapshotResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
