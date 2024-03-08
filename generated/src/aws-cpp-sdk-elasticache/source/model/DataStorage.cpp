/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DataStorage.h>
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

DataStorage::DataStorage() : 
    m_maximum(0),
    m_maximumHasBeenSet(false),
    m_unit(DataStorageUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
}

DataStorage::DataStorage(const XmlNode& xmlNode) : 
    m_maximum(0),
    m_maximumHasBeenSet(false),
    m_unit(DataStorageUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
  *this = xmlNode;
}

DataStorage& DataStorage::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode maximumNode = resultNode.FirstChild("Maximum");
    if(!maximumNode.IsNull())
    {
      m_maximum = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumNode.GetText()).c_str()).c_str());
      m_maximumHasBeenSet = true;
    }
    XmlNode unitNode = resultNode.FirstChild("Unit");
    if(!unitNode.IsNull())
    {
      m_unit = DataStorageUnitMapper::GetDataStorageUnitForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(unitNode.GetText()).c_str()).c_str());
      m_unitHasBeenSet = true;
    }
  }

  return *this;
}

void DataStorage::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_maximumHasBeenSet)
  {
      oStream << location << index << locationValue << ".Maximum=" << m_maximum << "&";
  }

  if(m_unitHasBeenSet)
  {
      oStream << location << index << locationValue << ".Unit=" << DataStorageUnitMapper::GetNameForDataStorageUnit(m_unit) << "&";
  }

}

void DataStorage::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_maximumHasBeenSet)
  {
      oStream << location << ".Maximum=" << m_maximum << "&";
  }
  if(m_unitHasBeenSet)
  {
      oStream << location << ".Unit=" << DataStorageUnitMapper::GetNameForDataStorageUnit(m_unit) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
