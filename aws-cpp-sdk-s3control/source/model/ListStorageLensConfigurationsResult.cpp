/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ListStorageLensConfigurationsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListStorageLensConfigurationsResult::ListStorageLensConfigurationsResult()
{
}

ListStorageLensConfigurationsResult::ListStorageLensConfigurationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListStorageLensConfigurationsResult& ListStorageLensConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
    XmlNode storageLensConfigurationListNode = resultNode.FirstChild("StorageLensConfiguration");
    if(!storageLensConfigurationListNode.IsNull())
    {
      XmlNode storageLensConfigurationMember = storageLensConfigurationListNode;
      while(!storageLensConfigurationMember.IsNull())
      {
        m_storageLensConfigurationList.push_back(storageLensConfigurationMember);
        storageLensConfigurationMember = storageLensConfigurationMember.NextNode("StorageLensConfiguration");
      }

    }
  }

  return *this;
}
