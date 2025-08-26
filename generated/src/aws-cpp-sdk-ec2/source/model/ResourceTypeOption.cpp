/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ResourceTypeOption.h>
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

ResourceTypeOption::ResourceTypeOption(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ResourceTypeOption& ResourceTypeOption::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode optionNameNode = resultNode.FirstChild("OptionName");
    if(!optionNameNode.IsNull())
    {
      m_optionName = ImageReferenceOptionNameMapper::GetImageReferenceOptionNameForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(optionNameNode.GetText()).c_str()));
      m_optionNameHasBeenSet = true;
    }
    XmlNode optionValuesNode = resultNode.FirstChild("OptionValue");
    if(!optionValuesNode.IsNull())
    {
      XmlNode optionValuesMember = optionValuesNode.FirstChild("member");
      m_optionValuesHasBeenSet = !optionValuesMember.IsNull();
      while(!optionValuesMember.IsNull())
      {
        m_optionValues.push_back(optionValuesMember.GetText());
        optionValuesMember = optionValuesMember.NextNode("member");
      }

      m_optionValuesHasBeenSet = true;
    }
  }

  return *this;
}

void ResourceTypeOption::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_optionNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptionName=" << StringUtils::URLEncode(ImageReferenceOptionNameMapper::GetNameForImageReferenceOptionName(m_optionName)) << "&";
  }

  if(m_optionValuesHasBeenSet)
  {
      unsigned optionValuesIdx = 1;
      for(auto& item : m_optionValues)
      {
        oStream << location << index << locationValue << ".OptionValue." << optionValuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void ResourceTypeOption::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_optionNameHasBeenSet)
  {
      oStream << location << ".OptionName=" << StringUtils::URLEncode(ImageReferenceOptionNameMapper::GetNameForImageReferenceOptionName(m_optionName)) << "&";
  }
  if(m_optionValuesHasBeenSet)
  {
      unsigned optionValuesIdx = 1;
      for(auto& item : m_optionValues)
      {
        oStream << location << ".OptionValue." << optionValuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
