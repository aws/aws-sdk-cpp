/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceState.h>
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

InstanceState::InstanceState() : 
    m_code(0),
    m_codeHasBeenSet(false),
    m_name(InstanceStateName::NOT_SET),
    m_nameHasBeenSet(false)
{
}

InstanceState::InstanceState(const XmlNode& xmlNode) : 
    m_code(0),
    m_codeHasBeenSet(false),
    m_name(InstanceStateName::NOT_SET),
    m_nameHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceState& InstanceState::operator =(const XmlNode& xmlNode)
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
    XmlNode nameNode = resultNode.FirstChild("name");
    if(!nameNode.IsNull())
    {
      m_name = InstanceStateNameMapper::GetInstanceStateNameForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText()).c_str()).c_str());
      m_nameHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceState::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_codeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Code=" << m_code << "&";
  }

  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << InstanceStateNameMapper::GetNameForInstanceStateName(m_name) << "&";
  }

}

void InstanceState::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_codeHasBeenSet)
  {
      oStream << location << ".Code=" << m_code << "&";
  }
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << InstanceStateNameMapper::GetNameForInstanceStateName(m_name) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
