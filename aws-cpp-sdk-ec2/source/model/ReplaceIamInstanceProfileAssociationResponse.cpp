/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReplaceIamInstanceProfileAssociationResponse.h>
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

ReplaceIamInstanceProfileAssociationResponse::ReplaceIamInstanceProfileAssociationResponse()
{
}

ReplaceIamInstanceProfileAssociationResponse::ReplaceIamInstanceProfileAssociationResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ReplaceIamInstanceProfileAssociationResponse& ReplaceIamInstanceProfileAssociationResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ReplaceIamInstanceProfileAssociationResponse"))
  {
    resultNode = rootNode.FirstChild("ReplaceIamInstanceProfileAssociationResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode iamInstanceProfileAssociationNode = resultNode.FirstChild("iamInstanceProfileAssociation");
    if(!iamInstanceProfileAssociationNode.IsNull())
    {
      m_iamInstanceProfileAssociation = iamInstanceProfileAssociationNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ReplaceIamInstanceProfileAssociationResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
