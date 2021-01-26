/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyInstanceCreditSpecificationResponse.h>
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

ModifyInstanceCreditSpecificationResponse::ModifyInstanceCreditSpecificationResponse()
{
}

ModifyInstanceCreditSpecificationResponse::ModifyInstanceCreditSpecificationResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ModifyInstanceCreditSpecificationResponse& ModifyInstanceCreditSpecificationResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyInstanceCreditSpecificationResponse"))
  {
    resultNode = rootNode.FirstChild("ModifyInstanceCreditSpecificationResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode successfulInstanceCreditSpecificationsNode = resultNode.FirstChild("successfulInstanceCreditSpecificationSet");
    if(!successfulInstanceCreditSpecificationsNode.IsNull())
    {
      XmlNode successfulInstanceCreditSpecificationsMember = successfulInstanceCreditSpecificationsNode.FirstChild("item");
      while(!successfulInstanceCreditSpecificationsMember.IsNull())
      {
        m_successfulInstanceCreditSpecifications.push_back(successfulInstanceCreditSpecificationsMember);
        successfulInstanceCreditSpecificationsMember = successfulInstanceCreditSpecificationsMember.NextNode("item");
      }

    }
    XmlNode unsuccessfulInstanceCreditSpecificationsNode = resultNode.FirstChild("unsuccessfulInstanceCreditSpecificationSet");
    if(!unsuccessfulInstanceCreditSpecificationsNode.IsNull())
    {
      XmlNode unsuccessfulInstanceCreditSpecificationsMember = unsuccessfulInstanceCreditSpecificationsNode.FirstChild("item");
      while(!unsuccessfulInstanceCreditSpecificationsMember.IsNull())
      {
        m_unsuccessfulInstanceCreditSpecifications.push_back(unsuccessfulInstanceCreditSpecificationsMember);
        unsuccessfulInstanceCreditSpecificationsMember = unsuccessfulInstanceCreditSpecificationsMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ModifyInstanceCreditSpecificationResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
