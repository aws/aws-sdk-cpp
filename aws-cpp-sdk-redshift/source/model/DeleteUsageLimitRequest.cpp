/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DeleteUsageLimitRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DeleteUsageLimitRequest::DeleteUsageLimitRequest() : 
    m_usageLimitIdHasBeenSet(false)
{
}

Aws::String DeleteUsageLimitRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteUsageLimit&";
  if(m_usageLimitIdHasBeenSet)
  {
    ss << "UsageLimitId=" << StringUtils::URLEncode(m_usageLimitId.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DeleteUsageLimitRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
