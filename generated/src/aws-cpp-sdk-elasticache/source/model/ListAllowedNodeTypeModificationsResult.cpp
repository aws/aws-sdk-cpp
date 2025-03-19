/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ListAllowedNodeTypeModificationsResult.h>
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

ListAllowedNodeTypeModificationsResult::ListAllowedNodeTypeModificationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListAllowedNodeTypeModificationsResult& ListAllowedNodeTypeModificationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListAllowedNodeTypeModificationsResult"))
  {
    resultNode = rootNode.FirstChild("ListAllowedNodeTypeModificationsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode scaleUpModificationsNode = resultNode.FirstChild("ScaleUpModifications");
    if(!scaleUpModificationsNode.IsNull())
    {
      XmlNode scaleUpModificationsMember = scaleUpModificationsNode.FirstChild("member");
      m_scaleUpModificationsHasBeenSet = !scaleUpModificationsMember.IsNull();
      while(!scaleUpModificationsMember.IsNull())
      {
        m_scaleUpModifications.push_back(scaleUpModificationsMember.GetText());
        scaleUpModificationsMember = scaleUpModificationsMember.NextNode("member");
      }

      m_scaleUpModificationsHasBeenSet = true;
    }
    XmlNode scaleDownModificationsNode = resultNode.FirstChild("ScaleDownModifications");
    if(!scaleDownModificationsNode.IsNull())
    {
      XmlNode scaleDownModificationsMember = scaleDownModificationsNode.FirstChild("member");
      m_scaleDownModificationsHasBeenSet = !scaleDownModificationsMember.IsNull();
      while(!scaleDownModificationsMember.IsNull())
      {
        m_scaleDownModifications.push_back(scaleDownModificationsMember.GetText());
        scaleDownModificationsMember = scaleDownModificationsMember.NextNode("member");
      }

      m_scaleDownModificationsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::ElastiCache::Model::ListAllowedNodeTypeModificationsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
