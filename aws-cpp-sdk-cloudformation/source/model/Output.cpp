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

#include <aws/cloudformation/model/Output.h>
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

Output::Output() : 
    m_outputKeyHasBeenSet(false),
    m_outputValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_exportNameHasBeenSet(false)
{
}

Output::Output(const XmlNode& xmlNode) : 
    m_outputKeyHasBeenSet(false),
    m_outputValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_exportNameHasBeenSet(false)
{
  *this = xmlNode;
}

Output& Output::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode outputKeyNode = resultNode.FirstChild("OutputKey");
    if(!outputKeyNode.IsNull())
    {
      m_outputKey = outputKeyNode.GetText();
      m_outputKeyHasBeenSet = true;
    }
    XmlNode outputValueNode = resultNode.FirstChild("OutputValue");
    if(!outputValueNode.IsNull())
    {
      m_outputValue = outputValueNode.GetText();
      m_outputValueHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode exportNameNode = resultNode.FirstChild("ExportName");
    if(!exportNameNode.IsNull())
    {
      m_exportName = exportNameNode.GetText();
      m_exportNameHasBeenSet = true;
    }
  }

  return *this;
}

void Output::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_outputKeyHasBeenSet)
  {
      oStream << location << index << locationValue << ".OutputKey=" << StringUtils::URLEncode(m_outputKey.c_str()) << "&";
  }

  if(m_outputValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".OutputValue=" << StringUtils::URLEncode(m_outputValue.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_exportNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExportName=" << StringUtils::URLEncode(m_exportName.c_str()) << "&";
  }

}

void Output::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_outputKeyHasBeenSet)
  {
      oStream << location << ".OutputKey=" << StringUtils::URLEncode(m_outputKey.c_str()) << "&";
  }
  if(m_outputValueHasBeenSet)
  {
      oStream << location << ".OutputValue=" << StringUtils::URLEncode(m_outputValue.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_exportNameHasBeenSet)
  {
      oStream << location << ".ExportName=" << StringUtils::URLEncode(m_exportName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
