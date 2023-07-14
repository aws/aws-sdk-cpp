/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/SlotMigration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

SlotMigration::SlotMigration() : 
    m_progressPercentage(0.0),
    m_progressPercentageHasBeenSet(false)
{
}

SlotMigration::SlotMigration(const XmlNode& xmlNode) : 
    m_progressPercentage(0.0),
    m_progressPercentageHasBeenSet(false)
{
  *this = xmlNode;
}

SlotMigration& SlotMigration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode progressPercentageNode = resultNode.FirstChild("ProgressPercentage");
    if(!progressPercentageNode.IsNull())
    {
      m_progressPercentage = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(progressPercentageNode.GetText()).c_str()).c_str());
      m_progressPercentageHasBeenSet = true;
    }
  }

  return *this;
}

void SlotMigration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_progressPercentageHasBeenSet)
  {
        oStream << location << index << locationValue << ".ProgressPercentage=" << StringUtils::URLEncode(m_progressPercentage) << "&";
  }

}

void SlotMigration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_progressPercentageHasBeenSet)
  {
        oStream << location << ".ProgressPercentage=" << StringUtils::URLEncode(m_progressPercentage) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
