/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeElasticGpusRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeElasticGpusRequest::DescribeElasticGpusRequest() : 
    m_elasticGpuIdsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeElasticGpusRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeElasticGpus&";
  if(m_elasticGpuIdsHasBeenSet)
  {
    unsigned elasticGpuIdsCount = 1;
    for(auto& item : m_elasticGpuIds)
    {
      ss << "ElasticGpuId." << elasticGpuIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      elasticGpuIdsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
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


void  DescribeElasticGpusRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
