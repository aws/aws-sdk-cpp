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

#include <aws/cloudformation/model/StackInstanceFilter.h>
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

StackInstanceFilter::StackInstanceFilter() : 
    m_name(StackInstanceFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

StackInstanceFilter::StackInstanceFilter(const XmlNode& xmlNode) : 
    m_name(StackInstanceFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = xmlNode;
}

StackInstanceFilter& StackInstanceFilter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = StackInstanceFilterNameMapper::GetStackInstanceFilterNameForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText()).c_str()).c_str());
      m_nameHasBeenSet = true;
    }
    XmlNode valuesNode = resultNode.FirstChild("Values");
    if(!valuesNode.IsNull())
    {
      m_values = Aws::Utils::Xml::DecodeEscapedXmlText(valuesNode.GetText());
      m_valuesHasBeenSet = true;
    }
  }

  return *this;
}

void StackInstanceFilter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StackInstanceFilterNameMapper::GetNameForStackInstanceFilterName(m_name) << "&";
  }

  if(m_valuesHasBeenSet)
  {
      oStream << location << index << locationValue << ".Values=" << StringUtils::URLEncode(m_values.c_str()) << "&";
  }

}

void StackInstanceFilter::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StackInstanceFilterNameMapper::GetNameForStackInstanceFilterName(m_name) << "&";
  }
  if(m_valuesHasBeenSet)
  {
      oStream << location << ".Values=" << StringUtils::URLEncode(m_values.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
