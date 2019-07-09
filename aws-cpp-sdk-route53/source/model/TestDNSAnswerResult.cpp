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

#include <aws/route53/model/TestDNSAnswerResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

TestDNSAnswerResult::TestDNSAnswerResult() : 
    m_recordType(RRType::NOT_SET)
{
}

TestDNSAnswerResult::TestDNSAnswerResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_recordType(RRType::NOT_SET)
{
  *this = result;
}

TestDNSAnswerResult& TestDNSAnswerResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode nameserverNode = resultNode.FirstChild("Nameserver");
    if(!nameserverNode.IsNull())
    {
      m_nameserver = nameserverNode.GetText();
    }
    XmlNode recordNameNode = resultNode.FirstChild("RecordName");
    if(!recordNameNode.IsNull())
    {
      m_recordName = recordNameNode.GetText();
    }
    XmlNode recordTypeNode = resultNode.FirstChild("RecordType");
    if(!recordTypeNode.IsNull())
    {
      m_recordType = RRTypeMapper::GetRRTypeForName(StringUtils::Trim(recordTypeNode.GetText().c_str()).c_str());
    }
    XmlNode recordDataNode = resultNode.FirstChild("RecordData");
    if(!recordDataNode.IsNull())
    {
      XmlNode recordDataMember = recordDataNode.FirstChild("RecordDataEntry");
      while(!recordDataMember.IsNull())
      {
        m_recordData.push_back(recordDataMember.GetText());
        recordDataMember = recordDataMember.NextNode("RecordDataEntry");
      }

    }
    XmlNode responseCodeNode = resultNode.FirstChild("ResponseCode");
    if(!responseCodeNode.IsNull())
    {
      m_responseCode = responseCodeNode.GetText();
    }
    XmlNode protocolNode = resultNode.FirstChild("Protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = protocolNode.GetText();
    }
  }

  return *this;
}
