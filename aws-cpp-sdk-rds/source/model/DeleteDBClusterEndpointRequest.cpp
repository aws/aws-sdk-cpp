/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DeleteDBClusterEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DeleteDBClusterEndpointRequest::DeleteDBClusterEndpointRequest() : 
    m_dBClusterEndpointIdentifierHasBeenSet(false)
{
}

Aws::String DeleteDBClusterEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteDBClusterEndpoint&";
  if(m_dBClusterEndpointIdentifierHasBeenSet)
  {
    ss << "DBClusterEndpointIdentifier=" << StringUtils::URLEncode(m_dBClusterEndpointIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DeleteDBClusterEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
