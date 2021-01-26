/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/FailoverDBClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

FailoverDBClusterRequest::FailoverDBClusterRequest() : 
    m_dBClusterIdentifierHasBeenSet(false),
    m_targetDBInstanceIdentifierHasBeenSet(false)
{
}

Aws::String FailoverDBClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=FailoverDBCluster&";
  if(m_dBClusterIdentifierHasBeenSet)
  {
    ss << "DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_targetDBInstanceIdentifierHasBeenSet)
  {
    ss << "TargetDBInstanceIdentifier=" << StringUtils::URLEncode(m_targetDBInstanceIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  FailoverDBClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
