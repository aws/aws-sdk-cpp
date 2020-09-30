/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/CreateAccessPointResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

CreateAccessPointResult::CreateAccessPointResult()
{
}

CreateAccessPointResult::CreateAccessPointResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateAccessPointResult& CreateAccessPointResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode accessPointArnNode = resultNode.FirstChild("AccessPointArn");
    if(!accessPointArnNode.IsNull())
    {
      m_accessPointArn = Aws::Utils::Xml::DecodeEscapedXmlText(accessPointArnNode.GetText());
    }
  }

  return *this;
}
