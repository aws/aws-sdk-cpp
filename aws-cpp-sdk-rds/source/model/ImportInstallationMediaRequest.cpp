/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
