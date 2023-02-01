/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetInstanceTypesFromInstanceRequirementsResponse.h>
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

GetInstanceTypesFromInstanceRequirementsResponse::GetInstanceTypesFromInstanceRequirementsResponse()
{
}

GetInstanceTypesFromInstanceRequirementsResponse::GetInstanceTypesFromInstanceRequirementsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetInstanceTypesFromInstanceRequirementsResponse& GetInstanceTypesFromInstanceRequirementsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetInstanceTypesFromInstanceRequirementsResponse"))
  {
    resultNode = rootNode.FirstChild("GetInstanceTypesFromInstanceRequirementsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode instanceTypesNode = resultNode.FirstChild("instanceTypeSet");
    if(!instanceTypesNode.IsNull())
    {
      XmlNode instanceTypesMember = instanceTypesNode.FirstChild("item");
      while(!instanceTypesMember.IsNull())
      {
        m_instanceTypes.push_back(instanceTypesMember);
        instanceTypesMember = instanceTypesMember.NextNode("item");
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetInstanceTypesFromInstanceRequirementsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
