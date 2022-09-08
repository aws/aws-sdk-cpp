/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/AlarmHistoryItem.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

AlarmHistoryItem::AlarmHistoryItem() : 
    m_alarmNameHasBeenSet(false),
    m_alarmType(AlarmType::NOT_SET),
    m_alarmTypeHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_historyItemType(HistoryItemType::NOT_SET),
    m_historyItemTypeHasBeenSet(false),
    m_historySummaryHasBeenSet(false),
    m_historyDataHasBeenSet(false)
{
}

AlarmHistoryItem::AlarmHistoryItem(const XmlNode& xmlNode) : 
    m_alarmNameHasBeenSet(false),
    m_alarmType(AlarmType::NOT_SET),
    m_alarmTypeHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_historyItemType(HistoryItemType::NOT_SET),
    m_historyItemTypeHasBeenSet(false),
    m_historySummaryHasBeenSet(false),
    m_historyDataHasBeenSet(false)
{
  *this = xmlNode;
}

AlarmHistoryItem& AlarmHistoryItem::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode alarmNameNode = resultNode.FirstChild("AlarmName");
    if(!alarmNameNode.IsNull())
    {
      m_alarmName = Aws::Utils::Xml::DecodeEscapedXmlText(alarmNameNode.GetText());
      m_alarmNameHasBeenSet = true;
    }
    XmlNode alarmTypeNode = resultNode.FirstChild("AlarmType");
    if(!alarmTypeNode.IsNull())
    {
      m_alarmType = AlarmTypeMapper::GetAlarmTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(alarmTypeNode.GetText()).c_str()).c_str());
      m_alarmTypeHasBeenSet = true;
    }
    XmlNode timestampNode = resultNode.FirstChild("Timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_timestampHasBeenSet = true;
    }
    XmlNode historyItemTypeNode = resultNode.FirstChild("HistoryItemType");
    if(!historyItemTypeNode.IsNull())
    {
      m_historyItemType = HistoryItemTypeMapper::GetHistoryItemTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(historyItemTypeNode.GetText()).c_str()).c_str());
      m_historyItemTypeHasBeenSet = true;
    }
    XmlNode historySummaryNode = resultNode.FirstChild("HistorySummary");
    if(!historySummaryNode.IsNull())
    {
      m_historySummary = Aws::Utils::Xml::DecodeEscapedXmlText(historySummaryNode.GetText());
      m_historySummaryHasBeenSet = true;
    }
    XmlNode historyDataNode = resultNode.FirstChild("HistoryData");
    if(!historyDataNode.IsNull())
    {
      m_historyData = Aws::Utils::Xml::DecodeEscapedXmlText(historyDataNode.GetText());
      m_historyDataHasBeenSet = true;
    }
  }

  return *this;
}

void AlarmHistoryItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_alarmNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  }

  if(m_alarmTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlarmType=" << AlarmTypeMapper::GetNameForAlarmType(m_alarmType) << "&";
  }

  if(m_timestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_historyItemTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".HistoryItemType=" << HistoryItemTypeMapper::GetNameForHistoryItemType(m_historyItemType) << "&";
  }

  if(m_historySummaryHasBeenSet)
  {
      oStream << location << index << locationValue << ".HistorySummary=" << StringUtils::URLEncode(m_historySummary.c_str()) << "&";
  }

  if(m_historyDataHasBeenSet)
  {
      oStream << location << index << locationValue << ".HistoryData=" << StringUtils::URLEncode(m_historyData.c_str()) << "&";
  }

}

void AlarmHistoryItem::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_alarmNameHasBeenSet)
  {
      oStream << location << ".AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  }
  if(m_alarmTypeHasBeenSet)
  {
      oStream << location << ".AlarmType=" << AlarmTypeMapper::GetNameForAlarmType(m_alarmType) << "&";
  }
  if(m_timestampHasBeenSet)
  {
      oStream << location << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_historyItemTypeHasBeenSet)
  {
      oStream << location << ".HistoryItemType=" << HistoryItemTypeMapper::GetNameForHistoryItemType(m_historyItemType) << "&";
  }
  if(m_historySummaryHasBeenSet)
  {
      oStream << location << ".HistorySummary=" << StringUtils::URLEncode(m_historySummary.c_str()) << "&";
  }
  if(m_historyDataHasBeenSet)
  {
      oStream << location << ".HistoryData=" << StringUtils::URLEncode(m_historyData.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
