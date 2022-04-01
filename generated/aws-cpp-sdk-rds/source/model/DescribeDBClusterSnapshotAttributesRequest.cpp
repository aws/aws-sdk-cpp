/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBClusterSnapshotAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DescribeDBClusterSnapshotAttributesRequest::DescribeDBClusterSnapshotAttributesRequest() : 
    m_dBClusterSnapshotIdentifierHasBeenSet(false)
{
}

Aws::String DescribeDBClusterSnapshotAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeDBClusterSnapshotAttributes&";
  if(m_dBClusterSnapshotIdentifierHasBeenSet)
  {
    ss << "DBClusterSnapshotIdentifier=" << StringUtils::URLEncode(m_dBClusterSnapshotIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DescribeDBClusterSnapshotAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
