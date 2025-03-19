/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/ListEntitiesForPolicyResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ListEntitiesForPolicyResult::ListEntitiesForPolicyResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListEntitiesForPolicyResult& ListEntitiesForPolicyResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListEntitiesForPolicyResult"))
  {
    resultNode = rootNode.FirstChild("ListEntitiesForPolicyResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode policyGroupsNode = resultNode.FirstChild("PolicyGroups");
    if(!policyGroupsNode.IsNull())
    {
      XmlNode policyGroupsMember = policyGroupsNode.FirstChild("member");
      m_policyGroupsHasBeenSet = !policyGroupsMember.IsNull();
      while(!policyGroupsMember.IsNull())
      {
        m_policyGroups.push_back(policyGroupsMember);
        policyGroupsMember = policyGroupsMember.NextNode("member");
      }

      m_policyGroupsHasBeenSet = true;
    }
    XmlNode policyUsersNode = resultNode.FirstChild("PolicyUsers");
    if(!policyUsersNode.IsNull())
    {
      XmlNode policyUsersMember = policyUsersNode.FirstChild("member");
      m_policyUsersHasBeenSet = !policyUsersMember.IsNull();
      while(!policyUsersMember.IsNull())
      {
        m_policyUsers.push_back(policyUsersMember);
        policyUsersMember = policyUsersMember.NextNode("member");
      }

      m_policyUsersHasBeenSet = true;
    }
    XmlNode policyRolesNode = resultNode.FirstChild("PolicyRoles");
    if(!policyRolesNode.IsNull())
    {
      XmlNode policyRolesMember = policyRolesNode.FirstChild("member");
      m_policyRolesHasBeenSet = !policyRolesMember.IsNull();
      while(!policyRolesMember.IsNull())
      {
        m_policyRoles.push_back(policyRolesMember);
        policyRolesMember = policyRolesMember.NextNode("member");
      }

      m_policyRolesHasBeenSet = true;
    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isTruncatedNode.GetText()).c_str()).c_str());
      m_isTruncatedHasBeenSet = true;
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::ListEntitiesForPolicyResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
