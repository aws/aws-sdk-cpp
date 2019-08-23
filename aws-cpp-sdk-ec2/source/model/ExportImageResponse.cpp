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

#include <aws/ec2/model/ExportImageResponse.h>
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

ExportImageResponse::ExportImageResponse() : 
    m_diskImageFormat(DiskImageFormat::NOT_SET)
{
}

ExportImageResponse::ExportImageResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_diskImageFormat(DiskImageFormat::NOT_SET)
{
  *this = result;
}

ExportImageResponse& ExportImageResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ExportImageResponse"))
  {
    resultNode = rootNode.FirstChild("ExportImageResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
    }
    XmlNode diskImageFormatNode = resultNode.FirstChild("diskImageFormat");
    if(!diskImageFormatNode.IsNull())
    {
      m_diskImageFormat = DiskImageFormatMapper::GetDiskImageFormatForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(diskImageFormatNode.GetText()).c_str()).c_str());
    }
    XmlNode exportImageTaskIdNode = resultNode.FirstChild("exportImageTaskId");
    if(!exportImageTaskIdNode.IsNull())
    {
      m_exportImageTaskId = Aws::Utils::Xml::DecodeEscapedXmlText(exportImageTaskIdNode.GetText());
    }
    XmlNode imageIdNode = resultNode.FirstChild("imageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = Aws::Utils::Xml::DecodeEscapedXmlText(imageIdNode.GetText());
    }
    XmlNode roleNameNode = resultNode.FirstChild("roleName");
    if(!roleNameNode.IsNull())
    {
      m_roleName = Aws::Utils::Xml::DecodeEscapedXmlText(roleNameNode.GetText());
    }
    XmlNode progressNode = resultNode.FirstChild("progress");
    if(!progressNode.IsNull())
    {
      m_progress = Aws::Utils::Xml::DecodeEscapedXmlText(progressNode.GetText());
    }
    XmlNode s3ExportLocationNode = resultNode.FirstChild("s3ExportLocation");
    if(!s3ExportLocationNode.IsNull())
    {
      m_s3ExportLocation = s3ExportLocationNode;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = Aws::Utils::Xml::DecodeEscapedXmlText(statusMessageNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ExportImageResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
