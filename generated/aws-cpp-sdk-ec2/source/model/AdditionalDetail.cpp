/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AdditionalDetail.h>
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

AdditionalDetail::AdditionalDetail() : 
    m_additionalDetailTypeHasBeenSet(false),
    m_componentHasBeenSet(false)
{
}

AdditionalDetail::AdditionalDetail(const XmlNode& xmlNode) : 
    m_additionalDetailTypeHasBeenSet(false),
    m_componentHasBeenSet(false)
{
  *this = xmlNode;
}

AdditionalDetail& AdditionalDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode additionalDetailTypeNode = resultNode.FirstChild("additionalDetailType");
    if(!additionalDetailTypeNode.IsNull())
    {
      m_additionalDetailType = Aws::Utils::Xml::DecodeEscapedXmlText(additionalDetailTypeNode.GetText());
      m_additionalDetailTypeHasBeenSet = true;
    }
    XmlNode componentNode = resultNode.FirstChild("component");
    if(!componentNode.IsNull())
    {
      m_component = componentNode;
      m_componentHasBeenSet = true;
    }
  }

  return *this;
}

void AdditionalDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_additionalDetailTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AdditionalDetailType=" << StringUtils::URLEncode(m_additionalDetailType.c_str()) << "&";
  }

  if(m_componentHasBeenSet)
  {
      Aws::StringStream componentLocationAndMemberSs;
      componentLocationAndMemberSs << location << index << locationValue << ".Component";
      m_component.OutputToStream(oStream, componentLocationAndMemberSs.str().c_str());
  }

}

void AdditionalDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_additionalDetailTypeHasBeenSet)
  {
      oStream << location << ".AdditionalDetailType=" << StringUtils::URLEncode(m_additionalDetailType.c_str()) << "&";
  }
  if(m_componentHasBeenSet)
  {
      Aws::String componentLocationAndMember(location);
      componentLocationAndMember += ".Component";
      m_component.OutputToStream(oStream, componentLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
