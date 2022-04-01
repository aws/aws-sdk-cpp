/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/AdjustmentType.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

AdjustmentType::AdjustmentType() : 
    m_adjustmentTypeHasBeenSet(false)
{
}

AdjustmentType::AdjustmentType(const XmlNode& xmlNode) : 
    m_adjustmentTypeHasBeenSet(false)
{
  *this = xmlNode;
}

AdjustmentType& AdjustmentType::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode adjustmentTypeNode = resultNode.FirstChild("AdjustmentType");
    if(!adjustmentTypeNode.IsNull())
    {
      m_adjustmentType = Aws::Utils::Xml::DecodeEscapedXmlText(adjustmentTypeNode.GetText());
      m_adjustmentTypeHasBeenSet = true;
    }
  }

  return *this;
}

void AdjustmentType::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_adjustmentTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AdjustmentType=" << StringUtils::URLEncode(m_adjustmentType.c_str()) << "&";
  }

}

void AdjustmentType::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_adjustmentTypeHasBeenSet)
  {
      oStream << location << ".AdjustmentType=" << StringUtils::URLEncode(m_adjustmentType.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
