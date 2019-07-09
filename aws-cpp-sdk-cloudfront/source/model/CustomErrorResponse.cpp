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

#include <aws/cloudfront/model/CustomErrorResponse.h>
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

CustomErrorResponse::CustomErrorResponse() : 
    m_errorCode(0),
    m_errorCodeHasBeenSet(false),
    m_responsePagePathHasBeenSet(false),
    m_responseCodeHasBeenSet(false),
    m_errorCachingMinTTL(0),
    m_errorCachingMinTTLHasBeenSet(false)
{
}

CustomErrorResponse::CustomErrorResponse(const XmlNode& xmlNode) : 
    m_errorCode(0),
    m_errorCodeHasBeenSet(false),
    m_responsePagePathHasBeenSet(false),
    m_responseCodeHasBeenSet(false),
    m_errorCachingMinTTL(0),
    m_errorCachingMinTTLHasBeenSet(false)
{
  *this = xmlNode;
}

CustomErrorResponse& CustomErrorResponse::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode errorCodeNode = resultNode.FirstChild("ErrorCode");
    if(!errorCodeNode.IsNull())
    {
      m_errorCode = StringUtils::ConvertToInt32(StringUtils::Trim(errorCodeNode.GetText().c_str()).c_str());
      m_errorCodeHasBeenSet = true;
    }
    XmlNode responsePagePathNode = resultNode.FirstChild("ResponsePagePath");
    if(!responsePagePathNode.IsNull())
    {
      m_responsePagePath = responsePagePathNode.GetText();
      m_responsePagePathHasBeenSet = true;
    }
    XmlNode responseCodeNode = resultNode.FirstChild("ResponseCode");
    if(!responseCodeNode.IsNull())
    {
      m_responseCode = responseCodeNode.GetText();
      m_responseCodeHasBeenSet = true;
    }
    XmlNode errorCachingMinTTLNode = resultNode.FirstChild("ErrorCachingMinTTL");
    if(!errorCachingMinTTLNode.IsNull())
    {
      m_errorCachingMinTTL = StringUtils::ConvertToInt64(StringUtils::Trim(errorCachingMinTTLNode.GetText().c_str()).c_str());
      m_errorCachingMinTTLHasBeenSet = true;
    }
  }

  return *this;
}

void CustomErrorResponse::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_errorCodeHasBeenSet)
  {
   XmlNode errorCodeNode = parentNode.CreateChildElement("ErrorCode");
   ss << m_errorCode;
   errorCodeNode.SetText(ss.str());
   ss.str("");
  }

  if(m_responsePagePathHasBeenSet)
  {
   XmlNode responsePagePathNode = parentNode.CreateChildElement("ResponsePagePath");
   responsePagePathNode.SetText(m_responsePagePath);
  }

  if(m_responseCodeHasBeenSet)
  {
   XmlNode responseCodeNode = parentNode.CreateChildElement("ResponseCode");
   responseCodeNode.SetText(m_responseCode);
  }

  if(m_errorCachingMinTTLHasBeenSet)
  {
   XmlNode errorCachingMinTTLNode = parentNode.CreateChildElement("ErrorCachingMinTTL");
   ss << m_errorCachingMinTTL;
   errorCachingMinTTLNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
