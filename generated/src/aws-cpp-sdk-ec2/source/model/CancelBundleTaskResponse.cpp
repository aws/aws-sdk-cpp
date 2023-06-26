/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CancelBundleTaskResponse.h>
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

CancelBundleTaskResponse::CancelBundleTaskResponse()
{
}

CancelBundleTaskResponse::CancelBundleTaskResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CancelBundleTaskResponse& CancelBundleTaskResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CancelBundleTaskResponse"))
  {
    resultNode = rootNode.FirstChild("CancelBundleTaskResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode bundleTaskNode = resultNode.FirstChild("bundleInstanceTask");
    if(!bundleTaskNode.IsNull())
    {
      m_bundleTask = bundleTaskNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CancelBundleTaskResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
