/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/DeleteMultiRegionAccessPointResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

DeleteMultiRegionAccessPointResult::DeleteMultiRegionAccessPointResult()
{
}

DeleteMultiRegionAccessPointResult::DeleteMultiRegionAccessPointResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DeleteMultiRegionAccessPointResult& DeleteMultiRegionAccessPointResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode requestTokenARNNode = resultNode.FirstChild("RequestTokenARN");
    if(!requestTokenARNNode.IsNull())
    {
      m_requestTokenARN = Aws::Utils::Xml::DecodeEscapedXmlText(requestTokenARNNode.GetText());
    }
  }

  return *this;
}
