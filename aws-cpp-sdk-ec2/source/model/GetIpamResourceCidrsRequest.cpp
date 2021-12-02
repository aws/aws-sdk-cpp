/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetIpamResourceCidrsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

GetIpamResourceCidrsRequest::GetIpamResourceCidrsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_ipamScopeIdHasBeenSet(false),
    m_ipamPoolIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(IpamResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceTagHasBeenSet(false),
    m_resourceOwnerHasBeenSet(false)
{
}

Aws::String GetIpamResourceCidrsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetIpamResourceCidrs&";
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

  if(m_ipamScopeIdHasBeenSet)
  {
    ss << "IpamScopeId=" << StringUtils::URLEncode(m_ipamScopeId.c_str()) << "&";
  }

  if(m_ipamPoolIdHasBeenSet)
  {
    ss << "IpamPoolId=" << StringUtils::URLEncode(m_ipamPoolId.c_str()) << "&";
  }

  if(m_resourceIdHasBeenSet)
  {
    ss << "ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }

  if(m_resourceTypeHasBeenSet)
  {
    ss << "ResourceType=" << IpamResourceTypeMapper::GetNameForIpamResourceType(m_resourceType) << "&";
  }

  if(m_resourceTagHasBeenSet)
  {
    m_resourceTag.OutputToStream(ss, "ResourceTag");
  }

  if(m_resourceOwnerHasBeenSet)
  {
    ss << "ResourceOwner=" << StringUtils::URLEncode(m_resourceOwner.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  GetIpamResourceCidrsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
