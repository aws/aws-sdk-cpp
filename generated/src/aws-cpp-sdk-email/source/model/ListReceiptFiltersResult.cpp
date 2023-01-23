/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/ListReceiptFiltersResult.h>
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

ListReceiptFiltersResult::ListReceiptFiltersResult()
{
}

ListReceiptFiltersResult::ListReceiptFiltersResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListReceiptFiltersResult& ListReceiptFiltersResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListReceiptFiltersResult"))
  {
    resultNode = rootNode.FirstChild("ListReceiptFiltersResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode filtersNode = resultNode.FirstChild("Filters");
    if(!filtersNode.IsNull())
    {
      XmlNode filtersMember = filtersNode.FirstChild("member");
      while(!filtersMember.IsNull())
      {
        m_filters.push_back(filtersMember);
        filtersMember = filtersMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SES::Model::ListReceiptFiltersResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
