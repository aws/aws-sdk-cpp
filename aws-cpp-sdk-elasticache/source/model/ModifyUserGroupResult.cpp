/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ModifyUserGroupResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ModifyUserGroupResult::ModifyUserGroupResult()
{
}

ModifyUserGroupResult::ModifyUserGroupResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ModifyUserGroupResult& ModifyUserGroupResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyUserGroupResult"))
  {
    resultNode = rootNode.FirstChild("ModifyUserGroupResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode userGroupIdNode = resultNode.FirstChild("UserGroupId");
    if(!userGroupIdNode.IsNull())
    {
      m_userGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(userGroupIdNode.GetText());
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
    }
    XmlNode userIdsNode = resultNode.FirstChild("UserIds");
    if(!userIdsNode.IsNull())
    {
      XmlNode userIdsMember = userIdsNode.FirstChild("member");
      while(!userIdsMember.IsNull())
      {
        m_userIds.push_back(userIdsMember.GetText());
        userIdsMember = userIdsMember.NextNode("member");
      }

    }
    XmlNode pendingChangesNode = resultNode.FirstChild("PendingChanges");
    if(!pendingChangesNode.IsNull())
    {
      m_pendingChanges = pendingChangesNode;
    }
    XmlNode replicationGroupsNode = resultNode.FirstChild("ReplicationGroups");
    if(!replicationGroupsNode.IsNull())
    {
      XmlNode replicationGroupsMember = replicationGroupsNode.FirstChild("member");
      while(!replicationGroupsMember.IsNull())
      {
        m_replicationGroups.push_back(replicationGroupsMember.GetText());
        replicationGroupsMember = replicationGroupsMember.NextNode("member");
      }

    }
    XmlNode aRNNode = resultNode.FirstChild("ARN");
    if(!aRNNode.IsNull())
    {
      m_aRN = Aws::Utils::Xml::DecodeEscapedXmlText(aRNNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElastiCache::Model::ModifyUserGroupResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
