/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetAssociatedEnclaveCertificateIamRolesResponse.h>
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

GetAssociatedEnclaveCertificateIamRolesResponse::GetAssociatedEnclaveCertificateIamRolesResponse()
{
}

GetAssociatedEnclaveCertificateIamRolesResponse::GetAssociatedEnclaveCertificateIamRolesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetAssociatedEnclaveCertificateIamRolesResponse& GetAssociatedEnclaveCertificateIamRolesResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetAssociatedEnclaveCertificateIamRolesResponse"))
  {
    resultNode = rootNode.FirstChild("GetAssociatedEnclaveCertificateIamRolesResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode associatedRolesNode = resultNode.FirstChild("associatedRoleSet");
    if(!associatedRolesNode.IsNull())
    {
      XmlNode associatedRolesMember = associatedRolesNode.FirstChild("item");
      while(!associatedRolesMember.IsNull())
      {
        m_associatedRoles.push_back(associatedRolesMember);
        associatedRolesMember = associatedRolesMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetAssociatedEnclaveCertificateIamRolesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
