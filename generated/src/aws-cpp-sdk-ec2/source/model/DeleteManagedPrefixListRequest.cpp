/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteManagedPrefixListRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteManagedPrefixListRequest::DeleteManagedPrefixListRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_prefixListIdHasBeenSet(false)
{
}

Aws::String DeleteManagedPrefixListRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteManagedPrefixList&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_prefixListIdHasBeenSet)
  {
    ss << "PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteManagedPrefixListRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
