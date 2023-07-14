/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/CreateSnapshotScheduleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

CreateSnapshotScheduleRequest::CreateSnapshotScheduleRequest() : 
    m_scheduleDefinitionsHasBeenSet(false),
    m_scheduleIdentifierHasBeenSet(false),
    m_scheduleDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_nextInvocations(0),
    m_nextInvocationsHasBeenSet(false)
{
}

Aws::String CreateSnapshotScheduleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateSnapshotSchedule&";
  if(m_scheduleDefinitionsHasBeenSet)
  {
    unsigned scheduleDefinitionsCount = 1;
    for(auto& item : m_scheduleDefinitions)
    {
      ss << "ScheduleDefinitions.member." << scheduleDefinitionsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      scheduleDefinitionsCount++;
    }
  }

  if(m_scheduleIdentifierHasBeenSet)
  {
    ss << "ScheduleIdentifier=" << StringUtils::URLEncode(m_scheduleIdentifier.c_str()) << "&";
  }

  if(m_scheduleDescriptionHasBeenSet)
  {
    ss << "ScheduleDescription=" << StringUtils::URLEncode(m_scheduleDescription.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_nextInvocationsHasBeenSet)
  {
    ss << "NextInvocations=" << m_nextInvocations << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  CreateSnapshotScheduleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
