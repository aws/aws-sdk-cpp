/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/monitoring/model/DescribeAlarmHistoryRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

DescribeAlarmHistoryRequest::DescribeAlarmHistoryRequest() : 
    m_alarmNameHasBeenSet(false),
    m_historyItemType(HistoryItemType::NOT_SET),
    m_historyItemTypeHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeAlarmHistoryRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeAlarmHistory&";
  if(m_alarmNameHasBeenSet)
  {
    ss << "AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  }

  if(m_historyItemTypeHasBeenSet)
  {
    ss << "HistoryItemType=" << HistoryItemTypeMapper::GetNameForHistoryItemType(m_historyItemType) << "&";
  }

  if(m_startDateHasBeenSet)
  {
    ss << "StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endDateHasBeenSet)
  {
    ss << "EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}

