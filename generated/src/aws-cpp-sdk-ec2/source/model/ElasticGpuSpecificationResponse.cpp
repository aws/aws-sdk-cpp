/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ElasticGpuSpecificationResponse.h>
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

ElasticGpuSpecificationResponse::ElasticGpuSpecificationResponse() : 
    m_typeHasBeenSet(false)
{
}

ElasticGpuSpecificationResponse::ElasticGpuSpecificationResponse(const XmlNode& xmlNode) : 
    m_typeHasBeenSet(false)
{
  *this = xmlNode;
}

ElasticGpuSpecificationResponse& ElasticGpuSpecificationResponse::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeNode = resultNode.FirstChild("type");
    if(!typeNode.IsNull())
    {
      m_type = Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText());
      m_typeHasBeenSet = true;
    }
  }

  return *this;
}

void ElasticGpuSpecificationResponse::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << StringUtils::URLEncode(m_type.c_str()) << "&";
  }

}

void ElasticGpuSpecificationResponse::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << StringUtils::URLEncode(m_type.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
