/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
      m_errorCode = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(errorCodeNode.GetText()).c_str()).c_str());
      m_errorCodeHasBeenSet = true;
    }
    XmlNode responsePagePathNode = resultNode.FirstChild("ResponsePagePath");
    if(!responsePagePathNode.IsNull())
    {
      m_responsePagePath = Aws::Utils::Xml::DecodeEscapedXmlText(responsePagePathNode.GetText());
      m_responsePagePathHasBeenSet = true;
    }
    XmlNode responseCodeNode = resultNode.FirstChild("ResponseCode");
    if(!responseCodeNode.IsNull())
    {
      m_responseCode = Aws::Utils::Xml::DecodeEscapedXmlText(responseCodeNode.GetText());
      m_responseCodeHasBeenSet = true;
    }
    XmlNode errorCachingMinTTLNode = resultNode.FirstChild("ErrorCachingMinTTL");
    if(!errorCachingMinTTLNode.IsNull())
    {
      m_errorCachingMinTTL = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(errorCachingMinTTLNode.GetText()).c_str()).c_str());
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
