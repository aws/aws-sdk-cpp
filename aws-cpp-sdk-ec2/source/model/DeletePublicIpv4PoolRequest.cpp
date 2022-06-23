/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeletePublicIpv4PoolRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeletePublicIpv4PoolRequest::DeletePublicIpv4PoolRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_poolIdHasBeenSet(false)
{
}

Aws::String DeletePublicIpv4PoolRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeletePublicIpv4Pool&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_poolIdHasBeenSet)
  {
    ss << "PoolId=" << StringUtils::URLEncode(m_poolId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeletePublicIpv4PoolRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
