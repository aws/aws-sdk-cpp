/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DescribeIndexFieldsResult.h>
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

DescribeIndexFieldsResult::DescribeIndexFieldsResult()
{
}

DescribeIndexFieldsResult::DescribeIndexFieldsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeIndexFieldsResult& DescribeIndexFieldsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeIndexFieldsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeIndexFieldsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode indexFieldsNode = resultNode.FirstChild("IndexFields");
    if(!indexFieldsNode.IsNull())
    {
      XmlNode indexFieldsMember = indexFieldsNode.FirstChild("member");
      while(!indexFieldsMember.IsNull())
      {
        m_indexFields.push_back(indexFieldsMember);
        indexFieldsMember = indexFieldsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudSearch::Model::DescribeIndexFieldsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
