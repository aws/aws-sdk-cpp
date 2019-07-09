/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/DetachVolumeResponse.h>
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

DetachVolumeResponse::DetachVolumeResponse() : 
    m_state(VolumeAttachmentState::NOT_SET),
    m_deleteOnTermination(false)
{
}

DetachVolumeResponse::DetachVolumeResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_state(VolumeAttachmentState::NOT_SET),
    m_deleteOnTermination(false)
{
  *this = result;
}

DetachVolumeResponse& DetachVolumeResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DetachVolumeResponse"))
  {
    resultNode = rootNode.FirstChild("DetachVolumeResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode attachTimeNode = resultNode.FirstChild("attachTime");
    if(!attachTimeNode.IsNull())
    {
      m_attachTime = DateTime(StringUtils::Trim(attachTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
    }
    XmlNode deviceNode = resultNode.FirstChild("device");
    if(!deviceNode.IsNull())
    {
      m_device = deviceNode.GetText();
    }
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = instanceIdNode.GetText();
    }
    XmlNode stateNode = resultNode.FirstChild("status");
    if(!stateNode.IsNull())
    {
      m_state = VolumeAttachmentStateMapper::GetVolumeAttachmentStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
    }
    XmlNode volumeIdNode = resultNode.FirstChild("volumeId");
    if(!volumeIdNode.IsNull())
    {
      m_volumeId = volumeIdNode.GetText();
    }
    XmlNode deleteOnTerminationNode = resultNode.FirstChild("deleteOnTermination");
    if(!deleteOnTerminationNode.IsNull())
    {
      m_deleteOnTermination = StringUtils::ConvertToBool(StringUtils::Trim(deleteOnTerminationNode.GetText().c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DetachVolumeResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
