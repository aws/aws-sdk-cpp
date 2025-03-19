/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ListTypeRegistrationsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ListTypeRegistrationsResult::ListTypeRegistrationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListTypeRegistrationsResult& ListTypeRegistrationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListTypeRegistrationsResult"))
  {
    resultNode = rootNode.FirstChild("ListTypeRegistrationsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode registrationTokenListNode = resultNode.FirstChild("RegistrationTokenList");
    if(!registrationTokenListNode.IsNull())
    {
      XmlNode registrationTokenListMember = registrationTokenListNode.FirstChild("member");
      m_registrationTokenListHasBeenSet = !registrationTokenListMember.IsNull();
      while(!registrationTokenListMember.IsNull())
      {
        m_registrationTokenList.push_back(registrationTokenListMember.GetText());
        registrationTokenListMember = registrationTokenListMember.NextNode("member");
      }

      m_registrationTokenListHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::ListTypeRegistrationsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
