/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeIamInstanceProfileAssociationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeIamInstanceProfileAssociationsRequest::DescribeIamInstanceProfileAssociationsRequest() : 
    m_associationIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeIamInstanceProfileAssociationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeIamInstanceProfileAssociations&";
  if(m_associationIdsHasBeenSet)
  {
    unsigned associationIdsCount = 1;
    for(auto& item : m_associationIds)
    {
      ss << "AssociationId." << associationIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      associationIdsCount++;
    }
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


void  DescribeIamInstanceProfileAssociationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
