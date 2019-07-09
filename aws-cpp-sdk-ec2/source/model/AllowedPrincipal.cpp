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

#include <aws/ec2/model/AllowedPrincipal.h>
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

AllowedPrincipal::AllowedPrincipal() : 
    m_principalType(PrincipalType::NOT_SET),
    m_principalTypeHasBeenSet(false),
    m_principalHasBeenSet(false)
{
}

AllowedPrincipal::AllowedPrincipal(const XmlNode& xmlNode) : 
    m_principalType(PrincipalType::NOT_SET),
    m_principalTypeHasBeenSet(false),
    m_principalHasBeenSet(false)
{
  *this = xmlNode;
}

AllowedPrincipal& AllowedPrincipal::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode principalTypeNode = resultNode.FirstChild("principalType");
    if(!principalTypeNode.IsNull())
    {
      m_principalType = PrincipalTypeMapper::GetPrincipalTypeForName(StringUtils::Trim(principalTypeNode.GetText().c_str()).c_str());
      m_principalTypeHasBeenSet = true;
    }
    XmlNode principalNode = resultNode.FirstChild("principal");
    if(!principalNode.IsNull())
    {
      m_principal = principalNode.GetText();
      m_principalHasBeenSet = true;
    }
  }

  return *this;
}

void AllowedPrincipal::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_principalTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrincipalType=" << PrincipalTypeMapper::GetNameForPrincipalType(m_principalType) << "&";
  }

  if(m_principalHasBeenSet)
  {
      oStream << location << index << locationValue << ".Principal=" << StringUtils::URLEncode(m_principal.c_str()) << "&";
  }

}

void AllowedPrincipal::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_principalTypeHasBeenSet)
  {
      oStream << location << ".PrincipalType=" << PrincipalTypeMapper::GetNameForPrincipalType(m_principalType) << "&";
  }
  if(m_principalHasBeenSet)
  {
      oStream << location << ".Principal=" << StringUtils::URLEncode(m_principal.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
