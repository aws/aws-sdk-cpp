/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/ListPhoneNumbersOptedOutResult.h>
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

ListPhoneNumbersOptedOutResult::ListPhoneNumbersOptedOutResult()
{
}

ListPhoneNumbersOptedOutResult::ListPhoneNumbersOptedOutResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListPhoneNumbersOptedOutResult& ListPhoneNumbersOptedOutResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListPhoneNumbersOptedOutResult"))
  {
    resultNode = rootNode.FirstChild("ListPhoneNumbersOptedOutResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode phoneNumbersNode = resultNode.FirstChild("phoneNumbers");
    if(!phoneNumbersNode.IsNull())
    {
      XmlNode phoneNumbersMember = phoneNumbersNode.FirstChild("member");
      while(!phoneNumbersMember.IsNull())
      {
        m_phoneNumbers.push_back(phoneNumbersMember.GetText());
        phoneNumbersMember = phoneNumbersMember.NextNode("member");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SNS::Model::ListPhoneNumbersOptedOutResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
