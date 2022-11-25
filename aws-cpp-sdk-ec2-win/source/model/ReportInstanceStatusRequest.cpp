/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReportInstanceStatusRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ReportInstanceStatusRequest::ReportInstanceStatusRequest() : 
    m_descriptionHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_reasonCodesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(ReportStatusType::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String ReportInstanceStatusRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ReportInstanceStatus&";
  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_endTimeHasBeenSet)
  {
    ss << "EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_instancesHasBeenSet)
  {
    unsigned instancesCount = 1;
    for(auto& item : m_instances)
    {
      ss << "InstanceId." << instancesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      instancesCount++;
    }
  }

  if(m_reasonCodesHasBeenSet)
  {
    unsigned reasonCodesCount = 1;
    for(auto& item : m_reasonCodes)
    {
      ss << "ReasonCode." << reasonCodesCount << "="
          << StringUtils::URLEncode(ReportInstanceReasonCodesMapper::GetNameForReportInstanceReasonCodes(item).c_str()) << "&";
      reasonCodesCount++;
    }
  }

  if(m_startTimeHasBeenSet)
  {
    ss << "StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
    ss << "Status=" << ReportStatusTypeMapper::GetNameForReportStatusType(m_status) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ReportInstanceStatusRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
