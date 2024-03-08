/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/WarningProperty.h>
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

WarningProperty::WarningProperty() : 
    m_propertyPathHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

WarningProperty::WarningProperty(const XmlNode& xmlNode) : 
    m_propertyPathHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = xmlNode;
}

WarningProperty& WarningProperty::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode propertyPathNode = resultNode.FirstChild("PropertyPath");
    if(!propertyPathNode.IsNull())
    {
      m_propertyPath = Aws::Utils::Xml::DecodeEscapedXmlText(propertyPathNode.GetText());
      m_propertyPathHasBeenSet = true;
    }
    XmlNode requiredNode = resultNode.FirstChild("Required");
    if(!requiredNode.IsNull())
    {
      m_required = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(requiredNode.GetText()).c_str()).c_str());
      m_requiredHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
  }

  return *this;
}

void WarningProperty::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_propertyPathHasBeenSet)
  {
      oStream << location << index << locationValue << ".PropertyPath=" << StringUtils::URLEncode(m_propertyPath.c_str()) << "&";
  }

  if(m_requiredHasBeenSet)
  {
      oStream << location << index << locationValue << ".Required=" << std::boolalpha << m_required << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

}

void WarningProperty::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_propertyPathHasBeenSet)
  {
      oStream << location << ".PropertyPath=" << StringUtils::URLEncode(m_propertyPath.c_str()) << "&";
  }
  if(m_requiredHasBeenSet)
  {
      oStream << location << ".Required=" << std::boolalpha << m_required << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
