/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/TypeFilters.h>
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

TypeFilters::TypeFilters() : 
    m_category(Category::NOT_SET),
    m_categoryHasBeenSet(false),
    m_publisherIdHasBeenSet(false),
    m_typeNamePrefixHasBeenSet(false)
{
}

TypeFilters::TypeFilters(const XmlNode& xmlNode) : 
    m_category(Category::NOT_SET),
    m_categoryHasBeenSet(false),
    m_publisherIdHasBeenSet(false),
    m_typeNamePrefixHasBeenSet(false)
{
  *this = xmlNode;
}

TypeFilters& TypeFilters::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode categoryNode = resultNode.FirstChild("Category");
    if(!categoryNode.IsNull())
    {
      m_category = CategoryMapper::GetCategoryForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(categoryNode.GetText()).c_str()).c_str());
      m_categoryHasBeenSet = true;
    }
    XmlNode publisherIdNode = resultNode.FirstChild("PublisherId");
    if(!publisherIdNode.IsNull())
    {
      m_publisherId = Aws::Utils::Xml::DecodeEscapedXmlText(publisherIdNode.GetText());
      m_publisherIdHasBeenSet = true;
    }
    XmlNode typeNamePrefixNode = resultNode.FirstChild("TypeNamePrefix");
    if(!typeNamePrefixNode.IsNull())
    {
      m_typeNamePrefix = Aws::Utils::Xml::DecodeEscapedXmlText(typeNamePrefixNode.GetText());
      m_typeNamePrefixHasBeenSet = true;
    }
  }

  return *this;
}

void TypeFilters::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_categoryHasBeenSet)
  {
      oStream << location << index << locationValue << ".Category=" << CategoryMapper::GetNameForCategory(m_category) << "&";
  }

  if(m_publisherIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublisherId=" << StringUtils::URLEncode(m_publisherId.c_str()) << "&";
  }

  if(m_typeNamePrefixHasBeenSet)
  {
      oStream << location << index << locationValue << ".TypeNamePrefix=" << StringUtils::URLEncode(m_typeNamePrefix.c_str()) << "&";
  }

}

void TypeFilters::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_categoryHasBeenSet)
  {
      oStream << location << ".Category=" << CategoryMapper::GetNameForCategory(m_category) << "&";
  }
  if(m_publisherIdHasBeenSet)
  {
      oStream << location << ".PublisherId=" << StringUtils::URLEncode(m_publisherId.c_str()) << "&";
  }
  if(m_typeNamePrefixHasBeenSet)
  {
      oStream << location << ".TypeNamePrefix=" << StringUtils::URLEncode(m_typeNamePrefix.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
