/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/SetInstanceHealthRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

SetInstanceHealthRequest::SetInstanceHealthRequest() : 
    m_instanceIdHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_shouldRespectGracePeriod(false),
    m_shouldRespectGracePeriodHasBeenSet(false)
{
}

Aws::String SetInstanceHealthRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetInstanceHealth&";
  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_healthStatusHasBeenSet)
  {
    ss << "HealthStatus=" << StringUtils::URLEncode(m_healthStatus.c_str()) << "&";
  }

  if(m_shouldRespectGracePeriodHasBeenSet)
  {
    ss << "ShouldRespectGracePeriod=" << std::boolalpha << m_shouldRespectGracePeriod << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  SetInstanceHealthRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
