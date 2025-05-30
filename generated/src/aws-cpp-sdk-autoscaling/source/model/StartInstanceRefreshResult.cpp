﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/StartInstanceRefreshResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

StartInstanceRefreshResult::StartInstanceRefreshResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

StartInstanceRefreshResult& StartInstanceRefreshResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "StartInstanceRefreshResult"))
  {
    resultNode = rootNode.FirstChild("StartInstanceRefreshResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode instanceRefreshIdNode = resultNode.FirstChild("InstanceRefreshId");
    if(!instanceRefreshIdNode.IsNull())
    {
      m_instanceRefreshId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceRefreshIdNode.GetText());
      m_instanceRefreshIdHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::StartInstanceRefreshResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
