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

#include <aws/rds/model/CreateDBClusterEndpointResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

CreateDBClusterEndpointResult::CreateDBClusterEndpointResult()
{
}

CreateDBClusterEndpointResult::CreateDBClusterEndpointResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateDBClusterEndpointResult& CreateDBClusterEndpointResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateDBClusterEndpointResult"))
  {
    resultNode = rootNode.FirstChild("CreateDBClusterEndpointResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBClusterEndpointIdentifierNode = resultNode.FirstChild("DBClusterEndpointIdentifier");
    if(!dBClusterEndpointIdentifierNode.IsNull())
    {
      m_dBClusterEndpointIdentifier = dBClusterEndpointIdentifierNode.GetText();
    }
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if(!dBClusterIdentifierNode.IsNull())
    {
      m_dBClusterIdentifier = dBClusterIdentifierNode.GetText();
    }
    XmlNode dBClusterEndpointResourceIdentifierNode = resultNode.FirstChild("DBClusterEndpointResourceIdentifier");
    if(!dBClusterEndpointResourceIdentifierNode.IsNull())
    {
      m_dBClusterEndpointResourceIdentifier = dBClusterEndpointResourceIdentifierNode.GetText();
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = endpointNode.GetText();
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
    }
    XmlNode endpointTypeNode = resultNode.FirstChild("EndpointType");
    if(!endpointTypeNode.IsNull())
    {
      m_endpointType = endpointTypeNode.GetText();
    }
    XmlNode customEndpointTypeNode = resultNode.FirstChild("CustomEndpointType");
    if(!customEndpointTypeNode.IsNull())
    {
      m_customEndpointType = customEndpointTypeNode.GetText();
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
      m_dBClusterEndpointArn = dBClusterEndpointArnNode.GetText();
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::CreateDBClusterEndpointResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
