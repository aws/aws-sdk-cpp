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
      m_productCodeId = productCodeIdNode.GetText();
      m_productCodeIdHasBeenSet = true;
    }
    XmlNode productCodeTypeNode = resultNode.FirstChild("type");
    if(!productCodeTypeNode.IsNull())
    {
      m_productCodeType = ProductCodeValuesMapper::GetProductCodeValuesForName(StringUtils::Trim(productCodeTypeNode.GetText().c_str()).c_str());
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
