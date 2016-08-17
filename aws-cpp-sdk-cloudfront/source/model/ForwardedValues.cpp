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
#include <aws/cloudfront/model/ForwardedValues.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

ForwardedValues::ForwardedValues() : 
    m_queryString(false),
    m_queryStringHasBeenSet(false),
    m_cookiesHasBeenSet(false),
    m_headersHasBeenSet(false)
{
}

ForwardedValues::ForwardedValues(const XmlNode& xmlNode) : 
    m_queryString(false),
    m_queryStringHasBeenSet(false),
    m_cookiesHasBeenSet(false),
    m_headersHasBeenSet(false)
{
  *this = xmlNode;
}

ForwardedValues& ForwardedValues::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode queryStringNode = resultNode.FirstChild("QueryString");
    if(!queryStringNode.IsNull())
    {
      m_queryString = StringUtils::ConvertToBool(StringUtils::Trim(queryStringNode.GetText().c_str()).c_str());
      m_queryStringHasBeenSet = true;
    }
    XmlNode cookiesNode = resultNode.FirstChild("Cookies");
    if(!cookiesNode.IsNull())
    {
      m_cookies = cookiesNode;
      m_cookiesHasBeenSet = true;
    }
    XmlNode headersNode = resultNode.FirstChild("Headers");
    if(!headersNode.IsNull())
    {
      m_headers = headersNode;
      m_headersHasBeenSet = true;
    }
  }

  return *this;
}

void ForwardedValues::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_queryStringHasBeenSet)
  {
   XmlNode queryStringNode = parentNode.CreateChildElement("QueryString");
  ss << m_queryString;
   queryStringNode.SetText(ss.str());
  ss.str("");
  }

  if(m_cookiesHasBeenSet)
  {
   XmlNode cookiesNode = parentNode.CreateChildElement("Cookies");
   m_cookies.AddToNode(cookiesNode);
  }

  if(m_headersHasBeenSet)
  {
   XmlNode headersNode = parentNode.CreateChildElement("Headers");
   m_headers.AddToNode(headersNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
