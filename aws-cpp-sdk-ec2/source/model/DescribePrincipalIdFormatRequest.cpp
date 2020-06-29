/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribePrincipalIdFormatRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribePrincipalIdFormatRequest::DescribePrincipalIdFormatRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribePrincipalIdFormatRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribePrincipalIdFormat&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_resourcesHasBeenSet)
  {
    unsigned resourcesCount = 1;
    for(auto& item : m_resources)
    {
      ss << "Resource." << resourcesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      resourcesCount++;
    }
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribePrincipalIdFormatRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
