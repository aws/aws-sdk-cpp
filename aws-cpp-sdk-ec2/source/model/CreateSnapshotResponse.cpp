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

#include <aws/ec2/model/CreateSnapshotResponse.h>
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

CreateSnapshotResponse::CreateSnapshotResponse() : 
    m_encrypted(false),
    m_state(SnapshotState::NOT_SET),
    m_volumeSize(0)
{
}

CreateSnapshotResponse::CreateSnapshotResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_encrypted(false),
    m_state(SnapshotState::NOT_SET),
    m_volumeSize(0)
{
  *this = result;
}

CreateSnapshotResponse& CreateSnapshotResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateSnapshotResponse"))
  {
    resultNode = rootNode.FirstChild("CreateSnapshotResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dataEncryptionKeyIdNode = resultNode.FirstChild("dataEncryptionKeyId");
    if(!dataEncryptionKeyIdNode.IsNull())
    {
      m_dataEncryptionKeyId = dataEncryptionKeyIdNode.GetText();
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
    }
    XmlNode encryptedNode = resultNode.FirstChild("encrypted");
    if(!encryptedNode.IsNull())
    {
      m_encrypted = StringUtils::ConvertToBool(StringUtils::Trim(encryptedNode.GetText().c_str()).c_str());
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("kmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = kmsKeyIdNode.GetText();
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = ownerIdNode.GetText();
    }
    XmlNode progressNode = resultNode.FirstChild("progress");
    if(!progressNode.IsNull())
    {
      m_progress = progressNode.GetText();
    }
    XmlNode snapshotIdNode = resultNode.FirstChild("snapshotId");
    if(!snapshotIdNode.IsNull())
    {
      m_snapshotId = snapshotIdNode.GetText();
    }
    XmlNode startTimeNode = resultNode.FirstChild("startTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(startTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
    }
    XmlNode stateNode = resultNode.FirstChild("status");
    if(!stateNode.IsNull())
    {
      m_state = SnapshotStateMapper::GetSnapshotStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
    }
    XmlNode stateMessageNode = resultNode.FirstChild("statusMessage");
    if(!stateMessageNode.IsNull())
    {
      m_stateMessage = stateMessageNode.GetText();
    }
    XmlNode volumeIdNode = resultNode.FirstChild("volumeId");
    if(!volumeIdNode.IsNull())
    {
      m_volumeId = volumeIdNode.GetText();
    }
    XmlNode volumeSizeNode = resultNode.FirstChild("volumeSize");
    if(!volumeSizeNode.IsNull())
    {
      m_volumeSize = StringUtils::ConvertToInt32(StringUtils::Trim(volumeSizeNode.GetText().c_str()).c_str());
    }
    XmlNode ownerAliasNode = resultNode.FirstChild("ownerAlias");
    if(!ownerAliasNode.IsNull())
    {
      m_ownerAlias = ownerAliasNode.GetText();
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CreateSnapshotResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
