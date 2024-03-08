/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/WarningDetail.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

WarningDetail::WarningDetail() : 
    m_type(WarningType::NOT_SET),
    m_typeHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

WarningDetail::WarningDetail(const XmlNode& xmlNode) : 
    m_type(WarningType::NOT_SET),
    m_typeHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
  *this = xmlNode;
}

WarningDetail& WarningDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = WarningTypeMapper::GetWarningTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode propertiesNode = resultNode.FirstChild("Properties");
    if(!propertiesNode.IsNull())
    {
      XmlNode propertiesMember = propertiesNode.FirstChild("member");
      while(!propertiesMember.IsNull())
      {
        m_properties.push_back(propertiesMember);
        propertiesMember = propertiesMember.NextNode("member");
      }

      m_propertiesHasBeenSet = true;
    }
  }

  return *this;
}

void WarningDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << WarningTypeMapper::GetNameForWarningType(m_type) << "&";
  }

  if(m_propertiesHasBeenSet)
  {
      unsigned propertiesIdx = 1;
      for(auto& item : m_properties)
      {
        Aws::StringStream propertiesSs;
        propertiesSs << location << index << locationValue << ".Properties.member." << propertiesIdx++;
        item.OutputToStream(oStream, propertiesSs.str().c_str());
      }
  }

}

void WarningDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << WarningTypeMapper::GetNameForWarningType(m_type) << "&";
  }
  if(m_propertiesHasBeenSet)
  {
      unsigned propertiesIdx = 1;
      for(auto& item : m_properties)
      {
        Aws::StringStream propertiesSs;
        propertiesSs << location <<  ".Properties.member." << propertiesIdx++;
        item.OutputToStream(oStream, propertiesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
