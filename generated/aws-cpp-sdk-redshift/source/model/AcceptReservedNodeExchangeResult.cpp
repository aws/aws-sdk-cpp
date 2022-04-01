/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/AcceptReservedNodeExchangeResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

AcceptReservedNodeExchangeResult::AcceptReservedNodeExchangeResult()
{
}

AcceptReservedNodeExchangeResult::AcceptReservedNodeExchangeResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

AcceptReservedNodeExchangeResult& AcceptReservedNodeExchangeResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AcceptReservedNodeExchangeResult"))
  {
    resultNode = rootNode.FirstChild("AcceptReservedNodeExchangeResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode exchangedReservedNodeNode = resultNode.FirstChild("ExchangedReservedNode");
    if(!exchangedReservedNodeNode.IsNull())
    {
      m_exchangedReservedNode = exchangedReservedNodeNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::AcceptReservedNodeExchangeResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
