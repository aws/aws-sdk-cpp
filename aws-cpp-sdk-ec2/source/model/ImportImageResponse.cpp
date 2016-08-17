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

ImportImageResponse::ImportImageResponse()
{
}

ImportImageResponse::ImportImageResponse(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ImportImageResponse& ImportImageResponse::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (rootNode.GetName() != "ImportImageResponse")
  {
    resultNode = rootNode.FirstChild("ImportImageResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode importTaskIdNode = resultNode.FirstChild("importTaskId");
    if(!importTaskIdNode.IsNull())
    {
      m_importTaskId = StringUtils::Trim(importTaskIdNode.GetText().c_str());
    }
    XmlNode architectureNode = resultNode.FirstChild("architecture");
    if(!architectureNode.IsNull())
    {
      m_architecture = StringUtils::Trim(architectureNode.GetText().c_str());
    }
    XmlNode licenseTypeNode = resultNode.FirstChild("licenseType");
    if(!licenseTypeNode.IsNull())
    {
      m_licenseType = StringUtils::Trim(licenseTypeNode.GetText().c_str());
    }
    XmlNode platformNode = resultNode.FirstChild("platform");
    if(!platformNode.IsNull())
    {
      m_platform = StringUtils::Trim(platformNode.GetText().c_str());
    }
    XmlNode hypervisorNode = resultNode.FirstChild("hypervisor");
    if(!hypervisorNode.IsNull())
    {
      m_hypervisor = StringUtils::Trim(hypervisorNode.GetText().c_str());
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = StringUtils::Trim(descriptionNode.GetText().c_str());
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
    XmlNode imageIdNode = resultNode.FirstChild("imageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = StringUtils::Trim(imageIdNode.GetText().c_str());
    }
    XmlNode progressNode = resultNode.FirstChild("progress");
    if(!progressNode.IsNull())
    {
      m_progress = StringUtils::Trim(progressNode.GetText().c_str());
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = StringUtils::Trim(statusMessageNode.GetText().c_str());
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = StringUtils::Trim(statusNode.GetText().c_str());
    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;
  AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ImportImageResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );

  return *this;
}
