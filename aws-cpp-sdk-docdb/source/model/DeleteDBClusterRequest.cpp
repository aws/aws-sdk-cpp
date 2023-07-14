/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/DeleteDBClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::DocDB::Model;
using namespace Aws::Utils;

DeleteDBClusterRequest::DeleteDBClusterRequest() : 
    m_dBClusterIdentifierHasBeenSet(false),
    m_skipFinalSnapshot(false),
    m_skipFinalSnapshotHasBeenSet(false),
    m_finalDBSnapshotIdentifierHasBeenSet(false)
{
}

Aws::String DeleteDBClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteDBCluster&";
  if(m_dBClusterIdentifierHasBeenSet)
  {
    ss << "DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_skipFinalSnapshotHasBeenSet)
  {
    ss << "SkipFinalSnapshot=" << std::boolalpha << m_skipFinalSnapshot << "&";
  }

  if(m_finalDBSnapshotIdentifierHasBeenSet)
  {
    ss << "FinalDBSnapshotIdentifier=" << StringUtils::URLEncode(m_finalDBSnapshotIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DeleteDBClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
