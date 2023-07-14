﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/CreateAccessPointForObjectLambdaResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

CreateAccessPointForObjectLambdaResult::CreateAccessPointForObjectLambdaResult()
{
}

CreateAccessPointForObjectLambdaResult::CreateAccessPointForObjectLambdaResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateAccessPointForObjectLambdaResult& CreateAccessPointForObjectLambdaResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode objectLambdaAccessPointArnNode = resultNode.FirstChild("ObjectLambdaAccessPointArn");
    if(!objectLambdaAccessPointArnNode.IsNull())
    {
      m_objectLambdaAccessPointArn = Aws::Utils::Xml::DecodeEscapedXmlText(objectLambdaAccessPointArnNode.GetText());
    }
  }

  return *this;
}
