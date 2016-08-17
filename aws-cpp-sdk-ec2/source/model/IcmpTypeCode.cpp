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
    m_type(0),
    m_typeHasBeenSet(false),
    m_code(0),
    m_codeHasBeenSet(false)
{
}

IcmpTypeCode::IcmpTypeCode(const XmlNode& xmlNode) : 
    m_type(0),
    m_typeHasBeenSet(false),
    m_code(0),
    m_codeHasBeenSet(false)
{
  *this = xmlNode;
}

IcmpTypeCode& IcmpTypeCode::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeNode = resultNode.FirstChild("type");
    if(!typeNode.IsNull())
    {
      m_type = StringUtils::ConvertToInt32(StringUtils::Trim(typeNode.GetText().c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode codeNode = resultNode.FirstChild("code");
    if(!codeNode.IsNull())
    {
      m_code = StringUtils::ConvertToInt32(StringUtils::Trim(codeNode.GetText().c_str()).c_str());
      m_codeHasBeenSet = true;
    }
  }

  return *this;
}

void IcmpTypeCode::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << m_type << "&";
  }

  if(m_codeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Code=" << m_code << "&";
  }

}

void IcmpTypeCode::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << m_type << "&";
  }
  if(m_codeHasBeenSet)
  {
      oStream << location << ".Code=" << m_code << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
