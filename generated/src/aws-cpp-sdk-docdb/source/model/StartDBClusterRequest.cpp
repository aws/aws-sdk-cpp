/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/StartDBClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::DocDB::Model;
using namespace Aws::Utils;

StartDBClusterRequest::StartDBClusterRequest() : 
    m_dBClusterIdentifierHasBeenSet(false)
{
}

Aws::String StartDBClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=StartDBCluster&";
  if(m_dBClusterIdentifierHasBeenSet)
  {
    ss << "DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  StartDBClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
