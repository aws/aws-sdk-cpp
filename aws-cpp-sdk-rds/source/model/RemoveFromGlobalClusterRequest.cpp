/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/RemoveFromGlobalClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

RemoveFromGlobalClusterRequest::RemoveFromGlobalClusterRequest() : 
    m_globalClusterIdentifierHasBeenSet(false),
    m_dbClusterIdentifierHasBeenSet(false)
{
}

Aws::String RemoveFromGlobalClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RemoveFromGlobalCluster&";
  if(m_globalClusterIdentifierHasBeenSet)
  {
    ss << "GlobalClusterIdentifier=" << StringUtils::URLEncode(m_globalClusterIdentifier.c_str()) << "&";
  }

  if(m_dbClusterIdentifierHasBeenSet)
  {
    ss << "DbClusterIdentifier=" << StringUtils::URLEncode(m_dbClusterIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  RemoveFromGlobalClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
