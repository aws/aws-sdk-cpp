﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ListAccessPointsForObjectLambdaResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListAccessPointsForObjectLambdaResult::ListAccessPointsForObjectLambdaResult()
{
}

ListAccessPointsForObjectLambdaResult::ListAccessPointsForObjectLambdaResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListAccessPointsForObjectLambdaResult& ListAccessPointsForObjectLambdaResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode objectLambdaAccessPointListNode = resultNode.FirstChild("ObjectLambdaAccessPointList");
    if(!objectLambdaAccessPointListNode.IsNull())
    {
      XmlNode objectLambdaAccessPointListMember = objectLambdaAccessPointListNode.FirstChild("ObjectLambdaAccessPoint");
      while(!objectLambdaAccessPointListMember.IsNull())
      {
        m_objectLambdaAccessPointList.push_back(objectLambdaAccessPointListMember);
        objectLambdaAccessPointListMember = objectLambdaAccessPointListMember.NextNode("ObjectLambdaAccessPoint");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  return *this;
}
