/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ScanFilter.h>
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

ScanFilter::ScanFilter(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ScanFilter& ScanFilter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typesNode = resultNode.FirstChild("Types");
    if(!typesNode.IsNull())
    {
      XmlNode typesMember = typesNode.FirstChild("member");
      m_typesHasBeenSet = !typesMember.IsNull();
      while(!typesMember.IsNull())
      {
        m_types.push_back(typesMember.GetText());
        typesMember = typesMember.NextNode("member");
      }

      m_typesHasBeenSet = true;
    }
  }

  return *this;
}

void ScanFilter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_typesHasBeenSet)
  {
      unsigned typesIdx = 1;
      for(auto& item : m_types)
      {
        oStream << location << index << locationValue << ".Types.member." << typesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void ScanFilter::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_typesHasBeenSet)
  {
      unsigned typesIdx = 1;
      for(auto& item : m_types)
      {
        oStream << location << ".Types.member." << typesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
