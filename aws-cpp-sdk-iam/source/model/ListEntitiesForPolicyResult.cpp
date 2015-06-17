/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/ListEntitiesForPolicyResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListEntitiesForPolicyResult::ListEntitiesForPolicyResult() : 
    m_isTruncated(false)
{
}

ListEntitiesForPolicyResult::ListEntitiesForPolicyResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_isTruncated(false)
{
  *this = result;
}

ListEntitiesForPolicyResult& ListEntitiesForPolicyResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("ListEntitiesForPolicyResult");

  if(!resultNode.IsNull())
  {
    XmlNode policyGroupsNodeParent = resultNode.FirstChild("PolicyGroups");
    XmlNode policyGroupsNode = policyGroupsNodeParent.FirstChild("member");
    while(!policyGroupsNode.IsNull())
    {
      m_policyGroups.push_back(policyGroupsNode);
      policyGroupsNode = policyGroupsNode.NextNode("member");
    }

    XmlNode policyUsersNodeParent = resultNode.FirstChild("PolicyUsers");
    XmlNode policyUsersNode = policyUsersNodeParent.FirstChild("member");
    while(!policyUsersNode.IsNull())
    {
      m_policyUsers.push_back(policyUsersNode);
      policyUsersNode = policyUsersNode.NextNode("member");
    }

    XmlNode policyRolesNodeParent = resultNode.FirstChild("PolicyRoles");
    XmlNode policyRolesNode = policyRolesNodeParent.FirstChild("member");
    while(!policyRolesNode.IsNull())
    {
      m_policyRoles.push_back(policyRolesNode);
      policyRolesNode = policyRolesNode.NextNode("member");
    }

    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(isTruncatedNode.GetText().c_str()).c_str());
    XmlNode markerNode = resultNode.FirstChild("Marker");
    m_marker = StringUtils::Trim(markerNode.GetText().c_str());
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
