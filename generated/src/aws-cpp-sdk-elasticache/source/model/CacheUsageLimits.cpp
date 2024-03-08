/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CacheUsageLimits.h>
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

CacheUsageLimits::CacheUsageLimits() : 
    m_dataStorageHasBeenSet(false),
    m_eCPUPerSecondHasBeenSet(false)
{
}

CacheUsageLimits::CacheUsageLimits(const XmlNode& xmlNode) : 
    m_dataStorageHasBeenSet(false),
    m_eCPUPerSecondHasBeenSet(false)
{
  *this = xmlNode;
}

CacheUsageLimits& CacheUsageLimits::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dataStorageNode = resultNode.FirstChild("DataStorage");
    if(!dataStorageNode.IsNull())
    {
      m_dataStorage = dataStorageNode;
      m_dataStorageHasBeenSet = true;
    }
    XmlNode eCPUPerSecondNode = resultNode.FirstChild("ECPUPerSecond");
    if(!eCPUPerSecondNode.IsNull())
    {
      m_eCPUPerSecond = eCPUPerSecondNode;
      m_eCPUPerSecondHasBeenSet = true;
    }
  }

  return *this;
}

void CacheUsageLimits::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dataStorageHasBeenSet)
  {
      Aws::StringStream dataStorageLocationAndMemberSs;
      dataStorageLocationAndMemberSs << location << index << locationValue << ".DataStorage";
      m_dataStorage.OutputToStream(oStream, dataStorageLocationAndMemberSs.str().c_str());
  }

  if(m_eCPUPerSecondHasBeenSet)
  {
      Aws::StringStream eCPUPerSecondLocationAndMemberSs;
      eCPUPerSecondLocationAndMemberSs << location << index << locationValue << ".ECPUPerSecond";
      m_eCPUPerSecond.OutputToStream(oStream, eCPUPerSecondLocationAndMemberSs.str().c_str());
  }

}

void CacheUsageLimits::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dataStorageHasBeenSet)
  {
      Aws::String dataStorageLocationAndMember(location);
      dataStorageLocationAndMember += ".DataStorage";
      m_dataStorage.OutputToStream(oStream, dataStorageLocationAndMember.c_str());
  }
  if(m_eCPUPerSecondHasBeenSet)
  {
      Aws::String eCPUPerSecondLocationAndMember(location);
      eCPUPerSecondLocationAndMember += ".ECPUPerSecond";
      m_eCPUPerSecond.OutputToStream(oStream, eCPUPerSecondLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
