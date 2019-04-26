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

#include <aws/iam/model/SetSecurityTokenServicePreferencesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

SetSecurityTokenServicePreferencesRequest::SetSecurityTokenServicePreferencesRequest() : 
    m_globalEndpointTokenVersion(GlobalEndpointTokenVersion::NOT_SET),
    m_globalEndpointTokenVersionHasBeenSet(false)
{
}

Aws::String SetSecurityTokenServicePreferencesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetSecurityTokenServicePreferences&";
  if(m_globalEndpointTokenVersionHasBeenSet)
  {
    ss << "GlobalEndpointTokenVersion=" << GlobalEndpointTokenVersionMapper::GetNameForGlobalEndpointTokenVersion(m_globalEndpointTokenVersion) << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}


void  SetSecurityTokenServicePreferencesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
