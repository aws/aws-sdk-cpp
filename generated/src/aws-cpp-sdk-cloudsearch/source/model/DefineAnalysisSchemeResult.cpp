/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DefineAnalysisSchemeResult.h>
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

DefineAnalysisSchemeResult::DefineAnalysisSchemeResult()
{
}

DefineAnalysisSchemeResult::DefineAnalysisSchemeResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DefineAnalysisSchemeResult& DefineAnalysisSchemeResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DefineAnalysisSchemeResult"))
  {
    resultNode = rootNode.FirstChild("DefineAnalysisSchemeResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode analysisSchemeNode = resultNode.FirstChild("AnalysisScheme");
    if(!analysisSchemeNode.IsNull())
    {
      m_analysisScheme = analysisSchemeNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudSearch::Model::DefineAnalysisSchemeResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
