/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/ListVerifiedEmailAddressesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::SES::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ListVerifiedEmailAddressesResult::ListVerifiedEmailAddressesResult()
{
}

ListVerifiedEmailAddressesResult::ListVerifiedEmailAddressesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListVerifiedEmailAddressesResult& ListVerifiedEmailAddressesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListVerifiedEmailAddressesResult"))
  {
    resultNode = rootNode.FirstChild("ListVerifiedEmailAddressesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode verifiedEmailAddressesNode = resultNode.FirstChild("VerifiedEmailAddresses");
    if(!verifiedEmailAddressesNode.IsNull())
    {
      XmlNode verifiedEmailAddressesMember = verifiedEmailAddressesNode.FirstChild("member");
      while(!verifiedEmailAddressesMember.IsNull())
      {
        m_verifiedEmailAddresses.push_back(verifiedEmailAddressesMember.GetText());
        verifiedEmailAddressesMember = verifiedEmailAddressesMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SES::Model::ListVerifiedEmailAddressesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
