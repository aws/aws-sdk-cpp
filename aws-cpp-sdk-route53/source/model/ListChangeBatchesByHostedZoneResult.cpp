/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/route53/model/ListChangeBatchesByHostedZoneResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListChangeBatchesByHostedZoneResult::ListChangeBatchesByHostedZoneResult() : 
    m_isTruncated(false)
{
}

ListChangeBatchesByHostedZoneResult::ListChangeBatchesByHostedZoneResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_isTruncated(false)
{
  *this = result;
}

ListChangeBatchesByHostedZoneResult& ListChangeBatchesByHostedZoneResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode maxItemsNode = resultNode.FirstChild("MaxItems");
    if(!maxItemsNode.IsNull())
    {
      m_maxItems = StringUtils::Trim(maxItemsNode.GetText().c_str());
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = StringUtils::Trim(markerNode.GetText().c_str());
    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(isTruncatedNode.GetText().c_str()).c_str());
    }
    XmlNode changeBatchRecordsNode = resultNode.FirstChild("ChangeBatchRecords");
    if(!changeBatchRecordsNode.IsNull())
    {
      XmlNode changeBatchRecordsMember = changeBatchRecordsNode.FirstChild("ChangeBatchRecord");
      while(!changeBatchRecordsMember.IsNull())
      {
        m_changeBatchRecords.push_back(changeBatchRecordsMember);
        changeBatchRecordsMember = changeBatchRecordsMember.NextNode("ChangeBatchRecord");
      }

    }
    XmlNode nextMarkerNode = resultNode.FirstChild("NextMarker");
    if(!nextMarkerNode.IsNull())
    {
      m_nextMarker = StringUtils::Trim(nextMarkerNode.GetText().c_str());
    }
  }

  return *this;
}
