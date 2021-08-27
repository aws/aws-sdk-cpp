/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/GetChangeResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetChangeResult::GetChangeResult()
{
}

GetChangeResult::GetChangeResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetChangeResult& GetChangeResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode changeInfoNode = resultNode.FirstChild("ChangeInfo");
    if(!changeInfoNode.IsNull())
    {
      m_changeInfo = changeInfoNode;
    }
  }

  return *this;
}
