/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/route53/model/ListResourceRecordSetsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListResourceRecordSetsResult::ListResourceRecordSetsResult() : 
    m_isTruncated(false),
    m_nextRecordType(RRType::NOT_SET)
{
}

ListResourceRecordSetsResult::ListResourceRecordSetsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_isTruncated(false),
    m_nextRecordType(RRType::NOT_SET)
{
  *this = result;
}

ListResourceRecordSetsResult& ListResourceRecordSetsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode resourceRecordSetsNode = resultNode.FirstChild("ResourceRecordSets");
    if(!resourceRecordSetsNode.IsNull())
    {
      XmlNode resourceRecordSetsMember = resourceRecordSetsNode.FirstChild("ResourceRecordSet");
      while(!resourceRecordSetsMember.IsNull())
      {
        m_resourceRecordSets.push_back(resourceRecordSetsMember);
        resourceRecordSetsMember = resourceRecordSetsMember.NextNode("ResourceRecordSet");
      }

    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(isTruncatedNode.GetText().c_str()).c_str());
    }
    XmlNode nextRecordNameNode = resultNode.FirstChild("NextRecordName");
    if(!nextRecordNameNode.IsNull())
    {
      m_nextRecordName = nextRecordNameNode.GetText();
    }
    XmlNode nextRecordTypeNode = resultNode.FirstChild("NextRecordType");
    if(!nextRecordTypeNode.IsNull())
    {
      m_nextRecordType = RRTypeMapper::GetRRTypeForName(StringUtils::Trim(nextRecordTypeNode.GetText().c_str()).c_str());
    }
    XmlNode nextRecordIdentifierNode = resultNode.FirstChild("NextRecordIdentifier");
    if(!nextRecordIdentifierNode.IsNull())
    {
      m_nextRecordIdentifier = nextRecordIdentifierNode.GetText();
    }
    XmlNode maxItemsNode = resultNode.FirstChild("MaxItems");
    if(!maxItemsNode.IsNull())
    {
      m_maxItems = maxItemsNode.GetText();
    }
  }

  return *this;
}
