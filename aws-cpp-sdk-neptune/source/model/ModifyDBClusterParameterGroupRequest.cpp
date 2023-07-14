/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/ModifyDBClusterParameterGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils;

ModifyDBClusterParameterGroupRequest::ModifyDBClusterParameterGroupRequest() : 
    m_dBClusterParameterGroupNameHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

Aws::String ModifyDBClusterParameterGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyDBClusterParameterGroup&";
  if(m_dBClusterParameterGroupNameHasBeenSet)
  {
    ss << "DBClusterParameterGroupName=" << StringUtils::URLEncode(m_dBClusterParameterGroupName.c_str()) << "&";
  }

  if(m_parametersHasBeenSet)
  {
    unsigned parametersCount = 1;
    for(auto& item : m_parameters)
    {
      item.OutputToStream(ss, "Parameters.member.", parametersCount, "");
      parametersCount++;
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyDBClusterParameterGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
