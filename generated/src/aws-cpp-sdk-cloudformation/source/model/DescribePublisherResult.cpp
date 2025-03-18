/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribePublisherResult.h>
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

DescribePublisherResult::DescribePublisherResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribePublisherResult& DescribePublisherResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribePublisherResult"))
  {
    resultNode = rootNode.FirstChild("DescribePublisherResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode publisherIdNode = resultNode.FirstChild("PublisherId");
    if(!publisherIdNode.IsNull())
    {
      m_publisherId = Aws::Utils::Xml::DecodeEscapedXmlText(publisherIdNode.GetText());
      m_publisherIdHasBeenSet = true;
    }
    XmlNode publisherStatusNode = resultNode.FirstChild("PublisherStatus");
    if(!publisherStatusNode.IsNull())
    {
      m_publisherStatus = PublisherStatusMapper::GetPublisherStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(publisherStatusNode.GetText()).c_str()));
      m_publisherStatusHasBeenSet = true;
    }
    XmlNode identityProviderNode = resultNode.FirstChild("IdentityProvider");
    if(!identityProviderNode.IsNull())
    {
      m_identityProvider = IdentityProviderMapper::GetIdentityProviderForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(identityProviderNode.GetText()).c_str()));
      m_identityProviderHasBeenSet = true;
    }
    XmlNode publisherProfileNode = resultNode.FirstChild("PublisherProfile");
    if(!publisherProfileNode.IsNull())
    {
      m_publisherProfile = Aws::Utils::Xml::DecodeEscapedXmlText(publisherProfileNode.GetText());
      m_publisherProfileHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DescribePublisherResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
