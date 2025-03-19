/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RestoreManagedPrefixListVersionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String RestoreManagedPrefixListVersionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RestoreManagedPrefixListVersion&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_prefixListIdHasBeenSet)
  {
    ss << "PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }

  if(m_previousVersionHasBeenSet)
  {
    ss << "PreviousVersion=" << m_previousVersion << "&";
  }

  if(m_currentVersionHasBeenSet)
  {
    ss << "CurrentVersion=" << m_currentVersion << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  RestoreManagedPrefixListVersionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
