/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/StartInstanceRefreshRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

StartInstanceRefreshRequest::StartInstanceRefreshRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_strategy(RefreshStrategy::NOT_SET),
    m_strategyHasBeenSet(false),
    m_preferencesHasBeenSet(false)
{
}

Aws::String StartInstanceRefreshRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=StartInstanceRefresh&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_strategyHasBeenSet)
  {
    ss << "Strategy=" << RefreshStrategyMapper::GetNameForRefreshStrategy(m_strategy) << "&";
  }

  if(m_preferencesHasBeenSet)
  {
    m_preferences.OutputToStream(ss, "Preferences");
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  StartInstanceRefreshRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
