/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteIpamRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteIpamRequest::DeleteIpamRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_ipamIdHasBeenSet(false),
    m_cascade(false),
    m_cascadeHasBeenSet(false)
{
}

Aws::String DeleteIpamRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteIpam&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_ipamIdHasBeenSet)
  {
    ss << "IpamId=" << StringUtils::URLEncode(m_ipamId.c_str()) << "&";
  }

  if(m_cascadeHasBeenSet)
  {
    ss << "Cascade=" << std::boolalpha << m_cascade << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteIpamRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
