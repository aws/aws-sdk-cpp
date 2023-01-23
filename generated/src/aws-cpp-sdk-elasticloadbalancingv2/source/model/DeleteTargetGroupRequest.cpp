/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DeleteTargetGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

DeleteTargetGroupRequest::DeleteTargetGroupRequest() : 
    m_targetGroupArnHasBeenSet(false)
{
}

Aws::String DeleteTargetGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteTargetGroup&";
  if(m_targetGroupArnHasBeenSet)
  {
    ss << "TargetGroupArn=" << StringUtils::URLEncode(m_targetGroupArn.c_str()) << "&";
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  DeleteTargetGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
