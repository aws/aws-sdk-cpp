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

#include <aws/ec2/model/ImportImageResponse.h>
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

ImportImageResponse::ImportImageResponse() : 
    m_encrypted(false)
{
}

ImportImageResponse::ImportImageResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_encrypted(false)
{
  *this = result;
}

ImportImageResponse& ImportImageResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ImportImageResponse"))
  {
    resultNode = rootNode.FirstChild("ImportImageResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode architectureNode = resultNode.FirstChild("architecture");
    if(!architectureNode.IsNull())
    {
      m_architecture = architectureNode.GetText();
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
    XmlNode hypervisorNode = resultNode.FirstChild("hypervisor");
    if(!hypervisorNode.IsNull())
    {
      m_hypervisor = hypervisorNode.GetText();
    }
    XmlNode imageIdNode = resultNode.FirstChild("imageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = imageIdNode.GetText();
    }
    XmlNode importTaskIdNode = resultNode.FirstChild("importTaskId");
    if(!importTaskIdNode.IsNull())
    {
      m_importTaskId = importTaskIdNode.GetText();
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("kmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = kmsKeyIdNode.GetText();
    }
    XmlNode licenseTypeNode = resultNode.FirstChild("licenseType");
    if(!licenseTypeNode.IsNull())
    {
      m_licenseType = licenseTypeNode.GetText();
    }
    XmlNode platformNode = resultNode.FirstChild("platform");
    if(!platformNode.IsNull())
    {
      m_platform = platformNode.GetText();
    }
    XmlNode progressNode = resultNode.FirstChild("progress");
    if(!progressNode.IsNull())
    {
      m_progress = progressNode.GetText();
    }
    XmlNode snapshotDetailsNode = resultNode.FirstChild("snapshotDetailSet");
    if(!snapshotDetailsNode.IsNull())
    {
      XmlNode snapshotDetailsMember = snapshotDetailsNode.FirstChild("item");
      while(!snapshotDetailsMember.IsNull())
      {
        m_snapshotDetails.push_back(snapshotDetailsMember);
        snapshotDetailsMember = snapshotDetailsMember.NextNode("item");
      }

    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = statusMessageNode.GetText();
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ImportImageResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
