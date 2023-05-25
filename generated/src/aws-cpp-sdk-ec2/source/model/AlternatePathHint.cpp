/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AlternatePathHint.h>
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

AlternatePathHint::AlternatePathHint() : 
    m_componentIdHasBeenSet(false),
    m_componentArnHasBeenSet(false)
{
}

AlternatePathHint::AlternatePathHint(const XmlNode& xmlNode) : 
    m_componentIdHasBeenSet(false),
    m_componentArnHasBeenSet(false)
{
  *this = xmlNode;
}

AlternatePathHint& AlternatePathHint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode componentIdNode = resultNode.FirstChild("componentId");
    if(!componentIdNode.IsNull())
    {
      m_componentId = Aws::Utils::Xml::DecodeEscapedXmlText(componentIdNode.GetText());
      m_componentIdHasBeenSet = true;
    }
    XmlNode componentArnNode = resultNode.FirstChild("componentArn");
    if(!componentArnNode.IsNull())
    {
      m_componentArn = Aws::Utils::Xml::DecodeEscapedXmlText(componentArnNode.GetText());
      m_componentArnHasBeenSet = true;
    }
  }

  return *this;
}

void AlternatePathHint::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_componentIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ComponentId=" << StringUtils::URLEncode(m_componentId.c_str()) << "&";
  }

  if(m_componentArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".ComponentArn=" << StringUtils::URLEncode(m_componentArn.c_str()) << "&";
  }

}

void AlternatePathHint::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_componentIdHasBeenSet)
  {
      oStream << location << ".ComponentId=" << StringUtils::URLEncode(m_componentId.c_str()) << "&";
  }
  if(m_componentArnHasBeenSet)
  {
      oStream << location << ".ComponentArn=" << StringUtils::URLEncode(m_componentArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
