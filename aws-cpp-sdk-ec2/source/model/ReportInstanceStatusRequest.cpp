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
#include <aws/ec2/model/ReportInstanceStatusRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ReportInstanceStatusRequest::ReportInstanceStatusRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_status(ReportStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_reasonCodesHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String ReportInstanceStatusRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ReportInstanceStatus&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
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

  if(m_statusHasBeenSet)
  {
    ss << "Status=" << ReportStatusTypeMapper::GetNameForReportStatusType(m_status) << "&";
  }

  if(m_startTimeHasBeenSet)
  {
    ss << "StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
    ss << "EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

