/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DetectStackResourceDriftResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DetectStackResourceDriftResult::DetectStackResourceDriftResult()
{
}

DetectStackResourceDriftResult::DetectStackResourceDriftResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DetectStackResourceDriftResult& DetectStackResourceDriftResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DetectStackResourceDriftResult"))
  {
    resultNode = rootNode.FirstChild("DetectStackResourceDriftResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode stackResourceDriftNode = resultNode.FirstChild("StackResourceDrift");
    if(!stackResourceDriftNode.IsNull())
    {
      m_stackResourceDrift = stackResourceDriftNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DetectStackResourceDriftResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
