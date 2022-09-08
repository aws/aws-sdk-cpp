/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyEndpointAccessResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ModifyEndpointAccessResult::ModifyEndpointAccessResult() : 
    m_port(0)
{
}

ModifyEndpointAccessResult::ModifyEndpointAccessResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_port(0)
{
  *this = result;
}

ModifyEndpointAccessResult& ModifyEndpointAccessResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyEndpointAccessResult"))
  {
    resultNode = rootNode.FirstChild("ModifyEndpointAccessResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode clusterIdentifierNode = resultNode.FirstChild("ClusterIdentifier");
    if(!clusterIdentifierNode.IsNull())
    {
      m_clusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(clusterIdentifierNode.GetText());
    }
    XmlNode resourceOwnerNode = resultNode.FirstChild("ResourceOwner");
    if(!resourceOwnerNode.IsNull())
    {
      m_resourceOwner = Aws::Utils::Xml::DecodeEscapedXmlText(resourceOwnerNode.GetText());
    }
    XmlNode subnetGroupNameNode = resultNode.FirstChild("SubnetGroupName");
    if(!subnetGroupNameNode.IsNull())
    {
      m_subnetGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(subnetGroupNameNode.GetText());
    }
    XmlNode endpointStatusNode = resultNode.FirstChild("EndpointStatus");
    if(!endpointStatusNode.IsNull())
    {
      m_endpointStatus = Aws::Utils::Xml::DecodeEscapedXmlText(endpointStatusNode.GetText());
    }
    XmlNode endpointNameNode = resultNode.FirstChild("EndpointName");
    if(!endpointNameNode.IsNull())
    {
      m_endpointName = Aws::Utils::Xml::DecodeEscapedXmlText(endpointNameNode.GetText());
    }
    XmlNode endpointCreateTimeNode = resultNode.FirstChild("EndpointCreateTime");
    if(!endpointCreateTimeNode.IsNull())
    {
      m_endpointCreateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endpointCreateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
    }
    XmlNode addressNode = resultNode.FirstChild("Address");
    if(!addressNode.IsNull())
    {
      m_address = Aws::Utils::Xml::DecodeEscapedXmlText(addressNode.GetText());
    }
    XmlNode vpcSecurityGroupsNode = resultNode.FirstChild("VpcSecurityGroups");
    if(!vpcSecurityGroupsNode.IsNull())
    {
      XmlNode vpcSecurityGroupsMember = vpcSecurityGroupsNode.FirstChild("VpcSecurityGroup");
      while(!vpcSecurityGroupsMember.IsNull())
      {
        m_vpcSecurityGroups.push_back(vpcSecurityGroupsMember);
        vpcSecurityGroupsMember = vpcSecurityGroupsMember.NextNode("VpcSecurityGroup");
      }

    }
    XmlNode vpcEndpointNode = resultNode.FirstChild("VpcEndpoint");
    if(!vpcEndpointNode.IsNull())
    {
      m_vpcEndpoint = vpcEndpointNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::ModifyEndpointAccessResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
