/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sdb/model/TooManyRequestedAttributes.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SimpleDB
{
namespace Model
{

TooManyRequestedAttributes::TooManyRequestedAttributes() : 
    m_boxUsage(0.0),
    m_boxUsageHasBeenSet(false)
{
}

TooManyRequestedAttributes::TooManyRequestedAttributes(const XmlNode& xmlNode) : 
    m_boxUsage(0.0),
    m_boxUsageHasBeenSet(false)
{
  *this = xmlNode;
}

TooManyRequestedAttributes& TooManyRequestedAttributes::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode boxUsageNode = resultNode.FirstChild("BoxUsage");
    if(!boxUsageNode.IsNull())
    {
      m_boxUsage = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(boxUsageNode.GetText()).c_str()).c_str());
      m_boxUsageHasBeenSet = true;
    }
  }

  return *this;
}

void TooManyRequestedAttributes::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_boxUsageHasBeenSet)
  {
      oStream << location << index << locationValue << ".BoxUsage=" << m_boxUsage << "&";
  }

}

void TooManyRequestedAttributes::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_boxUsageHasBeenSet)
  {
      oStream << location << ".BoxUsage=" << m_boxUsage << "&";
  }
}

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
