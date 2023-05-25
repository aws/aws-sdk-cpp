/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyIpamScopeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyIpamScopeRequest::ModifyIpamScopeRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_ipamScopeIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String ModifyIpamScopeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyIpamScope&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_ipamScopeIdHasBeenSet)
  {
    ss << "IpamScopeId=" << StringUtils::URLEncode(m_ipamScopeId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyIpamScopeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
