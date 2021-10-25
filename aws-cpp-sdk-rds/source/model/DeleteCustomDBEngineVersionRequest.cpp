/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DeleteCustomDBEngineVersionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DeleteCustomDBEngineVersionRequest::DeleteCustomDBEngineVersionRequest() : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false)
{
}

Aws::String DeleteCustomDBEngineVersionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteCustomDBEngineVersion&";
  if(m_engineHasBeenSet)
  {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
    ss << "EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DeleteCustomDBEngineVersionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
