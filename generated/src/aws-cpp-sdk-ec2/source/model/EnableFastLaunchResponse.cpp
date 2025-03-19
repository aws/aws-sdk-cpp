/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EnableFastLaunchResponse.h>
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

EnableFastLaunchResponse::EnableFastLaunchResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

EnableFastLaunchResponse& EnableFastLaunchResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "EnableFastLaunchResponse"))
  {
    resultNode = rootNode.FirstChild("EnableFastLaunchResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode imageIdNode = resultNode.FirstChild("imageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = Aws::Utils::Xml::DecodeEscapedXmlText(imageIdNode.GetText());
      m_imageIdHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("resourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = FastLaunchResourceTypeMapper::GetFastLaunchResourceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText()).c_str()));
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode snapshotConfigurationNode = resultNode.FirstChild("snapshotConfiguration");
    if(!snapshotConfigurationNode.IsNull())
    {
      m_snapshotConfiguration = snapshotConfigurationNode;
      m_snapshotConfigurationHasBeenSet = true;
    }
    XmlNode launchTemplateNode = resultNode.FirstChild("launchTemplate");
    if(!launchTemplateNode.IsNull())
    {
      m_launchTemplate = launchTemplateNode;
      m_launchTemplateHasBeenSet = true;
    }
    XmlNode maxParallelLaunchesNode = resultNode.FirstChild("maxParallelLaunches");
    if(!maxParallelLaunchesNode.IsNull())
    {
      m_maxParallelLaunches = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxParallelLaunchesNode.GetText()).c_str()).c_str());
      m_maxParallelLaunchesHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = FastLaunchStateCodeMapper::GetFastLaunchStateCodeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode stateTransitionReasonNode = resultNode.FirstChild("stateTransitionReason");
    if(!stateTransitionReasonNode.IsNull())
    {
      m_stateTransitionReason = Aws::Utils::Xml::DecodeEscapedXmlText(stateTransitionReasonNode.GetText());
      m_stateTransitionReasonHasBeenSet = true;
    }
    XmlNode stateTransitionTimeNode = resultNode.FirstChild("stateTransitionTime");
    if(!stateTransitionTimeNode.IsNull())
    {
      m_stateTransitionTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateTransitionTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_stateTransitionTimeHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::EnableFastLaunchResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
