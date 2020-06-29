/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DetachInstancesResult.h>
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

DetachInstancesResult::DetachInstancesResult()
{
}

DetachInstancesResult::DetachInstancesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DetachInstancesResult& DetachInstancesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DetachInstancesResult"))
  {
    resultNode = rootNode.FirstChild("DetachInstancesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode activitiesNode = resultNode.FirstChild("Activities");
    if(!activitiesNode.IsNull())
    {
      XmlNode activitiesMember = activitiesNode.FirstChild("member");
      while(!activitiesMember.IsNull())
      {
        m_activities.push_back(activitiesMember);
        activitiesMember = activitiesMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::DetachInstancesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
