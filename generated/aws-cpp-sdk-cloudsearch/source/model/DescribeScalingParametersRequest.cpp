/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DescribeScalingParametersRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

DescribeScalingParametersRequest::DescribeScalingParametersRequest() : 
    m_domainNameHasBeenSet(false)
{
}

Aws::String DescribeScalingParametersRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeScalingParameters&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  DescribeScalingParametersRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
