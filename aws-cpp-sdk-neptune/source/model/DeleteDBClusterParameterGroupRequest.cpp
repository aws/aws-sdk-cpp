/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/DeleteDBClusterParameterGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils;

DeleteDBClusterParameterGroupRequest::DeleteDBClusterParameterGroupRequest() : 
    m_dBClusterParameterGroupNameHasBeenSet(false)
{
}

Aws::String DeleteDBClusterParameterGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteDBClusterParameterGroup&";
  if(m_dBClusterParameterGroupNameHasBeenSet)
  {
    ss << "DBClusterParameterGroupName=" << StringUtils::URLEncode(m_dBClusterParameterGroupName.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DeleteDBClusterParameterGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
