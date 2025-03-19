/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DeleteUserGroupResult.h>
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

DeleteUserGroupResult::DeleteUserGroupResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DeleteUserGroupResult& DeleteUserGroupResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DeleteUserGroupResult"))
  {
    resultNode = rootNode.FirstChild("DeleteUserGroupResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode userGroupIdNode = resultNode.FirstChild("UserGroupId");
    if(!userGroupIdNode.IsNull())
    {
      m_userGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(userGroupIdNode.GetText());
      m_userGroupIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode userIdsNode = resultNode.FirstChild("UserIds");
    if(!userIdsNode.IsNull())
    {
      XmlNode userIdsMember = userIdsNode.FirstChild("member");
      m_userIdsHasBeenSet = !userIdsMember.IsNull();
      while(!userIdsMember.IsNull())
      {
        m_userIds.push_back(userIdsMember.GetText());
        userIdsMember = userIdsMember.NextNode("member");
      }

      m_userIdsHasBeenSet = true;
    }
    XmlNode minimumEngineVersionNode = resultNode.FirstChild("MinimumEngineVersion");
    if(!minimumEngineVersionNode.IsNull())
    {
      m_minimumEngineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(minimumEngineVersionNode.GetText());
      m_minimumEngineVersionHasBeenSet = true;
    }
    XmlNode pendingChangesNode = resultNode.FirstChild("PendingChanges");
    if(!pendingChangesNode.IsNull())
    {
      m_pendingChanges = pendingChangesNode;
      m_pendingChangesHasBeenSet = true;
    }
    XmlNode replicationGroupsNode = resultNode.FirstChild("ReplicationGroups");
    if(!replicationGroupsNode.IsNull())
    {
      XmlNode replicationGroupsMember = replicationGroupsNode.FirstChild("member");
      m_replicationGroupsHasBeenSet = !replicationGroupsMember.IsNull();
      while(!replicationGroupsMember.IsNull())
      {
        m_replicationGroups.push_back(replicationGroupsMember.GetText());
        replicationGroupsMember = replicationGroupsMember.NextNode("member");
      }

      m_replicationGroupsHasBeenSet = true;
    }
    XmlNode serverlessCachesNode = resultNode.FirstChild("ServerlessCaches");
    if(!serverlessCachesNode.IsNull())
    {
      XmlNode serverlessCachesMember = serverlessCachesNode.FirstChild("member");
      m_serverlessCachesHasBeenSet = !serverlessCachesMember.IsNull();
      while(!serverlessCachesMember.IsNull())
      {
        m_serverlessCaches.push_back(serverlessCachesMember.GetText());
        serverlessCachesMember = serverlessCachesMember.NextNode("member");
      }

      m_serverlessCachesHasBeenSet = true;
    }
    XmlNode aRNNode = resultNode.FirstChild("ARN");
    if(!aRNNode.IsNull())
    {
      m_aRN = Aws::Utils::Xml::DecodeEscapedXmlText(aRNNode.GetText());
      m_aRNHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::ElastiCache::Model::DeleteUserGroupResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
