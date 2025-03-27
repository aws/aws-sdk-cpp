/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StartResourceScanRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String StartResourceScanRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=StartResourceScan&";
  if(m_clientRequestTokenHasBeenSet)
  {
    ss << "ClientRequestToken=" << StringUtils::URLEncode(m_clientRequestToken.c_str()) << "&";
  }

  if(m_scanFiltersHasBeenSet)
  {
    if (m_scanFilters.empty())
    {
      ss << "ScanFilters=&";
    }
    else
    {
      unsigned scanFiltersCount = 1;
      for(auto& item : m_scanFilters)
      {
        item.OutputToStream(ss, "ScanFilters.member.", scanFiltersCount, "");
        scanFiltersCount++;
      }
    }
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  StartResourceScanRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
