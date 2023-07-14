/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/ConfirmSubscriptionResult.h>
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

ConfirmSubscriptionResult::ConfirmSubscriptionResult()
{
}

ConfirmSubscriptionResult::ConfirmSubscriptionResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ConfirmSubscriptionResult& ConfirmSubscriptionResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ConfirmSubscriptionResult"))
  {
    resultNode = rootNode.FirstChild("ConfirmSubscriptionResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode subscriptionArnNode = resultNode.FirstChild("SubscriptionArn");
    if(!subscriptionArnNode.IsNull())
    {
      m_subscriptionArn = Aws::Utils::Xml::DecodeEscapedXmlText(subscriptionArnNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SNS::Model::ConfirmSubscriptionResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
