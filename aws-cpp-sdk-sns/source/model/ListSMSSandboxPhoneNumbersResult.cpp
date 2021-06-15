/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/ListSMSSandboxPhoneNumbersResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::SNS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ListSMSSandboxPhoneNumbersResult::ListSMSSandboxPhoneNumbersResult()
{
}

ListSMSSandboxPhoneNumbersResult::ListSMSSandboxPhoneNumbersResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListSMSSandboxPhoneNumbersResult& ListSMSSandboxPhoneNumbersResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListSMSSandboxPhoneNumbersResult"))
  {
    resultNode = rootNode.FirstChild("ListSMSSandboxPhoneNumbersResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode phoneNumbersNode = resultNode.FirstChild("PhoneNumbers");
    if(!phoneNumbersNode.IsNull())
    {
      XmlNode phoneNumbersMember = phoneNumbersNode.FirstChild("member");
      while(!phoneNumbersMember.IsNull())
      {
        m_phoneNumbers.push_back(phoneNumbersMember);
        phoneNumbersMember = phoneNumbersMember.NextNode("member");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SNS::Model::ListSMSSandboxPhoneNumbersResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
