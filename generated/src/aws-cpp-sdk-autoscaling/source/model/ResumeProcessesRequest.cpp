/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/ResumeProcessesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

ResumeProcessesRequest::ResumeProcessesRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_scalingProcessesHasBeenSet(false)
{
}

Aws::String ResumeProcessesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ResumeProcesses&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_scalingProcessesHasBeenSet)
  {
    unsigned scalingProcessesCount = 1;
    for(auto& item : m_scalingProcesses)
    {
      ss << "ScalingProcesses.member." << scalingProcessesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      scalingProcessesCount++;
    }
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  ResumeProcessesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
