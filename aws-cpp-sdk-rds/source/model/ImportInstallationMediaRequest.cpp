/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ImportInstallationMediaRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

ImportInstallationMediaRequest::ImportInstallationMediaRequest() : 
    m_customAvailabilityZoneIdHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_engineInstallationMediaPathHasBeenSet(false),
    m_oSInstallationMediaPathHasBeenSet(false)
{
}

Aws::String ImportInstallationMediaRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ImportInstallationMedia&";
  if(m_customAvailabilityZoneIdHasBeenSet)
  {
    ss << "CustomAvailabilityZoneId=" << StringUtils::URLEncode(m_customAvailabilityZoneId.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
    ss << "EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_engineInstallationMediaPathHasBeenSet)
  {
    ss << "EngineInstallationMediaPath=" << StringUtils::URLEncode(m_engineInstallationMediaPath.c_str()) << "&";
  }

  if(m_oSInstallationMediaPathHasBeenSet)
  {
    ss << "OSInstallationMediaPath=" << StringUtils::URLEncode(m_oSInstallationMediaPath.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ImportInstallationMediaRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
