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
    ss << "ShouldRespectGracePeriod=" << m_shouldRespectGracePeriod << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}

