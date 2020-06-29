/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VolumeDetail.h>
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

VolumeDetail::VolumeDetail() : 
    m_size(0),
    m_sizeHasBeenSet(false)
{
}

VolumeDetail::VolumeDetail(const XmlNode& xmlNode) : 
    m_size(0),
    m_sizeHasBeenSet(false)
{
  *this = xmlNode;
}

VolumeDetail& VolumeDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sizeNode = resultNode.FirstChild("size");
    if(!sizeNode.IsNull())
    {
      m_size = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sizeNode.GetText()).c_str()).c_str());
      m_sizeHasBeenSet = true;
    }
  }

  return *this;
}

void VolumeDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Size=" << m_size << "&";
  }

}

void VolumeDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sizeHasBeenSet)
  {
      oStream << location << ".Size=" << m_size << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
