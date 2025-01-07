/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetAllowedImagesSettingsResponse.h>
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

GetAllowedImagesSettingsResponse::GetAllowedImagesSettingsResponse() : 
    m_managedBy(ManagedBy::NOT_SET)
{
}

GetAllowedImagesSettingsResponse::GetAllowedImagesSettingsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
  : GetAllowedImagesSettingsResponse()
{
  *this = result;
}

GetAllowedImagesSettingsResponse& GetAllowedImagesSettingsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetAllowedImagesSettingsResponse"))
  {
    resultNode = rootNode.FirstChild("GetAllowedImagesSettingsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText());
    }
    XmlNode imageCriteriaNode = resultNode.FirstChild("imageCriterionSet");
    if(!imageCriteriaNode.IsNull())
    {
      XmlNode imageCriteriaMember = imageCriteriaNode.FirstChild("item");
      while(!imageCriteriaMember.IsNull())
      {
        m_imageCriteria.push_back(imageCriteriaMember);
        imageCriteriaMember = imageCriteriaMember.NextNode("item");
      }

    }
    XmlNode managedByNode = resultNode.FirstChild("managedBy");
    if(!managedByNode.IsNull())
    {
      m_managedBy = ManagedByMapper::GetManagedByForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(managedByNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetAllowedImagesSettingsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
