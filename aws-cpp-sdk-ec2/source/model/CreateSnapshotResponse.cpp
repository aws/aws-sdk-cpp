/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_state(SnapshotState::NOT_SET),
    m_volumeSize(0),
    m_encrypted(false)
{
}

CreateSnapshotResponse::CreateSnapshotResponse(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_state(SnapshotState::NOT_SET),
    m_volumeSize(0),
    m_encrypted(false)
{
  *this = result;
}

CreateSnapshotResponse& CreateSnapshotResponse::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (rootNode.GetName() != "CreateSnapshotResponse")
  {
    resultNode = rootNode.FirstChild("CreateSnapshotResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode snapshotIdNode = resultNode.FirstChild("snapshotId");
    if(!snapshotIdNode.IsNull())
    {
      m_snapshotId = StringUtils::Trim(snapshotIdNode.GetText().c_str());
    }
    XmlNode volumeIdNode = resultNode.FirstChild("volumeId");
    if(!volumeIdNode.IsNull())
    {
      m_volumeId = StringUtils::Trim(volumeIdNode.GetText().c_str());
    }
    XmlNode stateNode = resultNode.FirstChild("status");
    if(!stateNode.IsNull())
    {
      m_state = SnapshotStateMapper::GetSnapshotStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
    }
    XmlNode stateMessageNode = resultNode.FirstChild("statusMessage");
    if(!stateMessageNode.IsNull())
    {
      m_stateMessage = StringUtils::Trim(stateMessageNode.GetText().c_str());
    }
    XmlNode startTimeNode = resultNode.FirstChild("startTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(startTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
    }
    XmlNode progressNode = resultNode.FirstChild("progress");
    if(!progressNode.IsNull())
    {
      m_progress = StringUtils::Trim(progressNode.GetText().c_str());
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = StringUtils::Trim(ownerIdNode.GetText().c_str());
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = StringUtils::Trim(descriptionNode.GetText().c_str());
    }
    XmlNode volumeSizeNode = resultNode.FirstChild("volumeSize");
    if(!volumeSizeNode.IsNull())
    {
      m_volumeSize = StringUtils::ConvertToInt32(StringUtils::Trim(volumeSizeNode.GetText().c_str()).c_str());
    }
    XmlNode ownerAliasNode = resultNode.FirstChild("ownerAlias");
    if(!ownerAliasNode.IsNull())
    {
      m_ownerAlias = StringUtils::Trim(ownerAliasNode.GetText().c_str());
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
    XmlNode encryptedNode = resultNode.FirstChild("encrypted");
    if(!encryptedNode.IsNull())
    {
      m_encrypted = StringUtils::ConvertToBool(StringUtils::Trim(encryptedNode.GetText().c_str()).c_str());
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("kmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = StringUtils::Trim(kmsKeyIdNode.GetText().c_str());
    }
    XmlNode dataEncryptionKeyIdNode = resultNode.FirstChild("dataEncryptionKeyId");
    if(!dataEncryptionKeyIdNode.IsNull())
    {
      m_dataEncryptionKeyId = StringUtils::Trim(dataEncryptionKeyIdNode.GetText().c_str());
    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;
  AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CreateSnapshotResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );

  return *this;
}
