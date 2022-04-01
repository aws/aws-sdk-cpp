/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeEndpointAccessRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DescribeEndpointAccessRequest::DescribeEndpointAccessRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_resourceOwnerHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String DescribeEndpointAccessRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeEndpointAccess&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_resourceOwnerHasBeenSet)
  {
    ss << "ResourceOwner=" << StringUtils::URLEncode(m_resourceOwner.c_str()) << "&";
  }

  if(m_endpointNameHasBeenSet)
  {
    ss << "EndpointName=" << StringUtils::URLEncode(m_endpointName.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
    ss << "VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DescribeEndpointAccessRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
