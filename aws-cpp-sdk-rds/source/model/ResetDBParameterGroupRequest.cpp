/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ResetDBParameterGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

ResetDBParameterGroupRequest::ResetDBParameterGroupRequest() : 
    m_dBParameterGroupNameHasBeenSet(false),
    m_resetAllParameters(false),
    m_resetAllParametersHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

Aws::String ResetDBParameterGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ResetDBParameterGroup&";
  if(m_dBParameterGroupNameHasBeenSet)
  {
    ss << "DBParameterGroupName=" << StringUtils::URLEncode(m_dBParameterGroupName.c_str()) << "&";
  }

  if(m_resetAllParametersHasBeenSet)
  {
    ss << "ResetAllParameters=" << std::boolalpha << m_resetAllParameters << "&";
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


void  ResetDBParameterGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
