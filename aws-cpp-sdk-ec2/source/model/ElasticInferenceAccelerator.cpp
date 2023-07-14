/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ElasticInferenceAccelerator.h>
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

ElasticInferenceAccelerator::ElasticInferenceAccelerator() : 
    m_typeHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
}

ElasticInferenceAccelerator::ElasticInferenceAccelerator(const XmlNode& xmlNode) : 
    m_typeHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
  *this = xmlNode;
}

ElasticInferenceAccelerator& ElasticInferenceAccelerator::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText());
      m_typeHasBeenSet = true;
    }
    XmlNode countNode = resultNode.FirstChild("Count");
    if(!countNode.IsNull())
    {
      m_count = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(countNode.GetText()).c_str()).c_str());
      m_countHasBeenSet = true;
    }
  }

  return *this;
}

void ElasticInferenceAccelerator::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << StringUtils::URLEncode(m_type.c_str()) << "&";
  }

  if(m_countHasBeenSet)
  {
      oStream << location << index << locationValue << ".Count=" << m_count << "&";
  }

}

void ElasticInferenceAccelerator::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << StringUtils::URLEncode(m_type.c_str()) << "&";
  }
  if(m_countHasBeenSet)
  {
      oStream << location << ".Count=" << m_count << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
