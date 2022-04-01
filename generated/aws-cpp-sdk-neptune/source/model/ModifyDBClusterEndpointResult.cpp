/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/ModifyDBClusterEndpointResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ModifyDBClusterEndpointResult::ModifyDBClusterEndpointResult()
{
}

ModifyDBClusterEndpointResult::ModifyDBClusterEndpointResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ModifyDBClusterEndpointResult& ModifyDBClusterEndpointResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyDBClusterEndpointResult"))
  {
    resultNode = rootNode.FirstChild("ModifyDBClusterEndpointResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBClusterEndpointIdentifierNode = resultNode.FirstChild("DBClusterEndpointIdentifier");
    if(!dBClusterEndpointIdentifierNode.IsNull())
    {
      m_dBClusterEndpointIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterEndpointIdentifierNode.GetText());
    }
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if(!dBClusterIdentifierNode.IsNull())
    {
      m_dBClusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterIdentifierNode.GetText());
    }
    XmlNode dBClusterEndpointResourceIdentifierNode = resultNode.FirstChild("DBClusterEndpointResourceIdentifier");
    if(!dBClusterEndpointResourceIdentifierNode.IsNull())
    {
      m_dBClusterEndpointResourceIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterEndpointResourceIdentifierNode.GetText());
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = Aws::Utils::Xml::DecodeEscapedXmlText(endpointNode.GetText());
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
    }
    XmlNode endpointTypeNode = resultNode.FirstChild("EndpointType");
    if(!endpointTypeNode.IsNull())
    {
      m_endpointType = Aws::Utils::Xml::DecodeEscapedXmlText(endpointTypeNode.GetText());
    }
    XmlNode customEndpointTypeNode = resultNode.FirstChild("CustomEndpointType");
    if(!customEndpointTypeNode.IsNull())
    {
      m_customEndpointType = Aws::Utils::Xml::DecodeEscapedXmlText(customEndpointTypeNode.GetText());
    }
    XmlNode staticMembersNode = resultNode.FirstChild("StaticMembers");
    if(!staticMembersNode.IsNull())
    {
      XmlNode staticMembersMember = staticMembersNode.FirstChild("member");
      while(!staticMembersMember.IsNull())
      {
        m_staticMembers.push_back(staticMembersMember.GetText());
        staticMembersMember = staticMembersMember.NextNode("member");
      }

    }
    XmlNode excludedMembersNode = resultNode.FirstChild("ExcludedMembers");
    if(!excludedMembersNode.IsNull())
    {
      XmlNode excludedMembersMember = excludedMembersNode.FirstChild("member");
      while(!excludedMembersMember.IsNull())
      {
        m_excludedMembers.push_back(excludedMembersMember.GetText());
        excludedMembersMember = excludedMembersMember.NextNode("member");
      }

    }
    XmlNode dBClusterEndpointArnNode = resultNode.FirstChild("DBClusterEndpointArn");
    if(!dBClusterEndpointArnNode.IsNull())
    {
      m_dBClusterEndpointArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterEndpointArnNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Neptune::Model::ModifyDBClusterEndpointResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
