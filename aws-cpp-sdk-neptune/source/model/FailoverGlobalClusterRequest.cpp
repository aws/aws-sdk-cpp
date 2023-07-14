/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/FailoverGlobalClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils;

FailoverGlobalClusterRequest::FailoverGlobalClusterRequest() : 
    m_globalClusterIdentifierHasBeenSet(false),
    m_targetDbClusterIdentifierHasBeenSet(false)
{
}

Aws::String FailoverGlobalClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=FailoverGlobalCluster&";
  if(m_globalClusterIdentifierHasBeenSet)
  {
    ss << "GlobalClusterIdentifier=" << StringUtils::URLEncode(m_globalClusterIdentifier.c_str()) << "&";
  }

  if(m_targetDbClusterIdentifierHasBeenSet)
  {
    ss << "TargetDbClusterIdentifier=" << StringUtils::URLEncode(m_targetDbClusterIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  FailoverGlobalClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
