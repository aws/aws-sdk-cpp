/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteTrafficMirrorFilterRuleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteTrafficMirrorFilterRuleRequest::DeleteTrafficMirrorFilterRuleRequest() : 
    m_trafficMirrorFilterRuleIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DeleteTrafficMirrorFilterRuleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteTrafficMirrorFilterRule&";
  if(m_trafficMirrorFilterRuleIdHasBeenSet)
  {
    ss << "TrafficMirrorFilterRuleId=" << StringUtils::URLEncode(m_trafficMirrorFilterRuleId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteTrafficMirrorFilterRuleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
