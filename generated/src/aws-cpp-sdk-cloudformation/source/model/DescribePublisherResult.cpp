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

DescribePublisherResult::DescribePublisherResult() : 
    m_publisherStatus(PublisherStatus::NOT_SET),
    m_identityProvider(IdentityProvider::NOT_SET)
{
}

DescribePublisherResult::DescribePublisherResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_publisherStatus(PublisherStatus::NOT_SET),
    m_identityProvider(IdentityProvider::NOT_SET)
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
    }
    XmlNode publisherStatusNode = resultNode.FirstChild("PublisherStatus");
    if(!publisherStatusNode.IsNull())
    {
      m_publisherStatus = PublisherStatusMapper::GetPublisherStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(publisherStatusNode.GetText()).c_str()).c_str());
    }
    XmlNode identityProviderNode = resultNode.FirstChild("IdentityProvider");
    if(!identityProviderNode.IsNull())
    {
      m_identityProvider = IdentityProviderMapper::GetIdentityProviderForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(identityProviderNode.GetText()).c_str()).c_str());
    }
    XmlNode publisherProfileNode = resultNode.FirstChild("PublisherProfile");
    if(!publisherProfileNode.IsNull())
    {
      m_publisherProfile = Aws::Utils::Xml::DecodeEscapedXmlText(publisherProfileNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DescribePublisherResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
