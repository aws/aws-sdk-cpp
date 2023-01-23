/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/UpdateDomainEndpointOptionsResult.h>
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

UpdateDomainEndpointOptionsResult::UpdateDomainEndpointOptionsResult()
{
}

UpdateDomainEndpointOptionsResult::UpdateDomainEndpointOptionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

UpdateDomainEndpointOptionsResult& UpdateDomainEndpointOptionsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "UpdateDomainEndpointOptionsResult"))
  {
    resultNode = rootNode.FirstChild("UpdateDomainEndpointOptionsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode domainEndpointOptionsNode = resultNode.FirstChild("DomainEndpointOptions");
    if(!domainEndpointOptionsNode.IsNull())
    {
      m_domainEndpointOptions = domainEndpointOptionsNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudSearch::Model::UpdateDomainEndpointOptionsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
