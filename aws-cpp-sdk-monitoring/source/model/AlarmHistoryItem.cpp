/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_timestampHasBeenSet(false),
    m_historyItemType(HistoryItemType::NOT_SET),
    m_historyItemTypeHasBeenSet(false),
    m_historySummaryHasBeenSet(false),
    m_historyDataHasBeenSet(false)
{
}

AlarmHistoryItem::AlarmHistoryItem(const XmlNode& xmlNode) : 
    m_alarmNameHasBeenSet(false),
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
      m_alarmName = alarmNameNode.GetText();
      m_alarmNameHasBeenSet = true;
    }
    XmlNode timestampNode = resultNode.FirstChild("Timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = DateTime(StringUtils::Trim(timestampNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_timestampHasBeenSet = true;
    }
    XmlNode historyItemTypeNode = resultNode.FirstChild("HistoryItemType");
    if(!historyItemTypeNode.IsNull())
    {
      m_historyItemType = HistoryItemTypeMapper::GetHistoryItemTypeForName(StringUtils::Trim(historyItemTypeNode.GetText().c_str()).c_str());
      m_historyItemTypeHasBeenSet = true;
    }
    XmlNode historySummaryNode = resultNode.FirstChild("HistorySummary");
    if(!historySummaryNode.IsNull())
    {
      m_historySummary = historySummaryNode.GetText();
      m_historySummaryHasBeenSet = true;
    }
    XmlNode historyDataNode = resultNode.FirstChild("HistoryData");
    if(!historyDataNode.IsNull())
    {
      m_historyData = historyDataNode.GetText();
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

  if(m_timestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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
  if(m_timestampHasBeenSet)
  {
      oStream << location << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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
