/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeEndpointAuthorizationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DescribeEndpointAuthorizationRequest::DescribeEndpointAuthorizationRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_grantee(false),
    m_granteeHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String DescribeEndpointAuthorizationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeEndpointAuthorization&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_accountHasBeenSet)
  {
    ss << "Account=" << StringUtils::URLEncode(m_account.c_str()) << "&";
  }

  if(m_granteeHasBeenSet)
  {
    ss << "Grantee=" << std::boolalpha << m_grantee << "&";
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


void  DescribeEndpointAuthorizationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
