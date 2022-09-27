/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ListImagesInRecycleBinResponse.h>
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

ListImagesInRecycleBinResponse::ListImagesInRecycleBinResponse()
{
}

ListImagesInRecycleBinResponse::ListImagesInRecycleBinResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListImagesInRecycleBinResponse& ListImagesInRecycleBinResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListImagesInRecycleBinResponse"))
  {
    resultNode = rootNode.FirstChild("ListImagesInRecycleBinResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode imagesNode = resultNode.FirstChild("imageSet");
    if(!imagesNode.IsNull())
    {
      XmlNode imagesMember = imagesNode.FirstChild("item");
      while(!imagesMember.IsNull())
      {
        m_images.push_back(imagesMember);
        imagesMember = imagesMember.NextNode("item");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ListImagesInRecycleBinResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
