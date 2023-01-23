/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/Builder.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

Builder::Builder() : 
    m_aRNHasBeenSet(false)
{
}

Builder::Builder(const XmlNode& xmlNode) : 
    m_aRNHasBeenSet(false)
{
  *this = xmlNode;
}

Builder& Builder::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode aRNNode = resultNode.FirstChild("ARN");
    if(!aRNNode.IsNull())
    {
      m_aRN = Aws::Utils::Xml::DecodeEscapedXmlText(aRNNode.GetText());
      m_aRNHasBeenSet = true;
    }
  }

  return *this;
}

void Builder::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_aRNHasBeenSet)
  {
      oStream << location << index << locationValue << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }

}

void Builder::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_aRNHasBeenSet)
  {
      oStream << location << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
