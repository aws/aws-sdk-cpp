/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/DescribeEventsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

DescribeEventsRequest::DescribeEventsRequest() : 
    m_applicationNameHasBeenSet(false),
    m_versionLabelHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_platformArnHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_severity(EventSeverity::NOT_SET),
    m_severityHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeEventsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeEvents&";
  if(m_applicationNameHasBeenSet)
  {
    ss << "ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }

  if(m_versionLabelHasBeenSet)
  {
    ss << "VersionLabel=" << StringUtils::URLEncode(m_versionLabel.c_str()) << "&";
  }

  if(m_templateNameHasBeenSet)
  {
    ss << "TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }

  if(m_environmentIdHasBeenSet)
  {
    ss << "EnvironmentId=" << StringUtils::URLEncode(m_environmentId.c_str()) << "&";
  }

  if(m_environmentNameHasBeenSet)
  {
    ss << "EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }

  if(m_platformArnHasBeenSet)
  {
    ss << "PlatformArn=" << StringUtils::URLEncode(m_platformArn.c_str()) << "&";
  }

  if(m_requestIdHasBeenSet)
  {
    ss << "RequestId=" << StringUtils::URLEncode(m_requestId.c_str()) << "&";
  }

  if(m_severityHasBeenSet)
  {
    ss << "Severity=" << EventSeverityMapper::GetNameForEventSeverity(m_severity) << "&";
  }

  if(m_startTimeHasBeenSet)
  {
    ss << "StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
    ss << "EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  DescribeEventsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
