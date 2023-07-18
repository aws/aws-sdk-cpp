/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/StartMetricStreamsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

StartMetricStreamsRequest::StartMetricStreamsRequest() : 
    m_namesHasBeenSet(false)
{
}

Aws::String StartMetricStreamsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=StartMetricStreams&";
  if(m_namesHasBeenSet)
  {
    unsigned namesCount = 1;
    for(auto& item : m_names)
    {
      ss << "Names.member." << namesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      namesCount++;
    }
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  StartMetricStreamsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
