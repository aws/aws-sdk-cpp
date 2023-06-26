/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyInstanceMaintenanceOptionsResponse.h>
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

ModifyInstanceMaintenanceOptionsResponse::ModifyInstanceMaintenanceOptionsResponse() : 
    m_autoRecovery(InstanceAutoRecoveryState::NOT_SET)
{
}

ModifyInstanceMaintenanceOptionsResponse::ModifyInstanceMaintenanceOptionsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_autoRecovery(InstanceAutoRecoveryState::NOT_SET)
{
  *this = result;
}

ModifyInstanceMaintenanceOptionsResponse& ModifyInstanceMaintenanceOptionsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyInstanceMaintenanceOptionsResponse"))
  {
    resultNode = rootNode.FirstChild("ModifyInstanceMaintenanceOptionsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
    }
    XmlNode autoRecoveryNode = resultNode.FirstChild("autoRecovery");
    if(!autoRecoveryNode.IsNull())
    {
      m_autoRecovery = InstanceAutoRecoveryStateMapper::GetInstanceAutoRecoveryStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoRecoveryNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ModifyInstanceMaintenanceOptionsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
