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

EnableFastLaunchResponse::EnableFastLaunchResponse() : 
    m_resourceType(FastLaunchResourceType::NOT_SET),
    m_maxParallelLaunches(0),
    m_state(FastLaunchStateCode::NOT_SET)
{
}

EnableFastLaunchResponse::EnableFastLaunchResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_resourceType(FastLaunchResourceType::NOT_SET),
    m_maxParallelLaunches(0),
    m_state(FastLaunchStateCode::NOT_SET)
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
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("resourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = FastLaunchResourceTypeMapper::GetFastLaunchResourceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText()).c_str()).c_str());
    }
    XmlNode snapshotConfigurationNode = resultNode.FirstChild("snapshotConfiguration");
    if(!snapshotConfigurationNode.IsNull())
    {
      m_snapshotConfiguration = snapshotConfigurationNode;
    }
    XmlNode launchTemplateNode = resultNode.FirstChild("launchTemplate");
    if(!launchTemplateNode.IsNull())
    {
      m_launchTemplate = launchTemplateNode;
    }
    XmlNode maxParallelLaunchesNode = resultNode.FirstChild("maxParallelLaunches");
    if(!maxParallelLaunchesNode.IsNull())
    {
      m_maxParallelLaunches = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxParallelLaunchesNode.GetText()).c_str()).c_str());
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = FastLaunchStateCodeMapper::GetFastLaunchStateCodeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
    }
    XmlNode stateTransitionReasonNode = resultNode.FirstChild("stateTransitionReason");
    if(!stateTransitionReasonNode.IsNull())
    {
      m_stateTransitionReason = Aws::Utils::Xml::DecodeEscapedXmlText(stateTransitionReasonNode.GetText());
    }
    XmlNode stateTransitionTimeNode = resultNode.FirstChild("stateTransitionTime");
    if(!stateTransitionTimeNode.IsNull())
    {
      m_stateTransitionTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateTransitionTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::EnableFastLaunchResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
