/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/RecordLifecycleActionHeartbeatResult.h>
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

RecordLifecycleActionHeartbeatResult::RecordLifecycleActionHeartbeatResult()
{
}

RecordLifecycleActionHeartbeatResult::RecordLifecycleActionHeartbeatResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

RecordLifecycleActionHeartbeatResult& RecordLifecycleActionHeartbeatResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "RecordLifecycleActionHeartbeatResult"))
  {
    resultNode = rootNode.FirstChild("RecordLifecycleActionHeartbeatResult");
  }

  if(!resultNode.IsNull())
  {
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::RecordLifecycleActionHeartbeatResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
