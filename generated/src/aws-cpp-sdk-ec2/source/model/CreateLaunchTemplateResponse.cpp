﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateLaunchTemplateResponse.h>
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

CreateLaunchTemplateResponse::CreateLaunchTemplateResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateLaunchTemplateResponse& CreateLaunchTemplateResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateLaunchTemplateResponse"))
  {
    resultNode = rootNode.FirstChild("CreateLaunchTemplateResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode launchTemplateNode = resultNode.FirstChild("launchTemplate");
    if(!launchTemplateNode.IsNull())
    {
      m_launchTemplate = launchTemplateNode;
      m_launchTemplateHasBeenSet = true;
    }
    XmlNode warningNode = resultNode.FirstChild("warning");
    if(!warningNode.IsNull())
    {
      m_warning = warningNode;
      m_warningHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CreateLaunchTemplateResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
