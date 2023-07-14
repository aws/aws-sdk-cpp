/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ProductCode.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

ProductCode::ProductCode() : 
    m_productCodeIdHasBeenSet(false),
    m_productCodeType(ProductCodeValues::NOT_SET),
    m_productCodeTypeHasBeenSet(false)
{
}

ProductCode::ProductCode(const XmlNode& xmlNode) : 
    m_productCodeIdHasBeenSet(false),
    m_productCodeType(ProductCodeValues::NOT_SET),
    m_productCodeTypeHasBeenSet(false)
{
  *this = xmlNode;
}

ProductCode& ProductCode::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode productCodeIdNode = resultNode.FirstChild("productCode");
    if(!productCodeIdNode.IsNull())
    {
      m_productCodeId = Aws::Utils::Xml::DecodeEscapedXmlText(productCodeIdNode.GetText());
      m_productCodeIdHasBeenSet = true;
    }
    XmlNode productCodeTypeNode = resultNode.FirstChild("type");
    if(!productCodeTypeNode.IsNull())
    {
      m_productCodeType = ProductCodeValuesMapper::GetProductCodeValuesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(productCodeTypeNode.GetText()).c_str()).c_str());
      m_productCodeTypeHasBeenSet = true;
    }
  }

  return *this;
}

void ProductCode::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_productCodeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProductCodeId=" << StringUtils::URLEncode(m_productCodeId.c_str()) << "&";
  }

  if(m_productCodeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProductCodeType=" << ProductCodeValuesMapper::GetNameForProductCodeValues(m_productCodeType) << "&";
  }

}

void ProductCode::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_productCodeIdHasBeenSet)
  {
      oStream << location << ".ProductCodeId=" << StringUtils::URLEncode(m_productCodeId.c_str()) << "&";
  }
  if(m_productCodeTypeHasBeenSet)
  {
      oStream << location << ".ProductCodeType=" << ProductCodeValuesMapper::GetNameForProductCodeValues(m_productCodeType) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
