/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/SetSecurityTokenServicePreferencesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

Aws::String SetSecurityTokenServicePreferencesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetSecurityTokenServicePreferences&";
  if(m_globalEndpointTokenVersionHasBeenSet)
  {
    ss << "GlobalEndpointTokenVersion=" << StringUtils::URLEncode(GlobalEndpointTokenVersionMapper::GetNameForGlobalEndpointTokenVersion(m_globalEndpointTokenVersion)) << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}


void  SetSecurityTokenServicePreferencesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
