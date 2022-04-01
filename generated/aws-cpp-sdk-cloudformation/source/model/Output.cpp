/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
      m_outputKey = Aws::Utils::Xml::DecodeEscapedXmlText(outputKeyNode.GetText());
      m_outputKeyHasBeenSet = true;
    }
    XmlNode outputValueNode = resultNode.FirstChild("OutputValue");
    if(!outputValueNode.IsNull())
    {
      m_outputValue = Aws::Utils::Xml::DecodeEscapedXmlText(outputValueNode.GetText());
      m_outputValueHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode exportNameNode = resultNode.FirstChild("ExportName");
    if(!exportNameNode.IsNull())
    {
      m_exportName = Aws::Utils::Xml::DecodeEscapedXmlText(exportNameNode.GetText());
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
