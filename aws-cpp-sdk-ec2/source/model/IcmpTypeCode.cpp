/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IcmpTypeCode.h>
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

IcmpTypeCode::IcmpTypeCode() : 
    m_code(0),
    m_codeHasBeenSet(false),
    m_type(0),
    m_typeHasBeenSet(false)
{
}

IcmpTypeCode::IcmpTypeCode(const XmlNode& xmlNode) : 
    m_code(0),
    m_codeHasBeenSet(false),
    m_type(0),
    m_typeHasBeenSet(false)
{
  *this = xmlNode;
}

IcmpTypeCode& IcmpTypeCode::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode codeNode = resultNode.FirstChild("code");
    if(!codeNode.IsNull())
    {
      m_code = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(codeNode.GetText()).c_str()).c_str());
      m_codeHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("type");
    if(!typeNode.IsNull())
    {
      m_type = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
      m_typeHasBeenSet = true;
    }
  }

  return *this;
}

void IcmpTypeCode::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_codeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Code=" << m_code << "&";
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << m_type << "&";
  }

}

void IcmpTypeCode::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_codeHasBeenSet)
  {
      oStream << location << ".Code=" << m_code << "&";
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << m_type << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
