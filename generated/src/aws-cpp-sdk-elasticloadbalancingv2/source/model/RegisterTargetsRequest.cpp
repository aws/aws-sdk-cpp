/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/RegisterTargetsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

RegisterTargetsRequest::RegisterTargetsRequest() : 
    m_targetGroupArnHasBeenSet(false),
    m_targetsHasBeenSet(false)
{
}

Aws::String RegisterTargetsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RegisterTargets&";
  if(m_targetGroupArnHasBeenSet)
  {
    ss << "TargetGroupArn=" << StringUtils::URLEncode(m_targetGroupArn.c_str()) << "&";
  }

  if(m_targetsHasBeenSet)
  {
    unsigned targetsCount = 1;
    for(auto& item : m_targets)
    {
      item.OutputToStream(ss, "Targets.member.", targetsCount, "");
      targetsCount++;
    }
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  RegisterTargetsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
