/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ListRegionalBucketsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListRegionalBucketsResult::ListRegionalBucketsResult()
{
}

ListRegionalBucketsResult::ListRegionalBucketsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListRegionalBucketsResult& ListRegionalBucketsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode regionalBucketListNode = resultNode.FirstChild("RegionalBucketList");
    if(!regionalBucketListNode.IsNull())
    {
      XmlNode regionalBucketListMember = regionalBucketListNode.FirstChild("RegionalBucket");
      while(!regionalBucketListMember.IsNull())
      {
        m_regionalBucketList.push_back(regionalBucketListMember);
        regionalBucketListMember = regionalBucketListMember.NextNode("RegionalBucket");
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
