/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ReshardingStatus.h>
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

ReshardingStatus::ReshardingStatus() : 
    m_slotMigrationHasBeenSet(false)
{
}

ReshardingStatus::ReshardingStatus(const XmlNode& xmlNode) : 
    m_slotMigrationHasBeenSet(false)
{
  *this = xmlNode;
}

ReshardingStatus& ReshardingStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode slotMigrationNode = resultNode.FirstChild("SlotMigration");
    if(!slotMigrationNode.IsNull())
    {
      m_slotMigration = slotMigrationNode;
      m_slotMigrationHasBeenSet = true;
    }
  }

  return *this;
}

void ReshardingStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_slotMigrationHasBeenSet)
  {
      Aws::StringStream slotMigrationLocationAndMemberSs;
      slotMigrationLocationAndMemberSs << location << index << locationValue << ".SlotMigration";
      m_slotMigration.OutputToStream(oStream, slotMigrationLocationAndMemberSs.str().c_str());
  }

}

void ReshardingStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_slotMigrationHasBeenSet)
  {
      Aws::String slotMigrationLocationAndMember(location);
      slotMigrationLocationAndMember += ".SlotMigration";
      m_slotMigration.OutputToStream(oStream, slotMigrationLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
