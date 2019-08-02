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

#include <aws/route53/model/GetAccountLimitResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetAccountLimitResult::GetAccountLimitResult() : 
    m_count(0)
{
}

GetAccountLimitResult::GetAccountLimitResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_count(0)
{
  *this = result;
}

GetAccountLimitResult& GetAccountLimitResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode limitNode = resultNode.FirstChild("Limit");
    if(!limitNode.IsNull())
    {
      m_limit = limitNode;
    }
    XmlNode countNode = resultNode.FirstChild("Count");
    if(!countNode.IsNull())
    {
      m_count = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(countNode.GetText()).c_str()).c_str());
    }
  }

  return *this;
}
