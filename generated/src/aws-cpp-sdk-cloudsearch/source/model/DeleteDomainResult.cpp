/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DeleteDomainResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DeleteDomainResult::DeleteDomainResult()
{
}

DeleteDomainResult::DeleteDomainResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DeleteDomainResult& DeleteDomainResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DeleteDomainResult"))
  {
    resultNode = rootNode.FirstChild("DeleteDomainResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode domainStatusNode = resultNode.FirstChild("DomainStatus");
    if(!domainStatusNode.IsNull())
    {
      m_domainStatus = domainStatusNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudSearch::Model::DeleteDomainResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
