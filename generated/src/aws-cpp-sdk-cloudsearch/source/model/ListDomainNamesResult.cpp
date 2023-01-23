/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/ListDomainNamesResult.h>
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

ListDomainNamesResult::ListDomainNamesResult()
{
}

ListDomainNamesResult::ListDomainNamesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListDomainNamesResult& ListDomainNamesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListDomainNamesResult"))
  {
    resultNode = rootNode.FirstChild("ListDomainNamesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode domainNamesNode = resultNode.FirstChild("DomainNames");

    if(!domainNamesNode.IsNull())
    {
      XmlNode domainNamesEntry = domainNamesNode.FirstChild("entry");
      while(!domainNamesEntry.IsNull())
      {
        XmlNode keyNode = domainNamesEntry.FirstChild("key");
        XmlNode valueNode = domainNamesEntry.FirstChild("value");
        m_domainNames[keyNode.GetText()] =
            valueNode.GetText();
        domainNamesEntry = domainNamesEntry.NextNode("entry");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudSearch::Model::ListDomainNamesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
