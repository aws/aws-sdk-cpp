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

#include <aws/cloudformation/model/Export.h>
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

Export::Export() : 
    m_exportingStackIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

Export::Export(const XmlNode& xmlNode) : 
    m_exportingStackIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = xmlNode;
}

Export& Export::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode exportingStackIdNode = resultNode.FirstChild("ExportingStackId");
    if(!exportingStackIdNode.IsNull())
    {
      m_exportingStackId = exportingStackIdNode.GetText();
      m_exportingStackIdHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = nameNode.GetText();
      m_nameHasBeenSet = true;
    }
    XmlNode valueNode = resultNode.FirstChild("Value");
    if(!valueNode.IsNull())
    {
      m_value = valueNode.GetText();
      m_valueHasBeenSet = true;
    }
  }

  return *this;
}

void Export::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_exportingStackIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExportingStackId=" << StringUtils::URLEncode(m_exportingStackId.c_str()) << "&";
  }

  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_valueHasBeenSet)
  {
      oStream << location << index << locationValue << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }

}

void Export::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_exportingStackIdHasBeenSet)
  {
      oStream << location << ".ExportingStackId=" << StringUtils::URLEncode(m_exportingStackId.c_str()) << "&";
  }
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_valueHasBeenSet)
  {
      oStream << location << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
