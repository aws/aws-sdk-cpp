/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DefineIndexFieldResult.h>
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

DefineIndexFieldResult::DefineIndexFieldResult()
{
}

DefineIndexFieldResult::DefineIndexFieldResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DefineIndexFieldResult& DefineIndexFieldResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DefineIndexFieldResult"))
  {
    resultNode = rootNode.FirstChild("DefineIndexFieldResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode indexFieldNode = resultNode.FirstChild("IndexField");
    if(!indexFieldNode.IsNull())
    {
      m_indexField = indexFieldNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudSearch::Model::DefineIndexFieldResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
