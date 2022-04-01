/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyCustomDBEngineVersionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

ModifyCustomDBEngineVersionRequest::ModifyCustomDBEngineVersionRequest() : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(CustomEngineVersionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String ModifyCustomDBEngineVersionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyCustomDBEngineVersion&";
  if(m_engineHasBeenSet)
  {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
    ss << "EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
    ss << "Status=" << CustomEngineVersionStatusMapper::GetNameForCustomEngineVersionStatus(m_status) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyCustomDBEngineVersionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
